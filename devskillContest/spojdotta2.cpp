#include<bits/stdc++.h>
using namespace std;

struct hero{
  string name;
  int accuracy,speed,stupidity;
};
bool compare(hero a,hero b)
{
    if(a.accuracy==b.accuracy)
    {
        if(a.speed==b.speed)
        {
           if(a.stupidity==b.stupidity)
           {
               return a.name<b.name;
           }
           else
            return a.stupidity<b.stupidity;
        }
        else
            return a.speed>b.speed;
    }
      else
        return a.accuracy>b.accuracy;

}

int main ()
{
    int n;
    cin>>n;
    hero a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].accuracy>>a[i].speed>>a[i].stupidity;
    }
    sort(a,a+n,compare);

   for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<endl;
    }

    return 0;
}
