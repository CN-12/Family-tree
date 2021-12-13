#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <windows.h>

typedef struct treeNode{
   char *data;
   struct treeNode *left;
   struct treeNode *right;
} treeNode;

void postorder(treeNode* root)
{
  if(root -> left == NULL)
    printf("끝");
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
  n7 -> data = "외할아버지";
  n6 -> data = "외할머니";
  n5 -> data = "할아버지";
  n4 -> data = "할머니";
  n3 -> data = "아버지";
  n2 -> data = "어머니";
  n1 -> data = "나";
  
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
	int a;
	int test = 0;
	do {
		printf("1번은 가계도\n");
		printf("2번은 추가\n");
		printf("3번은 삭제\n");
		printf("4번은 탐색\n");
		scanf("%d", &a);
		switch(a) {
			case 1:
				if(test == 1) {
					system("cls");
					printf("이미 만들었습니다.");
					continue;
				}
				system("cls");
				test = 1;
				printf("생성되었습니다"); 
			case 2:
				system("cls");
				printf("탐색하겠습니다");
		}
	} while(a != 0);
   printf("\n postorder : ");
   postorder(n1);
}
