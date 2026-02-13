//Print strong numbers in the given range 1 to n.
#include <stdio.h>

void main() {
    int no;
    printf("Enter a number ");
    scanf("%d", &no);
    int num = 1;
    while(num <= no) {
        int temp = num;
        int count = 0;
        while(temp > 0) {
            count++;
            temp = temp / 10;
        }
        temp = num;
        int sum = 0;
        while(temp > 0) {
            int r = temp % 10;
            int power = 1;
            int i = 1;
            while(i <= count) {
                power = power * r;
                i++;
            }
            sum = sum + power;
            temp = temp / 10;
        }
        if(sum == num) {
            printf("%d ", num);
        }
        num++;
    }
}
