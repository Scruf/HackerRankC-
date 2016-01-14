#include <iostream>
using namespace std;
int main() {
	int height = 1;
	int t = 0;
	cin >> t;
	int *arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		int n = 0;
		cin >> n;
		arr[i] = n;
	}
	for (int i = 0; i < t; i++) {
		if (arr[i] == 0)
			cout << 1 << endl;
		if (arr[i] == 1)
			cout << 2 << endl;
		else {
			if (arr[i] % 2 == 0) {
				for (int j = 0; j < arr[i] / 2; j++) {
					height *= 2;
					height += 1;
				}
				cout << height << endl;
				height = 1;
			}
			else {
				for (int x = 0; x < arr[i]; x++) {
					if (x % 2 == 0)
						height *= 2;
					else
						height += 1;
				}
				cout << height << endl;
				height = 1;
			}
		}
	}

	return 0;
}