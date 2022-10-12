#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    const int total = 6000, layer1 = 1500, layer2 = 3000;
    int Depth, Layer1, Layer2;
    scanf("%d", &Depth);
    for (int i = 0; i < 6; i++) {
        Sleep(1000);
        Depth += 1000;
        Layer1 = Depth - layer1;
        Layer2 = Depth - layer2;
        if (Depth >= 6000) {
            printf("距layer1 %dkm，距layer2 %dkm\n到地心啦！", Layer1, Layer2);
            exit(0);
        }
        printf("距layer1 %dkm，距layer2 %dkm\n", Layer1, Layer2);
        if (Layer1 >= 0)printf("已突破layer1\n");
        if (Layer2 >= 0)printf("已突破layer2\n");
    }
    return 0;
}
