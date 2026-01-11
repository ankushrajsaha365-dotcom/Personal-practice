#include <stdio.h>

// Function to reverse the number
int rev(int n) {
    int rev = 0, rem;
    
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    
    return rev;
}

// Function to check if the number is a palindrome
int isPalindrome(int n) {
    if (n == rev(n)) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int n;

    
    printf("Enter a number: ");
    scanf("%d", &n);
       
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

return 0;
}