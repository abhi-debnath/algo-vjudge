#include <stdio.h>

char stack[100];
int top=-1;

int isFull(){
    if(top==99)
     return 1;
    else
     return 0;
}

int isEmpty(){
    if(top==-1)
     return 1;
    else
     return 0;
}

void push(char val){
    if(isFull())
    printf("stack Full\n");
    else
    top++;
    stack[top]=val;
    
}

char pop(){
    char val;
    if(isEmpty())
    printf("stack Empty\n");
    else
    val=stack[top];
    top--;
    return val;
}

int main() {
  int dec,rem;
  printf("Enter The Number:");
  scanf("%d",&dec);
  while(dec!=0){
      rem=dec%16;
      if(rem==10)
      push('A');
      else if(rem==11)
      push('B');
      else if(rem==12)
      push('C');
      else if(rem==13)
      push('D');
      else if(rem==14)
      push('E');
      else if(rem==15)
      push('F');
      else
      push(rem+ '0');
      dec=dec/16;
  }
  printf("Hexadecimal Number:");
  while(!isEmpty()){
      printf("%c", pop());
  }
    return 0;
}
