#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

map<char, int> priority;

int main()
{
    priority['+'] = 1;
    priority['-'] = 2;
    priority['*'] = 3;
    priority['/'] = 4;
    priority['^'] = 5;
    priority['('] = -1;

    int T;
    char s[500];
    cin >> T;
    while (T --)
    {
        vector<char> ans;
        scanf("%s", s);
        stack<char> st;
        for (int i = 0; s[i] != '\0'; ++ i)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                ans.push_back(s[i]);
                continue;
            }
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
                if (s[i] == ')')
                {
                    while (st.top() != '(')
                    {
                        ans.push_back(st.top());
                        st.pop();
                    }
                    st.pop();
                }
                else
                {
                    while (st.size() > 0 && priority[s[i]] <= priority[st.top()])
                    {
                        ans.push_back(st.top());
                        st.pop();
                    }
                    st.push(s[i]);
                }
        }
        while (st.size() > 0)
        {
            ans.push_back(st.top());
            st.pop();
        }
        for (int i = 0; i < ans.size(); ++ i)
            printf("%c", ans[i]);
        printf("\n");
    }
    return 0;
}
