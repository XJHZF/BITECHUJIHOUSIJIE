#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	a=num1& num2;
//	b=num1 | num2;//ע�ⰴλ�����������
//	c=num1^ num2;
//	printf("%d\n",a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d,b=%d\n",a,b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;//����
//	printf("����һ������\n");
//	scanf_s("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int num = 0;
//	printf("������һ����\n");
//	scanf_s("%d", &num);
//	for (i = 0;i < 32;i++)
//	{
//		if (1 == ((num >>i) & 1))
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int num = 0;
//	printf("������һ����\n��");
//	scanf_s("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//����д�в��У�
//	//printf("%d\n", sizeof int);//����д�в��У�
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof�Ǽ��������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
// //sizeof�����������������ʱ������ʹ������
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a = (int)3.14;//ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);//���鴫��ֻ�ܴ���������Ԫ�ص�ַ
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int x = ++a;
//	//�ȶ�a����������Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a����֮���ֵ��xΪ11��
//	int y = --a;
//	//�ȶ�a�����Լ���Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a�Լ�֮���ֵ��yΪ10;
//	return 0;
//}
////����++��--
//int main()
//{
//	int a = 10;
//	int x = a++;
//	//�ȶ�a��ʹ�ã������ӣ�����x��ֵ��10��֮��a���11��
//	int y = a--;
//	//�ȶ�a��ʹ�ã����Լ�������y��ֵ��11��֮��a���10��
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//�߼����������õ����Ϊ��ʱ���ټ������ı��ʽ
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++|| ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//�߼����������õ����Ϊ��ʱ���ټ������ı��ʽ
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d", &a);
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d", &a);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ��������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", c);
//	return 0;
//}
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();//ʵ�ã�����Ϊ�������ò�������
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//�ṹ��Ա����
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//�ṹ��Ա����
//
//	stu.age = 20;//�ṹ��Ա����
//	set_age1(stu);
//
//	pStu->age = 20;//�ṹ��Ա����
//	set_age2(pStu);
//	return 0;
//}
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	char id[20];
//	double score;
//};
//int main()
//{
//	struct Stu s1 = { "����",20,"��","20201111",123 };
//	struct Stu* ps = &s1;
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.sex);
//	printf("%s\n", s1.id);
//	printf("%lf\n", s1.score);
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).sex);
//	printf("%s\n", (*ps).id);
//	printf("%lf\n", (*ps).score);
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->sex);
//	printf("%s\n", ps->id);
//	printf("%lf\n", ps->score);
//	return 0;
//}
//ָ�����;�����ָ����н����ò�����ʱ���ܷ��ʿռ�Ĵ�С
//int* p,*p�ܷ����ĸ��ֽ�
//char* p,*p�ܷ���һ���ֽ�
//double* p,*p�ܷ��ʰ˸��ֽ�
//ָ�����;�����ָ����ǰ�������һ���߶�Զ����λ���ֽڣ�


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr,sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0;i < sz;i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	printf("\n");
//	Print(arr2, sz);
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//ǿ������ת��Ϊshort���͵�ָ�룬һ�η��������ֽڣ���arr��int���ͣ�һ�����ִ����ĸ��ֽ�
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int i;//ȫ�ֱ�������ʼ��Ĭ��ֵ��0
//int main()
//{
//	i--;//i=-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	if (i > sizeof(i))//sizeof�Ǽ������������ռ�ڴ�Ĵ�С���涨Ϊ�޷�������
//	{
//		printf(">\n");
//	}
//	else 
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++;//b=7,c=8,a=8
//	b += a++ + c;//b=23,a=9,c=8
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}
//int count_bit_one(int a)//1.ʽ����
//{
//	int count = 0;
//	while (a)
//	{
//		if (1 == a % 2)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_bit_one(int a)//2.n������1����õ�������λ��
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((a>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one(int a)//3.n��n-1���룬������ٴξʹ�������������ж��ٸ�1
//{
//	int count = 0;
//	while (a)
//	{
//		
//		a = a & (a - 1);
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//}
//int count_bit_one(int a)//3.n��n-1���룬������ٴξʹ�������������ж��ٸ�1
//{
//	int count = 0;
//	while (a)
//	{
//
//		a = a & (a - 1);
//		count++;
//	}
//}
//	int get_differ_bit(int a, int b)
//{
//	int count = a ^ b;
//	int c=count_bit_one(count);
//	return c;
//
//}
//int main()
//{
//	int a = 0;
//	int b =0;
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	int c=get_differ_bit(a,b);
//	printf("%d\n", c);
//	return 0;
//}
// void Print(int m)
//{
//	 int i = 0;
//	printf("����λ��ӡ��");
//	for (i = 30;i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��ӡ��");
//	for (i = 31;i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf_s("%d", &m);
//	Print(m);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//void Print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr)/ sizeof(arr[0]);
//	Print(arr,sz);
//}
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print_table(n);
//	return 0;
//}
// 
// 
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void Reverse_String(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;	
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	Reverse_String(arr,sz);
//	printf("%s\n", arr);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void Reverse_String(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		Reverse_String(arr + 1);
//		arr[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	Reverse_String(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(unsigned int num)
//{
//
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
// 
// 
//double pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return(1.0 / (pow(n, -k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d", &n);
//	scanf_s("%d", &k);
//	double ret = pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}
//
//
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//
//
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert (dest != NULL);//����,��ָ֤�����Ч��
//	assert (src != NULL);//����
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//}
//
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//
//
//#include<assert.h>
//int mystrlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//		return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = mystrlen(arr);
//	printf("%d", len);
//	return 0;
//}
// 
// 
//int main()//չʾ������DEBUG��RELEASE���������µ����н����һ��
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//
//int main()//����ʵ�������ִ���
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)//
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	return 0;
//}
//void test1 ()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	//printf("%p\n", &n);
//	//printf("%p\n", &m);
//	//printf("%p\n", p);
//	*p = 20;
//	p = &m;
//	//printf("%p\n", p);
//}
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	//*p = 20;
//	p = &m;
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20;
//	//p = &m;
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}
//1. const�������*����ߣ����ε���ָ��ָ������ݣ���ָ֤��ָ������ݲ���ͨ��ָ������
//�䡣����ָ�������������ݿɱ䡣
//2. const������� * ���ұߣ����ε���ָ�����������֤��ָ����������ݲ����޸ģ�����ָ
//��ָ������ݣ�����ͨ��ָ��ı䡣

//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	const char* p = "abcdef";
//	int len = my_strlen(p);
//	printf("len=%d\n", len);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}s1,s2,s3;//����ȫ�ֱ��������ǲ��Ƽ�
//int main()
//{
//	struct stu s;
//	return 0;
//}

//typedef struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}stu;
//int main()
//{
//	stu s1={"����",18,"Ů","15054545454"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bite\n";
//	struct T t = { "hehe" ,{100,'w',"hello world",3.14 }, arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.pc);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.c);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//void print(struct stu* s)
//{
//	printf("name:%s  age��%d\n", (*s).name, (*s).age);
//	printf("name:%s  age��%d\n",s->name, s->age);
//}
//int main()
//{
//	struct stu s = { "����",18 };
//	print(&s);
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//void print( stu s)
//{
//	printf("name:%s  age��%d\n", s.name,s.age);
//}
//int main()
//{
//	stu s = { "����",20 };
//	print(s);
//	return 0;
//}
//int main()
//{
//	int a = 0X12345678;
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else 
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return*(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);//abc����Ҫ������������
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000-Դ��
//	//11111111111111111111111101111111-����
//	//11111111111111111111111110000000-����
//	//10000000
//	//11111111111111111111111110000000
//
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);//128=127+1;���з��ŵ�char��������127+1���Ϊ-128������һ�����ͬ��
// //%d��ӡʮ���Ƶ��з������֣�%u��ӡʮ���Ƶ��޷�������
//	return 0;
//}
// 
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	//-20
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100-����
//	//10
//	//00000000000000000000000000001010
//	//��ӵĽ��
//	//11111111111111111111111111110110-����
//	//11111111111111111111111111110101-����
//	//10000000000000000000000000001010-Դ�� 
//	//-10
//	printf("%d\n", i + j);
//	return 0;
//}
#include<windows.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n",i);//���������i���޷������֣���Զ������С��0���ʽ�����ѭ����
//		Sleep (200);
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//
//
//#include<windows.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//		Sleep(200);
//	}
//	return 0;
//}
//int main()
//{
//	double d = 1E10;
//	printf("%lf", d);
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*) & n;
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pfloat��ֵΪ��%lf\n", *pfloat);
//	*pfloat = 9.0;
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pfloat��ֵΪ��%lf\n", *pfloat);
//	return 0;
//}

