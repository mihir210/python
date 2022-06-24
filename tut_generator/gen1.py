"""
iterable   __iter  or __getitem__
iterator  __next
iteration __
"""
def gen(n):
    for i in range(n):
        yield i                ###generator

if __name__ == '__main__':
    # g = gen(3)
    # print(g.__next__())
    # print(g.__next__())

    for i in gen(9):     ##for big values
        print(i)