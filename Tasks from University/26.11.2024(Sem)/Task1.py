def FindDayWinner(results):
    participants = set(results)
    
    participant1, participant2 = participants
    count1 = results.count(participant1)
    count2 = results.count(participant2)
    
    if count1 > count2:
        return participant1
    elif count2 > count1:
        return participant2
    else:
        return 'Tie'
    
parameter = input()
print(FindDayWinner(parameter.split()))