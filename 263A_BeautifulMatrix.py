row = col = 0
for i in range(5):
    values = list(map(int, input().split()))
    for j, value in enumerate(values):
        if value == 1:
            row, col = i, j
print(abs(row - 2) + abs(col - 2))
