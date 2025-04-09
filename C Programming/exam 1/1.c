// a 수열에서 항 순번을 입력하여 출력하는 프로그램을 반복문을 이용하여 작성하라.
// a(1) = 2, a(n+1) = 3*a(n) -1 ( a(n)은 수열의 n항 )
// 실행 예시 : 몇 번째 항을 출력하시겠습니까? 5 <enter> => a(5) = 122
// 2, 3*2-1, 3*(3*2-1)-1, 3*(3*(3*2-1)-1)-1 순

#include <stdio.h>

int an (int n) 
{
    int a = 2;
    for (int i = 1; i < n; i++)
    {
        a = a*3 -1;
    }
    return a;
}

int main (void) 
{
    int n;
    printf("몇 번째 항을 출력하시겠습니까? ");
    scanf("%d", &n);
    printf("a(%d) = %d", n, an(n));

    return 0;
}
