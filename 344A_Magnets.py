n = int(input())
groups = 1
previous = input().strip()
for _ in range(n - 1):
    current = input().strip()
    if current != previous:
        groups += 1
    previous = current
print(groups)
