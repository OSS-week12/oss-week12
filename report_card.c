#include <stdio.h>

int main() {
	printf("This program print report card.\n");

	int kor = 90;
	int math = 80;
	int eng = 80;
	int sum = (kor + math + eng);
	int avg = sum/3;

	printf("Korean : %d\n", kor);
	printf("Math : %d\n", math);
	printf("English : %d\n", eng);
	printf("Sum : %d\n",sum);
	printf("Average : %d\n",avg);

	return 0;
}
