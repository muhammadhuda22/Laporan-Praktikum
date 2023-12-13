n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    matrik1 = list(map(int, input().split()))
    matrik2 = list(map(int, input().split()))

    if len(matrik1) != n1 or len(matrik2) != n2:
        print("Jumlah tidak sama")
    else:
        hasil = [matrik1[i] * matrik2[i] for i in range(n1)]
        print(*hasil)
