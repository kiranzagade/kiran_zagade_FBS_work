//8. Merge two arrays.
#include<stdio.h>
void main(){
	int arr[5] = {10,20,30,40,50};
	int brr[5] = {60,70,80,90,100};
	int crr[10];
	int sizea = sizeof(arr)/sizeof(int);
	int sizeb = sizeof(brr)/sizeof(int);
	int sizec = sizeof(crr)/sizeof(int);
	for(int i = 0;i<sizea ;i++){
		crr[i] = arr[i];
		crr[i+sizea] = brr[i];
	}
	for(int i = 0;i<sizeb;i++){
		crr[i+sizea] = brr[i];
	}
	for(int i=0;i<sizec;i++){
		printf("%d ",crr[i]);
	}
}