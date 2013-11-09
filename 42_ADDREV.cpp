#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int reverse_num(int n)
{
    int ret = 0;
    while (n)
    {
        ret = ret * 10 + n % 10;
        n /= 10;
    }
    return ret;
}

int main()
{
    int T;
    cin >> T;
    while (T --)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        a = reverse_num(a);
        b = reverse_num(b);

        a += b;
        printf("%d\n", reverse_num(a));
    }
    return 0;
}
