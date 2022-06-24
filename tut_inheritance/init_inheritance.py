class student:

    def getname(self, n):
        self.name = n
    def __init__(self, name):
        self.name= name

    def printname(self):
        print(f"name is {self.name}")


class result(student):
    def getmark(self, mark):
        self.mark = mark

    def __init__(self, mark, name):
        self.mark = mark
        self.name = name


    def putmark(self):
        print(f"mark is {self.mark}")


if __name__ == '__main__':
    s1= result(45,"mihir")
    # s1.getmark(45)
    # s1.getname("mihir")
    s1.putmark()
    s1.printname()
