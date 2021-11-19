#include<stdio.h>
int main(void) {
	int KG = 0;
	int count = 0;
	scanf_s("%d", &KG);
	while (KG != 0) {
		if (KG - 5 > 0) {
			KG -= 5;
			count++;
		}
		else if (KG - 3 > 0) {
			KG -= 3;
			count++;
		}
		else {
			count = 0;
			break;
		}
	}
	if (count == 0) {
		printf("-1");
	}
	else {
		printf("%d", count);
	}
}