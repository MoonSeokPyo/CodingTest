package 입출력과사칙연산;

import java.io.*;

public class HelloWorld {
  static private BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

  public static void main(String[] args) throws IOException {
    StringBuilder sb = new StringBuilder();
    sb.append("Hello World!");
    bw.write(sb.toString());
    bw.flush();
    bw.close();
//    System.out.println("Hello World!");
  }
}
