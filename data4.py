import mysql.connector as db

mydb = db.connect(
  host="localhost",
  port="3306",
  username="root",
  password="",
  database="python"
)

def insert():
  id = input("Enter the id of student :")
  name = input("Enter the name of student :")
  cpi = float(input("Enter the cpi of student :"))
  mys = mydb.cursor()
  data = 'INSERT INTO `student_data` values(%s,%s, %s)'
  va = (id, name, cpi)
  mys.execute(data, va)
  mydb.commit()

def printline():
  for i in range(90):
    print("-", end = '')

  print()

def display():
  mys = mydb.cursor()
  mys.execute("select * from `student_data`")
  result = mys.fetchall()

  for i in result:
    printline()
    print("id = ", i[0], "     name = ", i[1], "     cpi = ", i[2])
  printline()
  mydb.commit()


def erase():
  mys = mydb.cursor()
  data = 'TRUNCATE TABLE `python`.`student_data`'
  mys.execute(data)
  mydb.commit()


mys = mydb.cursor()
print("This program get data of student ")
printline()
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
    print("exiting the program")
    break
  else:
      print("Enter correct choice")
      continue
