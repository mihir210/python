class Stu:
    defalt = 10
    name = ""
    # def __init__(self, name, id):
    #     self.name = name
    #     self.id = id

    def printdata(self):
        print( f"name is {self.name} and id is {self.id}")

    @classmethod
    def ini(cls, name):
        return cls.name

if __name__ == '__main__':
    s1 = Stu().ini("mihir")
