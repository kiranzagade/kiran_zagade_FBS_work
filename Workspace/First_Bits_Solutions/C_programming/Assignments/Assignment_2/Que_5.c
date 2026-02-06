//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

void main(){
	int price = 700;
	char ch = 'n';
	int discount = 0;
	if(ch=='y'){
		if(price>500){
			discount = price*0.20;
			printf("Discount is %d ",discount);
		}
		else{
			discount = price*0.10;
			printf("Discount is %d ",discount);
		}
	}
	else{
		if(price >600){
			discount = price*0.15;
			printf("Discount is %d ",discount);
		}
		else{
			printf("No disount ");
		}
	}
	printf("\nThe actual price is %d\nFinal price is %d",price,price-discount);
}