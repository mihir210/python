
class A:
    def met(self):
        print("class A")
    pass
class B(A):
    def met(self):
        print("class B")
    pass


class C(A):
    def met(self):
        print("class C")
    pass
class D(B, C):
    def met(self):
        print("class D")
    pass

if __name__ == '__main__':
    d  = D()
    d.met()
    c = si.result()
