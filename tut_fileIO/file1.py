# r = open file in read mode
# w = open file in write mode
# x = create file if not exist
# a = add more content in file
# t = text mode
# b = binary mode
# + = read and write

# f = open("FILE.txt", "rt")
# con = f.read()
# print(con)
# f.close()
f2 = open("FILE.txt", "rt")
# for line in f2:
#     print(line, end=" ")

print(f2.readline())
print(f2.readlines())
f2.close()