#include<iostream>
using namespace std;
class matrix
{
    public :
        int mat[3][3],add;
    matrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               cout<<"Enter the element for row "<<i<<" and coloumn "<<j<<" : ";
               cin>>mat[i][j]; 
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               add+=mat[i][j];
            }
        }
        cout<<"The of the elements in matrix ="<<add;
    }
};

int main(void)
{
    matrix a;
    
}