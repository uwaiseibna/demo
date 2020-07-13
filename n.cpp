#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    int sum;
    double count=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double d1=a[0]-0;
    double d2 = d- a[n-1];
    double x= max(d1,d2);
    
    for (int i=1;i<n;i++)
    {
        sum= a[i]-a[i-1];
        if(sum>count)
        {
            count =sum;
        }
    }
    count= double(count/2);
    
    cout<<fixed<<setprecision(10)<<(double)max(x,count);
}