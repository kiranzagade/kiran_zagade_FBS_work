//Print strong numbers in the given range 1 to n.
#include<stdio.h>
void main(){
 	long no,r;
 	printf("Enter a number ");
 	scanf("%d",&no);
 	int i = 1;
	while(i<=no){
		int temp=i;
		int sum=0;
		while(temp>0){
			int r=temp%10;
			int fact = 1;
			for(int j =1;j<=r;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
			printf("%d ",i);
	i++;
}
	
	
	
}