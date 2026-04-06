def insertion_sort(arr):
    iterasi = 1
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        # Pindah elemen yang lebih besar dari key ke kanan
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
        
        print(f"Iterasi ke-{iterasi}: {arr}")
        iterasi += 1

print("=== PROGRAM INSERTION SORT ===")
jumlah = int(input("Masukkan jumlah data: "))
angka_input = input(f"Masukkan {jumlah} angka (pisahkan dengan spasi): ").split()

# Ubah input string jadi integer
arr = [int(x) for x in angka_input]

print(f"\nData awal: {arr}")
insertion_sort(arr)
print(f"\nData hasil akhir: {arr}")