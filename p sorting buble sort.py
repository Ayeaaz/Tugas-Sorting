# SORTING (BUBBLE SORT)
def bubble_sort(arr):
    n = len(arr)
    print("\n[Proses Bubble Sort]")
    
    # Loop pertama untuk menghitung iterasi
    for i in range(n):
        swapped = False # Penanda apakah ada angka yang perlu ditukar
        
        # Loop kedua untuk mengecek angka yang bersebelahan
        for j in range(0, n - i - 1):
            # Kalau angka sebelah kiri lebih besar dari sebelah kanan maka akan ditukar
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
                
        # Tampilkan data per iterasi sesuai permintaan
        print(f"Iterasi ke-{i+1}: {arr}")
        
        # Kalau dari awal sampai akhir tidak ada data yang ditukar maka berhenti
        if not swapped:
            break
            
    return arr

# input
print("PROGRAM BUBBLE SORT")

# Input jumlah data dulu
jumlah = int(input("Masukkan jumlah data: "))

# Input data dalam satu baris menggunakan spasi
input_user = input(f"Masukkan {jumlah} angka (pisahkan dengan spasi): ")

# Mengubah teks inputan jadi list angka
data = [int(x) for x in input_user.split()]

print(f"\nData awal: {data}")

# jalankan
hasil = bubble_sort(data)
print(f"\nData hasil akhir: {hasil}")