#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int first()
{
    char pw[10000];
    char after_pw[10000];
    int i;
    int k;
    printf("��������Կ��ֵ��");
    scanf("%d",&k);
    getchar();
    printf("���������ǰ������");
    gets(pw);                                               //�õ��ַ���
    for (i = 0;pw[i]!='\0';i++)
    {
        after_pw[i] = (pw[i]-'a'+k)%26+'a';                 //����ASCII�뽫�������
    }
    after_pw[i] = '\0';
    printf("���ܺ������Ϊ");
    puts(after_pw);
    return 0;
}



int second()
{
    char pw[10000];
    char after_pw[10000];
    int i;
    int k;
    printf("��������Կ��ֵ��");
    scanf("%d",&k);
    getchar();
    printf("��������ܺ������");
    gets(after_pw);
    for (i = 0;after_pw[i]!='\0';i++)
    {
        pw[i] = (after_pw[i]-'a'+26-k)%26+'a';
    }
    after_pw[i] = '\0';
    printf("����ǰ������Ϊ");
    puts(pw);
    return 0;
}



int third()
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];

    for(i=0; i<=25; i++)
    {
        k[i] = i;
    }
    printf("��������ܺ������\n");
    getchar();
    gets(pw);
    printf("����ǰ����������п���Ϊ\n");
    for (i = 0; i<=25; i++)
    {
        for (j = 0; pw[j]!='\0'; j++)
        {
            after_pw[j] = (pw[j]-'a'+26-k[i])%26+'a';
        }
        after_pw[j] = '\0';
        puts(after_pw);
    }
    return 0;
}



int gaijin_2()    //����
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    printf("�밴����ĸ��˳��������Կ�б��磺12 3 5�����ֱ��ʾa,b,c��ĸ���ƶ��ĳ���λֵ)ע�⣺ÿ������0-25֮��\n");
    for(i=0; i<=25; i++)
    {
        scanf("%d",&k[i]);
    }
    getchar();
    printf("��������ܺ������\n");
    gets(after_pw);
    printf("����ǰ������Ϊ\n");
    for (j = 0; after_pw[j]!='\0'; j++)
    {
        pw[j] = (after_pw[j]-'a'+26-k[after_pw[j]-'a'])%26+'a';
    }
    pw[j] = '\0';
    puts(pw);

    return 0;
}


int gaijin_1()    //����
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    printf("�밴����ĸ��˳��������Կ�б��磺12 3 5�����ֱ��ʾa,b,c��ĸ���ƶ��ĳ���λֵ)ע�⣺ÿ������0-25֮��,��26����Կֵ\n");
    for(i=0; i<=25; i++)
    {
        scanf("%d",&k[i]);
    }
    getchar();
    printf("���������ǰ������\n");
    gets(pw);
    printf("���ܺ������Ϊ\n");
    for (j = 0; pw[j]!='\0'; j++)
    {
        after_pw[j] = (pw[j]-'a'+k[pw[j]-'a'])%26+'a';
    }
    after_pw[j] = '\0';
    puts(after_pw);

    return 0;
}

int gaijin_3()    //����
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    srand((unsigned int)time(NULL));
    for(i=0; i<=25; i++)
    {
        k[i] = rand()%26;
    }
    getchar();
    printf("���������ǰ������\n");
    gets(pw);
    printf("���ܺ������Ϊ\n");
    for (j = 0; pw[j]!='\0'; j++)
    {
        after_pw[j] = (pw[j]-'a'+k[pw[j]-'a'])%26+'a';
    }
    after_pw[j] = '\0';
    puts(after_pw);

    return 0;
}


int gaijin_4()    //����
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    srand((unsigned int)time(NULL));
    for(i=0; i<=25; i++)
    {
         k[i] = rand()%26;
    }
    getchar();
    printf("��������ܺ������\n");
    gets(after_pw);
    printf("����ǰ������Ϊ\n");
    for (j = 0; after_pw[j]!='\0'; j++)
    {
        pw[j] = (after_pw[j]-'a'+26-k[after_pw[j]-'a'])%26+'a';
    }
    pw[j] = '\0';
    puts(pw);

    return 0;
}


int main()
{
    int n;
   while(1)
   {
    printf("��������Ҫ��֤����ţ�1��2��3��4��5��6��7��������4Ϊ���Ľ�����(kֵ������),5Ϊ�Ľ�����(kֵ������)������6Ϊ���Ľ�����(kֵ���),7Ϊ�Ľ�����(kֵ���)������0��ʾ��������\n");
    scanf("%d",&n);

    if (n ==1)                              //�ɴ˵�����غ���
        first();
    if (n ==2)
        second();
    if (n ==3)
        third();
    if (n ==4)
        gaijin_1();
    if (n ==5)
        gaijin_2();
    if (n ==6)
        gaijin_3();
    if (n ==7)
        gaijin_4();
    if (n == 0)
        break;
    printf("\n");

   }
   printf("��л�������գ�\n");
    return 0;
}
