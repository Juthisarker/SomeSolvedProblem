#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,l;
  double max_dis,res=0,diff=0,start_point,end_point;
  cin>>n>>l;
  int ar[n];
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
  }
  sort(ar,ar+n);
    for(int i=0;i<n-1;i++)
  {
     diff=ar[i+1]-ar[i];
     if(diff>=res)
     {
         res=diff;
     }
  }
  max_dis=res/2;

  start_point=ar[0];

  if(start_point>=max_dis)
  {
     max_dis= start_point;
  }
  end_point=l-ar[n-1];

 if(end_point>=max_dis)
  {
     max_dis= end_point;
  }
cout.precision(10);
cout <<fixed << max_dis<< endl;

}
