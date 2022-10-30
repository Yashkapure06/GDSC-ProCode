import numpy as np

def matrix_multiplication():
    a = [[1,1,1],
        [2,2,2],
        [3,3,3]]

    b = [[1,1,1],
        [2,2,2],
        [3,3,3]]
    
    result = [[0,0,0],
            [0,0,0],
            [0,0,0],]
    result = np.dot(a,b)
    for i in result:
        print(i[0],i[1],i[2])
     
matrix_multiplication()
     
    