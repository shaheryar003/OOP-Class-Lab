#include <iostream>
using namespace std;
void input1(int array1[10][10],int row, int column);
void input2(int array2[10][10],int row, int column);
void display1(int array1[10][10],int row,int column);
void display2(int array2[10][10],int row,int column);
void array_add(int array1[10][10], int array2[10][10],int sum_array[10][10],int row,int column);

int main(){

    cout<<"SUM OF 2 MATRIX\n";
    int array1[10][10];
    int array2[10][10];
    int sum_array[10][10];
    int rows,columns;
    cout<<"Enter No Rows: ";
    cin>>rows;
    cout<<"Enter No of Columns: ";
    cin>>columns;
    
    input1(array1,rows,columns);
    
    input2(array2,rows,columns);
    display1(array1,rows,columns);
    display2(array2,rows,columns);
    array_add(array1,array2,sum_array,rows,columns);
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

void array_add(int array1[10][10], int array2[10][10],int sum_array[10][10],int row,int column){
for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            sum_array[i][j]=array1[i][j]+array2[i][j];
        }
    cout<<endl;
    }
    cout<<"Sum Of Both Matrix is: \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            cout<<"\t"<<sum_array[i][j];
        }
        cout<<endl;
}
}