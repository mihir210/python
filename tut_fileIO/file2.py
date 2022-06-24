# f1 = open("FILE.txt","w")
#
# f1.write("mihir\n")
# f1.close()
#
# f2 = open("FILE.txt", "a")
# f2.write("mihir\n")
# f2.close()


# read and write both
f3 = open("FILE.txt", "r+")
print(f3.read())
f3.write("thanks")