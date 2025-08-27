#include<stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) // 원판이 from 에서 by를 타고 to 까지 이동
{
	if(num==1) //원판의 수가 1개 라면
		printf("원반1을 %c에서 %c로 이동\n", from, to);
	else {
		HanoiTowerMove(num - 1, from, to, by);
		printf("원반%d을(를) %c에서 %c로 이동 \n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main() {
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}

/*
<하노이 타워 규칙>
1. 원판은 한 번에 하나씩만 옮길 수 있다.
2. 옮기는 과정에서 작은 원반의 위에 큰 원반이 올려져서는 안된다.
*/
