#include<stdio.h>
int main() {
    int a,sum,cnt = 0;
    while (1) {
        printf("Enter Number : ");
        scanf("%d" ,&a);
        if (n <= 0) {
            break;
        } 
        sum += a;
        cnt++;
    }
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",((float)sum/cnt));
    return 0;
}