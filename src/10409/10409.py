numOfRequest, timeLimit = map(int, input().split())
timeList = list(map(int, input().split()))
accumulateTime = 0
result = 0

for i, time in enumerate(timeList):
    accumulateTime += time

    if (accumulateTime > timeLimit):
        print(i)
        exit()

print(len(timeList))
