/* str=text
    arr= 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 0 0 0 1 0 0
    output = t 
            
            19+'a'
            19+97
            116
            t
*/

#include<iostream>
using namespace std;
char getmaxoccur(string str)
{
    int n=str.size(),index;
    int arr[26]={0}; //as we have 26 alphabets, so need array of 26 size
    for(int i=0;i<n;i++)
    {
        int ch=str[i];
        
        //lower case char 
        if( (ch>='a' && ch<='z') )
            index=ch-'a'; 
            
        //upper case char
        else
            index= ch-'A'+'a';
        
    arr[index]++; //count 
    }

    //finding highest occurrence value
    int val=0,maxi=0;
    for(int i=0;i<26;i++)
    {
        if(val<arr[i])
        {
            val=arr[i];
            maxi=i;
        }
    }
    return (maxi+'a');  //
}
int main()
{
    string str;
    getline(cin,str);
    char ch=getmaxoccur(str);
    cout<<ch;
}