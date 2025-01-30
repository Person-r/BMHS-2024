
import java.util.Arrays; 
public class q3_Hard3_GetCorrectAnswer {
// You are given an equation which is a string.
// You are also given a SORTED nums list.
// You must replace the character X in the equation string with a number in nums
// All occurances of the character X will be the same integer from nums 
// You must return 1 if it is possible to create an equation that equals target
// You must return 0 if it is impossible to create an equation that equals target
// You must do every equation from left to right. Do not worry about the order of operations

// (If this is confusing please refer to the examples or ask me for clarification)

// >> CHALLENGE << 
// Search the nums list in O(LOG(N)) time complexity 
// (this means you are not allowed to search through every item in the list)
// This is possible you dont have to brute force this trust me 

// EXAMPLE 1:

// equation = "X + X"
// target = 4
// nums = [1,2,3]

// Answer:
// 0

// EXAMPLE 2:
// equation = 2 * X + 5
// target = 14
// nums = [1,5,10,15]

// Answer:
// 1

// Restrictions:
// 1 < len(nums) < 11
// equation is guarenteed to have at least ONE occurence of target
// Target will never be a negative number
// There are no negative numbers present in the equation
// Allowed operations = ["+","-","*"]


// SUGGESTED METHODS:
// STACK,TWO POINTERS, BINARY SEARCH TREE

// public static bool main() 

// public static void main(String[] args) {
  
// }
  public boolean Solve(String[] nums,String target, String equation) {
    return false;
    // dont try this yet im not done 
  }
 




































































































  

































  private  String[] append (String[] List,String[] itemAdd) {
    String[] Newstring;
    
    for (int i = 0; i < List.length; i++) {
      if (i != List.length) {
        // Newstring
      }
    }

    return List;
  }


  private  boolean Mysolution(String[] nums,String target, String equation) {
    String[] ostack = {};
    String[] stack = {};
    String[] operands = {"+","-","*"};
    int a = 0;
    char temp;
    for (int i = 0; i < equation.length(); i++ ) {
      temp = (equation.charAt(i));
      if (lcompare(operands, equation) == true) {
        
      }
    }
    return false;
  }


  private  boolean lcompare(String[] string1, String string2) {
    if (string2 == "-" || string2 == "+" || string2 == "*") {
      return true;
    }

    return false;
  }





  public String check() {
    String [][][] testcases = {{{"1","2","3"},{"4"},{"X + X"}},{{"1","2","3"},{"5"},{"X + X"}},{{"2","5","10","15"},{"6"},{"2 - X + 5"}},{{"1","3","7","8","9","15","20"}, {"246"}, {"3 + X + X - 12 + X + X"}},{{"1","2","3","4","5","6","7","8","9","10"},{"25"}, {"X * X - X"}},{{"1","2","3","4","5","6","7","8","9","10"},{"20"}, {"X * X - X"}},{{"1","10","100","1000"},{"500"},{"5 * X"}},{{"1","2","3","4","5"},{"12"},{"4 + 4 + 4"}},{{"1","2","3","4","5","6","7"},{"10"},{"5 * X"}} };
    for (int i = 0; i < testcases.length; i++) {
      boolean Asolution = Mysolution(testcases[i][0],testcases[i][1][0],testcases[i][2][0]);
      boolean Bsolution = Solve(testcases[i][0],testcases[i][1][0],testcases[i][2][0]);

      if (Asolution != Bsolution) {
        System.out.println("Failed Testcase "+ (i + 1));
        System.out.println("Nums: " + Arrays.toString(testcases[i][0]) + "\n" +"Target: " + testcases[i][1][0] + "\n" +"Equation: " + testcases[i][2][0] + " \n");
        System.out.println("Correct Answer:" + Asolution + "\n");
        System.out.println("Your Answer: " + Bsolution);
        return "";
      }
    }

    return "You passed!";
  }


  public void main(String[] args) {
    System.out.println(check());
  }
}