def hitung_kelipatan(n, kelipatan):
    total = 0

    for i in range(1, n + 1):
        baris_total = 0
        print("(", end="")
        for j in range(i, 0, -1):
            baris_total += j * kelipatan
            print(f"{j} * {kelipatan}", end="")
            if j > 1:
                print(" + ", end="")
        print(f") = {baris_total}")
        total += baris_total

    print(total)

if __name__ == "__main__":
    while True:
        input_str = input("")
        if input_str.lower() == "0":
            break
        n, kelipatan = map(int, input_str.split())
        hitung_kelipatan(n, kelipatan)
        print()
