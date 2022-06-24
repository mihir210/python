class stuent:
    def __init__(self, name, id, mark):
        self.name = name
        self.id = id
        self.mark = mark

    def __init__(self):
        self.name = ""
        self.mark =0
        self.id = 0
    def __add__(self, other):
        total  = self.mark  + other.mark
        return total
    def printli(self):
        self.__dc =2   ## __private  _protected
        print(self.__dc)

s1 = stuent()
s2 = stuent()
s1.mark = 98
s2.mark =100
print(s1.printli())
print(s1+s2)
