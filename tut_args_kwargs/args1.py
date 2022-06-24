def funargs(*args):
    for i in args:                    ### like pointer
        print(i)

def fun2(**kwargs):
    for i, j in kwargs.items():
        print(f"{i} is a {j}")


if __name__ == '__main__':
    har = ["mihir", "nujal"]
    funargs(*har)

    di1 = {"mihir": "good", "asd":"bad"}
    fun2(**di1)