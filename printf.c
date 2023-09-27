#include <stdio.h>
#include <stdarg.h>

void custom_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main() {
    custom_printf("Hello, %s! The answer is %d.\n", "John", 42);
    return 0;
}
