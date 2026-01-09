import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y = np.sin(x)


plt.plot(x, y)
plt.annotate("Peak here", xy=(1.5, 1), xytext=(3, 1.5),
    arrowprops=dict(facecolor="black", shrink=0.05))
plt.show()
