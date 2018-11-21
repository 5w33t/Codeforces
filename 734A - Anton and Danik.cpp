/// Author: Mosiur Rahman Sweet

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string s;
    cin >> s;
    int anton=0,danik=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='A') anton++;
        else danik++;
    }

    if(anton>danik)
        cout << "Anton" << endl;
    else if(anton<danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
