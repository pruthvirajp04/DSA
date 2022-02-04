#include<iostream>
using namespace std;

int setBit(int num,int pos)
{
  int a = (1<<pos);
  // example of 4 = 0100
  
  // 1<<1 = 0010
  return (a | num);
}
int main()
{
  // now set bit means we have to set a bit 
  // at a given pos or have to put 1 over there
  int t;
  cin >>t;
  while(t--)
  {
    int n , pos;
    cin >>n >> pos;
    
    // so the logic here is to bitwise or that no.
    // with 1 (left shifted 1)
    cout<<setBit(n,(pos-1))<<endl;
  }
  
  
  

  return 0;
}
