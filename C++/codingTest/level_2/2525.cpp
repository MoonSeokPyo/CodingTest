#include <iostream>
using namespace std;

// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;

//     b = b + (c % 60);
//     if (b >= 60)
//     {
//         a++;
//         b = b - 60;
//     }

//     a = a + (c / 60);
//     while (a >= 24)
//     {
//         a = a - 24;
//     }
    
//     cout << a << " " << b << endl;
    
//     return 0;
// }

int main(){
    short a, b, c, min;
    cin >> a >> b;
    cin >> c;
    min = b + c;

    a = a + min / 60;
    b = min % 60;

    a = a % 24;

    cout << a << " " << b << endl;
}