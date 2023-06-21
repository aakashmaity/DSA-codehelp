void merge(vector<int>& arr,int start,int end)
{
    int mid=(start+end)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    //creating two array 
    int *first=new int[len1];
    int *second=new int[len2];

    //copying main arr to first and second
    //first
    int k=start;
    for(int i=0;i<len1;i++)
        first[i]=arr[k++];

    //second
    k=mid+1;
    for(int i=0;i<len2;i++)
        second[i]=arr[k++];

    //marging 2 sorted array and store in arr
    int index1=0,index2=0;
    k=start;
    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
            arr[k++]=first[index1++];
        else
            arr[k++]=second[index2++];
    }
    
    while(index1<len1)
    {
        arr[k++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[k++]=second[index2++];
    }
}

void function_mergesort(vector<int>& arr,int start,int end)
{
    //base case
    if(start>=end)
        return ;


    int mid=(start+end)/2;

    //left part
    function_mergesort(arr,start,mid);
    //right part
    function_mergesort(arr,mid+1,end);

    //marge 2 sorted array
    merge(arr,start,end);
}



void mainfunction(vector < int > & arr, int n) {

    function_mergesort(arr,0,n-1);
}