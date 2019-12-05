// este programa sobrescreve no teste2
// caso exita teste2
//ate que seja digitado '#'

##include <stdio.h>
##include <stdlib.h>
int main() {
  FILE *fp;
  char c;
  if((fp = fopen("teste2.txt","w")) == NULL){
    puts("erro ao abrir o arquivo");
    exit(1);

  }
  c = getc(stdin); /*atenção! estou usando função de
  leitura de arquivo, para ler do teclado(nao precisa ENTER) */
  while (c!='#') {//para sair digite #
    putc(c, fp);
  }
  fcouse(fp);
