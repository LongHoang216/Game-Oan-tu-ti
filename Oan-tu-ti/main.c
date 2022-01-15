#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef enum {
	bua, keo, bao
}Oan_tu_ti;
Oan_tu_ti A, B;
Oan_tu_ti Chuyendoi(int x) {
	if (x == 0)
		return bua;
	else if (x == 1)
		return keo;
	else
		return bao;
}
int Random() {
	time_t t;
	srand((unsigned)&t);
	int x = rand() % 3;
	return x;
}
int main() {
	int player;
	int	computer;
	printf(" 0=bua, 1=keo, 2=bao\n");
	printf("--------------------------\n");
	do {
		printf("Your turn: ");
		scanf("%d", &player);
	} while (player>2);
	computer = Random();
	B = Chuyendoi(computer);
	A = Chuyendoi(player);
	printf("Computer turn: %d\n", B);
	if (A == B)
		printf("DRAW");
	if (A == bua) {
		if (B == keo)
			printf("You Win!!");
		else if (B == bao)
			printf("You Lose!!");
	}
	else if (A == keo) {
		if (B == bao)
			printf("You Win!!");
		else if (B == bua)
			printf("You Lose!!");
	}
	else {
		if (B == bua)
			printf("You Win!!");
		else if (B == keo)
			printf("You Lose!!");
	}
	return 0;
}