//2. Print prime numbers in the given range 1 to n.
void main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int num = 1;
    while(num <= n) {
        int i = 1;
        int count = 0;
        while(i <= num) {
            if(num % i == 0) {
                count++;
            }
            i++;
        }
        if(count == 2) {
            printf("%d ", num);
        }
        num++;
    }
}
