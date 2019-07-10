// https://www.urionlinejudge.com.br/judge/pt/problems/view/1441

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,m;
	vector <long long int> b;
	while (true)
    {
        cin >>a;
        int i =1;
        m=a;
        b.clear();
        if (a==0)break;
        b.push_back(a);
        while (b[b.size()-1] !=1)
        {
            long long int t;
            if (b[i-1] & 1)
                t=3 * b[i-1] +1;
            else
                t= b[i-1] * 0.5;
            b.push_back(t);
            if (t > m )m=t;
            i++;
        }

        cout << m << endl;
    }
	return 0;
}
