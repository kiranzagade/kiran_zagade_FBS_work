//Check the given number is Armstrong number or not..
//Input: n = 153
//1+125+27 = 153
//Output: Armstrong
void main(){
	printf("Enter a number ");
	int n,original,r,sum=0;
	scanf("%d",&n);
	original = n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==original)
		printf("Armsgtrong");
	else
		printf("Not an armstrong");	
	
	
}