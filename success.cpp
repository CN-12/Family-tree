#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <windows.h>
#include <string.h>

typedef struct treeNode{
   char *data;
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

treeNode* search(treeNode* root, char* a) {
	if(root->data == NULL) {
	}
	if(strcmp(root->data, a) == 0) {
		printf("\nã�ҽ��ϴ�");
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
	int a;
	int test = 0;
	do {
		char* s[] = {};
		system("cls");
		printf("1���� ���赵\n");
		printf("2���� �߰�\n");
		printf("3���� ����\n");
		printf("4���� Ž��\n");
		printf("5���� ���\n");
		scanf("%d", &a); 
		switch(a) {
			case 1:
				if(test == 1) {
					system("cls");
					printf("�̹� ��������ϴ�");
					Sleep(3000);
					break;
				}
				system("cls");
				test = 1;
				printf("�����Ǿ����ϴ�");
				Sleep(3000);
				break;
			case 2:
				system("cls");
				printf("�߰��ϰڽ��ϴ�");
				Sleep(3000);
				break;
			case 4:
				scanf("%s", &s);
				system("cls");
				printf("ã�� �ֽ��ϴ�");
				search(n1, s);
				Sleep(3000);
				break;
			case 5:
				system("cls");
				printf("\npostorder : ");
				postorder(n1);
				Sleep(3000);
				break;
		}
	} while(a != 0);
	return 0;
}
