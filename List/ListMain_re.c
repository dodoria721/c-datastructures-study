#include<stdio.h>
#include"ArrayList_re.h"

int main() {

	List list;
	int data;
	initList(&list);
	
	appendList(&list, 1); appendList(&list, 2);
	appendList(&list, 3); appendList(&list, 4);
	printf("�ʱ� ����Ʈ: ");
	printList(&list);

	insertList(&list, 1, 5);
	printf("5 ���� ��: ");
	printList(&list);

	if (deleteList(&list, 2, &data)) {
		printf("%d ���� �Ϸ�\n", data);
	}
	else {
		printf("���� ����\n");
	}

	printf("���� �� ����Ʈ: ");
	printList(&list);


	if (getElement(&list, 1, &data)) {
		printf("ã���ô� ���: %d\n", data);
	}
	else {
		printf("��Ҹ� ã�� �� �����ϴ�.\n");
	}

	int count = listCount(&list);
	printf("����Ʈ ��� ��: %d\n", count);

	return 0;
}