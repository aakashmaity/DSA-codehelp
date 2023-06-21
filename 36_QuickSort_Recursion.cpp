#include <bits/stdc++.h>
int partition(vector<int>& arr ,int s,int e)
{
    int pivot=arr[s];

    //counting no. of smaller element than pivot
    int count=0;
    for(int i=s+1;i<=e;i++)  //pivot ke next se start karo check karna  
    {
        if(arr[i]<=pivot)
            count++;
    }
    //placing pivot into right place
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);

    // |<pivot| pivot |>pivot|,Arranging array laft and right part
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void Quick_sort(vector<int>& arr ,int s,int e)
{
    //base case
    if(s>=e)
        return;

    //taking element
    int p=partition(arr,s,e);

    //recursion call
    Quick_sort(arr,s,p-1);  //left
    Quick_sort(arr,p+1,e);  //right
}
vector<int> mainfunction(vector<int>& arr)
{
    int n=arr.size();
    
    Quick_sort(arr,0,n-1);
    return arr;
}
