# 순차 리스트(Array List)

### 순차 리스트란?
데이터를 물리적으로 연속된 메모리 공간에 저장하는 선형 자료구조이다. 가장 대표적인 구현 방식은 **배열(Array)** 이다. 순차 리스트는 데이터를 저장할 때 메모리 주소를 연속적으로 할당하기 때문에, 인덱스를 이용해 원하는 데이터에 빠르게 접근할 수 있는 것이 가장 큰 특징이다.

### 순차 리스트의 장점
* 빠른 접근 속도: 인덱스를 사용하여 특정 위치의 데이터에 **O(1)**의 시작 복잡도로 즉시 접근가능하다.
* 구현의 용이성: 배열을 기반으로 하기 때문에 구현이 비교적 간단하다.

### 순차 리스트의 단점
* 비효율적인 삽입 및 삭제: 리스트의 중간에 새로운 데이터를 삽입하거나 기존 데이터를 삭제할 경우, 그 뒤에 있는 모든 데이터를 한 칸씩 이동시켜야 한다. **O(n)** 의 시간 복잡도를 가진다.
* 고정된 크기: 처음 정한 크기를 초과하는 데이터를 저장할 수 없다.

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
