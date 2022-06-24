class student:

    def getname(self, n):
        self._name = n

    def printname(self):
        print(f"name is {self._name}")


class result(student):
    def getmark(self, mark):
        self.mark = mark

    def putmark(self):
        print(f"mark is {self.mark}")


if __name__ == '__main__':
    s1= result()
    s1.getmark(45)
    s1.getname("mihir")
    s1.putmark()
    s1.printname()
