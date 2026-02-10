//Find factorial of given number.
//Input: n = 5
//Output: 120
void main(){
	printf("Enter a number ");
	int n,factorial;
	scanf("%d",&n);
	factorial = 1;
	int i = 1;
	while(i<=n){
		factorial = factorial*i;
		i++;
	}
	printf("Factorial is %d",factorial);
}