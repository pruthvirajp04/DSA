#include<bits/stdc++.h>
using namespace std;
// there are two types in compile time polymorphism
// function overloading first
class foverloading{
public : 
void fun()
{
    cout<<"Func with no argument"<<endl;
}
void fun(int a)
{
    cout<<"Func with integer argument"<<endl;
}
};
// now operator overloading
class opoverloading{
  private :
  public :   
};
int main()
{
    foverloading obj;
    obj.fun(); obj.fun(34);

    return 0;
}