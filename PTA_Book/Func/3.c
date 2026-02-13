#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

void CharPyramid(int n, char ch) {
    /**
     * @brief n: 行数; ch: 字符类型
     * 
     */
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; ++j) {
            printf("%c ", ch);
        }
        printf("\n");
    }
}