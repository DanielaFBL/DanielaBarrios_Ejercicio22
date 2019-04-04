import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ metropolis.cpp -o metropolis.x")
a = os.system("./metropolis.x > metropolis.dat")

plt.figure()
data = np.loadtxt("metropolis.dat")
plt.plot(data[:,0], data[:,1])
plt.axis('square')
plt.xlim([-25, 25])
plt.ylim([-25, 25])
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("metropolis.png")
