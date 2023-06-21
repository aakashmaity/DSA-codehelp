// Binary search using recursion
#include <iostream>
using namespace std;
// void print(int arr[],int start,int end)
// {
//     for(int i=start;i<=end;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
bool binarySearch(int arr[],int start,int end,int key)
{
    //print(arr,start,end);

    //base case
    if(start>=end)
        return false;
        
    int mid=(start+end)/2;  // s+(e-s)/2
    if(arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
        return binarySearch(arr,start,end,key);
    }
    else      //arr[mid]<key
    {
        start=mid+1;
        return binarySearch(arr,start,end,key);
    }
    
}
int main() 
{
    int arr[20];
    int size,key;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Key:";
    cin>>key;
    int start=0;
    int end=size-1;
    if(binarySearch(arr,start,end,key))
        cout<<"Present";
    else
        cout<<"Not Present";
}
   