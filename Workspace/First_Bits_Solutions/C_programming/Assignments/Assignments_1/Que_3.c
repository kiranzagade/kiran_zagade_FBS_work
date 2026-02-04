//Write a program to check whether a given year is a leap year.
void main(){
	int year = 2004;
	if(year%4==0&&year%100!=0||year%400==0){
		printf("Given year is leap year");
	}
	else{
		printf("Given year is not a leap year");
	}
}