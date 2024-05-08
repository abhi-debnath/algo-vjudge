#include<stdio.h>
#include<stdlib.h>
 struct node
{
    int data;
    struct node *link1;
    struct node *link2;
};

int main()
{
    int i,n;
     struct node *previous,*current,*first;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        current=malloc(sizeof( struct node));
        scanf("%d",&(current->data));
        current->link1=NULL;
        current->link2=NULL;
        if(current==NULL)
        {
            printf("Memory cannot be allocated.");
        }else if(i==0)
        {
            first=current;
            previous=current;

        }else
        {
            previous->link1=current;
            current->link2=previous;
            previous=current;
        }
    }

    while(first!=NULL)
    {
        printf("%d ",first->data);
        first=first->link1;
    }
}
