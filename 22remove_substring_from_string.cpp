#include<iostream>
using namespace std;
string RemoveSubstring(string str, string substr)
{
    int n=str.length();
    while(n!=0 && str.find(substr)<n)
    {
        str.erase(str.find(substr) , substr.length() );
    }
    return str;
}
int main()
{
    string str,substr;
    getline(cin,str);
    getline(cin,substr);
    cout<< RemoveSubstring(str,substr);
}


/*string_name.find(substring)
find() function is used to find first occurrence of sub_string from main_string 
erase() function is used to delete that sub_string from main_string
*/