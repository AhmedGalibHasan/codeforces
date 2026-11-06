x = 0
for _ in range(int(input())):
    statement = input().strip()
    x += 1 if "++" in statement else -1
print(x)
