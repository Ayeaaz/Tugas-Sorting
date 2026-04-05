#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Tukar posisi
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;

        // Tampilkan proses iterasi
        cout << "Iterasi ke-" << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int jumlah;
    cout << "PROGRAM SELECTION SORT" << endl;
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

    selection_sort(arr, jumlah);

    cout << "\nData hasil akhir: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
