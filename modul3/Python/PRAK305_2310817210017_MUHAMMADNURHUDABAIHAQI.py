jumlah_detik = int(input(""))

hari = jumlah_detik // 86400
jumlah_detik %= 86400
jam = jumlah_detik // 3600
jumlah_detik %= 3600
menit = jumlah_detik // 60
jumlah_detik %= 60
detik = jumlah_detik

if jam >= 24:
    hari = jam // 24
    jam %= 24

if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
