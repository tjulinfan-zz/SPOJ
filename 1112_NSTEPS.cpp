#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T --)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x == y || x == y + 2)
        {
            if (x % 2 == 0)
                printf("%d\n", x + y);
            else
                printf("%d\n", x + y - 1);
        }
        else
        {
            printf("No Number\n");
        }
    }
    return 0;
}
