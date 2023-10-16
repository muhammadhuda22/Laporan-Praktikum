import math
tinggi, miring = map(int, input().split())
alas = int (math.sqrt(miring*miring-tinggi*tinggi))
luas = int(0.5*alas*tinggi)
keliling = int(alas+tinggi+miring)
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")