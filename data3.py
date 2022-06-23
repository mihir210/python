import mysql.connector as db

mydb = db.connect(
  host="localhost",
  port="3306",
  username="root",
  password="",
  database="python"
)

def insert():
    to_days = int(input("Enter the total days : "))
    y = to_days / 360
    t1 = to_days % 360
    m = t1 / 30
    d = t1 % 30
    mys = mydb.cursor()
    data = 'INSERT INTO `days_to`(`total_days`, `year`, `month`, `days`, `id`) values(%s,%s, %s, %s, 1)'
    va = (to_days, y, m, d)
    mys.execute(data, va)
    mydb.commit()

def printline():
  for i in range(50):
    print("-", end = '')

  print()


def display():
  mys = mydb.cursor()
  mys.execute("select * from `days_to`")
  result = mys.fetchall()

  for i in result:
    printline()
    print("Total days = ", i[0], "       YEAR = ", i[1], "MONTH = ", i[2], "DAYS = ", i[3])

  print()
  mydb.commit()
def erase():
  mys = mydb.cursor()
  data = 'DELETE FROM `days_to` WHERE `id` = 1'
  mys.execute(data)
  mydb.commit()

print("This program calculate year month days from given total days and save to database")
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
    break