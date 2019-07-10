// https://www.urionlinejudge.com.br/judge/pt/problems/view/1466

#include <bits/stdc++.h>
using namespace std;

typedef struct t_no No;
typedef No *p_arvore;

struct t_no {
    int chave;
    struct t_no *esq;
    struct t_no *dir;
};

p_arvore insere(p_arvore r, No *novo) {
    if (r == NULL) return novo;
    if (r->chave > novo->chave)
        r->esq = insere(r->esq, novo);
    else
        r->dir = insere(r->dir, novo);
    return r;
}

p_arvore cria_no(int k) {
    No *novo = (No*)malloc(sizeof(No));
    novo->chave = k;
    novo->esq = novo->dir = NULL;
    return novo;
}

void bfs(p_arvore r) {
    queue<p_arvore> q;
    q.push(r);
    while (!q.empty()){
        p_arvore x=q.front();
        q.pop();
        if (q.size() ==0 && x->esq == NULL && x->dir == NULL)
            printf("%d", x->chave);
        else
            printf("%d ", x->chave);

        if (x->esq != NULL) q.push(x->esq);
        if (x->dir != NULL) q.push(x->dir);
    }
}

void libera_arvore(p_arvore r) {
    if (r == NULL) return;
    libera_arvore(r->esq);
    libera_arvore(r->dir);
    free(r);
}

int main() {
    int a,b,c;
    cin >>a;
    for (int i = 0 ; i < a;i++){
        cin >>b;
        p_arvore raiz = NULL;
        for (int j = 0 ; j < b ; j++){
            cin >>c;
            raiz=insere(raiz,cria_no(c));
        }
        printf("Case %d:\n", i+1);
        bfs(raiz);
        printf("\n\n");
        libera_arvore(raiz);
    }
}