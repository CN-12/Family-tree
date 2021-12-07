#include <stdio.h>
int a,i,j;
int Showall();
int Add();
int Sub();
int Search();
  
int main() {
	char *tree= {'�ҸӴ�', '�Ҿƹ���', '�ƹ���', '��Ӵ�', '��', '��', '������'};
	int size=16;
	printf("\n<<���� Ž��>>\n");
	preorder( tree, 1, size );
	printf("\n<<���� Ž��>>\n");
	inorder( tree, 1, size );
	printf("\n<<���� Ž��>>\n");
  	postorder( tree, 1, size );
   
	printf("�ȳ��Ͻʴϱ� family tree\n");
	printf("\n");
	while(a != 0) {
		printf("1���� ���赵\n");
		printf("2���� �߰�\n");
		printf("3���� ����\n");
		printf("4���� Ž��\n");
		printf("0���� ���Ż���մϴ�");
		scanf("%d", &a);
		switch(a) {
			case 1: 
				ShowAll();
			case 2:
				Add();
			case 3:
				Sub();
			case 4:
				Search();
		} 
	}
}

void preorder( char *t, int n, int size ){ 
	if(n>size || t[n] == 0) return;
	
	printf("%c ",t[n]);
	preorder(t, 2*n, size);
	preorder(t, 2*n+1, size);
}
void inorder( char *t, int n, int size ){
	if(n>size || t[n] == 0) return;
	
	inorder(t, 2*n, size);
	printf("%c ",t[n]);
	inorder(t, 2*n+1, size);
}
void postorder( char *t, int n, int size ){
	if(n>size || t[n] == 0) return;
	
	postorder(t, 2*n, size);
	postorder(t, 2*n+1, size);
	printf("%c ",t[n]);
}
