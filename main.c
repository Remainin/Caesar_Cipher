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
    printf("请输入密钥的值：");
    scanf("%d",&k);
    getchar();
    printf("请输入加密前的密码");
    gets(pw);                                               //得到字符串
    for (i = 0;pw[i]!='\0';i++)
    {
        after_pw[i] = (pw[i]-'a'+k)%26+'a';                 //利用ASCII码将密码后移
    }
    after_pw[i] = '\0';
    printf("加密后的密码为");
    puts(after_pw);
    return 0;
}



int second()
{
    char pw[10000];
    char after_pw[10000];
    int i;
    int k;
    printf("请输入密钥的值：");
    scanf("%d",&k);
    getchar();
    printf("请输入加密后的密码");
    gets(after_pw);
    for (i = 0;after_pw[i]!='\0';i++)
    {
        pw[i] = (after_pw[i]-'a'+26-k)%26+'a';
    }
    after_pw[i] = '\0';
    printf("加密前的密码为");
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
    printf("请输入加密后的密码\n");
    getchar();
    gets(pw);
    printf("加密前的密码的所有可能为\n");
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



int gaijin_2()    //解密
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    printf("请按照字母表顺序输入密钥列表（如：12 3 5……分别表示a,b,c字母的移动的常数位值)注意：每个数在0-25之间\n");
    for(i=0; i<=25; i++)
    {
        scanf("%d",&k[i]);
    }
    getchar();
    printf("请输入加密后的密码\n");
    gets(after_pw);
    printf("加密前的密码为\n");
    for (j = 0; after_pw[j]!='\0'; j++)
    {
        pw[j] = (after_pw[j]-'a'+26-k[after_pw[j]-'a'])%26+'a';
    }
    pw[j] = '\0';
    puts(pw);

    return 0;
}


int gaijin_1()    //加密
{
    char pw[10000];
    char after_pw[10000];
    int i,j;
    int k[26];
    printf("请按照字母表顺序输入密钥列表（如：12 3 5……分别表示a,b,c字母的移动的常数位值)注意：每个数在0-25之间,共26个密钥值\n");
    for(i=0; i<=25; i++)
    {
        scanf("%d",&k[i]);
    }
    getchar();
    printf("请输入加密前的密码\n");
    gets(pw);
    printf("加密后的密码为\n");
    for (j = 0; pw[j]!='\0'; j++)
    {
        after_pw[j] = (pw[j]-'a'+k[pw[j]-'a'])%26+'a';
    }
    after_pw[j] = '\0';
    puts(after_pw);

    return 0;
}

int gaijin_3()    //加密
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
    printf("请输入加密前的密码\n");
    gets(pw);
    printf("加密后的密码为\n");
    for (j = 0; pw[j]!='\0'; j++)
    {
        after_pw[j] = (pw[j]-'a'+k[pw[j]-'a'])%26+'a';
    }
    after_pw[j] = '\0';
    puts(after_pw);

    return 0;
}


int gaijin_4()    //解密
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
    printf("请输入加密后的密码\n");
    gets(after_pw);
    printf("加密前的密码为\n");
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
    printf("请输入您要验证的题号（1，2，3，4，5，6，7），其中4为“改进加密(k值自输入),5为改进解密(k值自输入)，其中6为“改进加密(k值随机),7为改进解密(k值随机)请输入0表示结束验收\n");
    scanf("%d",&n);

    if (n ==1)                              //由此调用相关函数
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
   printf("感谢您的验收！\n");
    return 0;
}
