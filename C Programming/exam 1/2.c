// 중간고사와 기말고사의 점수를 입력 받아 구한 평균을 근거로, 아래의 성적등급부여체계에 따라 등급과 성적을 출력하는 프로그램을 작성하시오.
// 평균은 소수 둘째 자리에서 반올림하여 소수 첫째 자리까지만 표기한다.
// 성적 입력은 0-100 사이의 정수로 제한하며, 음수가 입력될 경우 프로그램을 종료하고, 100 이상일 경우 다시 입력 받도록 한다.
// 90이상 A 80이상 B 70이상 C, 평균이 70 미만이고 두 점수 중 하나는 80이상인 경우, 나머지 F

#include <stdio.h>

int main (void)
{
    int mid, fin;

    while (1)
    {
        printf("중간고사: ");
        scanf("%d", &mid);
        if (mid < 0)
        {
            break;
        }
        else if (mid > 100)
        {
            continue;
        }
        printf("기말고사: ");
        scanf("%d", &fin);
        if (fin < 0)
        {
            break;
        }
        else if (fin > 100)
        {
            continue;
        }

        double mean = (mid + fin) / 2;
        int m = (int)mean / 10;

        switch (m)
        {
            case 10 :
            case 9 :
                printf("평균 점수: %.1f\n등급: A\n", mean);
                break;
            case 8 :
                printf("평균 점수: %.1f\n등급: B\n", mean);
                break;
            case 7 :
                printf("평균 점수: %.1f\n등급: C\n", mean);
                break;
            default :
                if (mid >= 80 || fin >= 80)
                {
                    printf("평균 점수: %.1f\n등급: D\n", mean);
                    break;
                }
                else
                {
                    printf("평균 점수: %.1f\n등급: F\n", mean);
                    break;
                }

        }
    }

    return 0;
}
