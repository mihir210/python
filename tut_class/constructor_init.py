class Stu:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def printdata(self):
        print( f"name is {self.name} and id is {self.id}")


if __name__ == '__main__':
    s1 = Stu("mihir", 1)
    print(s1.name, s1.id)
    s1.printdata()