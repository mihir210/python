class A:
    v1 = "Class A"
    def __init__(self):
        self.d1 = " inside class A constructor"
        self.v1 = "instance class A"   ###intance variable
        self.sp = "special"    ###

class B(A):
    v1 = "Class B"
    def __init__(self):
        super().__init__()
        self.d1 = " inside class B constructor"
        self.v1 = "instance class B"   ###intance variable


if __name__ == '__main__':
    a = A()
    b = B()

    # print(a.v1)
    print(b.v1)
    # print(b.sp)   # override not show base class constructor
    # after super().__init__()

    print(b.sp, b.d1, b.v1)