import random

random_number = random.randint(0, 5)#   0 to 5 rendom number
print(random_number)

rand = random.random() *100    ### random function 0 to 1
print(rand)

list = ["movie", "gaming", "eating"]
cho = random.choice(list)
print(cho)