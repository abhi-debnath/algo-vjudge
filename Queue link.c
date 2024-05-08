#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *start=NULL,*end=NULL;

int isEmpty()
{
    if((start == NULL)&&(end == NULL))
        return 1;
    else
        return 0;
}

void enqueue(int val){
    struct node *New;
    New=malloc(sizeof(struct node));
    New->data=val;
    New->link=NULL;
     if(isEmpty())
    {
        start = New;
        end = New;
    }
    else
    {
        end->link=New;
        end=New;
    }
}

int dequeue()
{
    int val;
    if(isEmpty())
        printf("Empty");
    else if(start==end)
    {
        val = start->data;
        start = NULL;
        end = NULL;
    }
    else
    {
        val = start->data;
        start=start->link;
        return val;
    }
}
int peek(){
    if(isEmpty()){
      printf("Queue Empty");
    }
   else{
       return start->data;
   }
}


int main()

{
    enqueue(10);
    enqueue(20);
    printf("%d\n",peek());
    enqueue(30);
    enqueue(40);
    printf("%d\n",dequeue());
    printf("%d\n",peek());
    printf("%d\n",dequeue());
}
