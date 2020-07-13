#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    int sum;
    int count=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n-1;i++)
    {
        sum=a[i+1]-a[i];
        if(sum>count)
        {
            sum=count;
        }
    }
    cout<<count;

}