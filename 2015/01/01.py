f = open("input.txt", "r")
seq = f.read()

print("floor is : " , seq.count('(') - seq.count(')'))

floor = 0
idx = 0

for cmd in seq :
    idx = idx + 1

    if cmd == '(' :
        floor = floor + 1
    else :
        floor = floor - 1

    if floor == -1 :
        print("second part answer is : " , idx)
        break
