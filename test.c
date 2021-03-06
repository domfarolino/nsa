//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2016 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ------------------- Function Prototypes --------------------

int32_t driver_ioctl(int32_t * a1, int32_t a2, int32_t a3);
int32_t entry_point(void);
int32_t function_438(void);
void function_460(void);
int32_t function_4f0(int32_t a1);
int32_t function_527(int32_t a1, int32_t a2, int32_t a3);
int32_t function_60c(void);
int32_t function_610(void);
int32_t function_65b(int32_t * a1, int32_t a2, int32_t * a3);
int32_t function_916(void);
int32_t function_926(void);
void function_92c(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // ebx

// ------------------------ Functions -------------------------

// Address range: 0x438 - 0x45a
int32_t function_438(void) {
    int32_t result = *(int32_t *)(entry_point() + 0x1bb3); // bp+447
    if (result != 0) {
        // 0x451
        __gmon_start();
        // branch -> 0x456
    }
    // 0x456
    return result;
}

// Address range: 0x460 - 0x4df
void function_460(void) {
    // 0x460
    return;
}

// Address range: 0x4e0 - 0x4ef
int32_t entry_point(void) {
    // 0x4e0
    int32_t result;
    return result;
}

// Address range: 0x4f0 - 0x526
int32_t function_4f0(int32_t a1) {
    // 0x4f0
    function_60c();
    return 3;
}

// Address range: 0x527 - 0x60b
int32_t function_527(int32_t a1, int32_t a2, int32_t a3) {
    // 0x572
    function_60c();
    return 0;
}

// Address range: 0x60c - 0x60f
int32_t function_60c(void) {
    // 0x60c
    int32_t result;
    return result;
}

// Address range: 0x610 - 0x65a
int32_t function_610(void) {
    char * env_val = getenv((char *)(entry_point() + 804));
    int32_t str_as_ul;
    if (env_val != NULL) {
        // 0x644
        str_as_ul = strtoul(env_val, NULL, 0);
        // branch -> 0x656
    } else {
        str_as_ul = 0x45903fcc;
    }
    // 0x656
    return str_as_ul;
}

// Address range: 0x65b - 0x8c0
int32_t function_65b(int32_t * a1, int32_t a2, int32_t * a3) {
    // 0x65b
    g1 = entry_point() + 0x1998;
    if (a2 != 4) {
        // 0x674
        *a3 = 0;
        *a1 = 0;
        // branch -> 0x8ba
        // 0x8ba
        return 1;
    }
    uint32_t v1 = *(int32_t *)*a1; // bp+695
    if (v1 == 0x1f06a405) {
        char * mem = malloc(4);
        *a1 = (int32_t)mem;
        *(int32_t *)mem = function_610();
        *a3 = 4;
        // branch -> 0x8ba
        // 0x8ba
        return 0;
    }
    // 0x6d6
    *a3 = 0;
    *a1 = 0;
    int32_t result;
    if (v1 == 0x1f06a402) {
        int32_t * v2 = (int32_t *)(g1 + 48);
        if (*v2 == 3) {
            // 0x79d
            result = time(NULL) - *(int32_t *)(g1 + 52) < 5 ? 1 : -1;
            // branch -> 0x8ba
        } else {
            // 0x78e
            *v2 = 2;
            result = 0;
            // branch -> 0x8ba
        }
        // 0x8ba
        return result;
    }
    // 0x6f6
    if (v1 <= 0x1f06a402) {
        // 0x6fd
        result = 1;
        switch (v1) {
            case 0: {
                // 0x728
                *(int32_t *)(g1 + 48) = 1;
                result = 0;
                // branch -> 0x8ba
                break;
            }
            case 0x1f06a401: {
                int32_t * v3 = (int32_t *)(g1 + 48);
                if (*v3 == 3) {
                    // 0x751
                    result = time(NULL) - *(int32_t *)(g1 + 52) < 5 ? 1 : -1;
                    // branch -> 0x8ba
                } else {
                    // 0x742
                    *v3 = 1;
                    result = 0;
                    // branch -> 0x8ba
                }
                // 0x8ba
                return result;
            }
        }
        // 0x8ba
        return result;
    }
    // 0x70d
    result = 1;
    switch (v1) {
        case 0x1f06a403: {
            int32_t * v4 = (int32_t *)(g1 + 48);
            result = 1;
            switch (*v4) {
                case 3: {
                    // 0x7da
                    result = time(NULL) - *(int32_t *)(g1 + 52) > 4;
                    // branch -> 0x8ba
                    break;
                }
                case 2: {
                    // 0x817
                    *v4 = 3;
                    *(int32_t *)(g1 + 52) = time(NULL);
                    result = 0;
                    // branch -> 0x8ba
                    break;
                }
            }
            // 0x8ba
            return result;
        }
        case 0x1f06a404: {
            // 0x83d
            if (*(int32_t *)(g1 + 48) == 3) {
                // 0x848
                if (time(NULL) - *(int32_t *)(g1 + 52) >= 5) {
                    // 0x8ba
                    return -1;
                }
            }
            // 0x86d
            *a3 = 4;
            char * mem2 = malloc(4);
            *a1 = (int32_t)mem2;
            memcpy(mem2, (char *)(g1 + 48), *a3);
            result = 0;
            // branch -> 0x8ba
            break;
        }
    }
    // 0x8ba
    return result;
}

// Address range: 0x8c1 - 0x915
int32_t driver_ioctl(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = function_926() + 0x1733;
    if (a3 == 0 || a1 == NULL || a2 == 0) {
        // 0x911
        return 2;
    }
    // 0x8eb
    int32_t result;
    if (*a1 != 0) {
        // 0x8fb
        g1 = v1;
        result = function_65b(a1, a2, (int32_t *)a3);
        // branch -> 0x911
    } else {
        result = 2;
    }
    // 0x911
    return result;
}

// Address range: 0x916 - 0x925
int32_t function_916(void) {
    // 0x916
    return function_926() + 0x16e2;
}

// Address range: 0x926 - 0x929
int32_t function_926(void) {
    // 0x926
    int32_t result;
    return result;
}

// Address range: 0x92c - 0x93f
void function_92c(void) {
    // 0x92c
    entry_point();
}

// --------------- Dynamically Linked Functions ---------------

// void __gmon_start(void);
// char * getenv(const char * name);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// unsigned long int strtoul(const char * restrict nptr, char ** restrict endptr, int base);
// time_t time(time_t * timer);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (5.2.1)
// Detected functions: 12
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2016-09-10 21:02:29

int main() {

    return 0;
}