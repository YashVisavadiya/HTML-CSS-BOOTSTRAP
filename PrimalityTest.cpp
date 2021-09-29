#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],j=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                a[j]=i;
                j++;
            }
        }

        if(j==2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
