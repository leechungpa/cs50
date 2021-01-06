# Memory adress

16진수로 0x7ffe00b3adbc와 같은 형태



**&** : 메모리상 주소 출력

***** : 메모리 주소에 있는 실제 값 출력



```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    // pointer : 50 출력
    printf("%p\n", &n);
    // pointer->value : 메모리주소 출력
    printf("%i\n", *&n);

    int *p = &n;
    printf("----Using pointer----\n");
    // pointer : 50 출력
    printf("%p\n", p);
    // pointer->value : 메모리주소 출력
    printf("%i\n", *p);
}
```

```c
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i.\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i.\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
```



### overflow

buffer overflow : 배열에서 할당된 메모리 이상의 인덱스를 참조한 경우

stack overflow : stack 영역에서 할당된 메모리가 계속 늘어나 침범하는 경우

heap overflow : heap 영역에서 할당된 메모리가 계속 늘어나 침범하는 경우

cf. 프로그램 실행시 머신 코드 영역에 컴파일된 바이너리가 저장되는데, malloc을 사용할 경우 heap영역에서, 프로그램 내의 함수의 경우 stack에서 저장됨



### string

이전에 사용한 sting의 경우, 사실은 char*를 의미함

```c
typedef char *string;
```

```c
#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%s\n", s);
}
```



cf. string을 비교할 경우 pointer를 비교하면 항상 다른 것으로 나옴 : 주소가 다르기 때문으로, pointer가 가르키는 char 자체를 각각 비교하면 동일





# 메모리 할당

malloc : 정해진 byte 크기 만큼 메모리를 할당하여 첫번째 주소를 알려주는 함수

     - malloc로 메모리 할당을 할 경우, 컴퓨터 사정에 의해 에러가 날 수 있으므로 아래 처럼 NULL인지 확인해 주는 것이 좋음
     - realloc : 메모리 재할당

free : grabage collection 해줌

    - 안할 경우 메모리 용랑의 낭비 발생

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // 위에는 3개로 구성되었으나, 하나 더 추가하고자 새로운 포인터 할당
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    list = tmp;

    list[3] = 4;

    // 값 확인
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // 메모리 초기화
    free(list);
}
```



### 문자열 복사

```c
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = "abc";
    
    // malloc : 새로운 메모리 할당
    char *t = malloc(strlen(s) + 1);
    // string 복사
    for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    // s: abc
    printf("t: %s\n", t);
    // t: Abc
    
    // 메모리 초기화
    free(t);
}
```

string 패키지에 있는 `strcpy(t, s)`로 대신 사용 가능