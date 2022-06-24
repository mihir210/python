n1 = input("enter number 1")
n2 = input("Enter number 2")

try:
    print("sum  = ", int(n1) + int(n2))

except Exception as e:
    print(e)
    
print("after try ")