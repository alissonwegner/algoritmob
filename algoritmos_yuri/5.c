/*  */
##include <stdio.h>
##include <stdlib.h>
struct dados{
  char str[40];
  int i;
  float f;
};
main (){
  FILE *fp;
  struct dados s;
  int j;
  if((fp = fopen("teste.txt","w")) == NULL){
    puts("erro ao abrir o arquivo");
    exit(1);
  }
  for(j = 3; j; j--){
    puts("Digite ma palavra:");
    scanf("%s\n", s.str);
    puts("Digite um numero inteiro:");
    scanf("%d\n", s.i);
    puts("Digite um numero real:");
    scanf("%s\n", s.f);
fprintf(fp, "%s %d %f\n", s.str, s.i. s.f);
}
fclouse(fp);
}
