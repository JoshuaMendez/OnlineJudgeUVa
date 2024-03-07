import math
# price(k) = p(sin(ak + b) + cos(ck + d) + 2)

while True:
    try:
        newInput = input()
        numeros = newInput.split()

        if len(numeros) >= 6:
            p = int(numeros[0])
            a = int(numeros[1])
            b = int(numeros[2])
            c = int(numeros[3])
            d = int(numeros[4])
            n = int(numeros[5])

        maxValue = -1e+100
        minValue = 0
        for k in range(n):
            calc = p*(math.sin(a*(k+1)+b)+math.cos(c*(k+1)+d)+2)
            minValue = max(minValue, maxValue - calc)
            maxValue = max(maxValue, calc)
        lastCalc = minValue
        fCalc = '{:.6f}'.format(lastCalc)
        print(fCalc)
    except EOFError:
        break