f = open("input.txt")
sum = 0

for line in f:
    tmp = list(map(int, line.split('\t')))
    min_tmp = min(tmp)
    max_tmp = max(tmp)
    sum += max_tmp - min_tmp

print (sum)