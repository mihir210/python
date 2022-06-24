# private =  only class
# protected = derived and own class
# public all access

class base:
    _pe= 48   #protected member one _
    __pri = 10
    pass

if __name__ == '__main__':
    s1 = base()
    print(s1._pe)
    # print(s1.__pri)  # not access private

    print(s1._base__pri)   ## python called namemengling
