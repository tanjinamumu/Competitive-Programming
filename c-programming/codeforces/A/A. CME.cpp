#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    long long n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<"2"<<endl;
        }
        else if(n%2==1)
        {
            cout<<"1"<<endl;
        }
        else if((n%2==0)&&(n>2))
        {
             cout<<"0"<<endl;

        }
    }
    return 0;
}
