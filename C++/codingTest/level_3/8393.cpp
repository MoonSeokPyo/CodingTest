#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += i + 1;
    }
    cout << sum << endl;
    
    return 0;
}