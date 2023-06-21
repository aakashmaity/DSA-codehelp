//leetcode 74: https://leetcode.com/problems/search-a-2d-matrix/
#include<iostream>
using namespace std;
int main()
{
    int row,col,target;
        cin>>row>>col>>target;
        int matrix[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                cin>>matrix[i][j];
        }
        int s=0;
        int e=(row*col -1);   //total no of elements
        int mid=(s+e)/2;
        while(s<=e)
        {
            //Find row and col with the value of mid
            int i=mid/col;    // i= row index of matrix 6/(no of cols)=6/4=1
            int j=mid % col;     //// j= coloum index of matrix 6%(no of cols)6%4=2
            int element = matrix[i][j];
            if(element==target)
            {
                cout<<"Present";
                return 1;
            }
            else if( element <target )
            {
                s=mid+1;
            }
            else
                e=mid-1;
            
            mid=(s+e)/2;
        }
        cout<<"Not Present";
    }