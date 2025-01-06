#include <iostream>
using namespace std;

int main(){
    // length() 반환값이 unsigned 타입이기 때문에 signed int로 선언한 음수값을 비교하면 
    // -1 같은 경우 2의 보수에 의해 모든 비트가 1로 표현됐던 음수값이(?) 
    // unsigned로 변환되서 모든 비트가 1인 표현할수 있는 최댓값이 된다.
    // int maxlen = -1;
    size_t maxlen = 0; // unsigned 타입으로 초기화
    string str[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> str[i];
        // cout << typeid(str[i].length()).name() << " " << maxlen << "\n";
        if (str[i].length() > maxlen)
        {
            // cout << "if block" << "\n";
            maxlen = str[i].length();
        }
    }
    for (int i = 0; i < maxlen; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[j].length() < i + 1)
            {
                continue;
            }
            cout << str[j][i];
        }
        
    }
    
    return 0;
}

// class Str{
// private:
//     int len;
//     string s;
// public:
//     Str(int len) : len(len){}
//     int getLen(){
//         return len;
//     }
// };
