fbiGroup = []

for i in range(5):
    agentName = input()
    if 'FBI' in agentName:
        fbiGroup.append(i+1)

if len(fbiGroup) == 0:
    print('HE GOT AWAY!')
    exit()

for i in fbiGroup:
    print(i, end=" ")
