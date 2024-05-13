#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>
#include "libs/data_structures/vector/vector.h"
#include "libs/string/tasks/string_.h"

/* size_t test_strlen_() {
    char *s = "HelloSV";

    size_t res = strlen_(s);
    assert(res == 7);
}

char* test_find() {
    char *s = "HelloSV";

    char *res = find(&s[0], &s[3], 'e');
    assert(*res == 'e');
}

char* test_findNonSpace() {
    char *s = "   SV  ";

    char *res = findNonSpace(s);
    assert(*res == 'S');
}

char* test_findSpace() {
    char *s = "Hello SV";

    char *res = findSpace(s);
    assert(*res == ' ');
}

char* test_findNonSpaceReverse() {
    char *s = "Hello Hello ";

    char *res = findNonSpaceReverse(s + sizeof(char) * 11, s);
    assert(*res == 'H');
}

char* test_findSpaceReverse() {
    char *s = "CH SV";

    char *res = findSpaceReverse(s + sizeof(char) * 5, s);
    assert(*res == ' ');
}

int test_strcmp_() {
    char *lhs1 = "ABCD";
    char *rhs1 = "EFGH";

    int res1 = strcmp_(lhs1, rhs1);
    assert(res1 < 0);


    char *lhs2 = "HEllO";
    char *rhs2 = "HEllO";

    int res2 = strcmp_(lhs2, rhs2);
    assert(res2 == 0);


    char *lhs3 = "OPRST";
    char *rhs3 = "IKLMN";

    int res3 = strcmp_(lhs3, rhs3);
    assert(res3 > 0);
}

char* test_copy() {
    char *s = "12345333333333333333";
    char sd[20] = {0, 1, 9, 1, 3, 4, 5, 6, 7, 1, 0};

    char *res = copy(s, s + sizeof(char) * 4, sd);
    assert(*res == 4);
}

char* test_copyIf() {
    char *s = "123456";
    char sd[20] = {1,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,};

    char *res = copyIf(s, s + sizeof(char) * 5, sd, &checkIfNotNum);
    assert(res[0] == 0 && res[1] == 1);
}

char* test_copyIfReverse() {
    char *s = "123456";
    char sd[20] = {1,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,};

    char *res = copyIfReverse(s + sizeof(char) * 5, s, sd, &checkIfNotNum);
    assert(res[0] == 0 && res[1] == 1);
}


void test() {
    test_strlen_();
    test_find();
    test_findNonSpace();
    test_findSpace();
    test_findNonSpaceReverse();
    test_findSpaceReverse();
    test_strcmp_();
    test_copy();
    test_copyIf();
    test_copyIfReverse();
} */

void testAll_getWordBeforeFirstWordWithA() {
    WordDescriptor word;
    char s1[] = "";
    assert(
            getWordBeforeFirstWordWithA(s1, &word)
            == EMPTY_STRING
    );
    char s2[] = "ABC";
    assert(
            getWordBeforeFirstWordWithA(s2, &word)
            == FIRST_WORD_WITH_A
    );
    char s3[] = "BC A";
    assert(
            getWordBeforeFirstWordWithA(s3, &word)
            == WORD_FOUND
    );
    char got[MAX_STRING_SIZE];
    copy(word.begin, word.end, got);
    got[word.end - word.begin] = '\0';
    ASSERT_STRING("BC", got);
    char s4[] = "B Q WE YR OW IUWR";
    assert(getWordBeforeFirstWordWithA(s4, &word) == NOT_FOUND_A_WORD_WITH_A);
}

int main() {

    char s[MAX_STRING_SIZE] = "hala abcba hello bccb van0nav\0";

    deletePalindromesInString(s);

    printf("%s", s);

    return 0;
}