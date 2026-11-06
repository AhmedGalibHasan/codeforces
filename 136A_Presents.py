n = int(input())
received = list(map(int, input().split()))
giver = [0] * (n + 1)
for i, friend in enumerate(received, 1):
    giver[friend] = i
print(*giver[1:])
