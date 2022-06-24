x = 100


def fun1():
    x = 2
    def fun2():
        global x
        x = 80
    print("before calling", x)
    fun2()
    print("after calling", x)

if __name__ == '__main__':
    fun1()
    print(x)