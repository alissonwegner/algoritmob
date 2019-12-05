/* este codigo demonstra o uso
 de ftell para saber o tamanho do arquivo */
##include <stdio.h>
##include <stdlib.h>
int tamarq(FILE *fp){
  int inicial, tamanho;
  inicial = ftell(fp);
  fseek(fp, 0, SEEK_END);
  tamanho = ftell(fp);
  fseek(fp, inicial,SEEK_SET);
  return tamanho;
}
main(){
  FILE *arq;
  char s;
  arq = fopen("teste.txt", "r+"); //para abrir
  printf("%d \n", tamarq(arq));
  s = getc(arq);
  printf("%sc", s);// mostra o primeiro termo
}
