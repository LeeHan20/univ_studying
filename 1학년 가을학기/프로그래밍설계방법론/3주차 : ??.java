//프로그래밍설계방법론 3주차

//시프기에서 배운 c언어와 아주아주 많이 비슷하다
//자료형 변환, 자료형의 크기 등등

//예제코드
//보고 알아서 파악하자
public class Hello {
  public static int sum(int n, int m) {
    return n + m;
  }
  
  public static void main(String[] args) { 
    int i = 20;
    int j = s;
    char a;

    s = sum(i, 10);
    a = '?'
    System.out.println(a);
    System.out.println("Hello");
    System.out.println(s);
}
  
// --------------------------------------------
  
import java.util.Scanner;

public class ScannerEx {
  public static void main(String args[]) {
    System.out.println("이름, 도시, 나이, 체중, 독신 여부를 빈칸으로 분리하여 입력하세요");
    Scanner scanner = new Scanner(System.in);

    String name = scanner.next();
    System.out.print("이름은 " + name + ", ");

    String city = scanner.next(); 
    System.out.print("도시는 " + city + ", ");

    int age = scanner.nextInt(); 
    System.out.print("나이는 " + age + "살, ");

    double weight = scanner.nextDouble(); 
    System.out.print("체중은 " + weight + "kg, ");

    boolean single = scanner.nextBoolean(); 
    System.out.println("독신 여부는 " + single + "입니다.");

    scanner.close(); 
  }
}
  
// - 식별자
//변수가 여기에 포합됨
//이름 붙이는 그거

// - 자바 정수 리터럴
// 15 -> 10진수 리터럴 15
// 015 -> 0으로 시작하면 8진수. 십진수로 13
// 0x15 -> 0x로 시작하면 16진수. 십진수로 21
// 0b0101 -> 0b로 시작하면 2진수. 십진수로 5

// 상수 선언은 const 아니고 final을 사용함

// a ? b : c -> 삼항 연산자
// 조건식 ? 참일 때의 값 : 거짓일 때의 값

