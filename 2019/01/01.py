import math

# 14 2
# 1969 966
# 100756 50346


def recusrsive(mass): 

    if math.floor(mass/3) - 2 > 0:  # If fuel required > 0 
        tmp = math.floor(mass/3) - 2 # calculate fuel required 
        return tmp + recusrsive(tmp) # fuel required + fuel required of the previous fuel required
    else:
        return 0


def get_fuel_complex_required(module_mass):
    total = 0
    while module_mass > 8:
        tmp = math.floor(module_mass/3-2)
        total += tmp
        module_mass = tmp

    return total


f = open("input.txt")

fuel_simple_req = 0
fuel_complex_req = 0

for line in f:
    fuel_simple_req += math.floor(int(line.strip())/3)-2   #Part one 
    fuel_complex_req += recusrsive(int(line.strip()))      #Part two
    # print(line.strip())


print(fuel_simple_req)
print(fuel_complex_req)
