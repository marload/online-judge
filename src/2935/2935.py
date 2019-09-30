A = input()
op = input()
B = input()

if op == "+":
    print(int(A) + int(B))
else:
    print(A + "0" * (len(B)-1))