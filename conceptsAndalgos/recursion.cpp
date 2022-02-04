#include<iostream>
using namespace std;
int sumtillone(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevSum = sumtillone(n-1);
    return n + prevSum;
    // here the function calling itself again n again till the base confition isn't reached ....base cond. is mandatory to avoid an infinite loop...
}
int factOfn(int n)
{
    if(n == 1)
    {return 1;}
    int prevPro = factOfn(n-1);
    return (n*prevPro);
    // here again the function calling itself to continue the multipliaction....
}
int power(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    int prevnum = power(x,n-1);
    return x*prevnum;
}
int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    } 
    if(n==1) {return 1;}
    return( fibo(n-1) + fibo(n-2));

}
int main()
{
        int n;
        cin >> n;

        // cout<<sumtillone(n)<<endl;
        //cout<<factOfn(n)<<endl;
       // cout<<power(11,2)<<endl;
    cout<<fibo(n)<<endl;
        // 0 1 1 2 3 5 8 13

    return 0;
}