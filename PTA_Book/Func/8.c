#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit ) {
    number = (number > 0 ? number : -number);
    if (number == 0 && digit == 0) {
        return 1;
    }

    // 模 10, 除以 10
    int len = 0;
    while (1) {
        if (number == 0) {
            return len;
        }
        if (number % 10 == digit) {
            ++len;
        }
        number /= 10;
    }
}