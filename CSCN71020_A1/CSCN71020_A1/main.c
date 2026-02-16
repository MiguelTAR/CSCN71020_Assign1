#include <stdio.h>
// Function prototypes
void printWelcomeMenu();
void printOptions(); 
void add();


void main() {
//Print the welcome menu and options
	printWelcomeMenu();

	printOptions();

	int inputNum = 0;

/* Keep asking the user for an operation number
unti they enter the valid option(1 or 2)*/	
	while (1) {
		//Prompt user for operation choice
		printf("Enter operation number: ");
		scanf_s("%d", &inputNum);
//check what operation the user picked
		if (inputNum == 1) {
			add();// add function
			break;// Exit loop after valid input
	}
		else if (inputNum == 2) {
			subtract();// subtract function
			break;// Exit loop after valid input
	}
		else {
			/* If the user enters anything else, like for example #>2
	then have the program show an error message and ask again. 
	*/
			printf("Invalid input.\n");
	}

}
	return 0;

}
//Print the welcome menu
void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}
//Print the options menu
void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}
// Function to perform addition
void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);

}
// Function to perform subtraction
/* Performs subtraction of two numbers */
void subtract() {
    double num1, num2, result;

    /* Ask user for two numbers */
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);

    printf("Enter the second value: ");
    scanf_s("%lf", &num2);

    /* Perform subtraction */
    result = num1 - num2;

    /* Display result */
    printf("%lf - %lf = %lf\n", num1, num2, result);


}