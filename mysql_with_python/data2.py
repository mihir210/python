from connection import mydb

# mydb = db.connect(
#   host="localhost",
#   port="3306",
#   username="root",
#   password="",
#   database="python"
# )
def insert():
  print("1. fahrenheat to calsius", "2.calsius to fahrenheat")
  id = int(input())

  if id == 1:
    ft = float(input("Enter the temperature in fahrenheat :"))
    ct = (ft - 32) / 1.8
    mys = mydb.cursor()
    data = 'INSERT INTO `temperature` values(%s,%s, %s)'
    va = (ft, ct, id)
    mys.execute(data,va)
    mydb.commit()
  elif id==2:
    ct = float(input("Enter the temperature in calsius :"))
    ft = ct * 1.8 + 32
    mys = mydb.cursor()
    data = 'INSERT INTO `temperature` values(%s,%s, %s)'
    va = (ft, ct, id)
    mys.execute(data, va)
    mydb.commit()


def display():
  mys.execute("select * from `temperature`")
  result = mys.fetchall()


  for i in result:
    if i[2] == 2:
      printline()
      print("calsius = ",i[1], "fahrenheat = ", i[0])
    elif i[2] ==1:
      printline()
      print("fahrenheat = ", i[0], "calsius = ",i[1])

  printline()

def erase():
  mys = mydb.cursor()
  data = 'TRUNCATE TABLE `python`.`temperature`'
  mys.execute(data)
  mydb.commit()
def printline():
  for i in range(50):
    print("-", end = '')

  print()

mys = mydb.cursor()
while True:
  print("1.insert", "2.display", "3.clear all data", "4.exit")
  n = int(input())

  if n == 1:
    insert()
  elif n== 2:
    display()
  elif n == 3:
    erase()
  elif n== 4:
    print("Exit program")
    break
  else:
    continue
