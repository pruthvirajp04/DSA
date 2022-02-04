#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5 ; int pos = 2;
  int a=  (1<<pos);
  
  cout<<(n^a)<<endl;
  // to clear a bit its very simple algo
  // just xor it with proper left shifted one with that number
  
  return 0;
}
