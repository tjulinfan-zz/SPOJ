#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int Z(int n)
{
    int ret = 0;
    while (n)
    {
        ret += n / 5;
        n /= 5;
    }
    return ret;
}

int main()
{
    int T;
    cin >> T;
    while (T --)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", Z(n));
    }
    return 0;
}
