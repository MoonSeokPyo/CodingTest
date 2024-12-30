#include <iostream>
// #include <cstdlib>
using namespace std;

int main(){
    int a = -1, b = -1;
    while (a != 0 || b != 0)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            // exit(0);
            return 0;
            // break;
        }
        cout << a + b << "\n";
    }
    
    return 0;
}