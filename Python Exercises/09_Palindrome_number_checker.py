orig_Num = str(input("Enter a number: "))
rev_Num = str(orig_Num)[::-1]
s_True = "Yes. Given number is a palindrome number"
s_False = "No. Given number is not palindrome number"

def sta():
    if orig_Num == rev_Num:
        return s_True
    else:
        return s_False

print(sta())