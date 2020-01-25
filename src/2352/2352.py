n = int(input())
port = list(map(int, input().split()))
assert n == len(port)

dp = []

def lower_bound(arr, target):
    start = 0
    end = len(arr) - 1
    
    while True:
        if start == end:
            arr[start] = target
            return arr
        elif arr[(start + end) // 2] < target:
            start = (start + end) // 2 + 1
        elif arr[(start + end) // 2] >= target:
            end = (start + end) // 2
    

for idx, x in enumerate(port):
    if idx == 0:
        dp.append(x)
    else:
        if x > dp[-1]:
            dp.append(x)
        else:
            dp = lower_bound(dp, x)

print(len(dp))
            
