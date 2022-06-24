l =10   #global
def fu1(n):
    l =5  #local
    print(l)
    print(n,"enterded ")
def changeglobl():
    global l
    l = 40

if __name__ == '__main__':
    fu1("hello")
    print(l)
    changeglobl()
    print(l)

