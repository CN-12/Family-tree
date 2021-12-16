#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <windows.h>
#include <string.h>

typedef struct treeNode{
   const char *data;
   struct treeNode *left;
   struct treeNode *right;
} treeNode;

void postorder(treeNode* root)
{
   if (root){
    postorder(root -> left);
    postorder(root -> right);
    printf("%s ", root -> data);
    return ;
  }
}

void search(treeNode* root, char *a) {
	if(root->data == NULL) {
		return ;
	}
	if(strcmp(root->data, a) == 0) {
		printf("\n찾았습니다");
	}
	search(root -> left, a);
	search(root -> right, a);
}

treeNode* make(treeNode *n1)
{
  treeNode* n7 = (treeNode*)malloc(sizeof(treeNode)); 
  treeNode* n6 = (treeNode*)malloc(sizeof(treeNode));
  treeNode* n5 = (treeNode*)malloc(sizeof(treeNode));
  treeNode* n4 = (treeNode*)malloc(sizeof(treeNode));
  treeNode* n3 = (treeNode*)malloc(sizeof(treeNode));
  treeNode* n2 = (treeNode*)malloc(sizeof(treeNode));
  n1 = (treeNode*)malloc(sizeof(treeNode));
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
		char s[] = {};
		system("cls");
		printf("1번은 가계도\n");
		printf("2번은 추가\n");
		printf("3번은 삭제\n");
		printf("4번은 탐색\n");
		printf("5번은 출력\n");
		scanf("%d", &a); 
		switch(a) {
			case 1:
				if(test == 1) {
					system("cls");
					printf("이미 만들었습니다");
					Sleep(3000);
					break;
				}
				system("cls");
				test = 1;
				printf("생성되었습니다");
				Sleep(1500);
				break;
			case 2:
				system("cls");
				printf("추가하겠습니다");
				Sleep(1500);
				break;
			case 4:
				scanf("%s", s);
				system("cls");
				printf("찾고 있습니다");
				search(n1, s);
				Sleep(1500);
				break;
			case 5:
				system("cls");
				printf("\npostorder : ");
				postorder(n1);
				Sleep(1500);
				break;
		}
	} while(a != 0);
	scanf("%d", &a);
}
