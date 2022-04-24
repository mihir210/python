# dictionary is nothing but key value pairs

d1 ={}
print(type(d1))
d2 ={ "mihir":"roti", "abhay":"bhel", "nijal":{"b":"alu", "l":"dabeli", "d":"roti"}}

print(d2)
print(d2["mihir"])
print(d2["nijal"]["b"])
d2["dax"] = "samosa"
print(d2)
del d2["dax"]
print(d2)

d3 = d2.copy()   ##d2 copy pass not reference
del d3["mihir"]

print(d3)