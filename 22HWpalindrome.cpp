/* char array = A5?36@6?35a
array is not case sensitive
Ignore others numerics like ?@,;}& etc
array looks like - A536635a
Palindrome
*/

#include <iostream>
using namespace std;
bool valid(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') )
        return 0;
    else
        return 1;
}
char getlower(char ch)
{
    if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        return ch;
    else
        return (ch-'A'+'a');
}
bool palindrome(char str[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if( getlower(str[s])!=getlower(str[e]) )
            return 0;
        else
        {
            s++;
            e--;
            while(valid(str[s]) ==1)
            {
                s++;
            }
            while(valid(str[e]) ==1)
            {
                e--;
            }
        }
    }
    return 1;
}
int getlength(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        count++;
    return count;
}
int main() 
{
    char str[20];
    cin>>str;
    int n=getlength(str);
    cout<<str<<endl;
    int result=palindrome(str,n);
    if(result)
        cout<<"Palindrome";
    else
        cout<<"Not Pilandrome";
}