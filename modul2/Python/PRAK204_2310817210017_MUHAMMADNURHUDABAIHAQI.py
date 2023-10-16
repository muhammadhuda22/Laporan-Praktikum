jari_jari, tinggi, = map(float, input().split())
volume = 22/7 *jari_jari*jari_jari*tinggi
luas = 22/7 *jari_jari*(jari_jari+tinggi)
keliling = 2*(22/7)*jari_jari
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")