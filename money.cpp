#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct listNode{
   char day[5];
   int money;
   char data[20];
   struct listNode *link;
}listNode;

typedef struct {
   listNode *head;
}linkedList_h;

linkedList_h *createLinkedList_h();

void freeLinkedList_h(linkedList_h* L);

void printList(linkedList_h *L);

void insertFirstNode(linkedList_h *L, char *x);

void insertMiddleNode( linkedList_h *L, listNode *pre, char *x);

void insertLastNode( linkedList_h *L, char *x);

listNode *searchNode(linkedList_h *L, char *x);

int main(){
   linkedList_h * L;
   listNode * p;
   L = createLinkedList_h();
   
   int a;
   int test = 0;
   int last = 0; 
   do {
   int money;
   char day[5] = {};
   char work[8] = {};
   system("cls");
   printf("1���� �߰�");
   printf("2���� ����");
   printf("3���� Ž��");
   printf("4���� ����Ʈ");
   scanf("%d", &a);
   switch(a) {
   		case 1:
		   scanf("%s %d %s", day, &money, work);
		   last = last + money;
		   if(test == 0) {
		   	insertFirstNode(L, day, money, work);
		   }
		   test = 1;
		   insertMiddleNode(L, day, money, work);
		case 2:
			
		case 3:
			printf("���ϴ� ��¥�� ����� Ȯ���Ͻÿ�.")
			scanf("%s", day);
			searchNode("%s", &day);
		case 4:
			printList(L);
			printf("���� ������ �ִ� ���� %d", money);
	   }
   }
}

linkedList_h *createLinkedList_h(void){
      linkedList_h* L;
      L = (linkedList_h*)malloc(sizeof(linkedList_h));
      L -> head = NULL;
      return L;
}

void freeLinkedList_h(linkedList_h* L){
   listNode* p;
   while(L -> head != NULL) {
      p = L -> head;
      L -> head = L -> head -> link;
      free(p);
      p = NULL;
   }
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList_h *L){
   listNode* p;
   printf("L = (");
   p = L -> head;
   while(p != NULL) {
      printf("%s", p -> data);
      p = p -> link;
      if(p != NULL) printf(", ");
   }
   printf(") \n");
}

// ù��° ���� �����ϴ� ����
void insertFirstNode(linkedList_h *L, char x[], int size, char y[]){
   listNode* newNode;
   newNode = (listNode*)malloc(sizeof(listNode));
   strcpy(newNode -> data, x);
   strcpy(newNode -> day, y);
   strcpy(newNode -> moeny, size);
   newNode -> link = L -> head;
   L -> head = newNode;
}

// ��带 pre �ڿ� �����ϴ� ����
void insertMiddleNode( linkedList_h *L, listNode *pre, char *x){
   listNode* newNode;
   newNode = (listNode*)malloc(sizeof(listNode));
   strcpy(newNode -> data, x);
   if(L -> head == NULL) {
      newNode -> link = NULL;
      L -> head = newNode;
   }
   else if(pre == NULL) {
      pre -> link = newNode;
   }
   else {
      newNode -> link = pre -> link;
      pre -> link = newNode;
   }
}
void insertLastNode( linkedList_h *L, char *x){
   listNode* newNode;
   listNode* temp;
   newNode = (listNode*)malloc(sizeof(listNode));
   strcpy(newNode -> data, x);
   newNode -> link = NULL;
   if(L -> head == NULL) {
      L -> head = newNode;
      return;
   }
   temp = L -> head;
   while(temp -> link != NULL) temp = temp -> link;
   temp -> link = newNode;
}   

listNode *searchNode(linkedList_h *L, char *x){
   listNode *temp;
   temp = L -> head;
   while(temp != NULL) {
      if(strcmp(temp -> data, x) == 0) return temp;
      else temp = temp -> link;
   }
   return temp;
}
