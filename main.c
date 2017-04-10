#include <stdio.h>
#include <stdlib.h>
#include "lib_liste_concat.c"

int main(int argc, char const *argv[]) {

 int n;
 struct lista_doppiamente_puntata *top=NULL;

printf("Inserisci elementi lasciando uno spazio ad ognuno di essi, termina con un carattere la lista\n==>");

   while (scanf("%d", &n) > 0)
   {
     printf("\nElemento ==> [%d] : INSERITO",n);
      top=Inserisci_in_coda(top,n);
   }

 printf("\n\nNULL");
  stampa_lista(top);

  top=cancella_elemento(top,top->next->next);

  printf("\n\n\nNULL");
    stampa_lista(top);



  return 0;
}
