#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int isPrime = 0;
    for(int i=2;i<n;i++){
        if(n % i == 0){
            isPrime++;
            break;
        }
    }
    if(isPrime ==0){
        printf("Prime Number");
    }
    else {
        printf("Not Prime Number");
    }
    return 0;
}