from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import numpy as np

fig = plt.figure()
ax = fig.add_subplot(111, projection="3d")

z = np.linspace(0, 1, 100)
x = z * np.sin(25*z)
y = z * np.cos(25*z)

ax.plot3D(x, y, z, 'green')
plt.show()
