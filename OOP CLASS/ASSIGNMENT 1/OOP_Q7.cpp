#include <iostream>
using namespace std;
void input1(int array1[10][10],int row, int column);
void input2(int array2[10][10],int row, int column);
void display1(int array1[10][10],int row,int column);
void display2(int array2[10][10],int row,int column);
void array_mul(int array1[10][10], int array2[10][10],int mul_array[10][10],int row1,int column1,int column2);

int main(){

    cout<<"MULTIPLICATION OF 2 MATRIX\n";
    int array1[10][10];
    int array2[10][10];
    int mul_array[10][10];
    int row1,column1,row2,column2;
    cout<<"No OF \*Columns*\ of First Matrix Should be equal to No of \*Rows\* of 2nd Matrix";

    cout<<"\nEnter No Rows of 1st Matrix: ";
    cin>>row1;
    cout<<"\nEnter No of Columns of 1st MAtrix: ";
    cin>>column1;
    cout<<"\nEnter No Rows of 1st Matrix: ";
    cin>>row2;
    cout<<"\nEnter No of Columns of 1st MAtrix: ";
    cin>>column2;
     while (column1!=row2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        cout<<"\nEnter No Rows of 1st Matrix: ";
        cin>>row1;
        cout<<"\nEnter No of Columns of 1st Matrix: ";
        cin>>column1;
        cout<<"\nEnter No Rows of 1st Matrix: ";
        cin>>row2;
        cout<<"\nEnter No of Columns of 1st Matrix: ";
        cin>>column2;
        
    }

    
    input1(array1,row1,column1);
    input2(array2,row2,column2);
    display1(array1,row1,column1);
    display2(array2,row2,column2);
    array_mul(array1,array2,mul_array,row1,column1,column2);
}
void input1(int array1[10][10],int row,int column){
    cout<<"\nInput Elements in 1st Matrix: \n";
    for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array1[i][j];
        }
      } 
}

void input2(int array2[10][10],int row,int column){
  cout<<"\nInput Elements in 2nd Matrix: \n";
    for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array2[i][j];
        }
      } 
}



void display1(int array1[10][10],int row,int column){
    cout<<"1st Matrix is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            cout<<"\t"<<array1[i][j];
        }
    cout<<endl;
    }
}
void display2(int array2[10][10],int row,int column){
    cout<<"2nd Matrix is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            cout<<"\t"<<array2[i][j];
        }
    cout<<endl;
    }
}

void array_mul(int array1[10][10], int array2[10][10],int mul_array[10][10],int row1,int column1,int column2){

cout<<"Multiplication Of Both Matrix is: \n";

   for(int i = 0; i < row1; ++i)
        for(int j = 0; j < column1; ++j)
         mul_array[i][j]=0;

   for(int i = 0; i < row1; ++i)
        for(int j = 0; j < column2; ++j)
            for(int k = 0; k < column1; ++k)
            {
                mul_array[i][j] += array1[i][k] * array2[k][j];
            }
    for(int i = 0; i < row1; ++i){
    for(int j = 0; j < column2; ++j)
    {
        cout << "\t" << mul_array[i][j];
       
    }
        cout<<endl;
        }

}