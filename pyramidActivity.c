#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int space = 2*n - 2;
    int star = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("* ");
        }
        printf("\n");
        space -= 2;
        star += 2;
    }
    int space2 = 2;
    int star2 = 2*n - 3;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<space2;j++){
            printf(" ");
        }
        for(int k=0;k<star2;k++){
            printf("* ");
        }
        printf("\n");
        space2+=2;
        star2-=2;
    }
    return 0;
}