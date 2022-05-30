#include <iostream>
using namespace std;
void input(int array[10][10],int row, int column);
void display(int array[10][10],int row,int column);
void sum(int array[10][10],int row,int  column);
void row_sum(int array[10][10],int row,int column);
void column_sum(int array[10][10],int row,int column);
void transpose(int array[10][10],int row,int column);
 

int main(){
    cout<<"MULTI PURPOSE MATRIX FUNCTION\n";
    int array[10][10];
    int row,column,choice;
    cout<<"Enter No of rows: ";
    cin>>row;
    cout<<"Enter No of Columns: ";
    cin>>column;


do
	{
		cout<<"\n\nMENU";
		cout<<"\n1. To input elements into matrix of size m x n";
		cout<<"\n2. To display elements of matrix of size m x n";
		cout<<"\n3. Sum of all elements of matrix of size m x n";
		cout<<"\n4. To display row-wise sum of matrix of size m x n";
		cout<<"\n5. To display column-wise sum of matrix of size m x n";
        cout<<"\n6. To create transpose of matrix B of size n x m";
		cout<<"\n7. Exit";
		cout<<"\n\nEnter your choice 1-7 :";
		cin>>choice;
		switch(choice)
		{
			case 1:	input(array,row,column);
				break;
			case 2:	display(array, row,column);
				break;
			case 3:	sum(array,row,column);
			 	break;
			case 4:row_sum(array,row,column);
				break;
			case 5:	column_sum(array,row,column);
			 	break;
			case 6:transpose(array,row,column);
                break;
            case 7: break;
			default:cout<<"\nInvalid choice";
		}
	}while(choice!=7);
    return 0;

}
void input(int array[10][10],int row,int column){
    cout<<"\nEnter Elements: ";
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
    cout<<"\n2D-Matrix is:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            cout<<"\t"<<array[i][j];
        }
    cout<<endl;
    }
}

void sum(int array[10][10],int row,int column){
    cout<<"\nSum Of All the elements are: ";
    int sum_all=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
           sum_all=sum_all+array[i][j];
        }
    }
    cout<<sum_all;

}
void row_sum(int array[10][10],int row,int column){
    cout<<"\nRow Wise Sum\n";
    int sum_row=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        sum_row=sum_row+array[i][j];
        cout<<"Sum of row "<<i+1<<" is: "<<sum_row<<endl;
        sum_row=0;
    }
  
}
void column_sum(int array[10][10],int row,int column){
    cout<<"\nColumn Wise Sum\n";
    int sum_col=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        sum_col=sum_col+array[j][i];
        cout<<"Sum of column "<<i+1<<" is: "<<sum_col<<endl;
        sum_col=0;
    }
  
}

void transpose(int array[10][10],int row,int column){

    int transpose[10][10];
    for (int i = 0; i < row;i++)
      for (int j = 0; j < column; j++) {
         transpose[j][i] = array[i][j];
      }
    cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; i++)
      for (int j = 0; j < row; j++) {
         cout << "\t" << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
         
    }
}
