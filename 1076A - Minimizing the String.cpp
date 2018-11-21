// Author : Mosiur Rahman Sweet 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string s;
    cin >> s;

    int pos=num-1;

    for(int i=1; s[i]; i++)
    {
        if(s[i-1]>s[i])
        {
            pos = i-1;
            break;
        }

    }

    for(int i=0; s[i]; i++)
    {
        if(pos != i)
            cout << s[i];
    }
    cout << endl;

    return 0;
}
