f = open("input.txt", "r")

lines = f.readlines()
Freq=0

for line in lines:
    Freq += int(line.strip())
    #print(line.strip())
    
print(Freq)