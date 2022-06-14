class TNumber:
    def __init__(self, num):
        self._number = num

    def __repr__(self):
        return str(self._number)

    def get_number(self):
        return self._number

    def find_sum(self):
        n = self._number
        sum = 0
        while n > 0:
            digit = n % 10
            sum = sum + digit
            n //= 10
        return sum

    def find_first_digit(self):
        n = str(self._number)
        return int(n[0])

    def find_last_digit(self):
        n = str(self._number)
        return int(n[-1])