#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������
//int main()
//{
//	int a = 2 + 10;
//	int b = 2 - 10;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	//printf("%d\n", 2+10);
//
//	return 0;
//}

//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//
//	return 0;
//}

//%f   -- float
//%lf  -- double

//int main()
//{
//	printf("%d\n", 8 / 2); //4
//	printf("%d\n", 7 / 2); //3
//	printf("%d\n", 7 % 2); //1
//
//	printf("%lf\n", 7.0 / 2.0); //3.500000
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	int b = 0;//��ʼ��
//
//	a = 100;//��ֵ
//
//	b = a = a + 3;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;//��ʼ��
//	int b = 0;//��ʼ��
//	
//	a = a + 3;
//	a += 3;
//
//	b = b - 2;
//	b -= 2;
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = ++a;//ǰ��++
//	//��+1����ʹ��
//	//a=a+1, b=a;
//	printf("a=%d b=%d\n", a, b);//3 3
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a++;//����++
//	//��ʹ�ã���+1
//	//b=a, a=a+1
//	printf("a=%d b=%d\n", a, b);//3 2
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = --a;//ǰ��--�� ��-1����ʹ��
//	//a=a-1, b=a
//
//	int b = a--;//����--�� ��ʹ�ã���-1
//	//b=a, a=a-1
//	printf("a=%d b=%d\n", a, b);// 9 10 
//
//	return 0;
//}

//int main()
//{
//	int a = -+10;
//	printf("a=%d\n", a); //a=-10
//	int b = -a;//- -10
//	printf("b=%d\n", b); //b=10
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	int a = (int)3.14; //����ת��
//	printf("%d\n", a); //3
//	return 0;
//}


//�ġ�printf��scanf
//int main()
//{
//	//printf("hello C����\n");
//	//printf("hello\n");
//	//printf("world\n");
//
//	//printf("hello\nworld");
//
//	printf("there are 3 apples\n");
//	printf("there are %d apples\n", 3);
//	printf("there are %d apples\n", 5);
//	printf("there are %d apples\n", 15);
//
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "lisi");
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
//	//a=10 b=20
//	return 0;
//}

//int main()
//{
//	printf("%-d\n", 123); //123
//	printf("%-5d\n", 123); //123  
//	printf("%8d", 123);
//	printf("%d", 111);//123     111
//
//	return 0;
//}

//int main()
//{
//    printf("%12f\n", 123.45); //  123.450000
//    printf("%+d\n", 12); //+12
//    printf("%+d\n", -12); //-12
//
//    return 0;
//}

//int main()
//{
//    printf("Number is %.2f\n", 0.5);//0.50
//    printf("Number is %f\n", 0.5);//0.50
//    printf("Number is %6.2f\n", 0.5);//  0.50
//    printf("Number is %*.*f\n", 6, 2, 0.5);//  0.50
//
//    return 0;
//}

//int main()
//{
//	  //��ӡ�ַ�����󳤶�
//    printf("%s\n", "hello world");
//    printf("%.5s\n", "hello world"); //hello
//    printf("%.7s\n", "hello world"); //hello w
//    return 0;
//}

//int main()
//{
//	int score = 0;//�ɼ�
//	printf("������ɼ�:"); 
//	//����
//	scanf("%d", &score);//& - ȡ��ַ������
//	printf("score = %d\n", score);
//
//	return 0;
//}
//

//int main()
//{
//	char arr[5] = {0};
//	scanf("%s", arr); //�ַ�������Ҫ&
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0;
//	double d = 0.0;
//	scanf("%d%d%f%lf", &a, &b, &f, &d); //����ʱ�м�����пո���߻��У����Ų���
//	printf("%d %d %f %lf\n", a, b, f, d);
//
//	return 0;
//}

//�û����� "    -13.45e12# 0"
//int main()
//{
//    int x;
//    float y;
//
//    scanf("%d%f", &x, &y);
//    printf("%d\n", x); //��ȡС����ǰ��-13
//    printf("%f\n", y); //��ȡС�����449999994880.000000
//
//    return 0;
//}

//scanf�ķ���ֵ�ǳɹ���ȡ�ı�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int r = scanf("%d %d %d", &a, &b, &c);
//	printf("r = %d\n", r);
//
//	return 0;
//}


//�塢ռλ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d-%d-%d", &a, &b, &c); //���ָ�ʽһ��
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch); //%c�����Զ����Կհ��ַ�
//	scanf(" %c", &ch);  // %c��ʾ���Կհ��ַ�
//	printf("%c------", ch);
//
//	char arr[20] = { 0 };
//	scanf("%19s", arr);  //��ȡ�ַ�����󳤶�
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    //*Ϊ��ֵ���Է�������ռλ����%���棬��ռλ���򲻻᷵��
//    scanf("%d%*c%d%*c%d", &year, &month, &day);//2023-10-12   2023/10/12
//
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}



//��3������֧��ѭ�����ϣ�
//һ��if���
//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("%d ������\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("%d ������\n", num);
//	else
//		printf("%d ��ż��\n", num);
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//����
//	//����
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//����
//	//����
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("̸����\n");
//	}
//	else
//  //Ĭ��if��else��䶼ֻ����һ����䣬����Ҫ��{ }
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//
//	return 0;
//}