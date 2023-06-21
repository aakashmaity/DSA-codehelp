// linear search using recursion
#include <iostream>
using namespace std;
bool linearSearch(int arr[],int key,int n)
{
    //base case
    if(n==0)
        return false;
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        int remaining= linearSearch(arr+1,key,n-1);
        return remaining;
    }
        
}
int main() 
{
    int arr[10];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Key:";
    cin>>key;
    if(linearSearch(arr,key,n))
        cout<<"Present";
    else
        cout<<"Not Present";
}
   