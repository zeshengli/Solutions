public class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> list = new ArrayList<String>();
        for (int i = 1; i < n + 1; i++){
            String s = "";
            if (i % 3 == 0){
                s += "Fizz";
            }
            if (i % 5 == 0){
                s += "Buzz";
            }
            if (s.length() == 0 ) {
                s += i;
            }
            list.add(s);
        }
        return list;
    }
}
