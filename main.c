#include <stdio.h>
int main() {
    int password;
    int passwordtry;
    long int inmoney,outmoney,money=0;
    int a,t=3;
    printf("请设置密码：");
    begin3:scanf("%d", &password);
    printf("\n密码设置完成\n");
    getchar();
    printf("\n请输入密码：");
    begin1:scanf("%d",&passwordtry);
    if(passwordtry==password){
        printf("\n密码输入正确");
        getchar();
        begin:printf("\n************欢迎使用XX银行************"
                     "\n选择服务类型："
                     "\n1.存款"
                     "\n2.取款"
                     "\n3.查询余额"
                     "\n4.更改密码"
                     "\n5.退出"
                     "\n*************************************\n");
        scanf("%d",&a);
        switch (a) {
            case 1:
                printf("请输入存款金额：");
                scanf("%d", &inmoney);
                money = money + inmoney;
                printf("存款成功，当前余额为：%d",money);
                printf("\n******Enter返回选择服务类型******");
                getchar();getchar();
                goto begin;
            case 2:
                printf("请输入取款金额：");
                scanf("%d", &outmoney);
                if (outmoney<money) {
                    money = money - outmoney;
                    printf("取款成功，当前余额为：%d",money);
                    printf("\n******Enter返回选择服务类型******");
                    getchar();getchar();
                    goto begin;
                }else {
                    printf("余额不足");
                    printf("\n******Enter返回选择服务类型******");
                    getchar();
                    getchar();
                    goto begin;
                }
            case 3:
                printf("您的余额为：%d", money);
                printf("\n******Enter返回选择服务类型******");
                getchar();getchar();
                goto begin;
            case 4:
                printf("请输入新密码：");
                goto begin3;
            case 5:
                printf("退卡完成，请取卡");break;
            default:printf("*****未找到相关服务，请重新选择：*****");
                goto begin;
        }

    }else{
        if (t==0){
            printf("账号已冻结");
            goto begin2;
        }else {
            printf("\n密码输入错误"
                   "\n还剩%d次机会，请重新输入密码：", t);
            t = t - 1;
            goto begin1;
        }

    }


    begin2:return 0;
}