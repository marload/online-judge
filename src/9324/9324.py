def isValid(message):
    alphaDict = {}
    ignoreIdx = 0
    
    for idx, alpha in enumerate(message):
        if ignoreIdx != 0 and ignoreIdx == idx:
            continue
        if not alpha in alphaDict:
            alphaDict[alpha] = 0
        if alphaDict[alpha] >= 2:
            if idx+1 >= len(message):
                return False
            elif message[idx+1] == alpha:
                alphaDict[alpha] = 0
                ignoreIdx = idx+1
            else:
                return False
            alphaDict[alpha] = 0
        else:
            alphaDict[alpha] += 1

    return True
        
                

num = int(input())
results = []

for i in range(num):
    if (isValid(input())):
        results.append('OK')
    else:
        results.append('FAKE')

for i in results:
    print(i)
