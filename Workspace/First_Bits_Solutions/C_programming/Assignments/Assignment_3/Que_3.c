//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
void main(){
	int sum = 0;
	int i = 1;
	while(i<=5){
		sum = sum+i;
		i++;
	}
	printf("Sum of numbers from 1 to 5 is %d",sum);
}