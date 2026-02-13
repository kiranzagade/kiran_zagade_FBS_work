//3. Print perfect numbers in the given range 1 to n.
void main(){
	long i,j,no,sum;
    printf("Enter a number = ");
  	scanf("%Dd",&no);
	for(i = 1;i<=no;i++){
		sum = 0;
		for(j = 1;j<=i/2;j++){
			if(i%j==0){
				sum = sum +j;
			}
		}
		if(sum==i&&i!=0){
		printf("%d ",i);
	}
	
	
}
}