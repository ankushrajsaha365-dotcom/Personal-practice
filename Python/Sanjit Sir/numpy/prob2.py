import numpy as np


class A:
    def __init__(self):
        self.arr = np.random.randint(0,2,10)

class B(A):
    def split_array(self):
        cut = len(self.arr) // 4
        self.a = self.arr[:cut]
        self.b = self.arr[cut:]

class C(B):
    def true_false(self):
        bool_list = list(map(bool, self.b))
        print(bool_list)


check = C()
check.split_array()
check.true_false()
