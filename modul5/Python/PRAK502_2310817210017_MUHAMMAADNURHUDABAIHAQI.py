def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)

def mutlak(angka):
    return abs(angka)

def main():
    a, c, b, d = map(int, input().split())
    
    Hasil = hitung(a, b) + hitung(c, d)
    print(mutlak(Hasil))

if __name__ == "__main__":
    main()
