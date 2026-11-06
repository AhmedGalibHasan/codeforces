def distinct(year):
    return len(set(str(year))) == 4

year = int(input()) + 1
while not distinct(year):
    year += 1
print(year)
