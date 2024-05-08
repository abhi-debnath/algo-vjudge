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


