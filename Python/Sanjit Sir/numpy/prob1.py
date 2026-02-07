import numpy as np

class A:
    def __init__(self,arr):
        self.arr = arr
class B(A):
    def display(self):
        print(self.arr)
        print("Max:",np.max(self.arr))
        print("Min:",np.min(self.arr))

#arr = list(map( int ,input().split()))
arr = np.random.randint(1,100,5)

obj =B(arr)
obj.display()