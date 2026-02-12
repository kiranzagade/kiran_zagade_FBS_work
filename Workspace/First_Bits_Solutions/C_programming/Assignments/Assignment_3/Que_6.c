//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
void main(){
	int no,temp,sum = 0;
	printf("Enter a number ");
	scanf("%d",&no);
	temp = no;
	if(no<=1){
		printf("The number is not perfect");
	}
	else{
		int i =1;
		while(i<=no/2){
			if(no%i==0)
			sum = sum +i;
			i++;
		}
		if(sum==temp)
			printf("The number is perfect");
		else
			printf("The number is not perfect");	
	}
}
	
	