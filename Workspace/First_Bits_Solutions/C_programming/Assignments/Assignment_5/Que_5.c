//Print an inverted pyramid pattern
//Input: n = 5
//Output:
//
//* * * * *
// * * * *
//  * * *
//   * *
//    *
void main(){
	int n = 5;
	for(int i = n;i>=1;i--){
		for(int j = 1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}