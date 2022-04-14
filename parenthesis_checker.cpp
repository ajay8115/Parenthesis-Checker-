// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

bool ispar(string s)
{
    int n = s.size();
    stack<char> st;
    char c;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        if (st.empty())
        {
            return false;
        }

        switch (s[i])
        {
        case '}':
            c = st.top();
            st.pop();
            if (c == '(' or c == '[')
            {
                return false;
            }

            break;

        case ']':
            c = st.top();
            st.pop();
            if (c == '(' or c == '{')
            {
                return false;
            }

            break;

        case ')':
            c = st.top();
            st.pop();
            if (c == '[' or c == '{')
            {
                return false;
            }

            break;
        }
    }

    if (st.empty())
    {
        return true;
    }

    return false;
}