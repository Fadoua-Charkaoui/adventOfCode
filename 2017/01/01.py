f = open("input.txt", "r")
line = f.read()

sum_1 = 0
sum_2 = 0

for index in range(len(line)):
   # print(line[index])
    if line[index] == line[index-1]:
        sum_1 += int(line[index])

    if index >= int(len(line)/2):
        new_index = index-int(len(line)/2)
    else:
        new_index = index+int(len(line)/2)

   # new_index = (index+int(len(line)/2))%len(line)

    if line[index] == line[new_index]:
        sum_2 += int(line[index])


print(sum_1)
print(sum_2)
