# printf랑 scanf 외에 다른 입출력 함수들
1.스트림
(1) stdin : 표준 입력 스트림, 키보드 대상으로 '입력' ->걍 우리가 입력
(2) stdout : 표준 출력 스트림, 모니터 대상으로 '출력' -> 고로 출력됨
(3) stderr : 표준 에러 스트림, 모니터 대상으로 '출력' -> 내가 실수하면 에러가 출력됨

# 문자 입출력 함수
1. 문자 입력 함수

(1) getchar : 하나의 문자를 '입력' 받는 함수
- int형 함수임.
- getchar를 통해 받은 문자를 아스키 코드를 통해 int형으로 반환. (문자->아스키코드 숫자)
- getchar는 ()에 아무것도 안 적어도 됨. 
- scanf()처럼 한 글자 입력핟기.


(2) fgetc: 파일에서 문자 한 개를 읽어 반환하며 더 이상 읽을 문자가 없을 경우 EOF상수를 반환. (f붙어있으면 파일관련)
-Q) 그냥 파일을 읽는데 한 글자씩 읽고 getchar처럼 문자->숫자로 반환하는 역할을 하는건가?

2. 문자 출력 함수

(1) putchar : 인자로 전달된 문자를 모니터에 '출력'.
- 숫자->문자 형식

(2) fputc: 쨋든 한 문자를 파일에 출력.
- fputc( 문자 변수, FILE 포인터 파일) : 두번째 인자를 통해서 출력의 대상을 지정.

# EOF
End Of File : 그냥 파일의 끝임을 나타내기 위해 정해둔 상수.

# 문자열 입출력 함수
1. 문자열 입력 함수

(1) gets() : 문자열을 입력받는 함수
- 공백문자가 포함되어있는 문장을 입력받아 저장할 수 있다!!

(2) fgets() : 문자열을 입력받는 함수
- 텍스트 파일에 저장된 내용을 문자열 단위로 읽어오며, 줄바꿈 문자도 문자열에 포함.
- 파일의 내용을 무조건 행 단위로 읽는 것이 아니라 한 번에 읽을 수 있는 문자열의 길이만큼 읽음.
- 줄바꿈 문자를 읽으면 읽기를 중단하고 뒤에 NULL문자를 추가하여 현재까지 읽은 문자열을 저장
- fgets( 문자열 저장주소, 최대입력문자수, FILE 포인터);

ex. fgets(str,sizeof(str),stdin);
-> stdin으로 부터 문자열을 입력받아서 배열str에 저장하되, sizeof(str) 의 길이만큼만 저장해!

->gets()를 쓰면 문장구성은 간단하긴 하지만 마련해 놓은 배열의 길이를 넘어서면 할당 받지 않은 메모리 공간을 침범할 수도 있다.

2. 문자열 출력 함수
(1) puts : 문자열 출력

(2) fputs()
- 문자열 단위로 파일에 쓰기를 하여 텍스트 파일을 만들어 주는 함수
- 파일을 쓸 때 \n을 추가하지 않음.
- fputs( 문자열 시작 주소, FILE 포인터);
-> 두번째 인자를 통해서 출력의 대상을 지정할 수 있다.

# 유용한 문자열 함수들
-size_t는 무엇인가 : 부호 없는 정수 '자료형'인데 sizeof 연산자 매크로의 결과
-const는 무엇인가 : constant의 약자로 '변함없음'을 의미, 즉 변수 앞에 붙이면 값을 변경하지 못하도록 하고, 상수 취급함.

1. strlen(문자열) : 전달된 문자열의 길이를 반환, 널 문자는 길이에 포함하지 않음.


2. 문자열 복사 함수
(1) char* strcpy(char* dest, const char* origin) : origin에 있는 문자열 전체를 dest로 복사를 하는 함수

(2) char* strncpy(char* dest, const char* origin, size_t n) : origin에 있는 문자열을 dest로 복사를 하는데, n 만큼만 복사하는 함수 (n= number의 약자)


3. 문자열 연결함수 ( 문자열 이어붙이는 )

(1) char* strcat(char* dest, const char* origin) : origin에 있는 문자열을 dest 뒤쪽에 이어 붙이는 함수
- dest 문자열 끝에 있는 '\0' 이것은 사라지고 그 위치에 origin이 바로 붙어버리는게 특징
- ex. 
char origin[] = "BlockDMask";
char dest[20] = "aaabbb";
strcat(dest, origin);

결과 : "aaabbbBlockDMask"

(2) char* strncat(char* dest, const char* origin, size_t n) : origin에 있는 문자열 n개를 문자열 dest 뒤쪽에 이어 붙이는 함수
- dest 문자열 끝을 가리키는 '\0' 기호의 위치에 '\0'을 없애고 origin의 문자 n번째 까지 붙여버리는 함수


4. 문자열 비교함수

(1) int strcmp(const char* str1, const char* str2) : 
- str1 : 비교할 문자열1, str2 : 비교할 문자열2

(2) int strncmp(const char* str1, const char* str2, size_t n)
- str1 : 비교할 문자열1, str2 : 비교할 문자열2, n : 비교할 문자열 길이  

-> 둘 다
[1] str1 < str2 인 경우에는 음수 반환
[2] str1 > str2 인 경우에는 양수 반환
[3] str1 == str2 인 경우에는 0을 반환 합니다.


# 구조체
1. 선언
struct 이름 {
    배열[n];
    변수;
};

2. 배열
struct 배열이름[길이];

3. 접근 방식
(1) (*pptr).xpos =10;
(2) pptr -> xpos =10; (->)

4. typedef를 활용한 구조체 별명만들기

struct point {
    ~
};
typedef struct point Point;

=

typedef struct point {
    ~
} Point;

# 파일 입출력
1. ?????

