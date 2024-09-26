//시스템프로그래밍 3주차

#include <stdio.h>
#include <limits.h>
//    ----------------------- cf -------------------------
#define _CRT_SECURE_NO_WARNINGS
//윈도우에서는 이게 없으면 컴파일이 안 된다고 하네요

//    ----------------------- 2-8 -------------------------
#define PI 3.14
//macro constant? 상수? -> just macro
//컴파일을 하기 전에 PI를 모두 3.14로 치환하는 전처리 과정을 거침
//#이 붙은 것들을 전처리 과정에서 처리함
//#define H "Hello"

int main(void) {
    
   char c1, c2;
   
   scanf("%c", &c1);
   printf("c1 is %c \n", c1);
   
   scanf("%c", &c2);
   printf("c2 is %c \n", c2);
   
   //char는 엔터를 바로 c2에 할당하기 때문에 기다리지 않음
   //엔터나 공백 등을 모두 문자로 인식하기 때문에 int을 출력하는 것과 다름
   //scanf(" %c", &c2); -> y스페이스(공백, 엔터 등)을 제외하고 입력을 받음

   double d1, d2;
   
   scanf("%lf", &d1);
   printf("d1 is %lf \n", d1);
   
   scanf("%lf", &d2);
   printf("d2 is %lf \n", d2);
    
   int age;
   int num;
   
   scanf("%d", &age);
   printf("age is %d \n", age);
   
   scanf("%d", &num);
   printf("num is %d \n", num);
   
   //입력 스트림(Input Stream): 데이터를 읽어오는 방향의 스트림
   //출력 스트림(Output Stream): 데이터를 기록하거나 내보내는 방향의 스트림
   //스트림(Stream) : 데이터를 순차적으로 읽거나 쓸 수 있는 일련의 데이터 흐름

   //키보드 -> 버퍼 -> 코드
   //여기에서 age에 공백문자를 포합시켰다면 버퍼에서 제외시킴
   //키보드에서 입력하면 버퍼에 들어감
    

    
//    ----------------------- 2-12 -------------------------
   float f = 0.123456789123456789f;
   double d = 0.123456789123456789;
   
   printf("double is %20lf \n", d);
    
   printf("float f is %f \n", f);
   printf("float f is |%20f| \n", f);
   printf("float f is |%15.8f| \n", f);
   printf("float f is |%-15.8f| \n", f);
   printf("float f is |%+-15.8f| \n", f);
   
   int i = 365;
   
   printf("int i is %d \n", i);
   printf("int i is |%8d| \n", i);
   printf("int i is |%-8d| \n", i);
   printf("int i is |%+-8d| \n", i);
   printf("int i is |%+-8.4d| \n", i);
    
   int num = 128;
   char ch = num;
   
   printf("%d %d \n", num, ch);
   printf("%u %u \n", num, ch);
   
   int x = printf("%s \n", "Hello");
    
    
//    형식 지정자  | 의미
//    -------------|-------------------------
//    %d           | decimal
//    %ld          | long decimal
//    %lld         | long long decimal
//    %u           | unsigned int
//    %lu          | unsigend long
//    %f           | float
//    %lf          | double
//    %x (X)       | hexadecimal (capital)
//    %e (E)       | exponent (capital)
//    %c           | character
//    %s           | character string
//    %p           | pointer
    
    
//    ----------------------- 2-10 -------------------------
   //디버깅하지 않고 실행 -> command + R
   //디버깅하고 실행 -> command + Y
   //디버깅 종료 -> command + .
   //브레이크 포인트 걸기 -> 여기 왼쪽에 있는 숫자 누르면 됨 or command + \
   //메모리 주소 확인하기 -> Debug > Debug Workflow > View Memory
   
   float f = 2.5f; // 2.5 -> 10.1(2) -> 0x40200000 -> 메모리(리틀엔디안?)에는 00 00 20 40
   //리틀 엔디안은 작은 바이트가 먼저, 큰 바이트가 나중에 저장되는 방식.

   printf("f = %f \n", f);
   
   printf("adress of f is %p \n", &f);
    
    
//    ----------------------- ex.stackframe -------------------------
   int num1 = 10;
   
   {
       int num2 = 20;
       
       printf("num1 = %d, num2 = %d \n", num1, num2);
   }
   //printf("num1 = %d, num2 = %d \n", num1, num2); -> 컴파일 안 됨
   
   //num1은 main함수의 스텍프레임에 만들어지고
   //num2는 다른 스텍프레임에 만들어진다
   //중괄호 안에서는 main 함수의 변수를 쓸 수 있지만
   //그 반대는 중괄호에 해당하는 스텍프레임이 사라졌기 때문에 불가능함
    
    
//    ----------------------- 2-8 -------------------------
   double area, circum, diff;

   area = PI * 3.0 * 3.0;
   printf("The area is %lf \n", area);

   printf(H);
   printf("\n")

    
//    ----------------------- 2-7 -------------------------
   int num;
   char ch;
   unsigned char uch;
   
   num = 128;
   ch = num;
   uch = num;
   printf("%d %d %d \n", num, ch, uch);
   //%d는 짝이 되는 변수를 4바이트 int로 해석하여 출력
   //여기에서 ch는 1000 0000의 값을 가지고 있음
   //ch를 4바이트로 변환하는 과정에서 기본적으로 char은 signed이기 때문에 제일 앞의
   //부호를 나타내는 비트 1에 의해 4바이트로 확장하였을 때 남은 비트를 모두 1로 채우기 때문에 -128의 음수값을 나타냄

   //uch는 4바이트 변환 시에 0으로 모두 채우고 그래서 128로 출력됨

    
    
//    ----------------------- 2-6 -------------------------
   char ch;
   ch = 'a';   //sizeof('a') -> 4
   
   printf("sizeof(ch) is %lu \n", sizeof(ch));
   printf("sizeof(ch) is %lu \n", sizeof('a'));
   
   ch = 'a' + 1;
   printf("ch is %d \n", ch);
   printf("ch is %c \n", ch);
   
   ch = ch - 32;
   printf("ch is %c \n", ch);
    
    
//    ----------------------- 2-5 -------------------------
   short width;
   //2바이트의 short
   int height;
   float area;
   
   double total;
   int length;
   short num1, num2, num3, sum;
   
   width = (short)10;
   //casting operater를 통한 명시적 형변환
   height = 5;
   area = 100.0f;
   
   total = area + width * height;
   //double, float, short, int
   //자료형이 다른 변수의 연산의 경우, 연산 순서에 따라 큰 자료형으로 바꿔 계산함
   //자동 형변환, 암묵적 형변환
   
   printf("total is %lf \n", total);
   
   length = 3.14;
   //8바이트 실수를 4바이트 정수로 컴파일함
   //소수점 이하 버림을 통해 컴파일
   printf("length is %d \n", length);
   
   length = (int)3.14;
   printf("length is %d \n", length);
   
   num1 = (short)10;
   num2 = (short)20;
   
   printf("sizeof(num1 + num2) is %lu \n", sizeof(num1 + num2));
   //계산을 하는 alu에서 최소 단위가 4바이트이기 때문에 num1, num2는 2바이트이지만
   //계산을 해서 나온 결과는 4바이트가 된다
   
   sum = num1 + num2;
   //rvalue가 2바이트이고 2바이트로 해도 손실이 없으니 sum의 결과도 2바이트로 처리
   //계산을 거쳤어도 rvalue를 따라간 것임
   printf("sizeof(sum) is %lu \n", sizeof(sum));

    
//    ----------------------- 2-4 -------------------------
   float area;
   double total;
   
   area = 0.1234567;
   //8바이트를 4바이트로 저장했음
   //자동으로 형변환하여 컴파일함
   //실수 뒤에 f를 붙이면 4바이트를 4바이트로 저장함
   //area = 0.1234567f;

   printf("area is %f \n", area);
   //f는 4바이트의 실수의 출력을 의미
   
   total = 0.1234567;
   
   printf("total is %lf \n", total);
   //%lf는 8바이트 실수의 출력을 의미
    
    return 0;
}
//중괄호를 연다 = 스택프레임이 만들어진다
//중괄호를 닫는다 = 스텍프레임이 없어진다
