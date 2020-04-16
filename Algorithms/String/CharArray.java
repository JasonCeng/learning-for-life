// "static void main" must be defined in a public class.
public class CharArray {
  public static void main(String[] args) {
      String s = "Hello World";
      char[] str = s.toCharArray();
      str[5] = ',';
      System.out.println(str);
  }
}