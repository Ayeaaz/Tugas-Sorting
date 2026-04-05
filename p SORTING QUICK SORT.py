# SORTING QUICK SORT

iterasi_ke = 1
def partition(arr, low, high):
    global iterasi_ke

    pivot = arr[high] #mengambil pivot dari paling kanan
    i = low - 1

    for j in range(low, high):
        if arr[j] <= pivot: #kalau angka lebih kecil/sama dengan pivot maka diletakkan di kiri
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
        
    arr[i + 1], arr[high] = arr[high], arr[i + 1] #pivot ditangah
    print(f"iterasi ke={iterasi_ke} (pivot {pivot}): {arr}") #tampilkan proses iterasi
    iterasi_ke += 1

    return i + 1

def quick_sort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high) #cari titik partisi

        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

#input
print("PROGRAM QUICK SORT")
jumlah = int(input("Masukkan jumlah data: "))
input_user = input(f"masukkan {jumlah} angka (pisahkan dengan spasi)")
data = [int(x) for x in input_user.split()]
print(f"\nData awal: {data}\n")

#jalankan sorting
quick_sort(data, 0, len(data) - 1)
print(f"\nData hasil akhir: {data}")