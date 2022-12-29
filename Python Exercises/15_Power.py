base = int(input("Enter a base number: "))
expo = int(input("Enter a exponent number(non-negative): "))

def exponent(base, expo):
    print(str(base) + " raises to the power of " + str(expo) + " : " + str(base**expo))
    
exponent(base, expo)