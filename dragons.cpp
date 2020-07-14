#include<bits/stdc++.h>
using namespace std;

main()
{
  int n,x;
  int nxt=0;
  cin>>x>>n;
  int a [n][2];

  for(int i=0 ;i<n;i++)
  {
      for(int j=0;j<2;j++)
      {
          cin>>a[i][j];
      }
  }
for (int i=0;i<n;i++)
{
    if(x<a[i][0])
    {
        cout<<"NO";
        return 0;
    }
    x= x+a[i][1];
    if(i==n-1)
    {
        cout<<"YES";
        return 0;
    }

}

}
