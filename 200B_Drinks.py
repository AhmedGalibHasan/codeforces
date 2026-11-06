n = int(input())
volumes = list(map(int, input().split()))
print(f"{sum(volumes) / n:.12f}")
