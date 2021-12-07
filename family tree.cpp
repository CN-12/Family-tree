#include <stdio.h>
int a,i,j;
int Showall();
int Add();
int Sub();
int Search();
//경원이 배열이나 대충 써서 만들고 printall이나 0번 탈출은 만들어나서 괜찮 
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
