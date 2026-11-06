vowels = set("aoyeui")
word = input().strip().lower()
print("".join("." + ch for ch in word if ch not in vowels))
