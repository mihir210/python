item = ["c/c++", "java", "python", 56]

print(item)
print(item[0])
num = [1,2,3,4,5,6,7, 99, 667, 24]

print(num)
num.sort()
print(num)
print(num[3])
num.reverse()
print("Reverse number ", num)
print(num[2:5])
print("length of number ", len(num))
print("maximum of these number ", max(num))
print("minimum of these number ", min(num))
print("before append", num)
num.append(86)  # 86 at last
print(num)

num.insert(1,78)
print(num)

num.remove(78)
print(num)
num.pop()  # last number delete

print(num)