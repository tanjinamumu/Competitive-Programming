#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<s.size();j++ )
        {
            if((s[j]=='B')&&(s[j+1]=='G'))
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
