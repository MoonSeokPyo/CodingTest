#include <iostream>
using namespace std;

// int main(){
//     short n, m;
//     cin >> n >> m;
//     short arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = i + 1;
//     }
//     int x, y, tmp;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> x >> y;
//         for (int j = 0; j < (y - x + 1) / 2; j++)
//         {
//             tmp = arr[x - 1 + j];
//             arr[x - 1 + j] = arr[y - 1 - j];
//             arr[y  - 1 - j] = tmp;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
    
//     return 0;
// }

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, *arr;

	cin >> n >> m;
	arr = new(nothrow) int [n];
	if (!arr)
	{
		cerr << "Allocation fail" << endl;
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	
	while(m--)
	{
		int a, b;

		cin >> a >> b;
		for (int i = 0; i < (b - a + 1) / 2; i++)
			swap(arr[a - 1 + i], arr[(b - 1 - i)]);
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	
	delete []arr;
	arr = NULL;
	return 0;
}