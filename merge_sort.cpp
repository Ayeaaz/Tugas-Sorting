#include <iostream>
using namespace std;

int iterasi_ms = 1; // Penghitung iterasi global

// Fungsi untuk menggabungkan (Merge) dua bagian
void merge(int arr[], int l, int m, int r, int n) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[100], R[100]; // Wadah sementara

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    // Gabungkan kembali secara berurutan
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Masukkan sisa elemen jika masih ada
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }

    // Tampilkan proses
    cout << "Proses merge ke-" << iterasi_ms << ": ";
    for (int x = 0; x < n; x++) cout << arr[x] << " ";
    cout << endl;
    iterasi_ms++;
}

// Fungsi utama Merge Sort
void merge_sort(int arr[], int l, int r, int n) {
    if (l < r) {
        int m = l + (r - l) / 2; // Cari titik tengah

        merge_sort(arr, l, m, n);       // Belah kiri
        merge_sort(arr, m + 1, r, n);   // Belah kanan
        merge(arr, l, m, r, n);         // Gabungkan (Merge)
    }
}

int main() {
    int jumlah;
    cout << "PROGRAM MERGE SORT" << endl;
    cout << "Masukkan jumlah data: ";
    cin >> jumlah;

    int arr[100];
    cout << "Masukkan " << jumlah << " angka (pisahkan dengan spasi/enter): ";
    for (int i = 0; i < jumlah; i++) cin >> arr[i];

    cout << "\nData awal: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Panggil mesin Merge Sort
    merge_sort(arr, 0, jumlah - 1, jumlah);

    cout << "\nData hasil akhir: ";
    for (int i = 0; i < jumlah; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}