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
