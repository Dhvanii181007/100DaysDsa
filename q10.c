#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    
    return 1;
}

int main() {
    char s1[200];
    printf("enter the string:");
    scanf("%s",s1);

    if(isPalindrome(s1)){
        printf("%s is a palindrome\n", s1);
    }else {
        printf("%s is NOT a palindrome\n", s1);
    }
   
    return 0;
}