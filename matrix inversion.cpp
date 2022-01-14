#include <iostream>
using namespace std;

int cofactor(int data[][3],int x,int y)
{
    int cofactor_v;

    cofactor_v = data[(x + 1) % 3][(y + 1) % 3]
        * data[(x + 2) % 3][(y + 2) % 3]
        - data[(x + 1) % 3][(y + 2) % 3]
        * data[(x + 2) % 3][(y + 1) % 3];

    return cofactor_v;
}

int main()
{
    cout<<"Consider A*B=X where B matrix is to be determined\n";
    int matrix1[3][3];
    cout<<"Enter the elements of A matrix\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>matrix1[i][j];

    int mat[3];
    cout<<"Enter the elements of X matrix\n";
    for(int q=0;q<3;q++)
        cin>>mat[q];
    int determinant=0;
    for(int i = 0; i < 3; i++)
		{determinant = determinant + (matrix1[0][i]*(matrix1[1][(i+1)%3]*matrix1[2][(i+2)%3] - matrix1[1][(i+2)%3]*matrix1[2][(i+1)%3])); }
    cout<<"Determinant Value: "<<determinant<<endl;;

    cout<<"Transpose matrix\n";
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[j][i] = matrix1[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<"Cofactor matrix\n";
    int cofactor_matrix[3][3];

    for(int h=0;h<3;h++)
    {
        for(int g=0;g<3;g++)
        {
            cofactor_matrix[h][g]= cofactor(matrix,h,g);
            cout<<cofactor_matrix[h][g]<<" ";
        }
        cout<<endl;
    }

    cout<<"After matrix multiplication\n";
    int result[3];
    for(int h=0;h<3;h++)
    {
        int val=0;
        for(int g=0;g<3;g++)
        {
            val+=cofactor_matrix[h][g] * mat[g];
        }
        result[h]=val;
        cout<<result[h]<<endl;
    }

    cout<<"Matrix B:\n";
    for(int i=0;i<3;i++)
        cout<<(result[i]/ determinant )<<endl;


    return 0;
}

/*
3 1 2
2 -3 -1
1 2 1
*/
