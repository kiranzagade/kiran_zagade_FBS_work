//Check the given number is prime or not.
//Input: n = 7
//Output: Prime
void main(){
	int no,count = 0;
	printf("Enter a number = ");
	scanf("%d",&no);
	if(no<=1){
		printf("Not prime");
	}
	else{
		int i = 2;
		while(i<no){
			if(no%i==0)
				count = 1;
		i++;
		}
	}
	if(count==0)
		printf("Prime");
	else
		printf("not prime");
	
}