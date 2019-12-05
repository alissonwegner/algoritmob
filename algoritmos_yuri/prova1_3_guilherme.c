/* exercicio 3 da prova */
#include<stdio.h>

#define TAM 5000

void func (int *v, int d) {
  int menor, *i, *f;
  f = v + TAM;
  menor = *v;
  for (i = v+1; i < f; i++) {
    if (menor > *i)
      menor = *i;
    }
  menor = d - menor;
  for ( ; v < f; v++) {
    *v += menor;
    }
  }

main() {
  int vet[TAM], i, d;
  printf("Digite %d valores para o vetor: ", TAM);
  for (i = 0; i < TAM; i++) {
    scanf("%d", &vet[i]);
    }
  printf("Digite d: ");
  scanf("%d", &d);
  func(vet, d);
  for (i = 0; i < TAM; i++) {
    printf("%d ", vet[i]);
    }
  }
