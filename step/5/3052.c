/*
  문제 :
  두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
  예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
  수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
  그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

  입력 :
  첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다.
  이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

  출력 : 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.

  예제 입력 :
  39
  40
  41
  42
  43
  44
  82
  83
  84
  85

  예제 출력 : 6
*/

#include <stdio.h>
#include <string.h>

int main(void) {
  int a, b[10], c = 0;
  
  memset(b, -1, sizeof(b));
  for(int i = 0; i < 10; i++) {
    scanf("%d", &a);
    a %= 42;
    for (int j = 0; j < 10; j++) {
      if (b[j] != -1) {
        if (b[j] == a) {
          break;
        }
      } else {
        b[j] = a;
        ++c;
        break;
      }
    }
  }
  printf("%d", c);
  
  return 0;
}