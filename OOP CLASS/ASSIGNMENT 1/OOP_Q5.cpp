#include <iostream>
using namespace std;
void input(int array[10][10],int size);
void display(int array[10][10],int size);
void middle_data(int array[10][10],int size);

int main(){
    cout<<"Middle ROW and COLUMN display\n";
    int array[10][10];
    int size;
    cout<<"Enter Order of Matrix(rows and colums are equal): ";
    cin>>size;
    input(array,size);
    display(array,size);
    middle_data(array,size);
}
void input(int array[10][10],int size)
{
    cout<<"Enter Elements: ";
    for(int i=0;i<size;i++)
      {
        for(int j=0;j<size;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array[i][j];
        }
      } 
}
void display(int array[10][10],int size)
{
    cout<<"\n2D-Matrix is:\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<"\t"<<array[i][j];
        }
    cout<<endl;
    }
}
void middle_data(int array[10][10],int size)
{
    int middle;
    middle=size/2;
    cout<<"\n\nMiddle Row Elements Are: \n";
    for(int i=0;i<size;i++)
    {
        cout<<"\t"<<array[middle][i];

    }

    cout<<"\n\nMiddle Column Elements Are: \n";
    for(int i=0;i<size;i++)
    {
        cout<<"\t"<<array[i][middle];

    }
}