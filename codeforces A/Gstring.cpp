#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int c=0;
        int l=str.length();
        for(int i=0;i<l;i++)
        {
           if(str[i]>='A' && str[i]<='Z')
           {
               str[i]='a'+(str[i]-'A');
               c++;
           }
           if(str[i]!='a' || str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u')
           {
               c++;
           }

        }

        cout<<str<<endl;
        return 0;
    }

}
