// https://www.urionlinejudge.com.br/judge/pt/problems/view/1195

#include <bits/stdc++.h>
using namespace std;
typedef struct t_no No;
typedef No *p_arvore;
No *cria_no(int k);
p_arvore insere(p_arvore r, No *novo);
int busca(p_arvore r, int k);
p_arvore remove_por_chave(p_arvore r, int k);
int altura(p_arvore r);
void print_arvore(p_arvore r);
void libera_arvore(p_arvore r);

struct t_no
{
    int chave;
    struct t_no *esq;
    struct t_no *dir;
};
vector<int> pre,in,post;

p_arvore insere(p_arvore r, No *novo)
{
    if (r == NULL)
        return novo;
    if (r->chave > novo->chave)
        r->esq = insere(r->esq, novo);
    else
        r->dir = insere(r->dir, novo);
    return r;
}

No *cria_no(int k)
{
    No *novo = (No*)malloc(sizeof(No));
    novo->chave = k;
    novo->esq = novo->dir = NULL;
    return novo;
}

int altura(p_arvore r)
{
    if (r == NULL)
        return -1;
    else
    {
        int he = altura(r->esq);
        int hd = altura(r->dir);
        if (he < hd)
            return hd + 1;
        else
            return he + 1;
    }
}

void ppre(p_arvore r)
{
    if (r == NULL)
        return;
    pre.push_back(r->chave);
    ppre(r->esq);
    ppre(r->dir);
}

void pin(p_arvore r)
{
    if (r == NULL)
        return;
    pin(r->esq);
    in.push_back(r->chave);
    pin(r->dir);
}
void ppost(p_arvore r)
{
    if (r == NULL)
        return;
    ppost(r->esq);
    ppost(r->dir);
    post.push_back(r->chave);
}

void libera_arvore(p_arvore r)
{
    if (r == NULL)
        return;
    libera_arvore(r->esq);
    libera_arvore(r->dir);
    free(r);
}

int main()
{
    int a,b,c;
    cin >>a;
    for (int i  = 0 ; i < a;i++){
        cin >>b;
         p_arvore raiz = NULL;
         in.clear();
         post.clear();
         pre.clear();
        for (int j  = 0 ; j < b;j++){
            cin >>c;
            raiz = insere(raiz, cria_no(c));
        }
        ppre(raiz);
        pin(raiz);
        ppost(raiz);
        printf("Case %d:\nPre.: ", i+1);
        for (int j  = 0 ; j < b;j++){
            if (j==b-1)
                cout << pre[j]<<endl;
            else
                 cout << pre[j]<<" ";
        }
        printf("In..: ");
        for (int j  = 0 ; j < b;j++){
            if (j==b-1)
                cout << in[j]<<endl;
            else
                 cout << in[j]<<" ";
        }
        printf("Post: ");
        for (int j  = 0 ; j < b;j++){
            if (j==b-1)
                cout << post[j]<<endl;
            else
                 cout << post[j]<<" ";
        }
    cout << endl;
        libera_arvore(raiz);
    }
}