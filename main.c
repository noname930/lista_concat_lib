#include <stdio.h>
#include <stdlib.h>
#include "lib_liste_concat.c"

int main(int argc, char const *argv[]) {

 int n;
 struct lista_doppiamente_puntata *top1=NULL;
 struct lista_doppiamente_puntata *top2=NULL;

printf("Inserisci elementi lasciando uno spazio ad ognuno di essi, termina con un carattere la lista\n==>");

   while (scanf("%d", &n) > 0)
   {
     printf("\nElemento ==> [%d] : INSERITO",n);
      top1=Inserisci_in_coda(top1,n);
      top2=Inserisci_in_coda(top2,n);
   }


 printf("\n\nNULL");
  stampa_lista(top1);
  printf("\n\nNULL");
   stampa_lista(top2);

/*
  printf("\nCancello il terzo elemento");
  top=cancella_elemento(top,top->next->next);
*/

struct lista_doppiamente_puntata *top3=NULL;

top3=unisci_liste_alternate(top1,top2);

printf("\nUnisco le tue liste in maniera alternata");
  printf("\n\n\nNULL");
    stampa_lista(top3);


  return 0;
}
