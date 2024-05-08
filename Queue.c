#include <stdio.h>

int queue[10];
int start = -1;
int end = -1;

int isEmpty()
{
    if((start == -1)&&(end == -1))
        return 1;
    else
        return 0;
}

int isFull()
{
    if(end == 9)
        return 1;
    else
        return 0;
}

int enqueue(int val)
{
    if(isFull())
        printf("Full");
    else if(isEmpty())
    {
        start = 0;
        end = 0;
        queue[end]=val;
    }
    else
    {
        end++;
        queue[end]=val;
    }
}

int dequeue()
{
    int val;
    if(isEmpty())
        printf("Empty");
    else if(start==end)
    {
        val = queue[start];
        start = -1;
        end = -1;
        return val;
    }
    else
    {
        val = queue[start];
        start++;
        return val;


    }
}
int peek(){
    if(isEmpty()){
      printf("Queue Empty");
    }
   else{
       return queue[start];
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
