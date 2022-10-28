//#include<stdio.h>
//
//int main()
//{
//	printf("       *\n      *\n     *\n*   *\n * *\n  *\n");
//	return 0;
//}

//#include<stdio.h>
//#define PAI 3.1415926f
//
//int main()
//{
//	float r,v;
//	printf("请输入球体的半径：");
//	scanf_s("%f", &r);
//
//	v = 4.0f / 3.0f * PAI * r * r * r;
//
//	printf("球体的体积是：%f\n", v);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	float amount;
//
//	printf("请输入美元数额：");
//	scanf_s("%f", &amount);
//
//	printf("增加税率后的相应金额：%.2f\n", amount * 105 / 100);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, multinomial;
//	printf("请输入 x 的值：");
//	scanf_s("%d", &x);
//
//	multinomial = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
//	printf("多项式的值为：%d\n", multinomial);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int x, multinomial;
//	printf("请输入 x 的值：");
//	scanf_s("%d", &x);
//
//	multinomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
//	printf("多项式的值为：%d", multinomial);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int money,twenty,ten,five,one;
//	printf("请输入美元金额：");
//	scanf_s("%d", &money);
//
//	twenty = money / 20;
//	ten = (money - 20 * twenty) / 10;
//	five = (money - 20 * twenty - 10 * ten) / 5;
//	one = (money - 20 * twenty - 10 * ten - 5 * five) / 1;
//
//	printf("所需美元钞票如下：\n二十美元:%d\n十美元:%d\n五美元:%d\n一美元:%d\n", twenty, ten, five, one);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
// 
//	float loan, rate, ratePerMonth, payment, firstRemaining, secondRemaining, thirdRemaining;
//	printf("请依次输入贷款、年利率、每月偿还额：");
//	scanf_s("%f%f%f", &loan, &rate, &payment);
//
//	ratePerMonth = rate / 1200;
//	firstRemaining = loan - payment + ratePerMonth * loan;
//	secondRemaining = firstRemaining - payment + ratePerMonth * firstRemaining;
//	thirdRemaining = secondRemaining - payment + ratePerMonth * secondRemaining;
//
//	printf("第一个月贷款余额:$ %.2f\n", firstRemaining);
//	printf("第二个月贷款余额:$ %.2f\n", secondRemaining);
//	printf("还三个月贷款余额:$ %.2f\n", thirdRemaining);
//
//	return 0;
//}
//10.7 自习所做
//第一章练习题及例题



//#include<stdio.h>
//
//int main(void)
//{
//	float i = 1268.0;
//
//	printf("%-10.2f", i);
//	printf("%.2f", i - 2);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int i = 10000;
//	printf("%d", i);
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	printf("\n\a");
//	printf("  遥遥 \b");
//	printf("遥遥\t");
//	/*printf("\n");*/
//	printf("haihaihai");
//	printf("\"遥\\遥\"\t");
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i,j;
//	scanf_s("%d /%d",&i,&j);
//	printf("%d\n%d", i, j);
//	return 0;
//}


//#include<stdio.h>

//int main()
//{
//	int num1, num2, denom1, denom2, resultNum, resultDenom;
//	printf("请输入第一个分数：");
//	scanf_s("%d/%d", &num1, &denom1);
//
//	printf("请输入第二个分数：");
//	scanf_s("%d/%d", &num2, &denom2);
//
//	resultNum = num1 * denom2 + num2 * denom1;
//	resultDenom=denom1*denom2;
//
//	printf("%d/%d", resultNum, resultDenom);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 2, j = 1;
//	j = -i;
//	i = +1;
//	
//	printf("%d\n%d", i, j);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	float p, q;
//	p = 1 / 2;
//	q = 1.0f / 2.0f;
//	printf("%f\n%f\n", p, q);
//
//	int i, j;
//	i = 7, j = -9;
//	j = j % i;
//	printf("%d\n", j);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
//	printf("请输入第一个数据：");
//	scanf_s("%1d", &i1);
//	printf("请输入第一组数据：");
//	scanf_s("%1d%1d%1d%1d%1d", &i3, &i5, &i7, &i9, &i11);
//	printf("请输入第二组数据：");
//	scanf_s("%1d%1d%1d%1d%1d", &i2, &i4, &i6, &i8, &i10);
//
//	i12 = 9 - (((i1 + i3 + i5 + i7 + i9 + i11) * 3 + (i2 + i4 + i6 + i8 + i10)) - 1) % 10;
//	printf("校验码为：%d", i12);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 1, j = 2, k = 3, p = 4, q = 5;
//	i += 2;
//	j -= 1;
//	k *= 6;
//	p /= 2;
//	q %= 2;
//
//	printf("%d\n%d\n%d\n%d\n%d", i, j, k, p, q);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	printf("%d\n", i);
//	printf("%d\n", i++);
//	printf("%d\n", i);
//	printf("%d\n", ++i);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i=1;
//	printf("%d", i);//这个是不是把1赋值给i了，对变量的初始化赋值是初始化器，是一个专用名词，懂了吧
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f;
//	(a = (b = (c = (e = (d = (f = 1))))));
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = a;
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i1 = 5, j1 = 3, i2 = 2, j2 = 3, i3 = 7, j3 = 8, k3 = 9, i4 = 1, j4 = 2, k4 = 3;
//	printf("%d\n%d\n", i1 / j1, i1 % j1);
//	printf("%d\n", (i2 + 10) % j2);
//	printf("%d\n", (i3 + 10) % k3 / j3);
//	printf("%d\n", (i4 + 5) % (j4 + 2) / k4);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	float a, b;
//	a = 1.0f;
//	b = 2.0f;
//	printf("%.1f\n%.1f", (-a) / b, -(a / b));
//	return 0;
//}
//




//#include<stdio.h>
//
//int main()
//{
//	printf("%f\n", (8.0f / 5.0f));
//	printf("%f\n", (-8.0f) / 5.0f);
//	printf("%f\n", 8.0f / (-5.0f));
//	printf("%f\n", (-8.0f) / (-5.0f));
//
//	return 0;
//}
//
//


//#include<stdio.h>
//
//int main()
//{
//	int i = 7, j = 8;
//	i *= j + 1;
//	printf("%d %d", i, j);
//	
//	return 0;
//}
//



//#include<stdio.h>
//
//int main()
//{
//	int i, j, k;
//	i = j = k = 1;
//	i += j += k;//k=1;j=3
//	printf("%d %d %d", i , j, k);
//
//	return 0;
//}
//
//



//#include<stdio.h>
//
//int main()
//{
//	int i = 1, j = 2, k = 3;
//	i -= j -= k;//k=3;j=-1;i=2
//	printf("%d %d %d", i, j, k);
//
//	return 0;
//}
//
//



//#include<stdio.h>

//int main()
//{
//	int i = 2, j = 1, k = 0;
//	i *= j *= k;//i,j,k=0
//	printf("%d %d %d", i, j, k);
//
//	return 0;
//}






//#include<stdio.h>
//
//int main()
//{
//	int i = 6, j;
//	j = i += i;//j=12;i=12
//	printf("%d %d ", i, j);
//
//	return 0;





//#include<stdio.h>
//
//int main()
//{
//	int i = 5, j;
//	j = (i -= 2) + 1;//i=3;j=4
//	printf("%d %d", i, j);
//
//	return 0;
//}





//#include<stdio.h>
//
//int main()
//{
//	int i = 7, j;
//	j = 6 + (i = 2.5);//i=2;j= 8
//	printf("%d %d", i, j);
//
//	return 0;
//}





//#include<stdio.h>
//
//int main()
//{
//	int i = 2, j = 8;
//	j = (i = 6) + (j = 3);//i=6;j=9
//	printf("%d %d", i, j);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	printf("%d ", i++ - 1);
//	printf("%d", i);
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int i = 10, j = 5;
//	printf("%d ",i++ - ++j);//4
//	printf("%d %d", i, j);//11 6
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 7, j = 8;
//	printf("%d ",i++ - --j);//0
//	printf("%d %d", i, j);//8 7
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 3, j = 4, k = 5;
//	printf("%d ", i++ - j++ + --k);//3
//	printf("%d %d %d ", i, j, k);//4 5 4
//
//	return 0;
//}
//



//#include<stdio.h>
//
//int main()
//{
//	int i = 5, j;
//	j = ++i * 3 - 2;//i=6,j=16
//	printf("%d %d",i, j);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 5, j;
//	j = 3 - 2 * i++;//i=6;j=-7
//	printf("%d %d", i, j);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 7, j;
//	j = 3 * i-- + 2;//i=6;j=23
//	printf("%d %d", i, j);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 7, j;
//	j = 3 + --i * 2;//i=6;j=15
//	printf("%d %d", i, j);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int x, y, z;
//	x = y = z = 1;
//	printf("%d %d %d ", x++, ++y, z += 1);//x=1;y=2;z=2
//
//	return 0;
//}

//#include<stdio.h>
////二位数的数位逆序
////int main()
//{
//	int i, j ,z ;
//
//	printf("请输入要转化的二位数：");
//	scanf_s("%d", &z);
//
//	i = z % 10;
//	j = (z - i) / 10;
//	printf("转化后的二位数：%d%d", i, j);
//
//	return 0;
//}




//#include<stdio.h>
////扩展后三位数的数位逆序
//int main()
//{
//	int i, j, k, z;
//	printf("请输入要转化的三位数：");
//	scanf_s("%d", &z);
//
//	i = z / 100;
//	j = (z - 100 * i) / 10;
//	k = z - i * 100 - j * 10;
//	printf("转化后的三位数：%d%d%d", k, j, i);
//
//	return 0;
//}

//#include<stdio.h>
////更改程序后的三位数数位逆序
//int main()
//{
//	int i, j, k;
//	printf("请输入要转化的三位数的百位数：");
//	scanf_s("%d", &i);
//	printf("请输入要转化的三位数的十位数：");
//	scanf_s("%d", &j);
//	printf("请输入要转化的三位数的个位数：");
//	scanf_s("%d", &k);
//
//	printf("转化后的三位数：%d%d%d", k, j, i);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i, j, k, p, l, x, y;
//	printf("请输入要转化的十进制数：");
//	scanf_s("%d", &i);
//	j = i % 8;
//	k = i / 8 % 8;
//	p = i / 64 % 8;
//	l = i / 512 % 8;
//
//
//	printf("该十进制数%d(D)对应的八进制数：%5d(O)\n", i, j + k * 10 + p * 100 + l * 1000);
//
//	printf("请输入要转化的十进制数：");
//	scanf_s("%u", &x);
//	y = x;
//	printf("该十进制数%d(D)转化后的八进制数：%5o(O)\n", y, x);
//
//	return 0;
//}


//#include<stdio.h>
//计算产品代码的校验位
//int main()
//{
//	int i1, i2, i3, i4, i5, i6, i7, i8, i9, iA, iB;
//	printf("请输入11位数码：");
//	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &iA, &iB);
//	printf("校验码为：%d\n", 9 - ((i1 + i3 + i5 + i7 + i9 + iB) * 3 + (i2 + i4 + i6 + i8 + iA) - 1) % 10);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j, k, l;
//	printf("请输入12位EAN码：");
//	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
//	printf("校验码为：%d", 9 - ((b + d + f + h + j + l) * 3 + (a + c + e + g + i + k) - 1) % 10);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	printf("%d", 3 < 4 <= 1);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int* p;
//	p = &i;
//	printf("%d %d\n", i, *p);
//	*p = 114514;
//	printf("%d %d\n", i, *p);
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	int a[11];
//	int i;
//	printf("随机输出10~20内的随机数\n");
//	srand(time(0));
//	for (i = 1; i <= 10; i++);
//	a[i] = 10 + rand() % 10;
//	for (i = 1; i <= 10; i++);
//	printf("%d", a[i]);
//	printf("\n");
//
//	
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j;
//	i = 1, j = 2;
//	printf("%d", i > j);
//
//	return 0;
//}



//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	int range1, range2, quantity, sum, num;
//	num = range1 = 0;
//	sum = quantity = 0;
//
//	printf("输入要求解的范围:(range1 , range2)");
//	scanf_s("%d %d", &range1, &range2);
//
//	for (num = range1; num <= range2; num++)
//	{
//		for (int i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//				break;
//			if (i == num - 1)
//			{
//				sum += num;
//				quantity++;
//			}
//		}
//	}
//
//	if (range2 >= 2)
//	{
//		quantity++;
//		sum += 2;
//	}
//
//	printf("共有素数: %d(个)\n"
//		"它们的和为: %d\n", quantity, sum);
//
//	system("pause");
//	return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//	int a, b, max;
//	a = 1, b = 4;
//	a += 2;
//	b += a;
//
//	if (a > b) max = a;
//	else max = b;
//
//	printf("%d", max);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int i, j, k, max;
//	i = 3, j = 2, k = 3;
//	i += k;
//	k += (i + j);
//
//	if (i > j)
//		if (i > k)
//			max = i;
//		else
//			max = k;
//	else
//		if (j > k)
//			max = j;
//		else
//			max = k;
//
//	printf("max is %d\n"
//		"i is %d\nj is %d\nk is %d\n", max, i, j, k);
//		
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i, j, k, max;
//	i = 1, j = 2, k = 3;
//	
//	if (i > j) {
//		if (i > k) {
//			max = i;
//		}
//		else {
//			max = k;
//		}
//	}
//	else  {
//		if (j > k) {
//			max = j;
//		}
//		else {
//			max = k;
////		}
////	}
////	printf("max is %d\n", max);
////	return 0;
////}
//
//
//#include<stdio.h>
//
//int main()
//{
//	float trade = 0, commission = 0;
//	printf("Enter the trade: $");
//	scanf_s("%f", &trade);
//
//	if (trade <= 2500.00f)
//		commission = 30.00f + .017f * trade;
//	else if (trade > 2500 && trade <= 6250)
//			commission = 56.00f + .0066f * trade;
//	else if (trade > 6250.00f && trade <= 20000.00f)
//				commission = 76.00f + .0034f * trade;
//	else if (trade > 20000.00f && trade < 50000.00f)
//			commission = 100.00f + .0022f * trade;
//	else if (trade > 50000.00f && trade < 500000.00f)
//			commission = 155.00f + .0011f * trade;
//	else if (trade < 500000)
//			commission = 255.00f + .0009f * trade;
//
//	printf("commission is %.2f", commission);
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int i, j, k;
	i = 114514;
	j = 2;
	k = i + j;
	return k > i ? i : j;
}