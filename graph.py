import numpy as np
import matplotlib.pyplot as plt

file = open("x.dat")
x_data = file.read().split(', ')
#print(x_data)

x = np.zeros(len(x_data))

for i in range(len(x_data)):
    x[i]=float(x_data[i])
#print(x)

file = open("t.dat")
t_data = file.read().split(', ')
#print(t_data)

t = np.zeros(len(x_data))
for i in range(len(t_data)):
    t[i]=float(t_data[i])
#print(t)

real_x = np.exp(-3*t)
error = np.linalg.norm(real_x - x)
print(error)

e = t[1] - t[0]

plt.plot(t, x)
plt.title('dt = %e' %e)
plt.xlabel('t')
plt.ylabel('x')
plt.text(1, 100, 'Error = %e' %error)

