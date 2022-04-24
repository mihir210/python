s = set([1, 2, 4])

print(s)
s.add(3)
print(s)
s.add(1)  ## no reapet value add

print(s)
s.union({1,2,6})
print(s)
s1= s.intersection({1,2,3})
print(s,s1)