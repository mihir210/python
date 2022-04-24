mystr = "my name is Mihir"
print(mystr[11:16])  # print 11 to 16 index  11 include 16 exclude
print(len(mystr))

print(mystr[0:18:2])   # :2 for skip one character

print(mystr[-2:-6])
print(mystr.isalnum()) # only alphabet then true

print(mystr.endswith("hir"))   # end of string
print(mystr.count("M"))     # count m in string
print(mystr.capitalize())   # first character capitalize
print(mystr.find("is"))    # find the string starting index

print(mystr.upper())
print(mystr.replace("Mihir", "Mihir hadavani"))
