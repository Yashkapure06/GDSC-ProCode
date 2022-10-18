import numpy as np
def transpose_list():
       
      a= [[1, 1, 1, 1], 
                  [2, 2, 2, 2], 
                  [3, 3, 3, 3], 
                  [4, 4, 4, 4] ]
                  
      print(f"original array:\n{a}")
      print(np.transpose(a))
      
transpose_list()