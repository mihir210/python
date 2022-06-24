# lambda no need to make function   one liner function

minus = lambda x, y : x-y

def a_first(a):
    return a[0]

if __name__ == '__main__':
    # print(minus(10,5))
    a = [[1, 4], [68, 6], [8, 23]]
    a.sort(key=lambda x :x[0])
    print(a)