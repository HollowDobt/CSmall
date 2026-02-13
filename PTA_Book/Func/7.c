#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int x) {
    x = (x > 0 ? x : -x);
    if (x == 1) {
        return 0;
    } else if (x == 2) {
        return 1;
    } else if (x == 3) {
        return 1;
    } else {
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int PrimeSum(int m, int n) {
    int sum = 0;
    for (int i = m; i <= n; ++i) {
        if (prime(i)) {
            sum += i;
        }
    }
    
    return sum;
}