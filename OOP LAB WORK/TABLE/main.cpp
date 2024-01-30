#include <iostream>

using namespace std;

int main()
{
    int userInputTable,userInputRange,tableCount;
    cout<<"ENTER YOUR NUMBER FOR DESIRED TABLE: (Aceepts only Numbers, Exception Handling not done yet.)\n";
    cin>>userInputTable;
    cout<<"\nENTER YOUR RANGE: ";
    cin>>userInputRange;

    for(tableCount=1;tableCount<=userInputRange;tableCount++){
        cout<<userInputTable<<" x "<<tableCount<<" = "<<userInputTable*tableCount<<endl;
    }
    return 0;
}
