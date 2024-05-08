1. Create a BST using linked list.Then apply in - order, pre - order, post-order.
Ans :
#include <stdio.h>
#include <stdlib.h>
    struct node
{
   int data;
   struct node *left;
   struct node *right;
};
int inorder(struct node *head)
{
   if (head == NULL)
      return 0;
   else
   {
      inorder(head->left);
      printf("%d ", head->data);
      inorder(head->right);
   }
}
int preorder(struct node *head)
{
   if (head == NULL)
      return 0;
   else
   {
      printf("%d ", head->data);
      preorder(head->left);
      preorder(head->right);
   }
}
int postorder(struct node *head)
{
   if (head == NULL)
      return 0;
   else
   {
      postorder(head->left);
      postorder(head->right);
      printf("%d ", head->data);
   }
}
int main()
{
   int n, val, i;
   struct node *head, *ne, *n1, *previous;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      ne = (struct node *)malloc(sizeof(struct node));
      printf("Enter the %d element: ", i + 1);
      scanf("%d", &val);
      ne->data = val;
      ne->left = NULL;
      ne->right = NULL;
      if (i == 0)
      {
         head = ne;
      }
      else
      {
         n1 = head;
         while (n1 != NULL)
         {
            if (val < n1->data)
            {
               previous = n1;
               n1 = n1->left;
            }
            else
            {
               previous = n1;
               n1 = n1->right;
            }
         }
         if (val < previous->data)
         {
            previous->left = ne;
         }
         else
         {
            previous->right = ne;
         }
      }
   }
   inorder(head);
   printf("\n");
   preorder(head);
   printf("\n");
   postorder(head);
}
