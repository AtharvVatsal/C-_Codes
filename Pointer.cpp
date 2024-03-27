#include <iostream>

using namespace std;

int main() {
    //Holds address of other data types
    int a{0};
    int *ptr = &a;
    cout<<"Enter a number: ";
    cin>>*ptr; //value input using pointer

    //* --> to get value of variable linked to pointer
    //ptr --> to get address of variable linked to pointer

    cout<<"Value of a (Using variable name): "<<a<<endl;
    cout<<"Address of a (Using &a): "<<&a<<endl;
    cout<<"\n";
    cout<<"Value of a (Using pointer): "<<*ptr<<endl;
    cout<<"Address of a (Using pointer): "<<ptr<<endl;
    // & = address of operator
    //* = dereference operator (Value of operator)
    // & --> pointerVariableName = &variableName (Address of operator)
    // *pointerVariableName = variableNameValue
    return 0;
}