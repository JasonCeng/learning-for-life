// "static void main" must be defined in a public class.
public class ConcatenateStringsWithStringBuilder {
  public static void main(String[] args) {
      int n = 10000;
      StringBuilder str = new StringBuilder();
      for (int i = 0; i < n; i++) {
          str.append("hello");
      }
      String s = str.toString();
  }
}