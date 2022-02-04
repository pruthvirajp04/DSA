#include<iostream>
using namespace std;
int isSorted(int arr[],int n)
{
    if(n==1){return 1;}
    int restArr  = isSorted(arr+1,n-1);
    if(arr[0] < arr[1] && restArr)
    {
        return 1;
    }
    else{return 0;}
}
    
int main()
{

        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        } 
        if(isSorted(a,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}