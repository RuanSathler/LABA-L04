#include <stdio.h>
#include <stdlib.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int anterior, atual, cont;

  anterior = LerInt();

  for(cont = 1; cont<3; cont++){
    atual = LerInt();
    printf("%d ", abs(atual-anterior));
    anterior = atual;
  }
  
  return 0;  
}
