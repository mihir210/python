class student:

    def getname(self, n):
        self.name = n

    def printname(self):
        print(f"name is {self.name}")


class result(student):
    def getmark(self, mark1, mark2):
        self.sub1 = mark1
        self.sub2 = mark2

    def putmark(self):
        print(f"mark is {self.sub1} and {self.sub2}")

class total(result):
    def putto(self):
        self.to = self.sub1 + self.sub2
        self.putmark()
        self.printname()
        print(f"total is {self.to}")

if __name__ == '__main__':
    s1 = total()
    s1.getname("mihir")
    s1.getmark(45, 34)
    s1.putto()