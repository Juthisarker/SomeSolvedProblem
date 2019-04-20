#include <iostream>
using namespace std;
int main()
{
    string str;
     getline(cin, str);
     if(str[0]>='A' && str[0]<='Z')
     {
      cout<<str<<endl;

     }
     else
     {
         str[0]='A'+(str[0]-'a');
          cout<<str<<endl;
     }

}
