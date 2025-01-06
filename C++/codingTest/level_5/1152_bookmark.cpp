#include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
using namespace std;

// vector<string> split(string input, string delimiter) {
//     vector<string> ret;
//     long long pos = 0;
//     string token = "";
//     while ((pos = input.find(delimiter)) != string::npos) {
//         if(pos != 0)
//         {
//             token = input.substr(0, pos);
//             ret.push_back(token);
//         }
//         input.erase(0, pos + delimiter.length());
//     }
//     if(input.length() > 0)
//         ret.push_back(input);
//     return ret;
// }

// int main(){
//     string str;
//     int cnt = 0;
//     getline(cin, str);
//     // if(str[0] == ' ')
//     //     // str.erase(0);    // 이렇게 하면 모두 지운다.
//     //     str.erase(0, 1);
//     // if(str[str.length()] == ' ')
//     //     str.erase(str.length() - 1,);

//     // for (int i = 0; i < str.length(); i++)
//     // {
//     //     if(str[i] == ' ')
//     //         cnt++;
//     // }
//     // cout << ++cnt;

//     vector<string> word = split(str, " ");
//     cnt = word.size();
//     cout << cnt << "\n";
//     for(string s:word)
//         cout << s << "\n";


    
//     return 0;
// }


// int main(){
//     string str;
//     int cnt = 0;
//     bool flag = false;
//     getline(cin, str);

//     // if(str[0] == ' ')
//     //     // str.erase(0);    // 이렇게 하면 모두 지운다.
//     //     str.erase(0, 1);
//     // if(str[str.length()] == ' ')
//     //     str.erase(str.length() - 1,);

//     for (int i = 0; i < str.length(); i++)
//     {
//         if(flag == false && str[i] != ' ')
//         {
//             flag = true;
//             cnt++;
//         } else if(flag == true && str[i] == ' '){
//             flag = false;
//         }


//     }
//     cout << cnt << "\n";

//     return 0;
// }

int main()
{
    string str{};
    getline(cin, str, '\n');
    int cnt{};
    bool isWord = false;

    for (char ch : str) {
        if (ch != ' ') {
            if (!isWord) {
                ++cnt;
                isWord = true;
            }
        }
        else
            isWord = false;
    }
    cout << cnt;
}

// int main() {

// 	int cnt = 0;
// 	string str;
	
// 	while (cin >> str) {
// 		++cnt;
// 	}

// 	cout << cnt;
// }