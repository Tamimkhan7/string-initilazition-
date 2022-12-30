//program hoy na
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int len = s.size();
    for (int i=0; i<len; i++)
    {
        if (s[i]>= '65' && s[i]<= '90' || s[i] >= '97' && s[i] <= '122')
        {
            string ss = string(s[i]+1);
            cout<<ss<<endl;
        }
    }

    return 0;
}
