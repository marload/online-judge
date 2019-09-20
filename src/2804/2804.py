

def searchOverlaped(stringA, stringB):
    for aIdx, a in enumerate(stringA):
        for bIdx, b in enumerate(stringB):
            if a == b:
                return aIdx, bIdx
    

def algo(stringA, stringB):
    aIdx, bIdx = searchOverlaped(stringA, stringB)
    
    for idx, b in enumerate(stringB):
        if idx == bIdx:
            print(stringA)
        else:
            print('.' * aIdx + b + '.' * (len(stringA) - (aIdx+1)))

stringA, stringB = input().split()
algo(stringA, stringB)
