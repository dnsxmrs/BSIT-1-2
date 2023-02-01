INT1 = int(input("Enter first integer: "))
INT2 = int(input("Enter second integer: "))

def pro(int1, int2):
    pro1 = int1 * int2
    if pro1 <= 1000:
        return pro1
    else:
        res = int1 + int2
        return res

print("The result is", pro(INT1, INT2))
