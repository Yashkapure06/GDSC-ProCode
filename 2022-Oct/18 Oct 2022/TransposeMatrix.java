import java.util.*;
public class TransposeMatrix {
    public static void main(String[] args) {
    	
    	//create 2d array to hold matrix kind of data
    	
        Object[][] data = {
            { 1, 1, 1, 1 }, //  [[r1col1, r1col2, r1col3, r1col4],
            { 2, 2, 2, 2 }, //   [r2col1, r2col2, r2col3, r2col4],
            { 3, 3, 3, 3 }, //   [r3col1, r3col2, r3col3, r3col4]]"
            { 4, 4, 4, 4 }, //   [r3col1, r3col2, r3col3, r3col4]]"
            
            
        };
        
        
        List<List<Object>> table = new ArrayList<List<Object>>();//list to hold 2d matrix
        
        for (Object[] row : data) {//iterate each row of 2d array
            table.add(Arrays.asList(row));//convert 1d array into list and then add it to list of list
        }
        System.out.println(table); //  [[r1col1, r1col2, r1col3, r1col4],
                                   //   [r2col1, r2col2, r2col3, r2col4],
                                   //   [r3col1, r3col2, r3col3, r3col4]]"
                                   //   [r4col1, r4col2, r4col3, r4col4]]"
        
        table = returnTranspose(table);//get the transpose of a matrix
        
        System.out.println(table); //  [[r1col1,r2col1, r3col1,r4col1],
                                   //   [r1col2, r2col2, r3col2,r4col2],
                                   //   [r1col3, r2col3, r3col3,r4col3],
                                   //   [r1col4, r2col4, r3col4,r4col4]]
    }
    static  List<List<Object>> returnTranspose(List<List<Object>> table) {
    	
        List<List<Object>> transposedList = new ArrayList<List<Object>>();//list of list to hold transpose
        
        final int firstListSize = table.get(0).size();
        for (int i = 0; i < firstListSize; i++) {
            List<Object> tempList = new ArrayList<Object>();//Temp list to hold each transposed row which was column initially
            
            for (List<Object> row : table) { // iterate outer list to get sublist each time in the iteration
            	tempList.add(row.get(i));//take sublist element at ith position each time and add it to temp list
            }
            
            //here col list have taken one one element from each element :
            //ex: during first iteration of outer loop, it takes 1st element from each sublist
            //during second iteration of outer loop, it takes 2nd element from each sublist
            transposedList.add(tempList);//each transposed list is added to transposedList
        }
        return transposedList;
    }
}
