#include <stdio.h>
//calculate the grade from the input
    int main () {
        int n;
        scanf("%d", &n);
        if(n >= 80 ) {
            printf("A");
        }
        else if(n >= 70){
            printf("B");
        }
        else if(n >= 60){
            printf("C");
        }
        else if(n >= 50){
            printf("D");
        }
        else printf("F");
        return 0;
    }