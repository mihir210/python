class Emp:
    class_member = 10
    pass


if __name__ == '__main__':
    obj1 = Emp()
    obj1.name = "Mihir"
    print(obj1.name, obj1.class_member)

    obj2  = Emp()
    obj2.name = "Md"
    print(obj2.name, obj2.class_member)
    print(obj2.__dict__)