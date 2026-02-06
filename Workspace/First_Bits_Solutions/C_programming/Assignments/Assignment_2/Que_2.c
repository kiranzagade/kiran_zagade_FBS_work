//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
void main(){
	int s1 = 2,
		s2 = 23,
		s3 = 2;
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
}