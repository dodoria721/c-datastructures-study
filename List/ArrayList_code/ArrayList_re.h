#ifndef ARRAYLIST_RE
#define ARRAYLIST_RE

#include <stdbool.h>

#define MAX_SIZE 100

typedef int LData;

typedef struct ArrayList {
	LData arr[MAX_SIZE];
	int size;
}ArrayList;

typedef ArrayList List;

void initList(List* list);
void appendList(List* list, LData element);
void insertList(List* list, LData position, LData element);
bool deleteList(List* list, LData position, LData* deletedElement);
bool getElement(List* list, LData position, LData* element);
int listCount(List* list);
void printList(List* list);

#endif
