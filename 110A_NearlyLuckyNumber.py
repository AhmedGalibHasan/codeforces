number = input().strip()
lucky = sum(ch in "47" for ch in number)
print("YES" if lucky in (4, 7) else "NO")
