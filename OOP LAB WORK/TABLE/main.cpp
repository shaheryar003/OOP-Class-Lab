#include <iostream>

using namespace std;

int main()
{
    int userInputTable,userInputRange,tableCount;
    cout<<"ENTER YOUR NUMBER FOR DESIRED TABLE: ";
    cin>>userInputTable;
    cout<<"ENTER YOUR RANGE: ";
    cin>>userInputRange;

    for(tableCount=1;tableCount<=userInputRange;tableCount++){
        cout<<userInputTable<<" x "<<tableCount<<" = "<<userInputTable*tableCount<<endl;
    }
    return 0;
}
