//Print alternate elements in array.

#include<stdio.h>
void main(){
	int arr[10] = {12,36,45,75,96,53,14,24,59,39};
	int size = sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i=i+2){
		printf("%d ",arr[i]);
		
	}
}