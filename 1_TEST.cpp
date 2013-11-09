#include <iostream>
using namespace std;

int main()
{
    int n;
    bool should_output = true;
    while (cin >> n)
    {
        if (n == 42)
            should_output = false;
        if (should_output)
            cout << n << endl;
    }
    return 0;
}
