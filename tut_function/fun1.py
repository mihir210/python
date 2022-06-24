def fen():
    print("you are in function 1")
def avg(a,b):
    """this function calculate average"""
    avg = (a+b)/2
    return avg

if __name__ == '__main__':
   a = fen()
   print(a)  #not return value
   b = avg(2, 2)
   print(b)
   print(sum.__doc__)   #inbulit function
   print(avg.__doc__)  ##user defined
