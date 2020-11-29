int main() {
	printf("This program print report card.\n");

	int kor = 90;
	int math = 80;
	int eng = 80;
	int his = 100;
	int sum = (kor + math + eng + his);
	int avg = sum/4;

	printf("Korean : %d\n", kor);
	printf("Math : %d\n", math);
	printf("English : %d\n", eng);
	pirntf("History : %d\n", his);
	printf("Sum : %d\n", sum);
	printf("Average : %d\n", avg);

	return 0;
}
