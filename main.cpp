#include<stdio.h>

int main()
{
	int n, c = 1, s = 0;

	while (c < 6) {
		printf("0보다 큰 정수를 입력(%d번째):", c++);
		scanf_s("%d", &n);
		s += n;
		if (n < 1) {
			printf("1이상의 수를 입력하시오.\n");
			c--;

			continue;
		}
	}printf("총합은:%d", s);
}
//-----------------------------
#include<stdio.h>

int main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("0");
		}
		printf("*\n");
	}return 0;
}
//-----------------------------
#include<stdio.h>

int main()
{
	for (int i = 1; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			printf("0");
		}
		for (int t = 6; t > i; t--) {
			printf("*");
		}printf("\n");
	}
	return 0;
}
//-----------------------------
#include<stdio.h>

int main()
{
	int i = 0, j = 0; //if 홀수 i = -1
	do {
		i++;
		i++;
		j += i;
	}

	while (i < 100); //if 홀수 100 > 99
	printf("%d", j);
}
//-----------------------------
#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	float f = 0;

	printf("몇개의 정수를 입력하실건가요?");
	scanf_s("%d", &a);
	while (c < a) {
		printf("%d개 입력하시오(%d번째)", a, c + 1);
		scanf_s("%d", &b);
		c++;
		d += b;
	}
	f = (float)d / a;
	printf("%.1f", f);
}
