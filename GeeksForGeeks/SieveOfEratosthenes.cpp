
#include <iostream>
using namespace std;
void SieveOfEratosthenes(int n)
{
	bool prime[n+1];

   for(int i=0;i<=n;i++)
   {
       prime[i]=true;
   }
	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}
	for (int p=2; p<=n; p++)
	if (prime[p])
    {
       cout << p << " ";
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;

	SieveOfEratosthenes(n);
    }
	return 0;
}
