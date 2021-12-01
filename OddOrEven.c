#include <stdio.h>

int main()
{
    int n;
    printf("Find out whether a number is odd or even: ");
    scanf("%d", &n);
    if(n%2 == 0){ // If N divided by 2 results in a remainder of 0, then N is perfectly divisible by 2.
                  // Thus, N is a even number. Even numbers always end with 0, 2, 4, 6, 8 etc...
        printf("%d is even", n);
    }
    else { // Otherwise, N is a odd number. Odd numbers aren't perfectly divisible by 2 and usually end with 1, 3, 5, 7 or 9.
        printf("%d is odd", n);
    }
    return 0;
}
