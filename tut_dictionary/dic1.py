d1 = {"mihir":"roti", "nijal":"pizza", "shubham":{"b":"bhakhri", "l":"roti", "d":"pizza"}}
# print(type(d1))

# print(d1)
# print(d1["mihir"])
#
# print(d1["shubham"]["b"])
# d1["ankit"] = "roti"
#
# print(d1)
# del d1["ankit"]
# print(d1)

d2 = d1   #pass the reference
d3 = d1.copy()   #pass the copy

print(d3)

d3.update({"nijal":"la"})
print(d3)