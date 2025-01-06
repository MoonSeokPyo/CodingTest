#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int r[t];
    string s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> r[i] >> s[i];
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            for (int k = 0; k < r[i]; k++)
            {
                cout << s[i][j];
            }
            
        }
        cout << "\n";
    }
    
    
    return 0;
}

// int main() {
//     int T;  // 테스트 케이스 수
//     cin >> T;
//     while (T--) {
//         int R;       // 반복 횟수
//         string S;    // 문자열 입력
//         cin >> R >> S;

//         // 문자열의 각 문자를 R번 반복 출력
//         for (char c : S) {
//             for (int j = 0; j < R; j++) {
//                 cout << c;
//             }
//         }
//         cout << endl;  // 테스트 케이스 결과 구분
//     }
//     return 0;
// }
