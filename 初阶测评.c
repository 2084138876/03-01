#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//������������С������
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
//	printf("%d��%d����С�������ǣ�%d", a,b,r);
//	return 0;
//}
//����2
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

// ����һ�仰��������仰��ÿ�����ʲ�����,��仰���Ȳ�����100
// ���磺i like beijing.    -->>   beijing. like i

// ˼·��������һ���仰��������ÿ�����ʣ�ͨ���ո��жϵ��ʷָ�
// ������һ���� .gnijieb ekil i
//		�ڶ�����beijing. like i

//����һ���ַ���������
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
//	char arr[101] = {0};//�������һ��λ�÷�'\0'
//	//scanf��ȡ�� �ո��ֹͣ������������gets
//	gets(arr);
//	char* left = arr;
//	char* right = arr+(strlen(arr)-1);
//	//��һ�����������仰
//	reverse_str(left, right);
//	//�ڶ����� ����ÿһ������
//	
//
//	char* start = arr;//���ʵ���ʼλ��
//	char* end = start;//���ʵĽ���λ��
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

