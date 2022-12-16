#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char name[500];
    gets(name);
    int c=1;
    for (int i=0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            c++;
    }
    cout<<c<<endl;
    int len= strlen(name);
    cout<<len<<endl;


    return 0;
}
