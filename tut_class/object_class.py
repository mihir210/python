class student:
    def getname(self):
        self.name = input("enter the name")
    def printname(self):
        print(self.name)


if __name__ == '__main__':
    s1 = student()
    s1.getname()
    s1.id = 1
    print(s1.name, s1.id)
    