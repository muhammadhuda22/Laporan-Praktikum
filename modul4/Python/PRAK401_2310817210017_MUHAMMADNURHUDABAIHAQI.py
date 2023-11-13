while True:
    input_str = input("")
    
    kelipatan, simbol = map(str, input_str.split())
    kelipatan = int(kelipatan)

    for i in range(1, 51):
        if i % kelipatan == 0:
            print(f"{simbol} ", end="")
        else:
            print(f"{i} ", end="")

    print()
