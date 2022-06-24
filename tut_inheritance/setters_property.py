class emp:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def explain(self):
        return f"this emp is {self.fname} {self.lname}"

    @property
    ###we have not use () at call time
    def email(self):   #not   change value we make setter
        if self.fname == None and self.lname == None:
            return "Email not set please set "
        return f"{self.fname}.{self.lname}@mihir.com"

    @email.setter
    def email(self, string):
        names =string.split("@")[0]
        self.fname = names.split(".")[0]
        self.lname = names.split(".")[1]

    @email.deleter
    def email(self):
        self.fname =None
        self.lname = None

if __name__ == '__main__':
    em1 = emp("mihir", "hadavani")
    print(em1.explain())
    print(em1.email)
    em1.email = "mihir.helo@gmail.com"
    print(em1.fname, em1.lname)
    del em1.email

