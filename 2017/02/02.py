f = open("input.txt")
sum = 0
div_sum = 0

for line in f:
    tmp = list(map(int, line.split('\t')))
    min_tmp = min(tmp)
    max_tmp = max(tmp)
    sum += max_tmp - min_tmp
    for i in tmp:  # 5 9 2 8
        for t in tmp:
            if i == t:
                continue
            if i % t == 0:
                div_sum += i/t

print(sum)
print(div_sum)
