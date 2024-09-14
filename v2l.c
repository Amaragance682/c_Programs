#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEM 10

struct Node {
    int val;
    struct Node *next;

};

void printlist(struct Node *h) {
    printf("Listi: ");
    while (h != NULL) {
        printf("%d->", h->val);
        h = h->next;

    }
    printf("\n");
}

struct Node* vec2list(int a[], int n) {
    struct Node *head, *p, *temp;

    // setjum upp alla pointers og nullstillum tha
    head = NULL;
    p = NULL;
    temp = NULL;


    // fer i gegnum for luppu 10 sinnum og getur thannig nad i gognin fra array til ad setja i linked list
    for (int i = 0; i < n; i++){


        //malloc er notad til ad allocatea minni til ad geima Nodeid temp
        temp = (struct Node*)malloc(sizeof(struct Node));

        // vid assignum a[i] gildid sem gildid sem temp er ad benda a, thannig val = a[i]
        temp->val = a[i];
        //setur naesta pointer sem temp er ad benda a sem gildid NULL
        temp->next = NULL;

        // i byrjun pointar head ekki a neitt, thannig vid latum head benda a temp, og gerum p ad nya head;
        if (head == NULL) {
            head = temp;
            p = head;


        // naer i naesta pointer sem p bendir a og breytir honum til ad benda a temp, p pointerinn bendir svo a temp
        // p er thannig tilbuid ad pointa aftur a naesta temp i naesta iteration af luppuni okkar
        } else {
            p->next = temp;
            p = p->next;
        }

    }
    return head;


}


int main(int argc, char **argv) {
    //initializear list sem pointer a Node
    struct Node *list;

    // fylki a sem tekur NUM_ELEM fjolda heiltolur
    int a[NUM_ELEM];

    
    // venjulegi listinn
    printf("fylki: \n");
    for (int i=0; i<NUM_ELEM; i++) {
        a[i] = 2*(i+1);
        printf("%d", a[i]);
        printf(" skibidi!!! \n");

    }
    printf("\n");
    
    // buum til lista
    list = vec2list(a, NUM_ELEM);

    printlist(list);

    return 0;
} 






