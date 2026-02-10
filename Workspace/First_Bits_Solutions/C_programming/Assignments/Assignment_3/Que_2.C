//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
int main(){
	printf("Enter the no ");
	int no;
	scanf("%d",&no);
	int i = 1;
	while(i<=10){
		int mult = no*i;
		printf("%d X %d = %d\n",no,i,mult);
		i++;
	}
}