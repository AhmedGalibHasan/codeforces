word = input().strip()
upper = sum(ch.isupper() for ch in word)
lower = len(word) - upper
print(word.upper() if upper > lower else word.lower())
