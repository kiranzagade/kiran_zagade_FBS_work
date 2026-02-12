//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
void main(){
	int no = 12345,lno,sum;
	lno=no%10;
	while(no>10){
		no=no/10;
	}
	sum = lno+no;
	printf("The sum of first and last number of a given number is %d",sum);
	
}