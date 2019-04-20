#include<iostream>
#include <stdlib.h>
using namespace std;


string isBalanced(string s) {
int k=s.size();
char stack[k-1];

    int top=-1;
    for(int i=0; i<k; i++)
    {
        top++;
        stack[top]=s[i];
        if((stack[top]==')'&&(top-1>=0&&stack[top-1]=='('))||(stack[top]=='}'&&(top-1>=0&&stack[top-1]=='{'))||(stack[top]==']'&&(top-1>=0&&stack[top-1]=='[')))
            top=top-2;
    }
    if(top==-1)
        return "YES";
    else
        return "NO";

}
int main()
{
    string str;
    cout<<"enter"<<endl;
    cin>>str;
    isBalanced(str);
}
