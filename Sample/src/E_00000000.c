/*
 * [Full Name]: <이름>
 * [Student ID]: <학번>
 * [Honor Code Pledge]: 나 <이름>은(는) 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct st_person {
    char name[20];         // 이름 (빈칸없는 영어문자열)
    int birthdate;         // 생년월일 (8자리 숫자)
    int age;               // 나이
    int year, month, day;  // 생년, 월, 일
} PERSON;

const char* monthnames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void setPerson(PERSON* p);                                 // 구조체 포인터 p 내의 멤버변수 값을 계산해서 넣는 함수
int loadPersons(PERSON* list[]);                           // list의 모든 인원 이름과 생년월일 입력받는 함수 (총 개수 리턴)
void printBirthdays(PERSON* list[], int size, int month);  // 특정 월이 생일인 사람 출력하는 함수

int main() {
    PERSON* persons[100];
    int count = loadPersons(persons);

    for (int month = 1; month <= 12; month++) {
        printBirthdays(persons, count, month);
    }
    return 0;
}