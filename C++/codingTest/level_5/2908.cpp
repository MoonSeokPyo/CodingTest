#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str_1, str_2;
    int num_1, num_2;
    char tmp;
    cin >> str_1 >> str_2;

    // for (int i = 0; i < str_1.length()/2; i++)
    // {
    //     tmp = str_1[0 + i];
    //     str_1[0 + i] = str_1[str_1.length() - 1 - i];
    //     str_1[str_1.length() - 1 - i] = tmp;
    // }
    // num_1 = stoi(str_1);

    // for (int i = 0; i < str_2.length()/2; i++)
    // {
    //     tmp = str_2[0 + i];
    //     str_2[0 + i] = str_2[str_2.length() - 1 - i];
    //     str_2[str_2.length() - 1 - i] = tmp;
    // }
    // num_2 = stoi(str_2);

    reverse(str_1.begin(), str_1.end());
    num_1 = stoi(str_1);
    reverse(str_2.begin(), str_2.end());
    num_2 = stoi(str_2);

    cout << (num_1 > num_2 ? num_1 : num_2) << "\n";

    // if(num_1 > num_2)
    //     cout << num_1 << "\n";
    // else
    //     cout << num_2 << "\n";
    return 0;
}