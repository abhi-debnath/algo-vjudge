
#include <stdio.h>

int sum(int a, int b){
    int z=a+b;
    printf("Sum = %d\n",z);
}

int main() {
    printf("Size of char: %ld byte(s)\n", sizeof(char));
    printf("Size of int: %ld byte(s)\n", sizeof(int));
    printf("Size of float: %ld byte(s)\n", sizeof(float));
    printf("Size of double: %ld byte(s)\n", sizeof(double));
    printf("Size of short: %ld byte(s)\n", sizeof(short));
    printf("Size of long: %ld byte(s)\n", sizeof(long));
    printf("Size of long long: %ld byte(s)\n", sizeof(long long));


    int a,b;
    scanf("%d %d",&a,&b);
   int  z=sum(a,b);
    return 0;
}
