//2. Search the given number in array.
#include<stdio.h>
void main(){
	int arr[10] = {12,23,45,56,78,89,32,95,48,25};
	int search = 25;
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++){
		if(search==arr[i]){
			printf("The given number is %d at the index %d ",search,i);
		}
	}
}