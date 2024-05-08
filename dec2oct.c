#include <stdio.h>

int stack[20], top=-1;

int isFull(){
    if(top == 19)
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
    int dec;

 printf("Enter The Decimal :");
 scanf("%d",&dec);
  while(dec!=0){
     push(dec%8);
     dec=dec/8;
 }
    printf("Octal Number:");
      while(!isEmpty()){
 printf("%d",pop());
      }

}


