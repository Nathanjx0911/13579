#include<stdio.h>
int main()
{       int image,n=-2,height,width;
        char fill;
//定义变量
    while(n!=0)
//大循环使程序能一直重复进行
    {
        printf("请输入要绘制的图形：1-墙  2-框  3-三角， 输入-1结束。注意：对于所有输入我们采用能用则用，不行报错的原则。\n");
         while(scanf("%d",&image)!=1||image<1||image>3)
            {if(image==-1)
            return 0;
            printf("类型不符合要求，请重新来!\n");
            printf("请输入要绘制的图形：1-墙  2-框  3-三角， 输入-1结束。注意：对于所有输入我们采用能用则用，不行报错的原则。\n");
            while(getchar()!='\n');}
            while(getchar()!='\n');
            printf("请输入图形的填充字母\n");
            scanf("%c",&fill);
               while(getchar()!='\n');
//输入1时输出墙图案
            if(image==1)
                {printf("请输入高度\n");
//录入宽与高
                    while(scanf("%d",&height)!=1||height<1||height>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}while(getchar()!='\n');
                printf("请输入宽度\n");
                    while(scanf("%d",&width)!=1||width<1||width>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}
                    while(getchar()!='\n');
//清楚缓存区
                int i;
                for(i=1;i<=height;i++)
                    {   int k;
                        for(k=1;k<=width;k++)
                        {printf("%c",fill);}
                    printf("\n");
//利用循环输入图案

                    }
                    }
//输入2时输出框图案
            if(image==2)
       {
//录入宽与高
                printf("请输入高度\n");
                    while(scanf("%d",&height)!=1||height<1||height>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}while(getchar()!='\n');
                printf("请输入宽度\n");
                    while(scanf("%d",&width)!=1||width<1||width>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}
                    while(getchar()!='\n');
//清楚缓存区
                     int k;
                    for(k=1;k<=width;k++)
                        {printf("%c",fill);}
                    printf("\n");
                int i;
                for(i=1;i<=height-2;i++)
                    {
                        printf("%c",fill);
                        for(k=1;k<=width-2;k++)
                            {printf(" ");}
                        printf("%c\n",fill);}
                    for(k=1;k<=width;k++)
                    {printf("%c",fill);}
                    printf("\n");
//利用循环输入图案
                    }
//输入三时输出三角形图案
            if(image==3)
//录入宽与高
                {printf("请输入高度\n");
                    while(scanf("%d",&height)!=1||height<1||height>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}while(getchar()!='\n');
                printf("请输入宽度\n");
                    while(scanf("%d",&width)!=1||width<1||width>3000)
                    {printf("类型不符合要求，请重新来!\n");
                    while(getchar()!='\n');}
                    while(getchar()!='\n');
//清楚缓存区
                int i;
                for(i=1;i<=height;i++)
                    {   int k;
                        for(k=1;k<=i;k++)
                        {printf("%c",fill);}
                    printf("\n");
//利用循环输入图案
                    }
                    }
    }


return 0;
}
