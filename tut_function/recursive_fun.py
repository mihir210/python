# def fun1(s1):
#     print(s1)
#                                         normal
# if __name__ == '__main__':
#     print("nbj")


def factorial(n):
    int(n)
    if n > 0:
        return n * factorial(n-1)
    else:
        return 1
def fibonaki(n):     # 0 1 1 2 3
    int(n)
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonaki(n-1) + fibonaki(n-2)

if __name__ == '__main__':
    a = factorial(5)
    print(a)

    b = fibonaki(4)
    print(b)