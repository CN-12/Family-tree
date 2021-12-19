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
   printf("\n1���� �߰�\n");
   printf("2���� ����\n");
   printf("3���� Ž��\n");
   printf("4���� ����Ʈ\n");
   scanf("%d", &a);
   switch(a) {
         case 1:
         insertNode(L);
         break;
      case 3:
         printf("���ϴ� ��¥�� ����� Ȯ���Ͻÿ�.\n");
         scanf("%s", day);
         searchNode(L , day);
         break;
      case 4:
         printList(L);
         printf("���� ������ �ִ� ���� %d", last);
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

// ���� ����Ʈ�� ������� ����ϴ� ����
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
