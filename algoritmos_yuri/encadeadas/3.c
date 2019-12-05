//funçao inserir no inicio
struct elemento *inseririnicio(int v, struct elemento *lista)
{
  struct elemento *aux;
  aux = (struct elemento *) malloc(sizeof(struct elemento));
  aux->valor = v;
  aux->prox = lista;
  return aux;
}


// função para exibir a lista
void exibir(struct elemento *lista){
  while(lista){
    printf("%d", lista ->valor);
    lista = lista->prox;
  }
}
