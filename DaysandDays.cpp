#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*以下注释为鸡兔同笼解决方案，若使用请取消该段代码注释。*/
int main()
{
	int head, feet;
	int chicken, rabbit;
	scanf_s("%d %d", &head, &feet);
	for (chicken = 1; chicken <= head; chicken++)
	{
		rabbit = head - chicken;
		if (rabbit * 4 + chicken * 2 == feet)
			break;
	}
	printf("\nchicken = %d, rabbit = %d", chicken, rabbit);
	return 0;
}


/*以下注释为迷宫小游戏，move.h头文件尚未编写，若使用请取消该段代码注释*/
#include <conio.h>
#include <Windows.h>
#include <move.h>

int main()
{
	char m[20][20] = { 
		"------"
		"|O |  "
		"| -| |"
		"|  | |"
		"|-   |"
		"------"
	};
	int i, x, y, p, q;
	char ch;
	x = 1, y = 1, p = 1, q = 5;
	for (i = 0; i < 6, i++)
		puts(m[i]);

	while (x != p || y != q)
	{
		ch = getch();
		move(m, ch, &x, &y);
		system("cls");
		for (i = 0; i < 6, i++)
			puts(m[i]);
	}
	printf("Congratulations on winning the maze!");
	return 0;
}


/*以下注释为简单除法运算，若使用请取消该段代码注释*/
int main()
{
	int x, y;
	double z;
	x = 20;
	y = 5;
	z = (double)x / y;
	printf("z = %.1lf\n", z);
	return 0;
}


/*枚举常量的应用*/
enum Color
{
	RED,
	YELLOW,
	BLUE
};

int main()
{
	enum Color Akarin = RED;
	printf("%d\n", RED);
	printf("%d\n", YELLOW); 
	printf("%d\n", BLUE);
	return 0;
}


/*字符串长度的应用*/
#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', '\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}


/*蜂鸣器*/
int main()
{
	printf("蜂鸣器\a");
	return 0;
}



int main()
{
	int choice = 0;
	printf("你来到了华理\n");
	printf("你会好好学习，成就自己吗？请输入你的选择(1/0)\n");
	scanf_s("%d", &choice);
	if(choice == 1)
		printf("You are wanted!\n");
	else
		printf("What are you going to do?\n");
	return 0;
}


/*来到华理认真努力的故事*/
int main()
{
	int day = 0;
	printf("你来到了华理\n");
	while(day < 1600)
	{
		day++;
		printf("Put your endeavor! Now is %d\n", day);
	}
	if(day >= 1600)
		printf("Congrats!You are permissed to undergraduate!\n");
	return 0;
}



/*以下注释用于让穰子哥取得真JING，请每天运行一次。*/
int main()
{
	int time = 0;
	while (time < 114514)
	{
		time++;
		printf("CaicAI的第%d次\n", time);
	}
	if (time == 114514)
		printf("CaicAI已经取得真JING\n");
	return 0;
}


/*定义加法函数运算*/
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	printf("%d\n", Add(12, 65));
	return 0;
}


int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}



/*亟待解决的问题：输入判断不符合条件后返回重试代码块的优化*/
/*按位与、按位或、按位异或的运算*/
int main()
{
	int a = 0;
	int b = 0;
	int input = 0;
	int result = 0;
	printf("输入你想要的运算方式：0为按位与运算，1为按位或运算，2为按位异或运算。\n");
	scanf_s("%d", &input);
	//如何实现代码块的循环出
	while (input > 2)
	{
		if (input > 2)
			printf("输入内容非法，请重试！\n");
			scanf_s("%d", &input);
	}
	if (input <= 2)
		printf("输入两位数字使它们得以进行你选择的运算。\n");
		scanf_s("%d %d", &a, &b);
		if (input == 0)
			result = a & b;
		if (input == 1)
			result = a | b;
		if (input == 2)
			result = a ^ b;
	printf("结果是%d\n", result);
	return 0;
}


/*公式：数组中元素的个数 = 数组总大小 / 数组中单个元素的大小*/
int Mydivide(int a, int b)
{
	int c = a / b;
	return c;
}

int main()
{
	int a, b, c = 0;
	int arr[10] = {0};
	printf("%d\n", Mydivide(sizeof(arr), sizeof(arr[0])));
	return 0;
}
