#include <iostream>
using namespace std;

int main(){
    short a, b;
    while(1)
    // while(cin >> a >> b)
    {
        cin >> a >> b;
        if(cin.eof()) return 0;
        cout << a + b << "\n";
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> a >> b;
    //     cout << a + b << "\n";
    // }
    
    return 0;
}