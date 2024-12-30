#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, n, sum = 0;
    int a, b;
    cin >> x >> n;

    // int *a = new int[n], *b = new int [n];

    for (int i = 0; i < n; i++)
    {
        // cin >> a[i] >> b[i];
        cin >> a >> b;
        sum += a * b;
    }
    if(x == sum)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
    
    
    // delete []a;
    // delete []b;
    return 0;
}