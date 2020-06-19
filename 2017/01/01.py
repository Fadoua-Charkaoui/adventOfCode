f = open("input.txt", "r")
line = f.read()

sum = 0
    
for index in range(len(line)) : 
   # print(line[index])
   if line[index] == line[index-1]:
       sum += int(line[index])

print(sum)