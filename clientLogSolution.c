// Name: Nicolas Alvarez II
// Date: 2/8/2024
//Project: Client Log Solution
//Purpose: To input Client information to a text file


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

FILE* fp;

int inputPrompt() {
	char firstName[25];
	char lastName[25];
	char emailAddress[50];
	int continueValue = 0;


	printf("Enter client's first name: ");
	scanf("%s", &firstName);
	printf("Enter client's last name: ");
	scanf("%s", &lastName);
	printf("Enter client's email address: ");
	scanf("%s", &emailAddress);
	fprintf(fp, "First Name: %s\nLast Name: %s\nEmail Address: %s\n\n", firstName, lastName, emailAddress);
	// Prompts and scans user input for client information, prints formatted information in ClientLog.txt

	printf("Continue? 0 for yes 1 for no ");
	scanf("%i", &continueValue);
	//prompts and scans user input to continue or close program

	switch (continueValue) {
	case 0:
		inputPrompt();
		break;
	case 1:
		break;

	default:
		printf("invalid input");
		break;
	}
	// switch statement to continue clientInput or close program
}
int main(void) {
	fp = fopen("ClientLog.txt", "w");

	inputPrompt();

	fclose(fp);
	//opens ClientLog.txt with write command, calls the inputPrompt function, closes ClientLog.txt
}
