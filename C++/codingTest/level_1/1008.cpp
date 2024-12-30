#include <iostream>
#include <iomanip> // 정밀도 제어를 위한 헤더
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;
    cout<<fixed;
    cout.precision(20);
    cout << a / b << endl;
    // cout << a / (double)b;
    // cout << fixed << setprecision(10) << a / b << endl;

    // cout.unsetf(ios::fixed);
    // cout << a/(double)b;
    return 0;
}