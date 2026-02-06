//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
int main(){
	int no1 = 10,no2 = 5;
	char op = '%';
	printf("Number 1 = %d\nNumber 2 = %d\nPerform the operation = %c\n",no1,no2,op);
	if(op=='+'){
		int add = no1+no2;
		printf("The addition of the two number is %d",add);
	}else{
		if(op=='-'){
			int sub = no1-no2;
			printf("The Substraction of the two number is %d",sub);
		}else{
			if(op=='*'){
				int mult = no1*no2;
				printf("The Multiplication of the two number is %d",mult);
			}else{
				if(op=='/'){
					float div = no1/no2;
					printf("The Division of the two number is %f",div);
				}else{
					int mod = no1%no2;
					printf("The Reminder of the two number is %d",mod);
				}
			}
		}
	}
	
	
}