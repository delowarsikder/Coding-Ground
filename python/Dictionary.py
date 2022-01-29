week_day={1:'Saturday', 2:'Sunday', 3:'Monday', 4:'Tuesday',5:'Wednesday',6:'Thursday',7:'Friday'}

# for  key in week_day.keys():#print key
#     print(key)
#
# for value in week_day.values(): #print value
#     print(value)
#
# for key,value in week_day.items():
#     print(key,value)

print('Day Name:',week_day[1])

print(week_day.values())
week_day.values()#not work

week_day[9]='KUET'
print(week_day.values())
del week_day[9]
print(week_day.values())
