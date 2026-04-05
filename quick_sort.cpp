#include <iostream>
using namespace std;

int iterasi_qs = 1; // Penghitung iterasi global

// Fungsi untuk mencari titik partisi (Pivot)
int partition(int arr[], int low, int high, int n) {
    int pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        // Kalau angka lebih kecil dari pivot, pindah ke kiri
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Posisikan pivot di tengah-tengah
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    // Tampilkan proses
    cout << "Iterasi ke-" << iterasi_qs << " (Pivot " << pivot << "): ";
    for (int k = 0; k < n; k++) cout << arr[k] << " ";
    cout << endl;
    iterasi_qs++;

    return (i + 1);
}

// Fungsi utama Quick Sort
void quick_sort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n); // Cari titik belah

        quick_sort(arr, low, pi - 1, n);  // Urutkan yang kiri
        quick_sort(arr, pi + 1, high, n); // Urutkan yang kanan
    }
}

int main() {
    int jumlah;
    cout << "PROGRAM QUICK SORT" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> jumlah;

    int arr[100];
    cout << "Masukkan " << jumlah << " angka (pisahkan dengan spasi/enter): ";
    for (int i = 0; i < jumlah; i++) cin >> arr[i];

    cout << "\nData awal: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Panggil mesin Quick Sort
    quick_sort(arr, 0, jumlah - 1, jumlah);

    cout << "\nData hasil akhir: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}