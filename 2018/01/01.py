f = open("input.txt", "r")

lines = f.readlines()

#First part:
Freq = 0

for line in lines:
    Freq += int(line.strip())
    #print(line.strip())
    
print(Freq)

#Second part:
Freq = 0
Duplicate_found = False
Freqs = list()
Freqs.append(Freq)

while not Duplicate_found :

    for line in lines:
        Freq += int(line.strip())
        if Freq not in Freqs:
            Freqs.append(Freq)
        else:
            print(Freq)
            Duplicate_found = True 
            break
   