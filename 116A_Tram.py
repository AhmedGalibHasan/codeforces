current = best = 0
for _ in range(int(input())):
    left, entered = map(int, input().split())
    current = current - left + entered
    best = max(best, current)
print(best)
