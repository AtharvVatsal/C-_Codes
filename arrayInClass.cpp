#include <iostream>

using namespace std;

class Volume{
    private:
        float l, b, h;
    public:
        void input(){
            cout<<"Enter length, breadth and height: ";
            cin>>l>>b>>h;
        }
        void output(){
            cout<<"Volume: "<<l*b*h<<" Cubic Units"<<endl;
        }
};

int main()
{
    int n;
    cout<<"Enter Number of Boxes: ";
    cin>>n;
    Volume box[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Box "<<i + 1<<" Details --> "<<endl;
        box[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Box "<<i + 1<<" Volume --> ";
        box[i].output();
    }
    
    return 0;
}
