/*
  문제 :
  어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
  등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
  N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

  입력 : 첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

  출력 : 첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.

  예제 입력 1 : 110

  예제 출력 1 : 99
  
  예제 입력 2 : 1

  예제 출력 2 : 1
  
  예제 입력 3 : 210

  예제 출력 3 : 105
  
  예제 입력 4 : 1000

  예제 출력 4 : 144
*/

#include <stdio.h>
#include <stdbool.h>

int hanNumber (int num);

int main(void) {
  int input, i = 0;

  scanf("%d", &input);

  for (int j = 1; j <= input; j++) {
    if (hanNumber(j) == true) {
      ++i;
    }
  }

  printf("%d", i);

  return 0;
}

int hanNumber(int num) {
  int arr[4] = { 0 }, i = 0, diff;

  if (num >= 100) {
    while (num > 0) {
    arr[i] = num % 10;
    num /= 10;
    ++i;
    }
  } else {
    return true;
  }

  diff = arr[1] - arr[0];

  for (int j = 2; j < i; j++) {
    if (arr[j] != arr[0] + j * diff) {
      return false;
    }
  }

  return true;
}