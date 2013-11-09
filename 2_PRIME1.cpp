#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

const int MAXN = 100000;
int pNum;
bool isprime[MAXN + 10];
long long prime[MAXN + 10];

int seive(int n)
{
    int p = 0;
    memset(isprime, 1, sizeof(isprime));
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= n; ++ i)
    {
        if (isprime[i])
            prime[p ++] = i;
        for (int j = 0; j < p && (long long)i * prime[j] <= n; ++ j)
            isprime[i * prime[j]] = false;
    }
    return p;
}

bool is_prime(int n)
{
    int i = 0;
    while (prime[i] * prime[i] <= n)
    {
        if (n % prime[i] == 0)
            return false;
        i ++;
    }
    if (n > 1)
        return true;
}

int main()
{
    pNum = seive(MAXN);
   // cout << pNum << endl;
    int T;
    cin >> T;
    while (T --)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; ++ i)
            if (is_prime(i))
                printf("%d\n", i);
        if (T > 0)
            printf("\n");
    }
    return 0;
}
