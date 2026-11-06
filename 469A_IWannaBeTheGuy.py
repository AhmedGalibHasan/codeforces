n = int(input())
levels = set()
for _ in range(2):
    values = list(map(int, input().split()))
    levels.update(x for x in values[1:] if x)
print("I become the guy." if len(levels) == n else "Oh, my keyboard!")
