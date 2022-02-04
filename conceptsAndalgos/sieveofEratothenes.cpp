#include<bits/stdc++.h>
using namespace std;

  // sieve of eratosthenes....
  // the approach here is we just mark all the 
  // elemets from 2 til given no. 
  // mark means the multiples starting from that the no's squares
  // and remaining would be prime from 2 to no
  void isPrime(int n)
  {
    int prime[n+10] = {0};
    for(int i=2;i<=n;i++)
    {
      for(int j=i*i;j<=n;j+=i)
      {
        prime[j] = 1;
      }
    }
    for(int z=2;z<=n;z++)
    {
      if(prime[z] == 0)
      {
        cout<<z<<" ";
      }
    }
    cout<<endl;
  }
int main()
{ int t;
  cin >>t;
  while(t--)
  {
  int n;
  cin >>n;
    isPrime(n);
  }
  
  return 0;
}
