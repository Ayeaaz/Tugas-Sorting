#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Tampilkan proses iterasi
        cout << "Iterasi ke-" << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int jumlah;
    cout << "PROGRAM INSERTION SORT" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> jumlah;

    int arr[100];
    cout << "Masukkan " << jumlah << " angka (pisahkan dengan spasi/enter): ";
    for (int i = 0; i < jumlah; i++) {
        cin >> arr[i];
    }

    cout << "\nData awal: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << "\n\n";

    insertion_sort(arr, jumlah);

    cout << "\nData hasil akhir: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}