def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

jumlah_bilangan = int(input())
bilangan = list(map(int, input().split()))

maks = -100000
minim = 100000

for i in range(jumlah_bilangan):
    nilai = bilangan[i]
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")
