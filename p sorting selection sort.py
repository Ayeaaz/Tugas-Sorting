# SORTING SELECTION SORT
def selection_sort(arr):
    n = len(arr)

    #loop untuk setiap posisi
    for i in range(n - 1):
        index_terkecil = i #posisi ini adalah paling kecil

        #mancari apakah ada angka yang lebih kecil
        for j in range(i + 1, n):
            if arr[j] < arr [index_terkecil]:
                index_terkecil = j

        #tukar angka terkecil
        arr[i], arr[index_terkecil] = arr[index_terkecil], arr[i]

        # tampilkan data per iterasi
        print(f"iterasi ke-{i+1}: {arr}")

    return arr

# input
print("PROGRAM SELECTION SORT")
jumlah = int(input("masukkan jumlah data:")) #minta jumlah data
input_user = input(f"masukkan {jumlah} angka (pisahkan dengan spasi)") #minta angkanya
data = [int(x) for x in input_user.split()] #mengubah teks input menjadi list angka
print(f"\nData awal: {data}")
      
# jalankan sorting
hasil = selection_sort(data)
print(f"\nData hasil akhir: {hasil}")