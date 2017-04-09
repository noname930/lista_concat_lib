#include <stdio.h>
#include <stdlib.h>
#include "lib_liste_concat.h"

struct lista_doppiamente_puntata
{
  struct lista_doppiamente_puntata *prev;
  int info;
  struct lista_doppiamente_puntata *next;
};


struct lista_doppiamente_puntata *Inserisci_in_coda(struct lista_doppiamente_puntata* top, int info)
{
  if(top) //se top non è null, effettuo la chiamata ricorsiva al top successivo (top->next) fin quando non arrivo alla fine della lista
  {
    top->next=Inserisci_in_coda(top->next,info);
    top->next->prev=top; // una volta creato l'elemento nuovo, a questa istruzione sono tornato all'elemento precedente, quindi
                         // il top attuale non sarà quello creato, ma quello prima. Ecco perchè con top->next->prev vado
                        // ad indicare il puntatore prev del blocco successivo. Questa istruzione in pratica effettua il
                        // collegamento tra il blocco nuovo creato a quello precedente.
  }
  else
  {
    top=(struct lista_doppiamente_puntata *)calloc(1,sizeof(struct lista_doppiamente_puntata)); // utilizzo calloc in modo tale da settarmi a null prev e next
    top->info=info;
  }
   return top;

}

struct lista_doppiamente_puntata *Inserisci_in_testa(struct lista_doppiamente_puntata* top, int info)
{
  /*creo l'elemento tmp e se la lista non è vuota lo collego al top*/
  struct lista_doppiamente_puntata* tmp = (struct lista_doppiamente_puntata *)calloc(1,sizeof(struct lista_doppiamente_puntata));
  tmp->info=info;
   if(top!=NULL)
   {
    tmp->next=top;
    top->prev=tmp;
  }

  return tmp;

}

void stampa_lista(struct lista_doppiamente_puntata *top)
{
  if(top)   // se la lista è piena,stampa e richiama ricorsivamente la funzione all'item successivo
  {
     printf(" <- %d -> ", top->info);
     stampa_lista(top->next);
  }
  else
     printf("NULL\n");
}

struct lista_doppiamente_puntata* cancella_elemento(struct lista_doppiamente_puntata *top, struct lista_doppiamente_puntata *head)
{
  struct lista_doppiamente_puntata *tmp=top;
  struct lista_doppiamente_puntata *head=top;

  if(top!=NULL)
  {


   if(top->next != NULL)
   {
   
     top->next->prev=tmp->prev;
     top->prev->next=tmp->next;
     printf("\ntop= %d\n", top->info );
     //printf("\ntop->prev->next = %d", top->prev->next->info);
     //printf("\ntop->next->prev = %d", top->next->prev->info);
   }
   printf("\ntop next= %d\n", top->next->info );
   printf("\ntop prev= %d\n", top->prev->info );
        free(top);



}

   return head;

}
