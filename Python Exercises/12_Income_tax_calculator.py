money = 45000
const_Income = 10000
rem_Income = money - (const_Income + const_Income)
fir_Tax = const_Income * 0.00
sec_Tax = const_Income * 0.10
rem_Tax = rem_Income * 0.20
# print(const_Income,"* 0% +",const_Income,"* 10% +",rem_Income,"* 20% =  $",fir_Tax+sec_Tax+rem_Tax)
print(str(const_Income)+ "*0% + " + str(const_Income)+ "*10% + " + str(rem_Income) + "*20% = $" + str(fir_Tax+sec_Tax+rem_Tax))