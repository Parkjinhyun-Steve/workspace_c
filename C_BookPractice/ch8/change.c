//1. ?��?��?���? �??�� 받�?? ?��?�� ?��?��받는?��
//2. 물건값을 ?��?�� 받는?��.
//3. 거스�? ?��?�� 계산 ?�� 거스�? ?��?��개수�? 출력?��?��. ?�� 5천원?��?�� ?��?��까�??

#include <stdio.h>
int main(void)
{
    int x, y, z;
    
    printf("���� �� : ");
    scanf("%d",&x);
    printf("���� �� : ");
    scanf("%d",&y);

    z=x-y;

    printf("��õ�� : %d\n",z/5000);
    printf("õ�� : %d\n",(z%5000)/1000);
    printf("����� : %d\n", (z%5000%1000)/500);
    printf("��� : %d\n",(z%5000%1000%500)/100);
    printf("���ʿ� : %d\n", (z%5000%1000%500%100)/50);
    printf("�ʿ� : %d\n", (z%5000%1000%500%100%50)/10);
    
    return 0;

}
