//10. Sort the array.

#include<stdio.h>
int main(){
	int arr[10] = {12,32,45,65,78,98,41,36,85,20};
	int size = sizeof(arr)/sizeof(int);
	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
			if(arr[i]>arr[j+1]){
				arr[i] = arr[j+1];
			}
		}
	}
	for(int i = 0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
}