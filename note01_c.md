# 1. 확장자

.c  c파일 pesudo code

.out 컴파일된 기계어 machine code



# 2. 컴파일

preprocessing -> compiling -> assembling -> linking



### 터미널 컴파일 명령어 (2가지)

clang hello.c 
    : hello.c파일을 a.out으로 만들어 줌

./a.out
    : 기계어 실행 hello world 나옴



clang  -o hello  hello.c
    : hello가 만들어짐
    : -o hello 는 hello.out이라는 머신코드를 저장하라는 의미이 옵션

./hello
    : hello world 실행




### make를 이용한 컴파일 방법

make 프로그램명
    : 프로그램명.c 에 필요한 것들을 자동으 찾아 만들어어 줌
    : 즉 hello.c에서 hello를 만들어 줌



make string
    : string.c에서 필요한 것 찾아서 자동으로 만들어줌
    : clang -o string string.c -lcs50와 동일
    : -lcs50은 link를 의미하는 -l에 추가로 필요한cs50 파일을 합친 것을 의미



### 디버깅

gdb 프로그램명 b (중지점 줄수)

​    : 디버깅하기 위해 사용하며, 중지점이 있는 수 까지만 실행




# 3. 라이브러리

inclue<stdio.h>
    : 표준 라이브러리

<math.h>, <time.h> 등등



# 4. 데이터 타입

bool : 불리언
char : 문자
string : 문자열 (cs50)
int : 정수
float : 부동소수의 실수

long : 더 큰 정수 (더 많은 비트 사용) (li)
double : 더 큰 보동소수의 실수
    -> 오버플로우overflow를 줄이기 위해 사용



&& : and
|| : or
// : 주석





### 새로운 데이터 타입

```c
typedef struct
{
    string name;
    string number;
} person;
```



# 5. window 우분투 명령어

gcc hello.c -o hello
    : hellow 생성

hello
    : hello world! 나옴

gcc hello.c
    : a.out 파일 생성