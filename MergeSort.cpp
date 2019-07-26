#include <iostream>

using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid  = (s+e)/2;
    
    int temp[100];
    
    int i=s;
    int j=mid+1;
    int k=s;
    
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    
    
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    
    while(j<=e)
    {
        temp[k++]=arr[j++];
    }
    
    for(int l = s; l<=e; l++)
    {
        arr[l] = temp[l];
    }
}

void MergeSort(int *arr, int s, int e)
{
    int mid  = (s+e)/2;
    
    if(s>=e)
    {
        return;
    }
    
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    
    Merge(arr,s,e);
}

int main()
{
    int arr[] = {9,1,2,6,4,7,8,3,5};
   
    int size = sizeof(arr)/sizeof(arr[0]);
    
    MergeSort(arr,0,size-1);
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
