void main(){
	int temp,a = 5,b = 2;
	printf("The original values is \n a = %d\n b = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("The swapping is \n a = %d \n b = %d ",a,b);
}