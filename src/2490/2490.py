def checkYoot(current):
    dict = {'0': 0, '1': 0}
    
    for i in current:
        dict[i] += 1
    
    if dict['1'] == 4:
        return 'E'
    elif dict['0'] == 4:
        return 'D'
    elif dict['0'] == 3:
        return 'C'
    elif dict['1'] == 3:
        return 'A'
    else:
        return 'B'

results = []
for i in range(3):
    results.append(checkYoot(input().split()))

for i in results:
    print(i)