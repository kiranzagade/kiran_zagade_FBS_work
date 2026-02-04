//Write a program to check given 3 digit number is pallindrome or not.
void main(){
	int FirstNo,LastNo,no = 121;
	FirstNo = no/100;
	LastNo = no%10;
	if(FirstNo==LastNo){
		printf("Given number is palindrome ");
	}
	else{
		printf("Given number is not a palindrome number");
	}
}