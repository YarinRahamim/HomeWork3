#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ***1***
void main()
{
	int a, b, c;
	printf("Please enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
		printf("Max = %d", a);
	else if (b > a && b > c)
		printf("Max = %d", b);
	else 
		printf("Max = %d", c);
}*/

/* ***1n***
void main()
{
	int a, b, c;
	printf("Please enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a;

	if (a < b)
		max = b;

	if (max < c)
		max = c;

	printf("Max = %d", max);
}*/

/* ***2*** 
void main()
{
	int a, b;
	printf("Please enter 2 integer numbers: ");
	scanf("%d %d", &a, &b);
	if (b == 0)
		printf("*Err* Invalid numbers");
	else if (a % 2 == 0 && b % 2 == 0 && a % b == 0)
		printf("Vaild numbers");
	else 
		printf("Invalid numbers");
}*/

/* ***3***
void main()
{
	int a;
	printf("Enter number with 3 digits: ");
	scanf("%d", &a);

	if (a > 999 || a < 100)
		printf("Invalid input");

	else if (a % 10 > (a / 10) % 10 && (a / 10) % 10 > (a / 100) % 10)
		printf("Very ascending");

	else if (a % 10 == (a / 10) % 10 && (a / 10) % 10 > (a / 100) % 10
		|| a % 10 > (a / 10) % 10 && (a / 10) % 10 == (a / 100) % 10
		|| (a / 100) % 10 == (a / 10) % 10 && (a / 10) % 10 > a % 10
		|| (a / 100) % 10 > (a / 10) % 10 && (a / 10) % 10 == a % 10)
		printf("Ascending");

	else if ((a / 100) % 10 > (a / 10) % 10 && (a / 10) % 10 > a % 10)
		printf("Very descending");
	else
		printf("Digits neither ascending nor descending");

}*/

/* ***3n***
void main()
{
	int number;
	int units, tens, hundreds;
	printf("Enter a number please: ");
	scanf("%d", &number);
	if (number >= 100 && number <= 999)
	{
		units = number % 10;
		number /= 10;
		tens = number % 10;
		number /= 10;
		hundreds = number % 10;
		if (hundreds < tens && tens < units)
			printf("Very Ascending");
		else if (hundreds < tens && tens <= units || hundreds <= tens && tens < units)
			printf("Ascending");
		else if (hundreds > tens && tens > units)
			printf("Very Descending");
		else if (hundreds > tens && tens >= units || hundreds >= tens && tens > units)
			printf("Descending");
		else
			printf("Digits neither ascending nor descending");

	}
	else
		printf("Invalid Input");



}*/


/* ***4***
void main()
{
	int secs;
	printf("Please enter number of secs: ");
	scanf("%d", &secs);

	double houers, min, sec;

	if (secs < 60) {
		if (secs < 10)
			printf("00 : 00 : 0%d", secs);
		else 
			printf("00 : 00 : %d", secs);
	}


	else if (secs < 3600) {
		min = secs / 60.0;
		sec = ((secs / 60.0) - 1) * 60.0;
		if (min < 10 && sec < 10)
			printf("00 : 0%d : 0%d", (int)min, (int)sec);
		else if (min < 10 && sec >= 10)
			printf("00 : 0%d : %d", (int)min, (int)sec);
		else if (min >= 10 && sec < 10)
			printf("00 : %d : 0%d", (int)min, (int)sec);
		else
			printf("00 : %d : %d", (int)min, (int)sec);
	}

	else {
		houers = (secs / 60.0) / 60.0;
		min = (((secs / 60.0) / 60) - 1) * 60.0;
		sec = (((((secs / 60.0) / 60.0) - 1) * 60.0) - 13) * 60.0;
		if (houers < 10 && min < 10 && sec < 10)
			printf("0%d : 0%d : 0%d", (int)houers, (int)min, (int)sec);
		else if (houers < 10 && min < 10 && sec >= 10)
			printf("0%d : 0%d : %d", (int)houers, (int)min, (int)sec);
		else if (houers < 10 && min >= 10 && sec < 10)
			printf("0%d : %d : 0%d", (int)houers, (int)min, (int)sec);
		else if (houers >= 10 && min < 10 && sec < 10)
			printf("%d : 0%d : 0%d", (int)houers, (int)min, (int)sec);
		else if (houers < 10 && min >= 10 && sec >= 10)
			printf("0%d : %d : %d", (int)houers, (int)min, (int)sec);
		else if (houers >= 10 && min < 10 && sec >= 10)
			printf("%d : 0%d : %d", (int)houers, (int)min, (int)sec);
		else if (houers >= 10 && min >= 10 && sec < 10)
			printf("%d : %d : 0%d", (int)houers, (int)min, (int)sec);
		else
			printf("%d : %d : %d", (int)houers, (int)min, (int)sec);
	}
}*/

/* ***5*** 
void main()
{
	int day, month, year;
	printf("Enter a date that include - day , month , year : ");
	scanf("%d %d %d", &day, &month, &year);

	if (day == 31 && month == 12) {
		day = 1;
		month = 1;
		year = year + 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day == 28 && month == 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		day = 29;
		month = 2;
		printf("%d %d %d", day, month, year);
	}

	else if (day == 29 && month == 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		day = 1;
		month = 3;
		printf("%d %d %d", day, month, year);
	}

	else if (day < 28 && month == 2) {
		day += 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day == 28 && month == 2) {
		day = 1;
		month += 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day < 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)) {
		day += 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)) {
		day = 1;
		month += 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day < 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
		day += 1;
		printf("%d %d %d", day, month, year);
	}

	else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
		day = 1;
		month += 1;
		printf("%d %d %d", day, month, year);
	}

} */

/* ***1***
void main()
{
	int num;
	printf("Enter a integer number: ");
	scanf("%d", &num);
	if (num == 0)
		printf("The abs of num is: 0");
	else if (num > 0)
		printf("The abs of num is: %d", num);
	else 
		printf("The abs of num is: %d", (num * -1));
}*/

/* ***2*** 
void main()
{
	double price;
	printf("Please enter the price of your product: ");
	scanf("%lf", &price);
	int amount;
	printf("Please enter the amount of product: ");
	scanf("%d", &amount);

	if (amount >= 50) {
		price = (amount*price) / 2.0;
		printf("The price after 50 percent off is is: %.3lf", price);
	}
	else if (amount >= 25 && amount < 50) {
		price = (amount * price) - ((amount*price) * 0.2);
		printf("The price after 20 percent off is: %.3lf", price);
	}
	else if (amount >= 10 && amount < 25) {
		price = (amount * price) - ((amount*price) * 0.05);
		printf("The price after 5 percent off is: %.3lf", price);
	}
	else
		printf("The price is: %.3lf", (price * amount));
} */

/* ***3***
void main()
{
	int num;
	printf("Enter integer number: ");
	scanf("%d", &num);

	if (((num % 2) == 0 && (num % 3) == 0 && (num % 5) > 0))
		printf("Vaild Number");
	else if (((num % 2) > 0 && (num % 7) > 0 && (num % 11) > 0))
		printf("Vaild Number");
	else
		printf("Invalid Number");
} */

/* ***4*** 
void main()
{
	int n1, n2, n3;
	printf("Please enter 3 numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (((n1 % n2 == 0 || n2 % n1 == 0) && (n3 % n2 == 0 || n2 % n3 == 0)
		&& (n1 % n3 == 0 || n3 % n1 == 0)))
		printf("Valid Numbers");
	else
		printf("Invaild Numbers");
}*/

/* ***5***
void main()
{
	int currYear = 2021;
	int currMonth = 3;
	int currDay = 6;

	int birthYear, birthMonth, birthDay;
	printf("Enter your birth day, birth month and birth year: ");
	scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

	int ageYear, ageMonth, ageDay;
	ageYear = currYear - birthYear;
	

	if (birthDay == 2021 && birthMonth == 3 && birthDay == 6)
		printf("Your age is: 0");
	
	else if (3 < birthMonth && birthDay < 6) {
		ageYear -= 1;
		ageMonth = 15 - birthMonth;
		ageDay = 6 - birthDay;
		printf("your age is %d years , %d month and %d days", ageYear, ageMonth, ageDay);
	}
	else if (3 > birthMonth && birthDay > 6) {
		ageMonth = 3 - birthMonth;
		ageDay = 36 - birthDay;
		printf("your age is %d years , %d month and %d days", ageYear, ageMonth, ageDay);
	}		
	else if (3 < birthMonth && 6 < birthDay) {
		ageYear -= 1;
		ageMonth = 15 - birthMonth;
		ageDay = 36 - birthDay;
		printf("your age is %d years , %d month and %d days", ageYear, ageMonth, ageDay);
	}
	else {
		ageYear = 0;
		ageMonth = 0;
		ageDay = 6 - birthDay;
		printf("your age is %d years , %d month and %d days", ageYear, ageMonth, ageDay);
	}
}*/

/* ***6***
void main()
{
	int x, y;
	printf("Enter point x and y (x,y): ");
	scanf("%d %d", &x, &y);
	if (x == 0 && y == 0)
		printf("The point on the zero");
	else if (x > 0 && y > 0)
		printf("(%d , %d) is in Quadrant 1(+ , +)", x, y);
	else if (x < 0 && y > 0)
		printf("(%d , %d) is in Quadrant 2(- , +)", x, y);
	else if (x < 0 && y < 0)
		printf("(%d , %d) is in Quadrant 3(- , -)", x, y);
	else
		printf("(%d , %d) is in Quadrant 4(+ , -)", x, y);
}*/

/* ***7***
void main()
{
	int x1, x2, y1, y2;
	printf("Enter 2 points (x1 , y1) and (x2 , y2): ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x1 == x2 && y1 == y2)
		printf("The distance is 0");
	else {
		double dist;
		dist = sqrt(pow((x1 - x2), 2) + (pow((y1 - y2), 2)));
		printf("The distance is: %.3lf", dist);
	}

}*/

/* ***8***
void main()
{
	double a, b, c, ans1, ansS;

	printf("Enter a, Enter b , Enter c  for quadratic equation(ax2 +- bx +- c): ");
	scanf("%lf %lf %lf", &a, &b, &c);

	ans1 = (pow(b, 2) - 4 * a * c);
	ansS = sqrt(ans1);

	if ((2 * a == 0) || ((pow(b, 2) - 4 * a * c) < 0))
		printf("***Err*** No Answer");

	else {
		double x1, x2;
		x1 = (-1 * b + ansS) / (a * 2);
		x2 = (-1 * b - ansS) / (a * 2);
		printf("x1 = %.2lf , x2 = %.2lf", x1, x2);
	}
}*/

/* ***10***
void main()
{
	int year, month, day;
	printf("Enter your date of birth: ");
	scanf("%d %d %d", &day, &month, &year);

	if ((month == 3 && day >= 21) || (month == 4 && day < 20 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Aries\n", day , month , year);

	if ((month == 4 && day >= 20) || (month == 5 && day < 21 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Taurus\n", day, month, year);

	if ((month == 5 && day >= 21) || (month == 6 && day < 21 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Gemini\n", day, month, year);

	if ((month == 6 && day >= 21) || (month == 7 && day < 23 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Cancer\n", day, month, year);

	if ((month == 7 && day >= 23) || (month == 8 && day < 23 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Leo\n", day, month, year);

	if ((month == 8 && day >= 23) || (month == 9 && day < 23 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Virgo\n", day, month, year);

	if ((month == 9 && day >= 23) || (month == 10 && day < 23 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Libra\n", day, month, year);

	if ((month == 10 && day >= 23) || (month == 11 && day <= 22 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Scorpio\n", day, month, year);

	if ((month == 11 && day > 22) || (month == 12 && day < 22 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Sagittarius\n", day, month, year);

	if ((month == 12 && day >= 22) || (month == 1 && day < 20 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Capicorn\n", day, month, year);

	if ((month == 1 && day >= 20) || (month == 2 && day < 19 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Aquarius\n", day, month, year);

	if ((month == 2 && day >= 19) || (month == 3 && day < 21 && day > 0))
		printf("For a date: %d %d %d your fortunes is: Pisces\n", day, month, year);
}*/

/* ***Example Switch & Case***
void main()
{
	double x, y;
	char op;

	printf("enter two operands\n");
	scanf("%lf%lf", &x, &y);
	rewind(stdin);
	printf("enter operator\n");
	scanf("%c", &op);// op=getchar();

	switch (op)
	{
	case '+': printf("Result is %lf\n", x + y);
		break;
	case '-': printf("Result is %lf\n", x - y);
		break;
	case '*': printf("Result is %lf\n" , x * y);
		break;
	case '/': if (fabs(y) >= 0.00000001) 
		printf("Result is %lf\n", x / y);
		
	else printf("Error\n");
		break;
	default: printf("Invalid operator\n");
	}
}*/

/* ***Example2 Switch & Case***
void main()
{
	int month = 4;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: printf("days_in_month = 31"); 
		break;
	case 4:
	case 6:
	case 9:
	case 11: printf("days_in_month = 30");
		break;
	case 2: printf("days_in_month = 28");
		break; // suppose the year is not leap
	default: printf("days_in_month = 0");
		// flag of error
	}
}*/