#include <iostream>
using namespace std;
int increasing(int n, int c)
{
    if (c != n)
    {
        cout << c << " "; 
    }
   else 
    {
        cout<<n<<" "; return 0;
    }
    increasing(n,c+1); return 0;
}
int decreasing(int n, int c)
{
    if (c != 1)
    {
        cout << c << " "; 
    }
   else 
    {
        cout<<"1 "; return 0;
    }
    decreasing(n,c-1); return 0;
}
int main()
{

    int n;
    cin >> n;        
    decreasing(n, n);
    cout << endl;
    return 0;
}