//With paramaeter.

void numbers(int no){
	int* num=&no;
	printf("Numbers from 1 to 10\n");
	for(int i=1;i<=*num;i++){
		printf("%d ",i);
	}
	
	printf("\n-----------------------------------------------------------------------------\n");
}

void table(int no){
	int* num = &no;
	printf("The table of %d is \n",*num);
	for(int i=1;i<=10;i++){
		int mult = i* *num;
		printf("%d X %d = %d \n",*num,i,mult);
	}
	printf("\n-----------------------------------------------------------------------------\n");
}

void sumofnum(int start,int end){
	printf("The sum of numbers from %d to %d is ",start,end);
	int* s = &start;
	int* e = &end;
	int sum=0;
	for(int i=*s;i<=*e;i++){
		sum = sum+i;
	}
	printf("%d ",sum);
	printf("\n-----------------------------------------------------------------------------\n");
}

void isarmstrong(int no){
	
	int* num = &no;
	printf("Armstrong numbers from 0 to %d are ",*num);
	for(int i=1;i<=*num;i++){
	int temp=i;
	int count=0;
	int sum=0;
	while(temp>0){
		count++;
		temp=temp/10;
	}
	temp=i;
	while(temp>0){
		int rem=temp%10;
		int power=1;
		for(int j=1;j<=count;j++){
			power = power*rem;
		}
		sum=sum+power;
		temp=temp/10;
		
	}
	if(i==sum)
		printf("%d ",i);
	}
	printf("\n-----------------------------------------------------------------------------\n");
}

void isstrong(int no){
	int* num=&no;
	for(int i=1;i<= *num;i++){
		int temp = i;
		int sum=0;
		while(temp>0){
			int rem = temp%10;
			int fact=1;
			for(int j=1;j<=rem;j++){
				fact=fact*j;
				
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
			printf("%d ",i);
	}
	printf("\n-----------------------------------------------------------------------------\n");
}

void main(){
	int no = 1000;
	numbers(10);
	table(5);
	sumofnum(10,20);
	isarmstrong(no);
	isstrong(1000);
}