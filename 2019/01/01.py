import math

# 14 2
# 1969 966
# 100756 50346

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
    fuel_simple_req += math.floor(int(line.strip())/3)-2
    fuel_complex_req += get_fuel_complex_required(int(line.strip()))
    # print(line.strip())


print(fuel_simple_req)
print(fuel_complex_req)
