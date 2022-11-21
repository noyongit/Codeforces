#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, f=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int a[i];
        cin>>a[i];
        f+=a[i];
    }
    f = abs(f);
    cout<<f<<endl;
    return 0;
}
