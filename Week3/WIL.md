# 2차원 배열 선언

name[세로길이][가로길이];
      (행)      (열)

# 2차원 배열 초기화 방법

int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int arr[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
};

->둘 다 가능

# 배열 사이즈 알려야하는 이유

int arr[][]={1,2,3,4};
-> 둘다 빈칸이면 숫자 결정을 못함
-> 세로길이 부분만 생략가능
-> ={}안에 들어가있을 개수가 정해져야하는거야
-> {}이 세로로 몇개인지는 알아서 정해주는거야
-> 그니까 괄호 안에 들어가있을 개수, 가로길이만 있어도 되는거야

# 이중 포인터 변수: 주소의 주소

포인터 변수 자체도 변수 -> 이중 포인터 변수가 존재할 수 있음
*(*dptr)==num

엄 뭐지 저번주한내용들이 완전히 기억에 안남아 이게 이게 이게이게 그 기억함수 뭐그건가
일단 그냥 이중으로 포인터 쓰는게 가능하다는거.

# 함수 포인터 선언

ex.       int (*fptr)(int,int)
(반환형이 int인) (포인터) (매개변수 선언이 2개인)

->그러면 *fptr가 함수포인터..?

갑자기 또 포인터 개념이 흔들리기 시작하다
식은땀이 줄줄줄주루주룰ㄹ 아오 미쳐
음?잠만 함수 포인터는 일반 함수랑 다른게 뭐지
그냥 어쨌든 포인터니까 저 함수포인터 정의가 어떤 int{~}안에 있어도 밖에서 꺼내 쓸 수 있는건가?

# 메모리 구조

-코드 영역: 코드 저장됨, cpu가 코드영역에 있는 코드를 가져다가 실행함.
-데이터 영역: 전역변수(종료 때까지 남는 애들)
-힙 영역: 힙한 구역
-스택 영역: 소멸되는 변수를 저장하는 곳

# 동적할당

힙 영역에다가 저장하고 관리하자!
-> #include <stdlib.h> 를 해서?
-malloc: 힙에서 메모리 공간 할당
-free: 힙에서 메모리 공간 해제

void *malloc(
   size_t size <-그냥 사이즈 암거나적으면 됨
);


