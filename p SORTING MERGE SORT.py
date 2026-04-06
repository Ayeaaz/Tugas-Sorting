# SORTING MERGE SORT
iterasi_ms = 1

def merge_sort(arr):
    global iterasi_ms
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]

        # Rekursif membelah array
        merge_sort(L)
        merge_sort(R)

        i = j = k = 0

        # Proses menggabungkan (merge)
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        # Cek elemen yang tersisa
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
            
        print(f"Proses merge ke-{iterasi_ms}: {arr}")
        iterasi_ms += 1

print("PROGRAM MERGE SORT")
jumlah = int(input("Masukkan jumlah data: "))
angka_input = input(f"Masukkan {jumlah} angka (pisahkan dengan spasi): ").split()

# Ubah input string jadi integer
arr = [int(x) for x in angka_input]

print(f"\nData awal: {arr}")
merge_sort(arr)
print(f"\nData hasil akhir: {arr}")