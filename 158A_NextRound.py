n, k = map(int, input().split())
a = list(map(int, input().split()))
cutoff = a[k - 1]
print(sum(score >= cutoff and score > 0 for score in a))
