#include <iostream>
using namespace std;
void input(int array[10][10],int size);
void display(int array[10][10],int size);
void left_sum(int array[10][10],int size);
void right_sum(int array[10][10],int size);
int main()
{
  cout<<"LEFT AND RIGHT DIAGONAL SUM\n";
  int array[10][10];
  int size;
  cout<<"Enter Size of Square Matrix: ";
  cin>>size;
  input(array,size);
  display(array,size);
  left_sum(array,size);
  right_sum(array,size);
  return 0;
}
void input(int array[10][10],int size){
 cout << "\nEnter elements into the matrix \n";
  for(int i=0;i<size;i++)
      {
        for(int j=0;j<size;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array[i][j];
        }
      }
}
void display(int array[10][10],int size){
    cout<<"\n2D-Matrix is:\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){
            cout<<"\t"<<array[i][j];
        }
    cout<<endl;
    }
}
void left_sum(int array[10][10],int size){
    
int sum_left=0;
 for(int i=0;i<size;i++)
      {
        for(int j=0;j<size;j++)
        {
      if(i==j)
        sum_left += array[i][j];
        
        }

      }
      cout << "\nSum of Left Diagonal: "<< sum_left << endl;
}
void right_sum(int array[10][10],int size){
    int sum_right=0;
    for(int i=0;i<size;i++)
      {
        for(int j=0;j<size;j++)
        {
        if((i+j) == size-1)
        sum_right += array[i][j];
       }

}
 cout << "\nSum of Right Diagonal: "<< sum_right << endl;
    
}
      

