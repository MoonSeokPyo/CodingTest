// #include <iostream>
// using namespace std;

// int main(){
//     int a, b, c, money, max;
//     cin >> a >> b >> c;
//     // if (a == b == c) // (a == b) == c, (true == 1) == number
//     if (a == b && b == c)
//     {
//         money = 10000 + a * 1000;
//     } else if (a == b)
//     {
//         money = 1000 + a * 100;
//     } else if (a == c)
//     {
//         money = 1000 + a * 100;
//     } else if (b == c)
//     {
//         money = 1000 + b * 100;
//     } else
//     {
//         if (a > b)
//         {
//             max = a;
//         } else
//         {
//             max = b;
//         }
//         if (max < c)
//         {
//             max = c;
//         }
//         money = max * 100;        
//     }

//     cout << money << endl;

//     return 0;
// }

#include <iostream>

// max func call Library
#include <algorithm>
using namespace std;

int main(){
    int x, y, z, m;

    cin >> x >> y >> z;

    if (x == y && y == z){
        cout << 10000 + x * 1000 << endl;
    }
    else if(x != y && x != z && y != z){
        m = max(max(x, y), z);
        cout << m * 100 << endl;
    }
    else{
        if(x == y || x == z){
            cout << 1000 + x * 100 << endl;
        }
        else if (y == z){
            cout << 1000 + y * 100 << endl;
        }
    }
}