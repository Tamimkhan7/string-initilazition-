#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main ()
{
    char name[100000], name2[50000];
    gets(name);
    gets(name2);

    strcat(name, name2);
    cout<<name<<endl;

    return 0;
}
