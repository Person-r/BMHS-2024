public class q1_Easy_Remove_K {
    // You are given a string of characters
    // You must remove element k from the string 
    // It is not guarenteed that k will be in the string
    // Return the string without k
    // Refrain from using string.replace


    // EXAMPLE 1:
    // string = "hello world"
    // k = "l"

    // answer: heo word

    // EXAMPLE 2:
    // string = "I hate leetcode"
    // k = "e"

    // answer: I hat ltcod

    // Restrictions

    // 0 < len(k) < 2
    // 1 < len(TestString) < 50 
    // Testlist only contains lowercase letters
    // btw as a general note DO NOT rename the function given to you EVER
    private String removeKelement(String testString, String k) {
        return "";
    }   
    void main() {
        System.out.println(check());
    }




























































































    
    private String mySolution(String testString, String k) {
        String newString = "";
        for (int i = 0; i < testString.length(); i++) {
           String y = 
           String.valueOf(
            testString.charAt(i)
           );
            if ( !y.equals(k)) {
                newString += y;
            }
        }
        return newString;
    }

    private String check() {
        String[][] testcases = {
            {"i hate leetcode","e"},
            {"hello world","l"},
            {"coding club","z"},
            {"python is great","t"},
            {"mr walther","r"},
            {"java sucks","a"},
            {"the quick brown fox jumps over the lazy dog","o"}
        };

        for (int i = 0; i < testcases.length; i++) {
            if (!mySolution(testcases[i][0],testcases[i][1]).equals(removeKelement(testcases[i][0], testcases[i][1]))) {
                String string = "failed testcase " + (i + 1);
                return string;
            }
        }
        return "You passed"; 
    }




    
}
