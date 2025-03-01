#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//求两个数的最小公倍数
//int lcm(int a,int b)
//{
//	int tem = a * b;
//	int i = 0;
//	int max = (a > b ? a : b);
//	for (i = max; i <= tem; i++)
//	{
//		if (i%a==0&&i%b==0)
//		{
//			
//			return i;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int r = lcm(a, b);
//	printf("%d和%d的最小公倍数是：%d", a,b,r);
//	return 0;
//}
//方法2
//int lcm(int a, int b)
//{
//	int max = (a > b ? a : b);
//	int min = (a < b ? a : b);
//	int tem = a * b;
//	if (max % min == 0)
//	{
//		return max;
//	}
//	while ((tem / 2) % a == 0 && (tem / 2) % b == 0 && max % min != 0)
//	{
//		tem /= 2;
//	}
//	return tem;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int r = lcm(a, b);
//	printf("%d", r);
//
//	return 0;
//}

// 倒置一句话，但是这句话的每个单词不倒置,这句话长度不超过100
// 例如：i like beijing.    -->>   beijing. like i

// 思路：先逆序一整句话，再逆序每个单词，通过空格判断单词分隔
// 即，第一步： .gnijieb ekil i
//		第二步：beijing. like i

//定义一个字符串逆序函数
//void reverse_str(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101] = {0};//多出来的一个位置放'\0'
//	//scanf读取到 空格会停止，所以这里用gets
//	gets(arr);
//	char* left = arr;
//	char* right = arr+(strlen(arr)-1);
//	//第一步：逆序整句话
//	reverse_str(left, right);
//	//第二步： 逆序每一个单词
//	
//
//	char* start = arr;//单词的起始位置
//	char* end = start;//单词的结束位置
//
//	while (*end != '\0')
//	{
//		while (*end != ' '&& *end !='\0')
//		{
//			end++;
//		}
//		reverse_str(start, end - 1);
//		start = end + 1;
//		end = start;
//	}
//	
//	printf("%s\n", arr);
//
//	return 0;
//}

