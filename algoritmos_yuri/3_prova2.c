#include<stdio.h>
#include<stdlib.h>
int funcao (int str, int d){
  int i,n, menor;
  int str2[5];
  menor = str[0];
  for (n = 0; n < 5; n++) {
   if(str[n] < menor){
    menor = str[n];
   }
 }
 i=menor-d;
   for(n = 0;n<5;n++){
     str2[n]=str[n]+i;
  }
  return str2;
}
main(){
  int d;
  int str[5];
  int str2[5];
printf("informe um valor inteiro\n");
scanf("%d", &d);

for(i=0; i<5; i++){
printf("\n digite o valor:");
scanf("%d", str[i]);
}
str2 = funcao (str, d);
for(i=0; i<5; i++) printf("%d ", str2[i]);
}
