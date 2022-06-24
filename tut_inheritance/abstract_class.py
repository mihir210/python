from abc import ABC, abstractmethod

class shape(ABC):
    @abstractmethod
    def printarea(self):
        return 0

class rectangle(shape):
    type = "rectangle"
    side =4
    def __init__(self, l, b):
        self.length = l
        self.width = b
    def printarea(self):
        return self.length * self.width


if __name__ == '__main__':
    d1 = rectangle(4,5)
    a = d1.printarea()
    print(a)