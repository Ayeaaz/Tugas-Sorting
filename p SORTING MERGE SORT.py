# SORTING MERGE SORT
iterasi_ke = 1

def merge(arr, l, m, r):
    global iterasi_ke
    n1 = m - l + 1
    n2 = r - m

    #array semenetara untuk kanan dan kiri
    L = [0] * (n1)
    R = [0] * (n2)

    #salin data ke array sementara
    for i in range(0, n1):
        L[i] = arr[l + 1]
    for j in range(0, n2):
        R[j] = arr[m + 1 + j]

    #gabungkan array sementara ke asli arr
    i = 0 #indeks awal pertama kiri
    j = 0 #indeks awal kedua kanan
    k = l #indeks awal yang digabungkan

    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1
    
    while i < n1: #sisa elemen l jika masih ada
        arr[k] = L[i]
        i += 1
        k += 1

    while j < n2: #sisa elemen r jika masih ada
        arr[k] = R[j]
        j += 1
        k += 1

    print(f"proses merge ke-{iterasi_ke}: {arr}")
    iterasi_ke += 1

def merge_sort(arr, l, r):
    if l < r:
        m = l + (r - l) // 2 #cari titik tengah untuk membelah array
        #belah dan urutkan bagian kiri lalu bagian kanan
        merge_sort(arr, l, m)
        merge_sort(arr, m + 1, r)
        merge(arr, l, m, r) #digabungkan kembali

#input
print("PROGRAM MERGE SORT")
jumlah = int(input("Masukkan jumlah data: "))
input_user = input(f"masukkan {jumlah} angka (pisahkan dengan spasi)")
data = [int(x) for x in input_user.split()]
print(f"\nData awal: {data}\n")
                      
#jalankan sorting
merge_sort(data, 0, len(data) - 1)
print(f"\nData hasil akhir: {data}")