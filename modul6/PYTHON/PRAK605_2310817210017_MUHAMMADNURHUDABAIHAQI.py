def multiply_matrices(matriksA, matriksB, n):
    hasil = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                hasil[i][j] += matriksA[i][k] * matriksB[k][j]

    return hasil

if __name__ == "__main__":
    n = int(input(""))
    
    print("")
    matriksA = []
    for i in range(n):
        baris = list(map(int, input().split()))
        matriksA.append(baris)
    
    print("")
    matriksB = []
    for i in range(n):
        baris = list(map(int, input().split()))
        matriksB.append(baris)

    hasil = multiply_matrices(matriksA, matriksB, n)
    2
    print("")
    print("Matriks A x B:")
    for baris in hasil:
        print(*baris)
