#include <stdio.h>
int a,i,j;
int Showall();
int Add();
int Sub();
int Search();
  
int main() {
	char *tree= {'할머니', '할아버지', '아버지', '어머니', '형', '나', '여동생'};
	int size=16;
	printf("\n<<전위 탐색>>\n");
	preorder( tree, 1, size );
	printf("\n<<중위 탐색>>\n");
	inorder( tree, 1, size );
	printf("\n<<후위 탐색>>\n");
  	postorder( tree, 1, size );
   
	printf("안녕하십니까 family tree\n");
	printf("\n");
	while(a != 0) {
		printf("1번은 가계도\n");
		printf("2번은 추가\n");
		printf("3번은 삭제\n");
		printf("4번은 탐색\n");
		printf("0번은 긴급탈출합니다");
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
