#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main ()
{
    char name[100000], name2[50000];
    gets(name);
    gets(name2);

    if (strcmp(name, name2)==0)
    {
        cout<<"String are equal "<<endl;
    }
    else
    {
        cout<<"String are not equal" <<endl;
    }

    return 0;
}
