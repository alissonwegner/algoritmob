#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  int m, n, m2, n2, r;
  srand((unsigned) time(NULL));
  printf("Digite o valor de m");
  scanf("%d", &m);
  printf("Digite o valor de n");
  scanf("%d ", &n);


    if(m>n){
      r = m;
      m = n;
      n = r;
    }
   m2 = m / 2 +1;// se nao perde um valor
   n2 = n / 2 +1;
   r = rand() % (m2 + n2);
  if (r < n2){
    r = r + n/2;
  }
  else{
    r = (r - n2);
  }
  printf("%d\n", r);


//  for(i=rand()%n+n2);
//  for(i=rand()%m+m2);



}
