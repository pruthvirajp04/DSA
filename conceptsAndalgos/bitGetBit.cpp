#include<iostream>
using namespace std;

int getBit(int num, int pos)
{
  int a  = (1<<pos);
  if((a&num))
  {
    return 1;
  }
  else {
    return 0 ;
  }
}
int main()
{
  
  // 5 = 0101
  // to get the bit pos. of a number
  // take 1 with left shift till the pos. 
  // and make it bitwise and with original no. 
  // 5 = 0101 and 1 = 0001 so 1<<2 = 0100
  // so and of 0101 and 0100 will be 0100 
  // so bit at 2nd pos is set i.e., 1

      int t; cin >>t;
      while(t--)
      {
        
        int n,pos;
        cin >>n>>pos;
        if(getBit(n,pos))
        {
          cout<<"SET HAI BHAI BIT :)"<<endl;
        }
        else{
          cout<<"NOT SET :("<<endl;
        }
      }  // 0101 1000 0001

  
  
  
  
  return 0;
}
