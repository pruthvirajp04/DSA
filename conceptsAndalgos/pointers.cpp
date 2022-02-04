#include<bits/stdc++.h>
using namespace std;

void findlog(int *n)
{
  *n = log(*n);
}
int main()
{
  int n=1;
  int *nptr = &n;
    findlog(nptr); cout<<n;
  
  return 0;
}

// pointers stores the memory address of a variable 
// it is useful for pass by reference method 
