from TNumber import TNumber


class TRealNumber(TNumber):
    def __init__(self, num):
        super().__init__(int(str(num).partition('.')[0]))
        self.__frac = int(str(num).partition('.')[2])

    def __repr__(self):
        return str(self._number) + '.' + str(self.__frac)

    def get_number(self):
        return float(str(self._number)+'.'+str(self.__frac))

    def find_last_digit(self):
        return int(str(self.__frac)[-1])
