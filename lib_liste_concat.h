#ifndef lib_liste_concat_h
#define lib_liste_concat_h

struct lista_doppiamente_puntata *Inserisci_in_coda(struct lista_doppiamente_puntata* top, int info);
void stampa_lista(struct lista_doppiamente_puntata *top);
struct lista_doppiamente_puntata *Inserisci_in_testa(struct lista_doppiamente_puntata* top, int info);
struct lista_doppiamente_puntata* cancella_elemento(struct lista_doppiamente_puntata *head, struct lista_doppiamente_puntata *top);
struct lista_doppiamente_puntata* unisci_liste_alternate(struct lista_doppiamente_puntata* top1, struct lista_doppiamente_puntata* top2);

#endif
