while True:
    batas_maksimal = int(input(""))

    if batas_maksimal == 0:
        break  

    for i in range(1, batas_maksimal + 1, 2):
        print(i, end=" ")

    print()

    if batas_maksimal % 2 == 0:
        for i in range(batas_maksimal, 0, -2):
            print(i, end=" ")
    else:
        for i in range(batas_maksimal - 1, 0, -2):
            print(i, end=" ")

    print()
