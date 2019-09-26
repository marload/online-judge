num = int(input())
lastNameDict = {}
posibleList = []

for i in range(num):
    lastName = input()
    
    try:
        lastNameDict[lastName[0]] += 1
        if lastNameDict[lastName[0]] == 5:
            posibleList.append(lastName[0])
    except:
        lastNameDict[lastName[0]] = 1

if len(posibleList) == 0:
    print('PREDAJA')
    exit()

posibleList.sort()
print(''.join(posibleList))


