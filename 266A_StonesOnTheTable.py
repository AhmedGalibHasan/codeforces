n = int(input())
stones = input().strip()
print(sum(stones[i] == stones[i - 1] for i in range(1, n)))
