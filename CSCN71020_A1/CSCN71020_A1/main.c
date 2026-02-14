#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum = 0;

	while (1) {
		printf("Enter operation number: ");
		scanf_s("%d", &inputNum);

		if (inputNum == 1) {
			add();
			break;
	}
		else if (inputNum == 2) {
			subtract();
			break;
	}
		else {
			printf("Invalid input.\n");
	}

}
	return 0;

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);

}