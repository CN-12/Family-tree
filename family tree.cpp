#include <stdio.h>
int a,i,j;
int Showall();
int Add();
int Sub();
int Search();
//����� �迭�̳� ���� �Ἥ ����� printall�̳� 0�� Ż���� ������ ���� 
int main() {
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
