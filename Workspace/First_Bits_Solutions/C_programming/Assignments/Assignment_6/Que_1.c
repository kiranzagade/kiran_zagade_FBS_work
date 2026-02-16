//void Even_Odd();
void Even_Odd(){

	int no = 1232;
	printf("The number is %d\n",no);
	if(no%2==0){
		printf("Given number is Even ");
	}
	else{
		printf("Given number is Odd");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void palindrome(){
	int FirstNo,LastNo,no = 121;
	printf("The number is %d\n",no);
	FirstNo = no/100;
	LastNo = no%10;
	if(FirstNo==LastNo){
		printf("Given number is palindrome ");
	}
	else{
		printf("Given number is not a palindrome number");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void leap_year_or_not(){
	int year = 2004;
	printf("The year is %d\n",year);
	if(year%4==0&&year%100!=0||year%400==0){
		printf("Given year is leap year");
	}
	else{
		printf("Given year is not a leap year");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void vowel_consonant(){
	char ch = 'h';
	printf("The given character is %c\n",ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	   	printf("Given character is Vowel ");
	}
	else{
		printf("Given character is Consonant ");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void eligible_to_vote(){
	int age = 19;
	printf("The given age  is %d\n",age);
	if(age>=18){
		printf("Yes person is eligible to vote");
	}
	else{
		printf("No person is not eligible to vote");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void uppercase_lowercase(){
	char ch = 'K';
	printf("The given character is %c\n",ch);
    if(ch>='a'&&ch<='z'){
    	printf("Given chaacter is lowercase");
	}
	else{
		printf("Given character is UPPERCASE");
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void salary_basic(){
	int da,ta,hra,BasicSalary = 7000;
	printf("The basic salary is %d\n",BasicSalary);
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
	printf("\n");
	printf("*******************************************************************************************\n");
}


void calculator(){
	int no1 = 10,no2 = 5;
	char op = '%';
	printf("Number 1 = %d\nNumber 2 = %d\nPerform the operation = %c\n",no1,no2,op);
	if(op=='+'){
		int add = no1+no2;
		printf("The addition of the two number is %d",add);
	}else{
		if(op=='-'){
			int sub = no1-no2;
			printf("The Substraction of the two number is %d",sub);
		}else{
			if(op=='*'){
				int mult = no1*no2;
				printf("The Multiplication of the two number is %d",mult);
			}else{
				if(op=='/'){
					float div = no1/no2;
					printf("The Division of the two number is %f",div);
				}else{
					int mod = no1%no2;
					printf("The Reminder of the two number is %d",mod);
				}
			}
		}
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void type_of_triangle(){
	int s1 = 2,
		s2 = 23,
		s3 = 2;
		printf("The given sides\n s1 %d s2 %d se %d \n",s1,s2,s3);
	if(s1==s2&&s2==s3){
		printf("Eqilateral triagnle");
	}else{ 
		if(s1==s2||s2==s3||s3==s1){
			printf("Isoscalen triangle");
		}
		else{
			printf("Scalen triangle");
		}
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void greater_no(){
	int a = 5,b = 81,c = 11;
	printf("The given numbers \n n1 %d n2 %d n3 %d \n",a,b,c);
	if(a>b){
		if(a>c){
			printf("a is greater");
		}
		else{
			printf("c ie greater");
		}
	}
	else{
		if(b>c){
			printf("b is greater");
		}
		else{
			printf("c is greater");
		}
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}


void cal_grade(){
	int marks = 39;
	printf("The given marks are \n",marks);
	if(marks>75)
		printf("Distinction");
	else
		if(marks>65)
			printf("First Class");
		else
			if(marks>55)
				printf("Second Class");
			else
				if(marks>40)
					printf("Pass Class");
				else
					printf("Fail");
	printf("\n");
	printf("*******************************************************************************************\n");
}


void discount(){
	int price = 700;
	char ch = 'n';
	int discount = 0;
	printf("The given price is %d",price);
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
	printf("\n");
	printf("*******************************************************************************************\n");
}


void divisibility(){
		int no = 14;
		printf("The given number is %d\n",no);
	if(no%3==0&&no%5==0)
		printf("Number is divisible by both");
	else
		if(no%3==0)
			printf("The number is divisible by 3 but not by 5");
		else
			if(no%5==0)
				printf("The number is divisible by 5 but not by 3");
			else
				printf("The number is divisible by none");
	printf("\n");
	printf("*******************************************************************************************\n");
}
void age(){
	int age = 11;
	printf("The given age  is %d\n",age);
	if(age<12){
		printf("Child");
	}
	else{
		if(age>=12&&age<=19){
			printf("Teenager");
		}
		else{
			if(age>=20&&age<=59){
				printf("Adult");
			}
			else
			printf("Senior");
		}
	}
	printf("\n");
	printf("*******************************************************************************************\n");
}

void main(){
	Even_Odd();
	palindrome();
	leap_year_or_not();
	vowel_consonant();
	eligible_to_vote();
	uppercase_lowercase();
	salary_basic();
	calculator();
	type_of_triangle();
	greater_no();
	cal_grade();
	discount();
	divisibility();
	age();		
}