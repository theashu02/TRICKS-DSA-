#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;  cin >> n1;
    string s;  cin >> s;
    string t;  cin >> t;
    int arr_s[26] = {0};   // initialize the array for the char
    int arr_t[26] = {0};
    int is = 0;  int it = 0;
    for (auto ch : s)
    {
        is = ch - 'a';    // converting char to int
        arr_s[is]++;      // filled in array
    }
    for (char ch : t)
    {
        it = ch - 'a';    // converting char to int
        arr_t[it]++;      // filled in array
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr_s[i] << " "; 
    }
    cout << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << arr_t[i] << " ";
    }

    return 0;
}