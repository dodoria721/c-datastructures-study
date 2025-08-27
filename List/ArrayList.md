# ArrayList의 구현

List 자료구조는 구현방식에 따라 크게 두 가지로 나뉠 수 있다.
1. 순차 리스트(배열을 기반으로 구현된 리스트)
2. 연결 리스트(메모리의 동적 할당을 기반으로 구현된 리스트)

이 장에서는 그중에서 첫 번째 순차 리스트(ArrayList)를 구현해보겠다.

### ArrayList ADT
우선 구현하기에 앞서 ArrayList ADT를 정의함으로써 ArrayList가 제공해야하는 기능을 설정하겠다.

```
// 리스트 생성
void initList(ArrayList *list)

// 리스트 맨 뒤에 요소 삽입
void appendList(ArrayList* list, int element)

// 리스트 원하는 위치에 요소 삽입
void insertList(ArrayList* list, int position, int element)

// 리스트 요소 삭제 & 봔환
int deleteList(ArrayList* list, int position)

// 주어진 위치의 요소 확인
int getElement(ArrayList* list, int position)

// 리스트에 저장된 전체 요소의 수
int listCount(ArrayList* list)

// 리스트 안에 전체 요소 출력
void printList(ArrayList* list)
```

책을 참고해서 나만의 ADT를 설정했다. 책과 달라진 점은 position 변수를 설정해 원하는 위치에 element를 삽입, 삭제 할 수 있게 설정했다.
