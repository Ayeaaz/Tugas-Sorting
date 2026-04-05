#include <iostream>
using namespace std;

// Fungsi untuk Bubble Sort
void bubble_sort(int arr[], int n) {
    int iterasi = 1;
    
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Penanda apakah ada yang ditukar
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar posisi (swap)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // Tampilkan proses iterasi
        cout << "Iterasi ke-" << iterasi << ": ";
        for(int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl; // Enter ke baris baru
        iterasi++;

        // Kalau tidak ada yang ditukar, berarti sudah urut
        if (!swapped) break;
    }
}

// FUNGSI UTAMA (Main)
int main() {
    int jumlah;
    
    cout << "PROGRAM BUBBLE SORT" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> jumlah;

    int arr[100]; // Siapkan wadah maksimal 100 angka
    cout << "Masukkan " << jumlah << " angka (pisahkan dengan spasi/enter): ";
    for (int i = 0; i < jumlah; i++) {
        cin >> arr[i]; // Masukkan angka satu per satu ke dalam array
    }

    cout << "\nData awal: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Jalankan mesin sorting
    bubble_sort(arr, jumlah);

    cout << "\nData hasil akhir: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}