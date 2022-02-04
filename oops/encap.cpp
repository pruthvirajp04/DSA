#include<bits/stdc++.h>
using namespace std;
class A{
    public :
    int a = 32;
    private : int b = 4545;

    protected : int c = 455;
};

    int main()
    {
        A obj;
        cout<<obj.a<<endl;
           
        return 0;
    }


    // here in encapsulation we hide the unnecessary data ... 
    // public  :  data in it can be accessed aywhere inside and outside class and also in the derived classes as well.
    // private : except in the same class we cannot acess it anywhere
    // protected ; we can acess it only in the same class and the derived class but not outside from these two's