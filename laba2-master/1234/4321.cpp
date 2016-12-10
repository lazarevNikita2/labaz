#include <cstring>
#include <conio.h>
#include <iostream>

using namespace std;

int main() {

	const int n = 10;
	int arr1[n] , sum = 0;

	for (int i = 0; i <= n; ++i) {
		cout << "Vvediite zna4enie " << i << ":";
		cin >> arr1[i];

	}
	int max = arr1[0];

	for (int i = 0; i < n; ++i) {
		sum += arr1[i];
		if (max < arr1[i]) {
			max = arr1[i];
		}
	}

	cout << "Summa: " << sum << endl;
	cout << "Srzna4: " << sum / n << endl;
	cout << "Max: " << max << endl;
	system("pause");
}