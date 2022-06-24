class Stu:
    defalt = 10
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def printdata(self):
        print( f"name is {self.name} and id is {self.id}")

    @classmethod
    def change_defalt(cls, n):
        cls.defalt = n

if __name__ == '__main__':
    s1 = Stu("mihir", 1)
    s1.change_defalt(5)
    print(s1.defalt)