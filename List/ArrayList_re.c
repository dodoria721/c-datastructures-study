#include "ArrayList_re.h"
#include <stdio.h>

void initList(List* list) {
	(list->size) = 0; // ����Ʈ ������ element�� �ʱ�ȭ
}

void appendList(List* list, LData element) {
	if (list->size >= MAX_SIZE) {
		printf("Error: ����Ʈ�� �� ã���ϴ�.\n");
		return;
	}

	list->arr[list->size] = element;
	list->size++;
}

void insertList(List* list, LData position, LData element) {
	if (list->size >= MAX_SIZE) {
		printf("Error: ����Ʈ�� �� ã���ϴ�.\n");
		return;
	}

	if (position < 0 || position >= MAX_SIZE)
	{
		printf("Error: ��ȿ���� ���� ��ġ�Դϴ�.\n");
		return;
	}

	for (int i = list->size; i > position; i--) {
		list->arr[i] = list->arr[i - 1];
	}

	list->arr[position] = element;
	list->size++;
}

bool deleteList(List* list, LData position, LData* deletedElement) {
	if (list->size <= 0 || position < 0 || position >= list->size) {
		printf("Error: ��ȿ���� ���� ��û�Դϴ�.\n");
		return false;
	}
	
	*deletedElement = list->arr[position];

	for (int i = position; i < list->size - 1; i++) {
		list->arr[i] = list->arr[i + 1];
	}

	list->size--;
	return true;
}

bool getElement(List* list, LData position, LData* element) {
	if (list->size == 0) {
		printf("Error: ����Ʈ�� ����ֽ��ϴ�. \n");
		return false;
	}

	if (position < 0 || position >= list->size) {
		printf("Error: ��ȿ���� ���� ��ġ�Դϴ�. \n");
		return false;
	}

	*element = list->arr[position];
	return true;
}

int listCount(List* list) {
	return list->size;
}

void printList(List* list) {
	if (list->size == 0) {
		printf("Error: ����Ʈ�� ����ֽ��ϴ�.\n");
		return;
	}

	for (int j = 0; j < list->size; j++) {
		printf("%d ", list->arr[j]);
	}

	printf("\n");
}