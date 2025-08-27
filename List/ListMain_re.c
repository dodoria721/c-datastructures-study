#include<stdio.h>
#include"ArrayList_re.h"

int main() {

	List list;
	int data;
	initList(&list);
	
	appendList(&list, 1); appendList(&list, 2);
	appendList(&list, 3); appendList(&list, 4);
	printf("초기 리스트: ");
	printList(&list);

	insertList(&list, 1, 5);
	printf("5 삽입 후: ");
	printList(&list);

	if (deleteList(&list, 2, &data)) {
		printf("%d 삭제 완료\n", data);
	}
	else {
		printf("삭제 실패\n");
	}

	printf("삭제 후 리스트: ");
	printList(&list);


	if (getElement(&list, 1, &data)) {
		printf("찾으시는 요소: %d\n", data);
	}
	else {
		printf("요소를 찾을 수 없습니다.\n");
	}

	int count = listCount(&list);
	printf("리스트 요소 수: %d\n", count);

	return 0;
}