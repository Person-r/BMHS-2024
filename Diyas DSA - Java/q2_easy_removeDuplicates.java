import java.util.ArrayList;
import java.util.Arrays;

public class q2_easy_removeDuplicates {
// For this problem. you are given a sorted list. You must go through and remove all of the duplicates from the list
// It is not guarenteed that there will be a duplicate
// return a sorted list without duplicates
// Editing the list in place is not mandatory
// only the library that is imported is allowed

// Example 1:
// [1,2,2,3,4,5]
// Answer:
// [1,2,3,4,5]
// Example 2:
// [1,2,3,4,5,5,5,5,6,7,10,10]
// Answer
// [1,2,3,4,5,6,7,10]

// Suggested Approaches:
// Iteration,Hash Set
    private int[] removeDuplicates(int[] testList) {
        int[] answer = {};
        return answer;
    }
    public void main(String[] args) {
        System.out.println(check());
    }












































































































































    private String check() {
        int testcases[][] = {
            {1,2,3,4,5,6},
            {7,9,10,11,15},
            {1,1},
            {1,2,3},
            {1,1,1,2,2,2,3,3,3},
            {1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,4}
        };
        for (int i = 0; i < testcases.length; i++) {
            // System.out.println(myown(testcases[i]));
            // System.out.println(myown(testcases[i]));
            if (!Arrays.equals(myown(testcases[i]), removeDuplicates(testcases[i]))) {
                return ("failed testcase " + (i+1) );
            }
            
        }
        return "You passed";
    }

    private int[] myown(int[] listitem) {
        int lastvalue = -1;
        ArrayList<Integer> answer = new ArrayList<>();
        for (int i = 0; i < listitem.length; i ++) {
            if (listitem[i] != lastvalue) {
                answer.add(listitem[i]);
                lastvalue = listitem[i];
            }
        }
        
        Integer[] x = new Integer[answer.size()];

        for (int i = 0; i < answer.size(); i++) {
            Integer y = answer.get(i);
            x[i] = y;
            
        }

        int[] intArray = Arrays.stream(x).mapToInt(Integer::intValue).toArray();

        return intArray;
    }

    

    

}
