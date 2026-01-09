import matplotlib.pyplot as plt
import numpy as np

x=np.arange(-10,10,0.1)
y=x**2

plt.plot(x,y)
plt.title("Plot of y = x^2")


plt.xlabel("X")
plt.ylabel("Y")

plt.show()