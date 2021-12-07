#include <stdio.h>
int a,i,j;
int Showall();
int Add();
int Sub();
int Search();
//경원이 코드상에서 일단 기본적인 트리 구조를 만들어줘 할머니 할아버지 이렇게 해서 
//그리고 추가랑 삭제만 만들자 printall은 내가 만들께 0번 탈출은 만들어나서 괜찮고
//내가 계속 얘기하면서 만들자  
int main() {
	char *tree= { 0,'A', 'B', 'C', 'D', 'E', 'F', 'G', 0, 0,'H', 'I', 0, 'J', 'K', 'L'};
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
