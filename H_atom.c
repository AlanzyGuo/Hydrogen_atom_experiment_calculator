#include <stdio.h>
int a1d, a1f, b1d, b1f, a2d, a2f, b2d, b2f;
int answer_d, answer_f;
int main()
{
    scanf("%d%d%d%d%d%d%d%d", &a1d, &a1f, &b1d, &b1f, &a2d, &a2f, &b2d, &b2f);
    int a = (a2d - a1d)<0? (a2d - a1d)+360 : (a2d - a1d);
    int b = (b2d - b1d)<0? (b2d - b1d)+360 : (b2d - b1d);
    answer_d = (a + b)>>1;
    answer_f = ((a2f - a1f) + (b2f - b1f))>>1;

    if(answer_f < 0)
    {
        answer_f += 60;
        answer_d--;
    }

    printf("2theta = %d,%d", answer_d, answer_f);
    return 0;
}
