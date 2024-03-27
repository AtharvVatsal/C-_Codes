#include <iostream>

using namespace std;

int main() {
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout<<i<<endl;
        
        
    }
    
    return 0;
}