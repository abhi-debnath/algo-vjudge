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

int main() {
    int dec;

 printf("Enter The Decimal :");
 scanf("%d",&dec);
  while(dec!=0){
     push(dec%2);
     dec=dec/2;
 }

      while(!isEmpty()){
 printf("%d",pop());
      }

}
