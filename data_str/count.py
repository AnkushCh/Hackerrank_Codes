# from collections import  Counter
# c = Counter(input())
# print(len(c.values()))
# print((c.keys()))
l = list()
for _ in range(5):
    n = input()
    l.append(n)
print(l)

x = l.pop()
print(l[-1])
if 'a' in l:
    print("Yes")