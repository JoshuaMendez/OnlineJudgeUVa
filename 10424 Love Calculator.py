def val_char(c):
    return ord(c) - ord("a") + 1

def val_name(name):
    lowerName = name.lower()
    result = 0
    for c in lowerName:
        if c.isalpha():
            result += val_char(c)
    return result

def sum(num):
    sumN = 0
    while num > 0:
        mod = num % 10
        sumN += mod
        num //= 10

    if (sumN >= 10):
        r = sum(sumN)
    else:
        r = sumN
    return r;

while True:
    try:
        name1 = input()
        name2 = input()
        
        a = val_name(name1)
        sumA = sum(a)

        b = val_name(name2)
        sumB = sum(b)

        maxValue = max(sumA, sumB)
        minValue = min(sumA, sumB)

        calc = round((minValue/maxValue)*100, 2)
        fCalc = '{:.2f}'.format(calc)

        print(fCalc, "%")
    except EOFError:
        break