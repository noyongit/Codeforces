#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
    return 0;
}
