#include <iostream>
using namespace std;
int main ()
{
    int c=0;
    string str;
    cin>>str;
    int l=str.length();
    for(int i=0;i<(l-1);i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }

}
if(c>=7)
{
    cout<<"YES"<<endl;
}
else
    {
    cout<<"NO"<<endl;
}

return 0;
}
