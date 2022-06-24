import mysql.connector as connector

# mydb = connector.connect(
#   host = "sql5.freesqldatabase.com",
#   port = "3306",
#   username = "sql5501283",
#   password = "gxLDpreGF1",
#   database = "sql5501283"
# )

mydb = connector.connect(
  host = "localhost",
  port = "3306",
  username = "root",
  password = "",
  database = "python"
)

mys = mydb.cursor()
print("1.for insert ", "2.for display")
temp = int(input())


if temp == 1:
  r = int(input("Enter the roll no : "))
  n = input("Enter the name : ")
  m = float(input("Enter the marks : "))
  mys = mydb.cursor()
  data = 'INSERT INTO `details` values(%s,%s, %s)'
  tr = (r, n, m)

  mys.execute(data, tr)
  mydb.commit()
elif temp == 2:
  mys.execute("select * from `details`")

  result = mys.fetchall()
  for i in result:
    print("roll no = ", i[0], "    name = ", i[1], "    marks  = ", i[2])


