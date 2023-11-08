

#include <string.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define IMPORT(a, b) __attribute__((import_module(a), import_name(b)))

IMPORT("extism:host/user", "do_something")
extern void do_something_wrapper();

void do_something() {
    return do_something_wrapper();
}