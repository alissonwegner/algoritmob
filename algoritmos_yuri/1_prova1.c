#include<stdio.h>
int func (int *y, int *z){
  int *x, t;
// cuidado quando altera valores de um na função ta alterando na função do valor na main
// cuidado quando aponta paro o mesmo local
  t = *z;
  x = y;
// exemplo x ta apontando para o mesmo local que y que é x da main
  y = z;
  z = x;
  *y = *y - *z;//o valor de y vai ser o valor de y  - valor de z

  *z = *z - *y; // z vai ser valor de z menos de y
  return t - (*x + *z);
}
main(){
  int x = 5, y = 7, z;
  printf("o valor é y %d\n", y);
  printf("o valor é x %d\n", x);
  printf("\n\n");
  printf("\n\n");

  z = func(&x, &y);
  printf("o valor é %d", y + z);
  printf("\n\n");

}
