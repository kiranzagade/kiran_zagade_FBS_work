//1. Find minimum and maximum number in array.
#include<stdio.h>
void main(){
	int arr[7]={12,75,26,41,63,6,95};
	int size=sizeof(arr)/sizeof(int);
	int min = arr[0];
	int max = arr[0];
	
	for(int i=1;i<size;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	for(int i=1;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("%d \n",min);
	printf("%d ",max);
}