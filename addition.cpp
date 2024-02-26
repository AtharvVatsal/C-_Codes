#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter Numbers For Operations To Be Performed Upon: ";
    cin>>a>>b;
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" x "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<(float)a/b<<endl; //type casting done to get the float value
    return 0;
}
