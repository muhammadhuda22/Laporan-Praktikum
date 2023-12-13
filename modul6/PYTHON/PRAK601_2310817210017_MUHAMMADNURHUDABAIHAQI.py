baris, kolom = map(int, input().split())
input_matriks = list(map(int, input().split()))
matrix = [input_matriks[a * kolom:(a + 1) * kolom] for a in range(baris)]

for a in range(baris):
    for b in range(kolom):
        print(matrix[a][b], end=" ")
    print()
