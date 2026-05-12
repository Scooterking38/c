#define EXPORT __declspec(dllexport)

EXPORT int run_test() {
    int x = 0;
    // Use semicolons (;) and keep the variable name (n) consistent
    for (int n = 0; n <= 10000; n++) {
        x++;
    }
    return x;
}
