#include<stdio.h>
//week 7 grade A
int length(char* ptr)
{
    int count = 0;
    while(*ptr != '\0'){
        ptr++;
        count++;
    }
    return count;
}

int main(){
    char arr[100];
    scanf("%s", arr);
    char* ptr;
    ptr = arr;
    int len = length(ptr) - 1;
    int i = 0;
    while(i < length(ptr) / 2 && len != 0){
        if(arr[i] != arr[len]){
            printf("Not Palindrome");
            return 0;
        }
        i++;
        len--;
    }
    printf("Palindrome");

    return 0;
}