#include <stdio.h>
#include <string.h>

 
 int stack[20],top=-1;

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

void push(char val){
    if (isFull())
      printf("Stack Full\n");
    else
      top=top+1;
      stack[top]=val;
     
}

char pop(){
    char val;
    if (isEmpty())
      printf("Stack Empty\n");
    else
    val=stack[top];
      top=top-1;
      return val;
}

int main() {
   char str[10];
    int len,i;
    printf("Enter Letter :");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        push(str[i]);
    }
    printf("Reverse Letter :");
    for(i=0;i<len;i++){
        printf("%c",pop());
    }

}
