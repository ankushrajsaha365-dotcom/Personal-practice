import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(0,100,10)
y = np.sin(x)

plt.plot(x,y)
plt.xlabel("X")
plt.ylabel("sinX")
plt.grid(True)
plt.show()