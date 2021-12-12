#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode{
	char data;
	struct treeNode *left;
	struct treeNode *right;
} treeNode;

treeNode* makeRootNode(char data, treeNode* leftNode, treeNode* rightNode)
{
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

postorder(treeNode* root)
{
		if(root) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}
add() {
	char a[9];
	char b[9];
	scanf("%s", a);
	address = scan(a);
	scanf("%s", b);
	park = makeRootNode(b ,NULL,NULL);
	treeNode* n8 = makeRootNode()
}
int main()
{
	treeNode* n7 = makeRootNode('할아버지', NULL, NULL);
	treeNode* n6 = makeRootNode('할머니', NULL, NULL);
	treeNode* n5 = makeRootNode('외할아버지', NULL, NULL);
	treeNode* n4 = makeRootNode('할머니', NULL, NULL);
	treeNode* n3 = makeRootNode('아빠', n6, n7);
	treeNode* n2 = makeRootNode('엄마', n4, n5);
	treeNode* n1 = makeRootNode('나다', n2, n3);
	int a = 1;
	while(a != 0) {
		printf("1번은 가계도\n");
		printf("2번은 추가\n");
		printf("3번은 삭제\n");
		printf("4번은 탐색\n");
		printf("0번은 긴급탈출합니다");
		scanf("%d", &a);
		switch(a) {
			case 1: 
				postorder(n1);
			case 2:
				Add();
			case 3:
				Sub();
			case 4:
				Search();
		} 
	}
}
	getchar();
}
