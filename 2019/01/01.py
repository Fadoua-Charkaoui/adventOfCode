import math

f = open("input.txt")

mass = 0


for line in f:
    mass += math.floor(int(line.strip())/3)-2
    # print(line.strip())
print(mass)
