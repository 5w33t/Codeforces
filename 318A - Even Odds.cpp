
/// Author: Mosiur Rahman Sweet

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num,nth,part;
    cin >> num;
    cin >> nth;
    if(num&1)
        part = num/2+1;
    else
        part = num/2;

    if(part>=nth)
        cout << 2*nth-1 << endl;
    else
        cout << 2*(nth-part) << endl;
    return 0;
}
