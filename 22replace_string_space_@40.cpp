/*
string = my name is akash
output=  my@40name@40is@40akash
*/
//TC=O(n)   SC=O(n)
/*
#include<iostream>
using namespace std;
string replaceSpace(string str,int n)
{
    string temp="";
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
            temp.push_back(str[i]);
    }
    return temp;
}
int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<replaceSpace(str,n);
}
*/

//TC=O(n)   SC=O(1)
#include<iostream>
using namespace std;
void move(string str)
{

}
string replaceSpace(string str,int n)
{
    int i=0;
    while(i<n)
    {
        if(str[i]==' ')
        {
            
            str[i]="@";   
            str[i+1]="4";            
            str[i+2]="0";            
            i=i+3;
        }
        else
            i++;
    }
    return str;
}
int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<replaceSpace(str,n);
}

