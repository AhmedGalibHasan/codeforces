n = int(input())
words = []
for i in range(1, n + 1):
    words.append("I hate" if i % 2 else "I love")
    words.append("it" if i == n else "that")
print(" ".join(words))
