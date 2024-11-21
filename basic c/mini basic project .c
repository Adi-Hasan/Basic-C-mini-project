#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char a = '1', b = '2', c = '3', k = '4', l = '5', m = '6', x = '7', y = '8', z = '9';
// for ticktactoe
void profile();
void Menu();
void menu1();
void sumdigit();
void reverse();
void countdigit();
void multiplication();
void evenOdd();
void sumEO();
void leapyr();
void checkDigi_alphabet_Special();
void palindromechecker();
void menu2();
void basiccalculator(); // menu2
void BMI();
void Currency();
void grade(); // result menu must
void resultsheet();
void agecalculator();
void temparatureconverter();
void area();
void mathoperation();
void menu3();
void numberguess();
void RPS();
void pattern(); // tictacktoe functions
int checkWin();
void second();
void first();
int tictaktoe();
void numberOfdayinMonth();
void VC();

int main()
{
    profile();
    Menu();
    return 0;
}
void profile()
{
    printf("\n\t\t\t\t\t\t\t\t\t Adi Hasan\n");
    printf("\t\t\t\t\t\t\t\t\t CSE2402032262\n");
    printf("\t\t\t\t\t\t\t\t\t 32A3\n\n");

    printf("____ ____ _  _ ____ ____ ____ ____ ____ _  _    _  _ _  _ _ _  _ ____ ____ ____ _ ___ _   _    \n");
    printf("[__  |  | |\\ | |__| |__/ | __ |__| |  | |\\ |    |  | |\\ | | |  | |___ |__/ [__  |  |   \\_/     \n");
    printf("___] |__| | \\| |  | |  \\ |__] |  | |__| | \\|    |__| | \\| |  \\/  |___ |  \\ ___] |  |    |      \n");
    printf("                                                                                               \n");
}
void Menu()
{
    int n;
    printf("\n\t\t1.Basic Operators\n");
    printf("\t\t2.Utilitly Tools\n");
    printf("\t\t3.Fun and Games\n");
    printf("\t\t4.EXIT\n");
    printf("\nEnter your choice: ");
    scanf("%d", &n);
    switch (n)
    {

    case 1:
        system("cls");
        profile();
        menu1();
        break;
    case 2:
        system("cls");
        profile();
        menu2();
        break;
    case 3:
        system("cls");
        profile();
        menu3();
        break;
    default:
        exit(0);
    }
}
void menu1()
{
    int n;
    printf("\n\t\t1.Summation of Digits\n");
    printf("\t\t2.Reverse a Digit\n");
    printf("\t\t3.Count Digits\n");
    printf("\t\t4.Multiplication Table\n");
    printf("\t\t5.Check Even and Odd Number\n");
    printf("\t\t6.Summation of Even and Odd Numbers\n");
    printf("\t\t7.Leap Year checker\n");
    printf("\t\t8.Character Type Checker\n");
    printf("\t\t9.Palindrome Checker\n");
    printf("\t\t10.Main Menu\n");
    printf("\t\t11.EXIT\n");
    printf("\nEnter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");
        profile();
        sumdigit();

        break;
    case 2:
        system("cls");
        profile();
        reverse();
        break;
    case 3:
        system("cls");
        profile();
        countdigit();
        break;
    case 4:
        system("cls");
        profile();
        multiplication();
        break;
    case 5:
        system("cls");
        profile();
        evenOdd();
        break;
    case 6:
        system("cls");
        profile();
        sumEO();
        break;
    case 7:
        system("cls");
        profile();
        leapyr();
        break;
    case 8:
        system("cls");
        profile();
        checkDigi_alphabet_Special();
        break;
    case 9:
        system("cls");
        profile();
        palindromechecker();
        break;
    case 10:
        system("cls");
        profile();
        Menu();
        break;
    default:
        exit(0);
    }
}
void sumdigit()
{
    int n, sum = 0;
    char Return;
    printf("Enter a digit: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("Sum of the digit is %d\n", sum);
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void reverse()
{
    int n, rev = 0;
    char Return;
    printf("\nEnter a digit: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reverse Number is %d\n", rev);
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void countdigit()
{
    int n, count = 0;
    char Return;
    printf("\nEnter a digit: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        count++;
        n /= 10;
    }
    printf("Total Digit is %d\n", count);
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();

    default:
        printf("Error");
    }
}
void multiplication()
{
    int n;
    char Return;
    printf("\nEnter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();

    default:
        printf("Error");
    }
}
void evenOdd()
{
    int n;
    char Return;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is Ever Number\n", n);

    else
        printf("%d is Odd Number\n", n);

    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void sumEO()
{
    int n, sumofEven = 0, sumofOdd = 0;
    char Return;
    printf("Enter a digit:");
    scanf("%d", &n);
    while (n != 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            sumofEven += rem;
        else
            sumofOdd += rem;

        n /= 10;
    }
    printf("Sum of Even Digits:%d\n", sumofEven);
    printf("Sum of Odd Digits:%d\n", sumofOdd);
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void leapyr()
{
    int n;
    char Return;
    printf("Enter year:");
    scanf("%d", &n);
    (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0)) ? printf("%d is leap year\n", n) : printf("%d is not leap year\n", n);
    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void checkDigi_alphabet_Special()
{
    char ch, Return;
    while (1)
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'A' ... 'Z':
        case 'a' ... 'z':
            printf("Alphabet\n");
            break;
        case '0' ... '9':
            printf("Digit\n");
            break;
        default:
            printf("Special Character\n");

            printf("\n\n");

            printf("Exit or Return Menu...(y/n): ");
            scanf(" %c", &Return);
            switch (Return)
            {
            case 'y':
            case 'Y':
                exit(0);
                break;
            case 'n':
            case 'N':
                system("cls");
                profile();
                menu1();

            default:
                printf("Error");
            }
        }
    }
}
void palindromechecker()
{
    int n, temp, rev = 0;
    char Return;
    printf("Enter a Digit: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp == rev)
        printf("%d is Palindrome Number\n", rev);
    else
        printf("%d is not Palindrome Number\n", rev);

    printf("\n\n");
    printf("Exit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu1();
    default:
        printf("Error");
    }
}
void menu2()
{
    int n;
    printf("\n\t\t1.Basic Calculator\n");
    printf("\t\t2.BMI Calculator\n");
    printf("\t\t3.Currency Converter\n");
    printf("\t\t4.Grade Calculator\n");
    printf("\t\t5.Result Sheet Generator\n");
    printf("\t\t6.Age Calculator\n");
    printf("\t\t7.Temperature Converter\n");
    printf("\t\t8.Area Calculator\n");
    printf("\t\t9.Math Operations\n");
    printf("\t\t10.Main Menu\n");
    printf("\t\t11.EXIT\n");
    printf("\nEnter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");
        profile();
        basiccalculator();

        break;
    case 2:
        system("cls");
        profile();
        BMI();
        break;
    case 3:
        system("cls");
        profile();
        Currency();
        break;
    case 4:
        system("cls");
        profile();
        grade();
        break;
    case 5:
        system("cls");
        profile();
        resultsheet();
        break;
    case 6:
        system("cls");
        profile();
        agecalculator();
        break;
    case 7:
        system("cls");
        profile();
        temparatureconverter();
        break;
    case 8:
        system("cls");
        profile();
        area();
        break;
    case 9:
        system("cls");
        profile();
        mathoperation();
        break;
    case 10:
        system("cls");
        profile();
        Menu();
        break;
    default:
        exit(0);
    }
}
void basiccalculator()
{
    float a, b,result;
    char operator, Return;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Choose an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        result = a + b;
        printf("%.1f + %.1f = %.1f\n", a, b, result);
        break;
    case '-':
        result = a - b;
        printf("%.1f - %.1f = %.1f\n", a, b, result);
        break;
    case '*':
        result = a * b;
        printf("%.1f * %.1f = %.1f\n", a, b, result);
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
            printf("%.2f / %.2f = %.2f\n", a, b, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case '%':
        if (b != 0)
        {
            result = (int)a % (int)b;
            printf("%.2f %% %.2f = %d\n", a, b, (int)result);
        }
        else
        {
            printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();

    default:
        printf("Error");
    }
}
void BMI()
{
    float kg, meter, BMI;
    char Return;
    int ft, inch, x;

    printf("Enter Your Weight in KG: ");
    scanf("%f", &kg);
    printf("Enter your height (x ft y inch):");
    scanf("%d %d", &ft, &inch);
    x = ft * 12 + inch;
    meter = (float)x * 0.0254;
    BMI = kg / (meter * meter);
    printf("Your BMI : %.3f\n", BMI);
    if (BMI < 18.5)
        printf("Underweight");
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("Normal Weight\n");
    else if (BMI >= 25 && BMI <= 29.9)
        printf("Overweight\n");
    else if (BMI >= 30 && BMI <= 34.9)
        printf("Obesity class I\n");
    else if (BMI >= 35 && BMI <= 39.9)
        printf("Obesity class II\n");
    else
        printf("Obesity class III\n");

    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void Currency()
{
    int n;
    char Return;
    float amount, Total;

    printf("\n\t...Welcome To Osaka Currency Center...\n");
    printf("\n1.US Dollar to BDT\t\t\t");
    printf("2.Euro to BDT\n");
    printf("\n3.Pound to BDT\t\t\t");
    printf("\t4.Riyal to BDT\n");
    printf("\n5.Japanese Yen to BDT\t\t\t");
    printf("6.Dirham to BDT\n");
    printf("\n\t\t  7.Indian Rupee to BDT\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &n);
    system("cls");
    profile();
    switch (n)
    {
    case 1:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 120.47;
        printf("%.2f USD -> %.2f Taka\n", amount, Total);
        break;
    case 2:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 127.12;
        printf("%.2f EURO -> %.2f Taka\n", amount, Total);
        break;
    case 3:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 152.93;
        printf("%.2f Pound -> %.2f Taka\n", amount, Total);
        break;
    case 4:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 32.07;
        printf("%.2f Riyal -> %.2f Taka\n", amount, Total);
        break;
    case 5:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 0.77;
        printf("%.2f JPY -> %.2f Taka\n", amount, Total);
        break;
    case 6:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 32.79;
        printf("%.2f AED -> %.2f Taka\n", amount, Total);
        break;
    case 7:
        printf("Enter Your Amount:");
        scanf("%f", &amount);
        Total = amount * 1.43;
        printf("%.2f INR -> %.2f Taka\n", amount, Total);
        break;
    default:
        printf("Service Not Available...");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void grade()
{
    int result;
    char Return;
    printf("Enter Your result:");
    scanf("%d", &result);
    if (result >= 80 && result <= 100)
        printf("Result: A+\n");
    else if (result >= 70 && result <= 79)
        printf("Result: A\n");
    else if (result >= 60 && result <= 69)
        printf("Result: A-\n");
    else if (result >= 50 && result <= 59)
        printf("Result: B\n");
    else if (result >= 40 && result <= 49)
        printf("Result: C\n");
    else if (result >= 33 && result <= 39)
        printf("Result: D\n");
    else
        printf("Result: F\n");

    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void resultsheet()
{
    int x;
    char Return;
    printf("Enter Roll Number(001-005):");
    scanf("%d", &x);
    printf("\n");
    if (x == 001)
    {
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| \tName\t\t| \tRoll\t\t| \tSubject\t\t| \tResult\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susanna Roy\t\t| \t001\t\t| \tCSE\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susanna Roy\t\t| \t001\t\t| \tMath\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susanna Roy\t\t| \t001\t\t| \tPhysics\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susanna Roy\t\t| \t001\t\t| \tBangla\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
    }
    else if (x == 002)
    {
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| \tName\t\t| \tRoll\t\t| \tSubject\t\t| \tResult\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susmita    \t\t| \t002\t\t| \tCSE\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susmita    \t\t| \t002\t\t| \tMath\t\t| \t  3.78\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susmita    \t\t| \t002\t\t| \tPhysics\t\t| \t  3.50\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Susmita    \t\t| \t002\t\t| \tBangla\t\t| \t  3.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
    }
    else if (x == 003)
    {
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| \tName\t\t| \tRoll\t\t| \tSubject\t\t| \tResult\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Akram      \t\t| \t003\t\t| \tCSE\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Akram      \t\t| \t003\t\t| \tMath\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Akram      \t\t| \t003\t\t| \tPhysics\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Akram      \t\t| \t003\t\t| \tBangla\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
    }
    else if (x == 004)
    {
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| \tName\t\t| \tRoll\t\t| \tSubject\t\t| \tResult\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Jumman     \t\t| \t004\t\t| \tCSE\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Jumman     \t\t| \t004\t\t| \tMath\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Jumman     \t\t| \t004\t\t| \tPhysics\t\t| \t  3.98\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Jumman     \t\t| \t004\t\t| \tBangla\t\t| \t  3.55\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
    }
    else if (x == 005)
    {
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| \tName\t\t| \tRoll\t\t| \tSubject\t\t| \tResult\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Adi Hasan  \t\t| \t005\t\t| \tCSE\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Adi Hasan  \t\t| \t005\t\t| \tMath\t\t| \t  4.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Adi Hasan  \t\t| \t005\t\t| \tPhysics\t\t| \t  3.00\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
        printf("\t\t| Adi Hasan  \t\t| \t005\t\t| \tBangla\t\t| \t  3.75\t\t|\n");
        printf("\t\t_________________________________________________________________________________________________\n");
    }
    else
        printf("Not update...");

    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void agecalculator()
{
    int D, M, Y, pd, pm, py, ty, tm, td, x, y;
    char Return;
    printf("\nEnter Present Day/Month/Year: ");
    scanf("%d %d %d", &pd, &pm, &py);
    printf("Enter your Birth Day/Month/Year: ");
    scanf("%d %d %d", &D, &M, &Y);
    ty = py - Y;
    tm = pm - M;
    if (tm < 0)
        x = abs(tm);
    else
        x = tm;
    td = pd - D;
    if (td < 0)
        y = abs(td);
    else
        y = td;

    printf("\nYour Age : ");
    printf("%d Years %d Months %d Days\n", ty, x, y);
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void temparatureconverter()
{
    int n;
    char Return;
    float C, F, K, result;

    printf("\n\t\t\t...Temperature Converter...\n");
    printf("\n1. Celsius to Fahrenheit\t\t\t");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\t\t\t");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\t\t\t\t");
    printf("6. Kelvin to Fahrenheit\n\n");
    printf("Enter Your Choice: ");
    scanf("%d", &n);
    system("cls");
    profile();
    switch (n)
    {
    case 1:
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &C);
        result = (C * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
        break;
    case 2:
        printf("Enter Temperature in Celsius: ");
        scanf("%f", &C);
        result = C + 273.15;
        printf("Temperature in Kelvin: %.2f\n", result);
        break;
    case 3:
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &F);
        result = (F - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", result);
        break;
    case 4:
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f", &F);
        result = (F - 32) * 5 / 9 + 273.15;
        printf("Temperature in Kelvin: %.2f\n", result);
        break;
    case 5:
        printf("Enter Temperature in Kelvin: ");
        scanf("%f", &K);
        result = K - 273.15;
        printf("Temperature in Celsius: %.2f\n", result);
        break;
    case 6:
        printf("Enter Temperature in Kelvin: ");
        scanf("%f", &K);
        result = (K - 273.15) * 9 / 5 + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
        break;
    default:
        printf("Error: Invalid choice\n");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void area()
{
    int n;
    char Return;
    float a, b, c, result;

    printf("\t\t\t...Areas for Geometrical Figures...\n\n");
    printf("\n1. Area of Rectangle\t\t");
    printf("2. Area of Square\n");
    printf("\n3. Area of Circle\t\t");
    printf("4. Area of Trapezoid\n");
    printf("\n\t\t5. Area of Ellipse\n\n");
    printf("Enter Your choice: ");
    scanf("%d", &n);
    system("cls");
    profile();
    switch (n)
    {
    case 1:
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &a, &b);
        result = a * b;
        printf("Area of Rectangle = %.2f\n", result);
        break;
    case 2:
        printf("Enter the side length of the square: ");
        scanf("%f", &a);
        result = a * a;
        printf("Area of Square = %.2f\n", result);
        break;
    case 3:
        printf("Enter the radius of the circle: ");
        scanf("%f", &a);
        result = 3.1416 * a * a;
        printf("Area of Circle = %.2f\n", result);
        break;
    case 4:
        printf("Enter the lengths of the two parallel sides and the height: ");
        scanf("%f %f %f", &a, &b, &c);
        result = 0.5 * (a + b) * c;
        printf("Area of Trapezoid = %.2f\n", result);
        break;
    case 5:
        printf("Enter the lengths of the semi-major and semi-minor axes: ");
        scanf("%f %f", &a, &b);
        result = 3.1416 * a * b;
        printf("Area of Ellipse = %.2f\n", result);
        break;
    default:
        printf("Invalid choice. Please select a number from 1 to 5.\n");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void mathoperation()
{
    int choice;
    int number, exponent;
    float result;
    char Return;

    printf("\n\t\t...Math Operations...\n");
    printf("\n1. Square\n");
    printf("2. Cube\n");
    printf("3. Square Root\n");
    printf("4. Power (any exponent)\n\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    system("cls");
    profile();
    switch (choice)
    {
    case 1:
        printf("Enter the number: ");
        scanf("%d", &number);
        result = number * number;
        printf("Square of %d is: %d\n", number, (int)result);
        break;
    case 2:
        printf("Enter the number: ");
        scanf("%d", &number);
        result = number * number * number;
        printf("Cube of %d is: %d\n", number, (int)result);
        break;
    case 3:
        printf("Enter the number: ");
        scanf("%d", &number);
        if (number < 0)
        {
            printf("Error: Cannot compute square root of a negative number.\n");
        }
        else
        {
            result = sqrt(number);
            printf("Square root of %d is: %.2f\n", number, result);
        }
        break;
    case 4:
        printf("Enter the base number: ");
        scanf("%d", &number);
        printf("Enter the exponent: ");
        scanf("%d", &exponent);
        result = pow(number, exponent);
        printf("%d raised to the power %d is: %.d\n", number, exponent, (int)result);
        break;
    default:
        printf("Error: Invalid choice.\n");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu2();
    default:
        printf("Error");
    }
}
void menu3()
{
    int n;
    printf("\n\t\t1.Number Guessing Game\n");
    printf("\t\t2.Rock-Paper-Scissors Game\n");
    printf("\t\t3.Tic-Tac-Toe Game\n");
    printf("\t\t4.Days in a Month Calculator\n");
    printf("\t\t5.Vowel-Consonant Checker\n");
    printf("\t\t6.Main Menu\n");
    printf("\t\t7.EXIT\n");
    printf("\nEnter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        system("cls");
        profile();
        numberguess();
        break;
    case 2:
        system("cls");
        profile();
        RPS();
        break;
    case 3:
        system("cls");
        profile();
        tictaktoe();
        break;
    case 4:
        system("cls");
        profile();
        numberOfdayinMonth();
        break;
    case 5:
        system("cls");
        profile();
        VC();
        break;
    case 6:

        system("cls");
        profile();
        Menu();
        break;
    default:
        exit(0);
    }
}
void numberguess()
{
    int n, x;
    char playAgain, Return;
    srand(time(0));
    x = rand() % 10 + 1;
    do
    {
        printf("Guess a positive number(1-10): ");
        scanf("%d", &n);
        if (n == x)
            printf("Your Number is Correct\n");
        else
            printf("Your Number is Incorrect\n");

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        system("cls");
        profile();
    }
    while (playAgain == 'y' || playAgain == 'Y');
    printf("Thanks for playing!\n");
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu3();
    default:
        printf("Error");
    }
}
void RPS()
{
    int playerChoice, computerChoice;
    char playAgain, Return;
    srand(time(0));
    printf("Welcome to Rock-Paper-Scissors!\n");
    do
    {
        printf("\nEnter your choice:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &playerChoice);
        // Generate computer's choice (1 = Rock, 2 = Paper, 3 = Scissors)
        computerChoice = (rand() % 3) + 1;
        printf("Computer chose: ");
        if (computerChoice == 1)
            printf("Rock\n");
        else if (computerChoice == 2)
            printf("Paper\n");
        else
            printf("Scissors\n");

        if (playerChoice == computerChoice)
        {
            printf("It's a draw!\n");
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2))
        {
            printf("You win!\n");
        }
        else
        {
            printf("Computer wins!\n");
        }
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        system("cls");
        profile();
    }
    while (playAgain == 'y' || playAgain == 'Y');
    printf("Thanks for playing!\n");
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu3();
    default:
        printf("Error");
    }
}
void pattern()
{
    printf("\t\t%c  | %c | %c \n", a, b, c);
    printf("\t\t---|---|---\n");
    printf("\t\t%c  | %c | %c \n", k, l, m);
    printf("\t\t---|---|---\n");
    printf("\t\t%c  | %c | %c \n", x, y, z);
}
int checkWin()
{
    if ((a == b && b == c) || (k == l && l == m) || (x == y && y == z) ||
            (a == k && k == x) || (b == l && l == y) || (c == m && m == z) ||
            (a == l && l == z) || (c == l && l == x))
    {
        return 1;
    }
    if (a != '1' && b != '2' && c != '3' &&
            k != '4' && l != '5' && m != '6' &&
            x != '7' && y != '8' && z != '9')
    {
        printf("\t\t...Draw....\n");
        exit(0);
    }
    return 0;
}
void second()
{
    char Return;
    while (1)
    {
        printf("Enter 2nd Player Choice: ");
        char n2;
        scanf(" %c", &n2);
        switch (n2)
        {
        case '1':
            if (a == '1')
                a = 'o';
            break;
        case '2':
            if (b == '2')
                b = 'o';
            break;
        case '3':
            if (c == '3')
                c = 'o';
            break;
        case '4':
            if (k == '4')
                k = 'o';
            break;
        case '5':
            if (l == '5')
                l = 'o';
            break;
        case '6':
            if (m == '6')
                m = 'o';
            break;
        case '7':
            if (x == '7')
                x = 'o';
            break;
        case '8':
            if (y == '8')
                y = 'o';
            break;
        case '9':
            if (z == '9')
                z = 'o';
            break;
        default:
            printf("Error\n");
        }
        break;
    }
    system("cls");
    profile();
    pattern();
    if (checkWin())
    {
        printf("2nd Player Win\n");
        printf("\n");
        printf("\nExit or Return Menu...(y/n): ");
        scanf(" %c", &Return);
        switch (Return)
        {
        case 'y':
        case 'Y':
            exit(0);
            break;
        case 'n':
        case 'N':
            system("cls");
            profile();
            menu3();
        default:
            printf("Error");
        }
    }
}
void first()
{
    char Return;
    while (1)
    {
        printf("Enter Your Choice: ");
        char n1;
        scanf(" %c", &n1);
        switch (n1)
        {
        case '1':
            if (a == '1')
                a = 'x';
            break;
        case '2':
            if (b == '2')
                b = 'x';
            break;
        case '3':
            if (c == '3')
                c = 'x';
            break;
        case '4':
            if (k == '4')
                k = 'x';
            break;
        case '5':
            if (l == '5')
                l = 'x';
            break;
        case '6':
            if (m == '6')
                m = 'x';
            break;
        case '7':
            if (x == '7')
                x = 'x';
            break;
        case '8':
            if (y == '8')
                y = 'x';
            break;
        case '9':
            if (z == '9')
                z = 'x';
            break;
        default:
            printf("Error\n");
        }
        break;
    }
    system("cls");
    profile();
    pattern();
    if (checkWin())
    {
        printf("You Win\n");
        printf("\n");
        printf("\nExit or Return Menu...(y/n): ");
        scanf(" %c", &Return);
        switch (Return)
        {
        case 'y':
        case 'Y':
            exit(0);
            break;
        case 'n':
        case 'N':
            system("cls");
            profile();
            menu3();
        default:
            printf("Error");
        }
    }
}
int tictaktoe()
{
    pattern();
    while (1)
    {
        first();
        second();
    }
    return 0;
}
void numberOfdayinMonth()
{
    int m, yr;
    char Return;
    printf("Enter Month & Year: ");
    scanf("%d %d", &m, &yr);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("The number of day in a month is 31 days");
        break;
    case 2:
        if (yr % 400 == 0 || (yr % 100 != 0 && yr % 4 == 0))
            printf("The number of day in a month is 29 days...");
        else
            printf("The number of day in a month is 28 days...");
        break;
    default:
        printf("The number of day in a month is 30 days...");
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu3();
    default:
        printf("Error");
    }
}
void VC()
{
    char ch;
    char Return;
    printf("Enter a Alphabet: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("This %c is Vowel...", ch);
        break;
    default:
        printf("This %c is Consonant...", ch);
    }
    printf("\n");
    printf("\nExit or Return Menu...(y/n): ");
    scanf(" %c", &Return);
    switch (Return)
    {
    case 'y':
    case 'Y':
        exit(0);
        break;
    case 'n':
    case 'N':
        system("cls");
        profile();
        menu3();
    default:
        printf("Error");
    }
}
