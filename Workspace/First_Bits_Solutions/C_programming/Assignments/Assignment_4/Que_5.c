//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.
#include<stdio.h>
void main(){
	int choice,no;
	printf("press");
	printf("1.To check number is even or odd.\n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not.\n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number.\n");
	printf("6.To find sum of digits.\n");
    printf("Enter a choice in between 1 to 6 ");
    scanf("%d",&choice);
    printf("Enter a number to perform a operation ");
    scanf("%d",&no);
    if(choice==1){
    	if(no%2==0)
    		printf("Number is even");
		else
			printf("Number is odd");
	}
	else if(choice==2){
		int count;
		int i =1;
		while(i<=no){
			if(no%i==0)
				count++;
		i++;
			
		}
		if(count==2)
			printf("Number is prime ");
		else
			printf("Number in composite");
		
	}
	else if(choice==3){
		int temp,r,rev=0;
		temp = no;
		while(no>0){
			r=no%10;
			rev=rev*10+r;
			no=no/10;
		}
		if(temp==rev)
			printf("The number is palindrome");
		else
			printf("The number is not palindrome");
	}
	else if(choice==4){
		if(no>0)
			printf("The number is positive");
		else if(no<0)
			printf("The number is negative");
		else
			printf("The number is zero");	
	}
	else if(choice==5){
		int rev=0,r;
		while(no>0){
			r=no%10;
			rev= rev*10+r;
			no=no/10;
		}
		printf("The reverse number us %d ",rev);
		
	}
	else if(choice==6){
		int r,sum=0;
		while(no>0){
			r=no%10;
			sum=sum+r;
			no=no/10;
		}
		printf("The sum of digite is %d",sum);
	}
	else
		printf("Invalid choice");
}