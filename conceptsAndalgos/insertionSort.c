//PRUTHVIRAJ PATIL
#include<stdio.h>
int main()
{ int n;
  scanf("%d",&n);
    //Take the number of elements in array 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } //Take input of the array elements
    for(int i=0;i<n;i++)
    {
        int current = arr[i];
        int temp = i-1;
        while(temp>=0 && arr[temp]>current)
        {
            arr[temp+1]=arr[temp];
            temp--;
        }
        arr[temp+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}