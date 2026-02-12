//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
void main(){
	int no = 145,r,factorial,temp;
	temp=no;
	int sum = 0;
	
	while(no>0){
		r=no%10;
		factorial=1;
		int i =1;
		while(i<=r){
			factorial=factorial*i;
			i++;
		}
		sum=sum+factorial;
		no=no/10;
	}
	if(sum==temp)
		printf("The number is Strong");
	else
	 	printf("The number is not strong");
	}
