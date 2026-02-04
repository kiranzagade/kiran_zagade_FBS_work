//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
void main(){
	int da,ta,hra,BasicSalary = 7000;
	if(BasicSalary<=5000){
		da = BasicSalary * 0.10;
		ta = BasicSalary * 0.20;
		hra = BasicSalary * 0.25;
	}
	else{
		da = BasicSalary * 0.15;
		ta = BasicSalary * 0.25;
		hra = BasicSalary * 0.30;
	}
	int total = BasicSalary+da+ta+hra;
	printf("basic salary is %d",BasicSalary);
	printf("\nDA is %d",da);
	printf("\nTA is %d",ta);
	printf("\nHRA is %d",hra);
	printf("\nTotal salary is %d",total);
	
}