#include <stdio.h>

/* funzione che restituisce 1 oppure 0 se il parametro e' un numero primo oppure no */
int isPrimo(int numero) {
      // pre: numero e' un intero positivo
      int nessunDivisore;             // vale 1 fintanto che non hai trovato nessun divisore di numero
                                                          // vale 0 quando hai trovato un divisore di numero
      int i;                               // variabile contatore

      /* all'inizio non hai trovato nessun divisore di numero */
      nessunDivisore = 1;
      /* il primo possibile divisore di numero e' 2 */
      i=2;

      /* guarda tutti i numeri fino a numero -1; interrompi se trovi un divisore */
      while(i<=numero-1 && nessunDivisore)
            /* il numero corrente e' un divisore? */
            if(numero%i==0)
                  nessunDivisore = 0;
            else // altrimenti passa al prossimo numero
                  i++;

      return nessunDivisore;
}

/* programma che legge un numero e stampa un messaggio che indica se e' primo oppure no */
int main() {
      int x;
      printf("Caro utente, introduci un intero positivo\n");
      scanf("%d", &x);

      if(isPrimo(x))
           printf("PRIMO!\n");
      else
           printf("NON PRIMO!\n");
      system("PAUSE");
}
