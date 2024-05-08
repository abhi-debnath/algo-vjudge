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
    int last_digit,num,x,decimal=0,base=1;

 printf("Enter The Binary Number :");
 scanf("%d",&num);
  while(num!=0){
     last_digit = num%10;
     push(last_digit);
     num=num/10;
     x=pop();
     decimal=decimal+last_digit*base;
     base=base*2;
 }

     printf("Decimal Number is: %d", decimal);

}


