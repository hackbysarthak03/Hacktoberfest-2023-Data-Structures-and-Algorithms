#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){

    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

one->data = 1; two->data = 2; three->data =3;

one->next = two;
two ->next = three;
three->next = NULL;

head = one;

//   traversal   //
struct node *a = head;
while(a!=NULL){
    printf("%d ->",a->data);
    a = a -> next;
}
printf("\n");

//  insert  at begin//
struct node *new;
new = malloc(sizeof(struct node));
new -> data = 0;
new -> next = head ;
head = new ;

struct node *curr=new;
while(curr!=NULL){
    printf("%d-> ",curr->data);
    curr = curr -> next;
}
printf("\n");

// insert at end //

struct node *end;
end = malloc(sizeof(struct node));
end -> data = 4;
end ->next = NULL;

struct node *temp = new ;
while(temp->next != NULL){
    temp = temp -> next;
}
temp-> next = end;

struct node *t = new;
while(t!=NULL){
    printf("%d ->",t->data);
    t = t -> next;
}
printf("\n");
// insert at k pos //


int k = 2;
struct node *x = new;
int i = 0;
while(x!=NULL && i<k-1){
    x=x->next;
    i++;
}


struct node *te;
te = malloc(sizeof(struct node));
te -> data = 9;

te->next = x->next;
x->next = te;

struct node *w = new;
while(w!=NULL){
    printf("%d ->",w->data);
    w = w -> next;
}

    return 0;
}