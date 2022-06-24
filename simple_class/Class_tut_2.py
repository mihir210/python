class teacher:
    def getmark(self):
        print("Enter the mark")
        self.__mark = int(input())

    def putmark(self):
        print("mark =", self.__mark)


s1 = teacher()

s1.getmark()

s1.putmark()
