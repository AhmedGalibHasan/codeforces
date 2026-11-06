n = int(input())
games = input().strip()
anton = games.count("A")
danik = n - anton
if anton > danik:
    print("Anton")
elif danik > anton:
    print("Danik")
else:
    print("Friendship")
