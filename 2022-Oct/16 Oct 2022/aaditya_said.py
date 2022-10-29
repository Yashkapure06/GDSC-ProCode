import numpy as np

def matrix_addition():
    a = [[1,1,1,1],
        [2,2,2,2],
        [3,3,3,3],
        [4,4,4,4]]

    b = [[1,1,1,1],
        [2,2,2,2],
        [3,3,3,3],
        [4,4,4,4]]
    
    result = [[0,0,0,0],
            [0,0,0,0],
            [0,0,0,0],
            [0,0,0,0]]
    result = np.add(a,b)
    for i in result:
        print(i[0],i[1],i[2],i[3])
     
matrix_addition()
     
    