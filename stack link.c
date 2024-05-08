#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
struct node *link;
};

struct node *head=NULL;
int isEmpty(){
    if(head == NULL)
       return 1;
    else
        return 0;
}

void push(int val){
   struct node *new;
   new=malloc(sizeof(struct node));
   new->data=val;
   new->link=head;
   head=new;
}

int pop(){
    int val;
    if (isEmpty())
      printf("Stack Empty\n");
    else
    val=head->data;
    head=head->link;
      return val;
}

int peek(){
    int val;
    if (isEmpty())
      printf("Stack Empty\n");
    else
    return head->data;
}
int main() {
 int data,n,i;
 printf("Enter Element\n");
 scanf("%d",&n);
 printf("Enter Data\n");
 for(i=0;i<n;i++){
     scanf("%d",&data);
     push(data);

 }

 printf("%d\n",pop());
 printf("%d\n",pop());
  printf("%d\n",peek());
 printf("%d\n",pop());
}
