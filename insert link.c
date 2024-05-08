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
    int ins;
    printf("Enter the location to insert:");
    scanf("%d",&ins);
    struct node *head=first,*h1=head,*newNode;
    newNode=malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&newNode->data);
    if(ins==1)
    {
        newNode->link=head;
        head=newNode;
    }
    else if(ins==n) {
        h1=head;
        for(i=1;i<n;i++)
        {
            h1=h1->link;
        }
        newNode->link=h1->link;
        h1->link=newNode;
    }
    else
    {
        h1=head;
        for(i=1;i<ins-1;i++)
        {
            h1=h1->link;
        }
        newNode->link=h1->link;
        h1->link=newNode;
    }
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
