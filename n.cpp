#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    int sum;
    float count=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    float d1=a[0]-0;
    float d2 = d- a[n-1];
    float x = max(d1,d2);

    for (int i=1;i<n;i++)
    {
        sum= a[i]-a[i-1];
        if(sum>count)
        {
            count =sum;
        }
    }
    
    cout<<max(x,(count/2));
}