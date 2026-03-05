//3. Find sum of all numbers.
#include<stdio.h>
int main(){
	int arr[5] = {12,85,69,36,45};
	int size = sizeof(arr)/sizeof(int);
	int sum = 0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("%d ",sum);
}