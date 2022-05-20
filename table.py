def table(n):
    for i in range(1,n):
        print("\033[91mThis is a different color")
        for j in range(1,n):
            print(i*j,end = " ")
        print('\n')


if __name__ == '__main__':
    n = int(input('Enter integer = '))
    table(n)
