// Leetcode 48 : https://leetcode.com/problems/rotate-image/
//segmentation fault
#include <iostream>
#include<string>
using namespace std;
int main()
{
    int matrix[4][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    //Indexing of Matrix
    // int m=matrix.length();
    // int n=matrix[0].length();
    
    int Astrow=0; //Astrow means startingRow of matrix 
    int Astcol=0;
    int Aendrow=4;
    int Aendcol=4;
    
    int Result[4][4];
    int Rrow,Rcol;
    int Rindex;
    
    int count=0;
    while(count<4)
    {
        Rindex=Astcol;
        for(int index=Aendrow;index>Astrow;index--)
            Result[Rrow][Rindex++]=matrix[index][Astcol];
        Aendrow--;
        Rrow++;
        Astcol++;
        
        
        Rindex=Astrow;
        for(int index=Astcol;index<Aendcol;index--)
            Result[Rindex++][Rcol]=matrix[Astrow][index];
        Astrow--;
        Rcol++;
        Astcol++;
        
        
        count++;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            cout<<Result[i][j]<<" ";
        cout<<endl;
    }
}