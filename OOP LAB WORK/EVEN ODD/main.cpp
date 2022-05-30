#include <iostream>
using namespace std;

int main()
{   int input;
    cout<<"EVEN | ODD CHECKER"<<endl;
    cout<<"ENTER AN INTEGER TO CHECK: ";
    cin>>input;
    if(input%2==0){
        cout<<input<<" IS EVEN";
    }
    else{
        cout<<input<<" IS ODD";}
    return 0;
}
