#include <stdio.h>

int stack[10], top=-1;

int isFull(){
    if(top == 9)
       return 1;
    else
        return 0;
}

int isEmpty(){
    if(top == -1)
       return 1;
    else
        return 0;
}

void push(int val){
    if (isFull())
      printf("Stack Full\n");
    else
      top=top+1;
      stack[top]=val;
}

int pop(){
    int val;
    if (isEmpty())
      printf("Stack Empty\n");
    else
    val=stack[top];
      top=top-1;
      return val;
}

int peek(){
    int val;
    if (isEmpty())
      printf("Stack Empty\n");
    else
    return stack[top];
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
 peek();
 printf("%d\n",pop());
 printf("%d\n",pop());
  printf("%d\n",peek());
 printf("%d\n",pop());
}
