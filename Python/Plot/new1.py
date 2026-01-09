import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)
y = np.sin(x)

plt.plot(x, y, color="blue")
plt.fill_between(x, y, alpha=0.3, color="blue")  # shaded region

plt.title("Fill Between Example")
plt.show()
