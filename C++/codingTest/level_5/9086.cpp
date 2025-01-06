#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string str[t];
    for (int i = 0; i < t; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < t; i++)
    {
        // cout << str[i][0] << str[i][str[i].length() - 1] << "\n";
        cout << str[i][0] << str[i][str[i].size() - 1] << "\n"; // 이건 1byte일 경우에만 가능할 것 같다. 한글로만 바뀌어도 안될 듯
    }
    
    
    return 0;
}