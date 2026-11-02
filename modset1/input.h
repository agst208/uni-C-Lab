#ifndef MODSET1_INPUT_H
#define MODSET1_INPUT_H

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MODSET1_LINE_CAPACITY 256

static inline int modset1_read_line(const char *prompt, char line[], size_t capacity)
{
    fputs(prompt, stdout);
    fflush(stdout);

    if (fgets(line, (int)capacity, stdin) == NULL) {
        return 0;
    }

    if (strchr(line, '\n') == NULL && !feof(stdin)) {
        int character;
        while ((character = getchar()) != '\n' && character != EOF) {
        }
        puts("Input is too long. Please try again.");
        return -1;
    }

    return 1;
}

static inline void modset1_skip_whitespace(const char **position)
{
    while (isspace((unsigned char)**position)) {
        ++*position;
    }
}

static inline int read_doubles(const char *prompt, double values[], size_t count)
{
    char line[MODSET1_LINE_CAPACITY];

    for (;;) {
        int line_status = modset1_read_line(prompt, line, sizeof line);
        const char *position = line;
        size_t i;
        int valid = line_status > 0;

        if (line_status == 0) {
            return 0;
        }
        if (line_status < 0) {
            continue;
        }

        for (i = 0; valid && i < count; ++i) {
            char *end;
            modset1_skip_whitespace(&position);
            errno = 0;
            values[i] = strtod(position, &end);
            if (end == position || errno == ERANGE || !isfinite(values[i])) {
                valid = 0;
            } else {
                position = end;
            }
        }

        modset1_skip_whitespace(&position);
        if (valid && *position == '\0') {
            return 1;
        }

        printf("Invalid input. Please enter exactly %zu number%s.\n",
               count, count == 1 ? "" : "s");
    }
}

static inline int read_floats(const char *prompt, float values[], size_t count)
{
    char line[MODSET1_LINE_CAPACITY];

    for (;;) {
        int line_status = modset1_read_line(prompt, line, sizeof line);
        const char *position = line;
        size_t i;
        int valid = line_status > 0;

        if (line_status == 0) {
            return 0;
        }
        if (line_status < 0) {
            continue;
        }

        for (i = 0; valid && i < count; ++i) {
            char *end;
            modset1_skip_whitespace(&position);
            errno = 0;
            values[i] = strtof(position, &end);
            if (end == position || errno == ERANGE || !isfinite(values[i])) {
                valid = 0;
            } else {
                position = end;
            }
        }

        modset1_skip_whitespace(&position);
        if (valid && *position == '\0') {
            return 1;
        }

        printf("Invalid input. Please enter exactly %zu number%s.\n",
               count, count == 1 ? "" : "s");
    }
}

static inline int read_ints(const char *prompt, int values[], size_t count)
{
    char line[MODSET1_LINE_CAPACITY];

    for (;;) {
        int line_status = modset1_read_line(prompt, line, sizeof line);
        const char *position = line;
        size_t i;
        int valid = line_status > 0;

        if (line_status == 0) {
            return 0;
        }
        if (line_status < 0) {
            continue;
        }

        for (i = 0; valid && i < count; ++i) {
            char *end;
            long value;
            modset1_skip_whitespace(&position);
            errno = 0;
            value = strtol(position, &end, 10);
            if (end == position || errno == ERANGE ||
                value < INT_MIN || value > INT_MAX) {
                valid = 0;
            } else {
                values[i] = (int)value;
                position = end;
            }
        }

        modset1_skip_whitespace(&position);
        if (valid && *position == '\0') {
            return 1;
        }

        printf("Invalid input. Please enter exactly %zu whole number%s.\n",
               count, count == 1 ? "" : "s");
    }
}

#endif
