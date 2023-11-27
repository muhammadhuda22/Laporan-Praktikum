def biodata(tahun_lahir, namaku, asal):
    tahun_sekarang = 2023

    print(f"Perkenalkan Nama Saya : {namaku}")
    print(f"Umur Saya : {tahun_sekarang - tahun_lahir}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {asal}\n")

if __name__ == "__main__":
    tahun_lahir = int(input())
    namaku = input()
    asal = input()

    biodata(tahun_lahir, namaku, asal)
