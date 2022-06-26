#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Z 3
 //voidpointer
 
// typedef enum TYPE{INT,DOUBLE,CHAR}Type;

// typedef struct node{
//     Type t;
//     double data;
//     struct node* next;
// } node_td;

//

typedef struct node{
    /*union {
        int idata;
        double ddata;
        char cdata;
    };*/
    int data;
    struct node* next;
}node_t;


int sumElements(node_t* head)
{
  node_t* current = head;
  int sum=0;
    while(current!= NULL)
    {
        sum += current->data;
        current= current->next;
    }

    return sum;
    //printf("%d",current->data);
}


int maxElement(node_t* head)
{

// -------------------------------------------------------------------------
}

/*

void listFree(node_t* head);//

void print_listR(note_t* list)
{
    if(list == NULL)
    {
        return;
    }    
    //printf("%d\n",)
}

pushEnd(node_t* list);

size_t listSize(node_t);
*/

void push(node_t** head, int value)
{
    node_t* temp = malloc(sizeof(node_t));
    temp -> data = value;
    temp -> next = *head;
    *head = temp;
    free(temp);
}
//void pointer
// void push(node_t** head, int value)
// {
//     node_t* temp = malloc(sizeof(node_t));
//     temp -> data = value;
//     temp -> next = *head;
//     *head = temp;
// }

void printElements(node_t* head )
{
    node_t* current = head;
    while(current!= NULL)
    {
        printf("%d",current->data);
        current= current->next;
    }
    putchar('\n');
}

int main()
 {
    srand(time(NULL));
    int r = rand() % 3;
    // node_t node1,node2,node3;
    // node1.data =20;
    // node2.data = 40;
    // node3.data = 60;
    // node1.next = &node2;
    // node2.next = &node3;
    // node3.next = NULL;
    // printf("%d\n", node1.data);
    // printf("%d\n", (node1.next) -> data);
    // printf("%d\n", (node1.next) -> next ->data);

node_t* head = NULL;
// push(head,20);
// push(head,40);
// push(head,80);
// push(head,90);
for(int i = 0;i<3;i++){
push(head,r);
}

sumElements(head);

printElements(head);



    return 0;
 }