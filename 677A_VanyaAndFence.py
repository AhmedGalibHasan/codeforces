n, h = map(int, input().split())
heights = list(map(int, input().split()))
print(sum(2 if height > h else 1 for height in heights))
