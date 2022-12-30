#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main ()
{
    char s[50000];
    gets(s);
    char k[5000];
    gets(k);
    int m = strcmp(s,k);
    if (m == 0)
    {
        cout<<"string are equal"<<endl;
    }
    else
    {
        cout<<"string are not equal"<<endl;
    }

    return 0;
}
