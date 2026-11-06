ans = 0
for _ in range(int(input())):
    people, capacity = map(int, input().split())
    if capacity - people >= 2:
        ans += 1
print(ans)
