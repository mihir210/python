class student:
    defa = 10
    def __init__(self, name):
        self.name = name

    def printdata(self):
        print(f"name is {self.name}")
    @staticmethod
    def printgood(string):
        print("good " + string)


if __name__ == '__main__':
    s1 = student("mihiir")
    print(s1.printgood("hello"))

