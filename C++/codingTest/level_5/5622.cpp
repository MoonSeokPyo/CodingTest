#include <iostream>
using namespace std;

int main(){
    string str;
    int sec = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        // sec += (str[i] - 'A') / 3 + 3;
        if(str[i] >= 'A' && str[i] <= 'C')
            sec += 3;
        else if(str[i] >= 'D' && str[i] <= 'F')
            sec += 4;
        else if(str[i] >= 'G' && str[i] <= 'I')
            sec += 5;
        else if(str[i] >= 'J' && str[i] <= 'L')
            sec += 6;
        else if(str[i] >= 'M' && str[i] <= 'O')
            sec += 7;
        else if(str[i] >= 'P' && str[i] <= 'S')
            sec += 8;
        else if(str[i] >= 'T' && str[i] <= 'V')
            sec += 9;
        else if(str[i] >= 'W' && str[i] <= 'Z')
            sec += 10;
    }
    cout << sec << "\n";
    
    return 0;
}