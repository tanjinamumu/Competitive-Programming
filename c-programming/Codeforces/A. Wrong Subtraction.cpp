#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    for(i=1; i<=k; i++)
    {
        if(n%10)
        {
            n--;
        }
        else
        {
            n/=10;
        }
    }
    cout<<n<<endl;
}
