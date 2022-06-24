# import time

# a1 = time.time()

class emp:
    glob = 10
    def __init__(self, v1):
        self.q1= v1

    def put(self):
        print(f"value is {self.q1}")
    def __add__(self, other):
        s1 = emp(0)
        s1.q1= self.q1 + other.q1
        return s1

if __name__ == '__main__':
    e1 = emp(12)
    e2 = emp(13)

    e3 = e1 + e2
    print(e3.q1)

