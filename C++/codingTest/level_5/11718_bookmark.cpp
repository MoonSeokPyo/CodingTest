#include <iostream>
using namespace std;

// int main(){
//     string str = "", input;
//     int cnt = 0;

//     // cin.tie(NULL);
//     // ios_base::sync_with_stdio(false);

//     // while(cnt <= 100)
//     // {
//     //     if(cin.eof())
//     //     {
//     //         break;
//     //     }
//     //     getline(cin, input);
//     //     // getline(cin, input, '\n');
        
//     //     cnt += input.length();
//     //     str.append(input);
//     //     str.append("\n");
//     // }
//     // cout << str;

//     while(getline(cin, str))
//         cout << str << "\n";

    
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    string str = "", input;

    while(getline(cin, input))
    {
        str.append(input);
        str.append("\n");
    }
    cout << str;
    
    return 0;
}