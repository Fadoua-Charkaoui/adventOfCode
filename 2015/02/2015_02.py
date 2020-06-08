#! /bin/env python3

f = open("input.txt", "r")

lines = f.readlines()

total_size = 0
total_ribbon = 0

for line in lines:
    tmp = list(map(int , line.strip().split("x")))

    tmp.sort()
    # 2*l*w + 2*w*h + 2*h*l
    total_size += 2 * tmp[0] * tmp[1] + 2 * tmp[1] * tmp[2] + 2 * tmp[0] * tmp[2]

    #total_size += tmp[0] * tmp[1] * tmp[2] / max(tmp)
    total_size += tmp[0] * tmp[1]

    total_ribbon += tmp[0] * tmp[1] * tmp[2] # bow
    total_ribbon +=  2 * tmp[0] + 2 * tmp[1] # premiter

print(total_size)
print(total_ribbon)