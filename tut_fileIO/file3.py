f1 = open("FILE.txt")

print(f1.tell())   #positon of pointer in file
print(f1.readline())
print(f1.tell())
f1.seek(2)    # set pointer position
print(f1.readline())

f1.close()