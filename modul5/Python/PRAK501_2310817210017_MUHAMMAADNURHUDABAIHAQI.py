def max_bilangan(a, b, c, d):
    return max(a, b, c, d)

def main():
    a, b, c, d = map(int, input().split())
    hasil = max_bilangan(a, b, c, d)
    print(hasil)

main()
