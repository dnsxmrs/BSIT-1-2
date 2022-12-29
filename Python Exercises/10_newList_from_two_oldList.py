list1 = [10, 20, 25, 30, 35]
list2 = [40, 45, 60, 75, 90]
result_List = []

for x in list1:
    if x%2 != 0:
        result_List.append(x)

for x in list2:
    if x%2 == 0:
        result_List.append(x)

print(result_List)