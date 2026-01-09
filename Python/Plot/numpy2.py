import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(0,100,10)
y1 = np.sin(x)
y2 = np.cos(x)

plt.plot(x, y1, label="sin(x)", color="blue")
plt.plot(x, y2, label="cos(x)", color="red", linestyle="--")
plt.legend()
plt.show()
