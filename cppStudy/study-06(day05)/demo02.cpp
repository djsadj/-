#include <iostream>
using namespace std;

int main()
{

    // Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�

    // const����ָ��
    int a = 10;
    int b = 10;

    const int *p = &a;
    // ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
    //*p = 20;//����
    p = &b; // ��ȷ
    //  const ���γ���
    int *const p2 = &a;
    // ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
    *p2 = 100; // ��ȷ
    // p2 = &b; //����
    //   const����ָ��ͳ���
    const int *const p3 = &a;
    // *p3 = 100; // ����
    // p2 = &b;   // ����
    system("pause");
    return 0;
}