rows = range(1,11)

for x in rows:
    for i in rows:
        res = str(x*i)
        if (len(res) == 1):
            print(x*i, end='  ')
        else:
            print(x*i, end=' ')
    print('')