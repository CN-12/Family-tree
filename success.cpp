#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode{
   char *data;
   struct treeNode *left;
   struct treeNode *right;
} treeNode;

void postorder(treeNode* root)
{
  if(root -> left == NULL)
    printf("��");
   if (root){
    postorder(root -> left);
    postorder(root -> right);
    printf("%s ", root -> data);
    return ;
  }
}

treeNode* make(treeNode *n1)
{
  treeNode* n7 = (treeNode*) malloc (sizeof(treeNode)); 
   treeNode* n6 = (treeNode*) malloc (sizeof(treeNode));
   treeNode* n5 = (treeNode*) malloc (sizeof(treeNode));
   treeNode* n4 = (treeNode*) malloc (sizeof(treeNode));
   treeNode* n3 = (treeNode*) malloc (sizeof(treeNode));
   treeNode* n2 = (treeNode*) malloc (sizeof(treeNode));
   n1 = (treeNode*) malloc (sizeof(treeNode));
  n7 -> data = "���Ҿƹ���";
  n6 -> data = "���ҸӴ�";
  n5 -> data = "�Ҿƹ���";
  n4 -> data = "�ҸӴ�";
  n3 -> data = "�ƹ���";
  n2 -> data = "��Ӵ�";
  n1 -> data = "��";
  
  n1 -> left = n2;
  n1 -> right = n3;
  n2 -> left = n6;
  n2 -> right = n7;
  n3 -> left = n4;
  n3 -> right = n5;
  return n1;
}

int main()
{
  treeNode* n1 = make(n1);

   printf("\n postorder : ");
   postorder(n1);
}
