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
	treeNode* n7 = makeRootNode('�Ҿƹ���', NULL, NULL);
	treeNode* n6 = makeRootNode('�ҸӴ�', NULL, NULL);
	treeNode* n5 = makeRootNode('���Ҿƹ���', NULL, NULL);
	treeNode* n4 = makeRootNode('�ҸӴ�', NULL, NULL);
	treeNode* n3 = makeRootNode('�ƺ�', n6, n7);
	treeNode* n2 = makeRootNode('����', n4, n5);
	treeNode* n1 = makeRootNode('����', n2, n3);
	int a = 1;
	while(a != 0) {
		printf("1���� ���赵\n");
		printf("2���� �߰�\n");
		printf("3���� ����\n");
		printf("4���� Ž��\n");
		printf("0���� ���Ż���մϴ�");
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
