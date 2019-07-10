// https://www.urionlinejudge.com.br/judge/pt/problems/view/1982

#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x, y;
	int operator%(Point o) {
		return (x - o.x) * (x - o.x) + (y - o.y) * (y - o.y);
	}
};

// ponto mais abaixo-esquerda de referência global
vector<Point> points;

// Verifica se os vetores PQ e QR representam uma orientação colinear (0), horária (1) ou antihorária (2)
int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
	if (val == 0)
		return 0;
	return (val > 0) ? 1 : 2;
}

// Usado para ordenar os pontos em relação ao angulo polar formado partindo de p0.
// A prioridade primária de ordenação é o ponto colinear à p0, caso ambos sejam, define o mais perto de p0 como o mais prioritário; seguido pela formação de uma orientação antihoraria e depois de uma orientação horária
int compare(const void *vp1, const void *vp2)
{
	Point *p1 = (Point *)vp1, *p2 = (Point *)vp2;
	int o = orientation(points[0], *p1, *p2);

	if (o == 0)
		return (points[0] % *p2 >= points[0] % *p1) ? -1 : 1;
	return (o == 2) ? -1 : 1;
}

// Retorna o conjunto dos pontos que formam o convex hull
vector<Point> convexHull()
{
	int n = points.size(), min = 0;
	vector<Point> ans;

	// Encontra o ponto mais abaixo-esquerda e o define como p0
	for (int i = 1; i < n; i++)
		if (points[i].y < points[min].y || (points[i].y == points[min].y && points[i].x < points[min].x))
			min = i;
	swap(points[0], points[min]);

	// Ordena os pontos de acordo com a sua orientação polar
	qsort(&points[1], n - 1, sizeof(Point), compare);

	// Remove todos os pontos colineares ao pontos p0, com excessão do que estiver mais longe
	int m = 1;
	for (int i = 1; i < n; i++)
	{
		while (i < n - 1 && orientation(points[0], points[i], points[i + 1]) == 0)
			i++;
		points[m] = points[i];
		m++;
	}

	// Caso não houver, no mínimo, 3 pontos, então Convex Hull é impossível
	if (m < 3)
		return ans;

	// Remove todos os pontos que não formam um ângulo de orientação anti-horária com os trios analisados
	for (int i = 0; i < m; i++)
	{
		while (i > 2 && orientation(ans[ans.size() - 2], ans.back(), points[i]) != 2)
			ans.pop_back();
		ans.push_back(points[i]);
	}
	return ans;
}

// Retorna o perimetro do contorno dos pontos
double perimeter(vector<Point> points)
{
	double ans = 0;
	for (int i = 0; i < points.size() - 1; i++)
		ans += sqrt(points[i] % points[i + 1]);
	return ans += sqrt(points[points.size() - 1] % points[0]);
}
int main()
{
	while (true)
	{
		int a, b, c;
		cin >> a;
		if (a == 0)
			break;
		points.resize(a);
		for (int i = 0; i < a; i++)
		{
			cin >> b >> c;
			points[i].x = b;
			points[i].y = c;
		}
		printf("Tera que comprar uma fita de tamanho %.2lf.\n", perimeter(convexHull()));
	}
	return 0;
}