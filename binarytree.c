//PROGRAM TO CREATE A BINARY TREE AND PERFORM (PREORDER, INORDER AND POSTORDER) TRAVERSAL

#include <stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* newNode(int data)
{
     struct node* node = (struct node*)
     malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}
void printPostorder(struct node* node)
{
     if (node == NULL)
     return;
     printPostorder(node->left);
     printPostorder(node->right);
     printf("%d ", node->data);
}
void printInorder(struct node* node)
{
     if (node == NULL)
       return;
     printInorder(node->left);
     printf("%d ", node->data);
     printInorder(node->right);
}
void printPreorder(struct node* node)
{
     if (node == NULL)
       return;
     printf("%d ", node->data);
     printPreorder(node->left);
     printPreorder(node->right);
}
void main()
{
int n;
struct node*root;
clrscr();
printf("Enter the data of 5 nodes\n");
scanf("%d",&n);
root=newNode(n);
scanf("%d",&n);
root->left=newNode(n);
scanf("%d",&n);
root->right=newNode(n);
scanf("%d",&n);
root->left->left=newNode(n);
scanf("%d",&n);
root->left->right=newNode(n);
clrscr();
printf("Preorder traversal : ");
printPreorder(root);
printf("\nInorder traversal : ");
printInorder(root);
printf("\nPostorder traversal : ");
printPostorder(root);
getch();
}
