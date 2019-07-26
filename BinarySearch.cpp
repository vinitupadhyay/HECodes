#include <iostream>

using namespace std;

int BinarySearch(int arr[], int f, int l, int n)
{
    if(l >= f)
    {
        int mid = f + (l-1) / 2;
        
        if(arr[mid] == n)
        {
            return mid;
        }
        
        if(arr[mid] > n)
        {
            return BinarySearch(arr,f,mid-1,n);
        }
        
        return BinarySearch(arr,mid+1,l,n);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int result = BinarySearch(arr,0,size-1,n);
    
    if(result == -1)
    {
        cout<<"Number is not present"<<endl;
    }
    else
    {
        cout<<"Number is present at : "<<result<<endl;
    }
}
