#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int last;
typedef struct listNode{
   char day[8];
   int money;
   char data[9];
   struct listNode *link;
}listNode;

typedef struct {
   listNode *head;
}linkedList_h;

linkedList_h *createLinkedList_h();

void freeLinkedList_h(linkedList_h* L);

void printList(linkedList_h *L);

void insertNode(linkedList_h *L);

listNode *searchNode(linkedList_h *L, char *x);

int main(){
   linkedList_h * L;
   L = createLinkedList_h();
   int a;
   int test = 0;
   do {
   	char day[5] = {};
   printf("\n1번은 추가\n");
   printf("2번은 삭제\n");
   printf("3번은 탐색\n");
   printf("4번은 프린트\n");
   scanf("%d", &a);
   switch(a) {
         case 1:
         insertNode(L);
         break;
      case 3:
         printf("원하는 날짜에 기록을 확인하시오.\n");
         scanf("%s", day);
         searchNode(L , day);
         break;
      case 4:
         printList(L);
         printf("현재 가지고 있는 값은 %d", last);
         break;
      }
   } while(a != 0);
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

// 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h *L){
   listNode* p;
   printf("L = (");
   p = L -> head;
   while(p != NULL) {
      printf("%s %s %d", p->day, p -> data, p -> money);
      p = p -> link;
      if(p != NULL) printf(", ");
   }
   printf(") \n");
}

void insertNode(linkedList_h *L){
	int money;
   	char day[5] = {};
   	char work[8] = {};
	scanf("%s", day);
    scanf("%s", work);
    scanf("%d", &money);
    last = last + money;
   listNode* newNode;
   newNode = (listNode*)malloc(sizeof(listNode));
   strcpy(newNode -> day, day);
   strcpy(newNode -> data, work);
   newNode -> money = money;
   
   if(L -> head == NULL) {
      newNode -> link = L -> head;
    L -> head = newNode;
    return ;
   }
   
   listNode *temp = L -> head;
   
   while(temp -> link != NULL){
      temp = temp -> link;
   }
   
   temp -> link = newNode;
   return ;
}

listNode *searchNode(linkedList_h *L, char *x){
   listNode *temp;
   temp = L -> head;
   while(temp != NULL) {
      if(strcmp(temp -> day, x) == 0) {
         printf("\n%s %s %d", temp->day, temp -> data, temp -> money);
		 temp = temp -> link;	
     }
      else temp = temp -> link;
   }
   return temp;
}
