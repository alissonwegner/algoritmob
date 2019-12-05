#include<stdio.h>

int func(int n1, int n2) {
  if (n1 > n2)
    return n1;
  else
    return n2;  /* fim da primeira comparacao */
  }

main () {
  int n1, n2, m1, m2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &m1);
  scanf("%d", &m2);
  printf("Maior: %d", func(func(n1, n2), func(m1, m2));
  }
