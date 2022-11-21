#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, f=-1;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            f=i;
            break;
        }
    }
    if(f>=0)
    {
        cout<<f<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
