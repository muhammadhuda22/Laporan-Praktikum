jumlah_ruangan = int(input())
zetsu_putih = list(map(int, input().split()))

for a in range(jumlah_ruangan):
    jumlah_setelah_pembelahan = zetsu_putih[a]* (a + 1)
    print(jumlah_setelah_pembelahan, end=" ")

print()
