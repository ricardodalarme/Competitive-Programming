// https://www.urionlinejudge.com.br/judge/pt/problems/view/1023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n=0;
    while (true)
    {
        n++;
        cin >>a;
        if (a==0)
            break;
        printf("Cidade# %d:\n",n);
        int coun=0, pess=0;
        vector<pair <int, int> > ve,vs;
        for (int i=0 ; i < a ; i++)
        {
            cin >>b>>c;
            ve.push_back(make_pair(c,b));
            ve[i].first =floor( ve[i].first/ ve[i].second);
            coun +=c;
            pess+=b;
        }
        sort(ve.begin(), ve.end());
        vs=ve;
        for (int i=0 ; i < a ; i++)
        {
            int aa=i-1;

            if (aa>=0)
            {
                while (ve[aa].first==-1 )
                {
                    if (aa-1 <0)
                        break;
                    aa-=1;
                }

                if (ve[i].first == ve[aa].first)
                {
                    ve[i].second+=ve[aa].second;
                    ve[aa].first =-1;
                }
            }
        }
        for (int i=0 ; i < a ; i++)
            if (ve[i].first!=-1)
                printf("%d-%d ", ve[i].second, ve[i].first);
        int temp= ((coun*1.0) /pess) * 100;
        printf("\nConsumo medio: %.2lf m3.\n", temp /100.0);
    }
    return 0;
}
