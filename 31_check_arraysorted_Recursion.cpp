
#include<bits/stdc++.h>
using namespace std;
int isarrsorted(int arr[],int index,int size)
{
    if(index==size-1)
    {
        //cout<<"end"<<endl;
        return 1;
    }
    int result = isarrsorted(arr,index+1,size);

    int ans= result & (arr[index]<=arr[index+1]);   //1 & 1= 1........1 & 0= 0
    //cout <<ans<<endl;
    return ans;
}
int main() {
    // Write C++ code here
    int arr[]={2,4,1,9,9,10};
    int n=sizeof(arr)/sizeof(int);
    int ans= isarrsorted(arr,0,n);
    cout<<ans;
}