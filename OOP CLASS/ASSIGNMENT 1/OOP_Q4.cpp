#include <iostream>
using namespace std;
void input(int array[10][10],int row, int column);
void display(int array[10][10],int row,int column);
void upper_Half(int array[10][10],int row);

int main(){
    cout<<"UPPER HALF OF MATRIX\n";
    int array[10][10];
    int rows,columns;
    cout<<"Rows And Columns Should Be Equal\n";
    cout<<"Enter No of Rows: ";
    cin>>rows;
    cout<<"Enter No of Columns: ";
    cin>>columns;
    input(array,rows,columns);
    display(array,rows,columns);
    upper_Half(array,rows);
}
void input(int array[10][10],int row,int column){
    cout<<"Enter Elements: ";
    for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array[i][j];
        }
      } 
}
void display(int array[10][10],int row,int column){
    cout<<"2D-Matrix is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            cout<<"\t"<<array[i][j];
        }
    cout<<endl;
    }
}
void upper_Half(int array[10][10],int row){

cout<<"\n Upper Half of Matrix is: \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i<=j){
                cout<<"\t"<<array[i][j];
                    }
            else
                cout<<"\t";
        }

        cout<<endl;
    }
}



