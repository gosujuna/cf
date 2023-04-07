import numpy as np
from sklearn.tree import DecisionTreeRegressor
#code for 9.5 of Elements of Statistical Learning - Junha

np.random.seed(1)

p=10
m = np.zeros(p)
cov = np.identity(p)