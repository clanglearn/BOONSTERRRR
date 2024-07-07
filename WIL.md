WIL = Weekly I Learned

엥 여기에는 뭘적는거지
week1 저기에는 과제 적는거고
readme.md는 뭐하는거지 그냥 전체적인 c스터디 뭐하는지 적는건가?음음음음 의문투성이 음음음뇌정지 으엉어응엉ㅇ

1주차:c언어 기본상식, 변수와 연산자, 문자와 상수, 반복문.조건문.함수

-기본상식:

#include <stdio.h>
int main() {
    skldfkjalkjakf;
    return 0;
}

-> 요런 느낌의 모양이 기본틀

-변수와 연산자:

ㄴ일단 변수 선언을 해야해 (int num1;)

(비상 int가 뭐하는 애 였지)

ㄴ 증감 연산자
: ++,-- 먼저 나오면 먼저 계산후
: num 먼저 나오면 일단 실행 후 계산

ㄴ 논리 연산자
: &&=and
: ||=or

ㄴ 입력 함수: scanf()
: input()같은 애

-문자와 상수:

ㄴint형, short형, char형, double형

ㄴ아스키 코드
: A=65 / B=66/...
: %d->65, %c->A

ㄴint: 정수, 문자일 경우
ㄴdouble: 실수일 경우
ㄴconst: 자료형 앞에 (ex. const int STUDENT_ID=411162)

등등...

------------------------------------
과제2
scanf() = input()같은 애

scanf("%d", &a)
하면 a에 입력되는거
다음에
printf("%d",a); 가 있으면
입력값 적은게 a고 그 a가 프린트됨

scanf에서 변수 앞에는 &가 붙는데
&는 변수의 주소를 가리킴.(주소=저 변수가 위치하는 곳으로 가)

(주소: https://m.blog.naver.com/tksop59/221881055008)
