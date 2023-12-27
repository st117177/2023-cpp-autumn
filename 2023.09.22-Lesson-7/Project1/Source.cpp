#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ������� ��� �������� �����
char* strcat_custom(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "������ ��������� ������\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

// ������� ��� ������ ���������
char* strstr_custom(char* str, char* substr) {
    return strstr(str, substr);
}

// ������� ��� ��������� ���������
char* substr_custom(const char* str, int start, int length) {
    size_t str_length = strlen(str);
    if (start < 0 || start >= str_length || length <= 0) {
        return NULL;
    }

    if (start + length > str_length) {
        length = str_length - start;
    }

    char* result = (char*)malloc((length + 1) * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "������ ��������� ������\n");
        exit(EXIT_FAILURE);
    }

    strncpy(result, str + start, length);
    result[length] = '\0';

    return result;
}

// ������� ��� ��������� �����
int strcmp_custom(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

// ������� ��� ��������� ������ �� �����
char* strmult_custom(const char* str, int times) {
    size_t str_length = strlen(str);
    char* result = (char*)malloc((str_length * times + 1) * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "������ ��������� ������\n");
        exit(EXIT_FAILURE);
    }

    result[0] = '\0';

    for (int i = 0; i < times; ++i) {
        strcat(result, str);
    }

    return result;
}

int main() {
    FILE* input_file = fopen("in.txt", "r");
    FILE* output_file = fopen("out.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        fprintf(stderr, "������ �������� ������\n");
        exit(EXIT_FAILURE);
    }

    // ������� ���������� ���� � ������
    int word_count = 0;
    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
        char* token = strtok(buffer, " \n");
        while (token != NULL) {
            word_count++;
            token = strtok(NULL, " \n");
        }
    }

    fprintf(output_file, "���������� ���� � ������: %d\n", word_count);

    // ����� � ����� ������ �������� �����������
    rewind(input_file);

    char longest_sentence[1024] = "";
    while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
        if (strlen(buffer) > strlen(longest_sentence)) {
            strcpy(longest_sentence, buffer);
        }
    }

    fprintf(output_file, "����� ������� �����������:\n%s", longest_sentence);

    fclose(input_file);
    fclose(output_file);

    return 0;
}
