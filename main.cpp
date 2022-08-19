#include <iostream>
#include <vector>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool IsPalindrome(string s)
{
    int length = s.length();
    for (int i = 0; i < (length / 2); i++)
    {
        if (s[i] != s[length - (i + 1)])
            return 0;
    }
    return 1;
}

int main()
{
    fastread();
    string s;
    cin >> s;
    if (IsPalindrome(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
