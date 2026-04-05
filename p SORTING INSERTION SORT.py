# SORTING INSERTION SORT
def insertion_sort(arr):
    n = len(arr)

    #loop mulai dari elemen kedua (index 1) karena elemen pertama dianggap sudah ditangan
    for i in range(1, n):
        kunci = arr[i]
        j = i - 1

        #geser angka yang lebih besar dari kunci ke kanan
        while j >= 0 and kunci < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
            arr[j + 1] = kunci #menyelipkan kunci ke posisi yang benar
            print(f"iterasi ke-{i}: {arr}") #tampilkan data per iterasi
        return arr

#input
print("PROGRAM INSERTION SORT")

jumlah = int(input("masukkan jumlah data:"))
input_user = input(f"masukkan {jumlah} angka (pisahkan dengan spasi)")
data = [int(x) for x in input_user.split()]

print(f"\nData awal {data}")

#jalankan sorting
hasil = insertion_sort(data)
print(f"\nData hasil akhir: {hasil}")