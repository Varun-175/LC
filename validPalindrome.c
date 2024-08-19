#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s) {
    int first = 0;
    int last = strlen(s) - 1;

    while (first < last) {
        
        while (first < last && !isalnum(s[first])) {
            first++;
        }
        
        while (first < last && !isalnum(s[last])) {
            last--;
        }
        
        if (tolower(s[first]) != tolower(s[last])) {
            return false;
        }
        
        first++;
        last--;
    }

    return true;
}

int main() {
    char s1[100] ;
    printf("Enter teh string: ");
    gets(s1);
    printf("Is \"%s\" a palindrome? %s\n", s1, isPalindrome(s1) ? "true" : "false");

    return 0;
}
