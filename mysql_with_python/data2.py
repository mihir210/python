from connection import mydb

# mydb = db.connect(
#   host="localhost",
#   port="3306",
#   username="root",
#   password="",
#   database="python"
# )

class tempconvert:
  def printline(self):
    for i in range(50):
      print("-", end='')

    print()


  def insert(self):
    print("1. fahrenheat to calsius", "2.calsius to fahrenheat")
    self.__id = int(input())

    if self.__id == 1:
      self.__ft = float(input("Enter the temperature in fahrenheat :"))

      self.__ct = (self.__ft - 32) / 1.8
      mys = mydb.cursor()
      self.__data = 'INSERT INTO `temperature` values(%s,%s, %s)'
      self.__va = (self.__ft, self.__ct, self.__id)
      mys.execute(self.__data,self.__va)
      mydb.commit()
    elif self.__id==2:
      self.__ct = float(input("Enter the temperature in calsius :"))
      self.__ft = (self.__ct )* 1.8 + 32
      mys = mydb.cursor()
      self.__data = 'INSERT INTO `temperature` values(%s,%s, %s)'
      self.__va = (self.__ft, self.__ct, self.__id)
      mys.execute(self.__data, self.__va)
      mydb.commit()


  def display(self):
    mys = mydb.cursor()
    mys.execute("select * from `temperature`")
    self.__result = mys.fetchall()


    for i in self.__result:
      if i[2] == 2:
        self.printline()
        print("calsius = ",i[1], "fahrenheat = ", i[0])
      elif i[2] ==1:
        self.printline()
        print("fahrenheat = ", i[0], "calsius = ",i[1])

    self.printline()

  def erase(self):
    mys = mydb.cursor()
    data = 'TRUNCATE TABLE `python`.`temperature`'
    mys.execute(data)
    mydb.commit()

if __name__ == '__main__':

  mys = mydb.cursor()
  while True:
    print("1.insert", "2.display", "3.clear all data", "4.exit")
    n = int(input())
    s1 = tempconvert()
    if n == 1:
      s1.insert()
    elif n== 2:
      s1.display()
    elif n == 3:
      s1.erase()
    elif n== 4:
      print("Exit program")
      break
    else:
      continue
