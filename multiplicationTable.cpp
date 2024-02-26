#include <iostream>

using namespace std;

int main()
{
    int number, ending;
    cout<<"Enter Number For Multiplication Table: ";
    cin>>number;
    cout<<"Entr Ending Number For Multiplication Table: ";
    cin>>ending;
    for (int i = 1; i <= ending; i++)
    {
        cout<<number<<" x "<<i<<" = "<<i*number<<endl;
    }
    return 0;
}
