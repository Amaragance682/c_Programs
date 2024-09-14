/******************************************************************
  Beinagrind að lausn á dæmi 5 í heimadæmum 3 í Tölvutækni og
  forritun, haust 2024
  
  Sjá lýsingu verkefnis á dæmablaði 
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct dNode {
   int data;
   struct dNode *prev;
   struct dNode *next;
};

/* Haus og hali listans eru víðværar breytur */
struct dNode *head = NULL;
struct dNode *tail = NULL;


/* Prentar út stök í tvítengdum list */
void printList() {
    struct dNode *p = head;
    
	printf("Listi: ");
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

void printRevList() {
    struct dNode *p = tail;
    
    printf("Reverse listi: ");
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->prev;
        
    }
}




/* Setur inn hnút með gildinu v sem hnút númer k í tvítengdum lista */
void insAs(int k, int v) {
    struct dNode *p, *q;
    int i;

    /* Búa til hnútinn og setja gildið inn í hann */
    p = (struct dNode *)malloc(sizeof(struct dNode));
    p->data = v;
    
    if (head == NULL) {
        /* Tómur listi */
        /***** Skrifið kóða hér *****/
        // buum til head og tail ur eina node sem er til, thannig p verdur baedi head og tail 
        head = p;
        tail = p;
        p->next = NULL;
        p->prev = NULL;


    } else if (k == 0) {
        /* innsetning fremst í listann */
        /***** Skrifið kóða hér *****/
        // baeta vid nyu node, thannig tengja nya node vid next node aftengja fremsta node og svo tengja fremsta node vid nya node
        p->next = head;
        p->prev = NULL;
        head->prev = p; // p bendir a head, en p er nuna ordid nya head, thad er fremmst: p -> head -> tail
        head = p; // head verdur aftur fremmst

    } else {
        /* annars rekja okkur eftir listanum */
        /***** Skrifið kóða hér *****/
        /* Athugið að hér gæti þurft að uppfæra tail-bendinn */

        q = head;

        for (int i = 1; i < k && q->next != NULL;i ++){
            q = q->next;

        }
        if (q->next == NULL) {
            tail->next = p;
            p->prev = tail;
            p->next = NULL;
            tail = p;
        } else {
            p->next = q->next;
            p->prev = q;
            q->next->prev = p;
            q->next = p;

        }
   }
}


/* Býr til n-staka tvítengdan lista með slembigildum (0 til 99).
   Setur víðværu breyturnar head og tail */
void createRandList(int n) {
    struct dNode *p;
    int i;

    /* Ef n er núll eða minna þá tómur listi */
    if (n < 1) {
        head = NULL;
        tail = NULL;
        return;
    }
    
    /* Búa til fyrsta hnútinn og láta haus og hala benda á hann */
    head = tail = (struct dNode *)malloc(sizeof(struct dNode));
    head->data = rand()%100;
    head->prev = NULL;
    head->next = NULL;
    
    /* Búa til restina af hnútunum og setjum þá aftast */
    for(i=1; i<n; i++) {
        p = (struct dNode *)malloc(sizeof(struct dNode));
        p->data = rand()%100;
        p->prev = tail;
        p->next = NULL;
        tail->next = p;
        tail = p;
    }
}


int main() {
    int i;

    /* Búa til listann með 5 slembigildum */
    createRandList(5);
    printList();
    printRevList();

    printf("\n");
    
    printf("Setja 10 sem stak 0:\n");
    insAs(0, 10);
    printList();
    
    printf("Setja 20 sem stak 10:\n");
    insAs(10, 20);
    printList();

    printf("Setja 30 sem stak 3:\n");
    insAs(3, 30);
    printList();

    

   return 0;
}
