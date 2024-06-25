#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition
typedef struct node{
    char name[20];
    struct node *next;
} *LIST;

void display(LIST L);
void insertBeginning(LIST *L, char x[]);
void insertEnd(LIST *L, char x[]);
void insertAtMiddle(LIST *L, char x[], int pos);

int main() {
    // Head pointer
    // Method 1:
    // struct node *head = NULL;
    // Method 2:
    LIST head = NULL;
    
    display(head);
    
    insertBeginning(&head, "Max Verstappen");
    display(head);
    
    insertBeginning(&head, "Lando Norris");
    display(head);
    
    insertBeginning(&head, "Lewis Hamilton");
    display(head);
    
    insertEnd(&head, "Carlos Sainz");
    display(head);
    
    insertEnd(&head, "Fernando Alonso");
    display(head);
    
    insertAtMiddle(&head, "Sergio Perez", 2);
    display(head);
    
    insertAtMiddle(&head, "Oscar Piastri", 4);
    display(head);

    return 0;
}

void display(LIST L){
    if(L == NULL){
        printf("LIST is empty.\n");
    }else{
        for(; L != NULL; L = (*L).next){
            printf("Name: %s\n", (*L).name);
        }
        printf("\n");    
    }
}

void insertBeginning(LIST *L, char x[]){
    LIST node = calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    if(*L == NULL){
        *L = node;
    }else{
        LIST temp = *L;
        (*node).next = temp;
        *L = node;
    }
}

void insertEnd(LIST *L, char x[]){
    LIST node = calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    LIST *trav = L;
    for(; *trav != NULL; trav = &(**trav).next){
    }
    *trav = node;
}

void insertAtMiddle(LIST *L, char x[], int pos){
    // First node is at index 0
    LIST node = (LIST) calloc(1, sizeof(struct node));
    strcpy((*node).name, x);
    
    LIST *trav = L;
    int count = 0;
    for(; count < pos && *trav != NULL ; trav = &(**trav).next){
        count++;
    }
    LIST temp = *trav;
    (*node).next = temp;
    *trav = node;
}
