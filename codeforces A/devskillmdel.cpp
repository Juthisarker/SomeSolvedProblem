#include<iostream>
using namespace std;
int main ()
{
    int n,sf;
    cin>>n;
    while(n--)
    {
        int b,s,g,score1,score2,score3;
        cin>>b>>s>>g;

        score1=(b*10);

        score2=(s*50);

        score3=(g*100);

        sf=score1+score2+score3;
        cout<<sf<<endl;

    }
}
