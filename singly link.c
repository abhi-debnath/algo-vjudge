#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *link;
};
int main()
{
 struct node *current, *first, *previous;
 int i, n;
 printf("Enter Element :");
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
 current = malloc(sizeof(struct node));
 scanf("%d", &current->data);
 current->link = NULL;
 if (i == 0)
 {
 first = current;
 previous = current;

 }
 else
 {
 previous->link = current;
 previous = current;
 }
 }
 while (first != NULL) {

printf("%d\n", first->data);
 first = first->link;
 }
}

