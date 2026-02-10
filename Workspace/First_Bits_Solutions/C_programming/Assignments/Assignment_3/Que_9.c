//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
void main(){
	int n = 1215121,rev,r,original;
	original=n;
	rev = 0;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(original==rev)
		printf("The number is palindrome");
	else
		printf("The number is not palondrome");
}