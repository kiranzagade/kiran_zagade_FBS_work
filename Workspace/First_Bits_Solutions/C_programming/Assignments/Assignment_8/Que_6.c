//6. Accept array and print only prime numbers of array.
#include<stdio.h>
void main(){int n;
	printf("Enter a number");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int size = sizeof(arr)/sizeof(int);
	
	for(int i=0;i<size;i++){
		int flag = 0;
		int no=arr[i];
		for(int j=1;j<=no;j++){
			if(no%j==0)
				flag++;
		}
		if(flag==2)
			printf("%d ",arr[i]);
	}

}
