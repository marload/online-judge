numOfPeople = int(input())
rawSeats = input()
holderSeats = '*'
countHolder = 1
coupleIgnore = 0

for seat in rawSeats:
    if (seat == 'S'):
        holderSeats += 'S*'
        countHolder += 1
    elif (seat == 'L'):
        if (coupleIgnore == 0):
            coupleIgnore += 1
            holderSeats += 'L'
            continue
        elif (coupleIgnore == 1):
            coupleIgnore = 0
            holderSeats += 'L*'
            countHolder += 1

if countHolder > numOfPeople:
    print(numOfPeople)
else:
    print(countHolder)