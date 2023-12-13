def pesan_diterima(kode, pesan):
    bintang = 0
    pagar = 0
    pesan_diterima = ''

    if len(kode) != len(pesan):
        print("Panjang kalimat berbeda, pesan palsu")
        return

    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            pesan_diterima += '*'
            bintang += 1
        else:
            pesan_diterima += '#'
            pagar += 1

    print(pesan_diterima)
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

kode = input().strip()
pesan = input().strip()

pesan_diterima (kode, pesan)
