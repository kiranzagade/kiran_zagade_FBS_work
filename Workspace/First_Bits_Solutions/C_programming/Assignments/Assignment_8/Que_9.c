//9. Reverse the given array.

#include<stdio.h>
void main(){
	int arr[12] = {12,23,45,56,78,89,32,21,65,54,98,87};
	int brr[12];
	int size = sizeof(arr)/sizeof(int);
	int sizeb = sizeof(brr)/sizeof(int);
	for(int i=0;i<size;i++){
		brr[i] = arr[size-1-i];
		
	}
	for(int i = 0;i<sizeb;i++){
		printf("%d ",brr[i]);
}
}