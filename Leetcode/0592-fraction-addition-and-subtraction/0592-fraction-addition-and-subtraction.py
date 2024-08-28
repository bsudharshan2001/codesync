from math import gcd

class Solution:
    def fractionAddition(self, expression: str) -> str:
        def parse_fraction(frac):
            if frac[0] == '-':
                sign = -1
                frac = frac[1:]
            else:
                sign = 1
            num, den = map(int, frac.split('/'))
            return sign * num, den

        def lcm(a, b):
            return abs(a * b) // gcd(a, b)

        def add(frac1, frac2):
            lcm_val = lcm(frac1[1], frac2[1])
            num1 = frac1[0] * (lcm_val // frac1[1])
            num2 = frac2[0] * (lcm_val // frac2[1])
            return num1 + num2, lcm_val

        def simplify(frac):
            gcd_val = gcd(abs(frac[0]), frac[1])
            return frac[0] // gcd_val, frac[1] // gcd_val

        fractions = []
        current = ''
        for char in expression:
            if char in '+-' and current:
                fractions.append(current)
                current = char
            else:
                current += char
        fractions.append(current)

        result = parse_fraction(fractions[0])
        for frac in fractions[1:]:
            operand = parse_fraction(frac)
            result = add(result, operand)

        result = simplify(result)
        return f"{result[0]}/{result[1]}"


        