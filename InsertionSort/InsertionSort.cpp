#include <iostream>
using namespace std;

int n;
int arr[11];

void input() {
	while (true) {
		cout << "Masuka banyak elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
	int i, n, temp, j;
    for (i = 1; i <= n - 1; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;

        }
        arr[j + 1] = temp;
    }
    
}




