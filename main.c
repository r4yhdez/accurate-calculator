/* Accurate calculator made by Aditya.Wnc. Free for everyone.
 10:47Pm indonesia west jawa, 12/23/2024 */


#include <stdio.h>

int main() {
	int Input1,Input2,Result; //varibale for input user and result
	char Operation; // Operation Aritmatik +-*/
	int Validation1, Validation2, ValidResult; // form Validasion
	
	
	//user interface
	printf(" Accurate calculator made by Aditya.Wnc. Free for everyone and open scoure\n");
	printf("\n"); // make a space
	scanf("%d", &Input1); // take user input to variable
	getchar();
	scanf("%c", &Operation);
	scanf("%d", &Input2); 
	
	//logic 
	switch (Operation) {
		case '+': //operation aritmatik 
		Result = Input1 + Input2;
		break;
		
		case '-': 
		Result = Input1 - Input2;
		break;	
		
		case '*': 
		Result = Input1 * Input2;
		break;	
		
		case '/': 
		if (Input1 == 0 && Input2 == 0) {
			printf("\n can't buddy");
		} else {
			Result = Input1 / Input2;
		}
		break;	
		
		case '%': 
		Result = Input1 % Input2;
		break;	
		
		default:
			printf("you have to enter artimatic operations :)");
						
	}
	
	// validation 
	 Validation1 = Input1; // take a value forrm input
	 Validation2 = Input2;
	 
	 	switch (Operation) {
		case '+': //operation aritmatik 
		ValidResult = Validation1 + Validation2;
		break;
		
		case '-': 
	    ValidResult = Validation1 - Validation2;
		break;	
		
		case '*': 
	    ValidResult = Validation1 * Validation2;
		break;	
		
		case '/': 
		if (Validation1 == 0 && Validation2 == 0) {
			printf("\n can't buddy");
		} else {
			ValidResult = Validation1 / Validation2;
		}
		break;	
		
		case '%': 
		ValidResult = Validation1 % Validation2;
		break;	
		
		default:
			printf(" ");
						
	}
	
	//logic 2
	if (ValidResult == Result) {
		printf("%d", Result);
	}else {
		printf("how can it be wrong?? you entered the wrong input.. or if it still errors contact my instagram @aditya.wnc");
	}
	 
	return 0;
	
	//Made by Humans for Humans
}
