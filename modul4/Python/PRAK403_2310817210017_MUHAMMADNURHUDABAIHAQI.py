while True:
    num1, num2 = map(int, input("").split())

    if num1 == 0 and num2 == 0:
        break

    print(f"{num1} {num2}", end='')

    step = -1 if num1 > num2 else 1
    for i in range(num1 + step, num2, step):
        print(f" - {i} {num1 + num2 - i}", end='')

    print(f" - {num2} {num1 + num2 - num2}")
