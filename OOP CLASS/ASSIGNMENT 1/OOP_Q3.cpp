#include <iostream>
using namespace std;
void RowMulti(int array[4][6]);
void input(int array[4][6]);
void display(int array[4][6]);
int main(){
cout<<"ROW WISE MULTIPLICATION OF MATRIX\n";
int array[4][6];
input(array);
display(array);
RowMulti(array);
return 0;
}

void input(int array[4][6]){
 cout << "Enter elements into the matrix \n";
  for(int i=0;i<4;i++)
      {
        for(int j=0;j<6;j++)
        {
            cout<<"\nMatrix["<<i<<"]["<<j<<"]=  ";
            cin>>array[i][j];
        }
      }
}
void display(int array[4][6]){
    cout<<"\n2D-Matrix is:\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++){
            cout<<"\t"<<array[i][j];
        }
    cout<<endl;
    }
}
void RowMulti(int array[4][6])
{  
    int multiply[4]; 
    for(int i=0;i<4;i++)
     {  multiply[i]=1; 
     for(int j=0;j<6;j++) 
     multiply[i]=multiply[i]*array[i][j]; 
     cout<<"\nProduct of row "<<i+1<<" ="<<multiply[i]<<endl;
     }
}

     