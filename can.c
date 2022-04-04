#include <stdio.h>
#include <math.h>    
#include <stdlib.h> // clrscr함수
#include <conio.h>// getch함수
#include <errno.h>
//----------------------------------
extern void clrscr(); //화면 클리어
void Title();  //프로그램 소개  
void Run();  //실행                
   int SelectMenu();//전체 메뉴       
//----------------------------------

//-----------------------------------
void Cul16();//16진수 연산---------------
void HexSum(int x, int y);// 16진수 덧셈
void HexMinus(int x, int y);// 16진수 뺄샘
void HexMul(int x, int y);// 16진수 곱셈
void HexDiv(int x, int y);// 16진수 나눗셈
//----------------------------------------
void Cul8();//8진수 연산-----------------
void OctSum(int x, int y);//8진수 덧셈
void OctMinus(int x, int y);//8진수뺄셈
void OctMul(int x, int y);//8진수 곱셈
void OctDiv(int x, int y);//8진수 나눗셈
//----------------------------------------

//공용 연산 -----------------------------
void Sub(double x,double y);//빼기 
void Sum(double x,double y);//더하기 
void Div(double x,double y);//나누기 
void Mul(double x,double y);//곱셈
//---------------------------------------

void General();//일반용 계산기-----------
int SelectGeneral();//일반용 계산기 메뉴

void GeneralTwo();//일반용 두자리
void Per(double x,double y);//백분율

void GeneralOne();//일반용 한자리
double Sqrt1(double x);//제곱근
double X1(double x);// 1/x;
//---------------------------------------

void Engineering(); //공학용 계산기-------------------
int SelectEngineering(); // 공학용 계산기 메뉴 

void EngineeringTwo();//공학용두자리
void Exp(double x,double y);//Exp
void square(double x, double y);//a^b
void And(double x, double y);//And
void Mod(double x, double y);//Mod
void Or(double x, double y);//Or
void Xor(double x, double y);//Xor
void LSHleft(double x, double y);//LSHleft
void pita(double x, double y);//피타고라스 

void EngineeringOwn();//공학용한자리
double fact(double x);//팩토리얼 
void Tan1(double x);//탄젠트
double Sin1(double x);//싸인
double Cos1(double x);//코싸인
double Fabs(double x);//절대값 
void G1(double x);//지수값 
void ln(double x);//ln
void Log(double x);//log
void pi(double x); //PI
void square2(double x);//a^2
void square3(double x);//a^3
void INT(double x); // INT
void Hex(double x); // Hex
void Oct(double x); // Oct
void Binary(double x);//Binary
void dump(double x);// 소숫자리 버리는함수 
void as(double x);//Accos
void ac(double x);
void at(double x);
void sh(double x);
void ch(double x);
void th(double x);
//-------------------------------------------------




void main()
{
	Title();
	Run();
}


void Title()//프로그램 소개
{
	clrscr();
	printf("      @@@@@@@      2조        @@@@@@@@@@@@\n");
	printf("      @      계산기 프로그램 입니다      @\n");
	printf("      @                                  @\n");
	printf("      @    [1]  일반용 계산기            @\n");
	printf("      @    [2]  공학용 계산기            @\n");
	printf("      @    [0]   종       료             @\n");
	printf("      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t\t[   ]\b\b\b");
	
	
}


void Run()//실행 
{
	int key=0;
	
	while((key = SelectMenu())!= 0)
	{
		
		switch(key)
		{
		case 1 : General();break;
		case 2 : Engineering();break;
		default : break;
		}
		printf("아무키나 누르세요\n");
		getch();
	}
	

	
}



int SelectMenu() // 메뉴선택
{
	int key=0;
	clrscr();
	Title();

	scanf("%d", &key);

	while(key != 0)
	{

	
	if(key ==1) return 1;
	else if(key == 2) return 2;
	else { printf("잘못 입력하셨습니다\n");return 12;}

	}
	return 0;
	
}




void General()//일반용 계산기
{

	int key = 0;
	clrscr();
	
	
	while((key = SelectGeneral())!= 0)
	{
		
		switch(key)
		{
		case 1 : GeneralOne();break;
		case 2 : GeneralTwo();break;
		default : break;
		}
		printf("아무키나 누르세요\n");
		getch();
	}
}

int SelectGeneral()//일반용 계산기 메뉴
{
	int key=0;
	clrscr();
	printf("@@@@@@@일반용 계산기 입니다@@@@@@@\n");
	printf("@   [1]  하나의수 계산기         @\n");
	printf("@   [2]  두개의수 계산기         @\n");
	printf("@   [0]   뒤      로             @\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t[   ]\b\b\b");
	scanf("%d", &key);
	
	while(key != 0)
	{
		
		
		if(key ==1) return 1;
		else if(key == 2) return 2;
		else { printf("잘못 입력하셨습니다\n");return 12;}
		
	}
	return 0;
}


void GeneralTwo()// 일반용 두자리 계산기
{
	double a,c ;
	int b;
	clrscr();
	printf("[일반용]두개의수 계산기 입니다\n\n");
	printf("[1] - [2] + [3] / [4] * [5] %% \n\n");
	printf("첫번째 숫자 입력하세요\n");
	scanf("%lf",&a);
	printf("연산을 입력하세요\n");
	scanf("%d",&b);
	printf("두번째째 숫자 입력하세요\n");
	scanf("%lf",&c);
	

	switch(b)
	{
		case 1 : Sub(a,c); break; //빼기  
		case 2 : Sum(a,c); break; //더하기 
		case 3 : Div(a,c); break; //나누기 
		case 4 : Mul(a,c); break; //곱셈 
		case 5 : Per(a,c); break; //백분율
		default : printf("잘못입력하셨습니다\n");
	}
	
	
}

void GeneralOne()// 일반용 한자리 계산기
{
	double a ;
	int b;
	clrscr();
	printf("[일반용] 하나의수 계산기 입니다\n\n");
	printf("[1] Sprt [2] 1/x  \n\n");
	printf("숫자를 입력하세요\n");
	scanf("%lf",&a);
	printf("연산을 입력하세요\n");
	scanf("%d",&b);
	
	switch(b)
	{
	case 1 : Sqrt1(a);break; //제곱근 
	case 2 : X1(a);break;//분수값 
	default : printf("잘못입력하셨습니다\n");
	}
}






void Engineering()//공학용 계산기
{
	int key = 0;
	clrscr();


	while((key = SelectEngineering())!= 0)
	{
		
		switch(key)
		{
		case 1 : EngineeringOwn();break;
		case 2 : EngineeringTwo();break;
		case 3 : Cul16();break;
		case 4 : Cul8();break;
		default : break;
		}
		printf("아무키나 누르세요\n");
		getch();
	}

}


int SelectEngineering()//공학용 메뉴
{
	int key=0;
	clrscr();
	printf("@@@@@@@공학용 계산기 입니다@@@@@@@\n");
	printf("@   [1]  하나의수 계산기         @\n");
	printf("@   [2]  두개의수 계산기         @\n");
	printf("@   [3]  16진수 계산기           @\n");
	printf("@   [4]   8진수 계산기           @\n");
	printf("@   [0]   뒤      로             @\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\t\t\t\t[   ]\b\b\b");
	scanf("%d", &key);
	
	while(key != 0)
	{
		
		
		if(key ==1) return 1;
		else if(key == 2) return 2;
		else if(key == 3) return 3;
		else if(key == 4) return 4;
		else { printf("잘못 입력하셨습니다\n");return 12;}
		
	}
	return 0;
	
}





void EngineeringOwn()//공학용 한자리 계산기
{
	double a ;
	int b;
	clrscr();
	printf("[공학용] 하나의수 계산기 입니다\n\n");
	printf("[1] tan       [2] sin       [3] cos    [4] 절대값  [5] 지수값 \n");
	printf("[6] n!        [7] ln        [8] log    [9] PI      [10] a^2   \n");
	printf("[11] a^3      [12] INT      [13] Hex   [14] Oct    [15] Binary\n");
	printf("[16] Dump     [17] AcSin    [18] AcCos [19] AcTan  [20] Hypersin\n");
	printf("[21] HyperCos [22] HyperTan\n\n");
	printf("숫자를 입력하세요\n");
	scanf("%lf",&a);
	printf("연산을 입력하세요\n");
	scanf("%d",&b);
	
	switch(b)
	{
	
	case 1 : Tan1(a);break;
	case 2 : Sin1(a);break;
	case 3 : Cos1(a);break;
	case 4 : Fabs(a);break;
	case 5 : G1(a);break;
	case 6 : printf("=\n");printf("%lf\n",fact(a));break;
	case 7 : ln(a);break;
	case 8 : Log(a);break;
	case 9 : pi(a);break;
	case 10 : square2(a);break;
	case 11 : square3(a);break;
	case 12 : INT(a);break;
	case 13 : Hex(a);break;
	case 14 : Oct(a);break;
	case 15 : Binary(a);break;
	case 16 : dump(a);break;
	case 17 : as(a);break;
	case 18 : ac(a); break;
	case 19 : at(a); break;
	case 20 : sh(a); break;
	case 21 : ch(a); break;
	case 22 : th(a); break;
			 
	default : printf("잘못입력하셨습니다\n");
	}


}



void EngineeringTwo()//공학용 두자리 계산기
{
	double a,c ;
	int b;
	clrscr();
	printf("공학용 두개의수 계산기 입니다\n\n");
	printf("[1] -   [2] +   [3] /   [4] *   [5] Exp	   \n");
	printf("[6] a^b [7] And [8] Mod [9] Or  [10] Xor   \n");
	printf("[11] << [12] Pita                        \n\n");
	printf("첫번째 숫자 입력하세요\n");
	scanf("%lf",&a);
	printf("연산을 입력하세요\n");
	scanf("%d",&b);

	printf("두번째째 숫자 입력하세요\n");
	scanf("%lf",&c);
	
	
	
	switch(b)
	{
	case 1 : Sub(a,c); break; //빼기  
	case 2 : Sum(a,c); break; //더하기 
	case 3 : Div(a,c); break; //나누기 
	case 4 : Mul(a,c); break; //곱셈 
	case 5 : Exp(a,c); break; //Exp
	case 6 : square(a,c);break;//a^b
	case 7 : And(a,c);break;//and
	case 8 : Mod(a,c);break;//Mod
	case 9 : Or(a,c);break;//Or
	case 10: Xor(a,c);break;//Xor
	case 11: LSHleft(a,c);break;//<<
	case 12 :pita(a,c);break;//피타고라스
	default : printf("잘못입력하셨습니다\n");
	}

}






//공학용 두자리 -------------
void Exp(double x, double y) //Exp
{
	int i;
	
	printf("%d",(int)x);
	
	for(i = 1; i <=(int)y; i++)
	{
		printf("0");
	}
	printf("\n");
}

void square(double x, double y) // x^y
{
	printf("= \n");
	printf("%lf\n",pow(x,y));
}

void And(double x, double y) // and
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("And연산 = %d\n", a & b);
}
void Mod(double x, double y) // Mod
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Mod연산 = %d\n", a % b);
}
void Or(double x, double y) // Or
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Or연산 = %d\n", a | b);
}
void Xor(double x, double y) // Xor
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("Xor연산 = %d\n", a ^ b);
}
void LSHleft(double x, double y) //LSHleft
{
	int a,b;
	a=(int)x;
	b=(int)y;
	printf("<<연산 = %d\n", a << b);
}

void pita(double x, double y)//피타고라스
{
	printf("%lf\n",hypot(x,y));
}
//--------------------------






//공학용 한자리--------------
double Sin1(double x)//싸인
{
	double result;
	result=sin(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}

void Tan1(double x)//탄젠트
{
	printf("= \n");
	printf("%lf\n",tan(x));
	
}

double Cos1(double x)// 코싸인
{
	double result;
	result=cos(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}
double Fabs(double x)//절대값 
{
	double result=0;
	result=fabs(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}

void G1(double x)//지수값 
{
	printf("= \n");
	printf("%.1le\n",x);
	
}
double fact(double x)//팩토리얼
{
    double re = 1;
	
    for(;x>0 ; x--)
    {
        re *= x;
    }
	return re;
}
void ln(double x)//ln
{
	printf("= \n");
	printf("%lf\n",log(x));
}

void Log(double x) //log
{
	printf("= \n");
	printf("%lf\n",log10(x));
}

void pi(double x)//PI
{
	double p = 3.1415926535;
	double result;
	
	result = (double)x * p;
	printf("= \n");
	printf("%lf\n",result);
	
}
void square2(double x)//a^2
{
	printf("= \n");
	printf("%lf\n",pow(x,2));
}
void square3(double x)//a^3
{
	printf("= \n");
	printf("%lf\n",pow(x,3));
}

void INT(double x) // 실수입력 정수출력
{
	printf("= \n");
	printf("%d\n", (int)x);
}

void Hex(double x) // 정수입력 16진수 출력
{
	int a;
	a = (int)x;
	printf("16진수 : %X\n", a);
}
void Oct(double x) //정수입력 8진수 출력
{
	int a;
	a = (int)x;
	printf("8진수 : %o\n", a);
}
void Binary(double x) //정수 입력 2진수 출력
{
	int binary = 0;
	int i = 1;
	int j;
	int a;
	a = (int)x;
	for(j = a;j > 0;j--)
	{
		binary = binary + (a % 2) * i;
		i = i * 10;
		a = a / 2;
	}
	
	printf("2진수 : %d\n", binary);
}
void dump(double x)//버림 함수 
{
	printf("%lf\n",floor(x));
	
}
void as(double x) //Acsin
{
	
	printf( "ArcSin of %f = %f\n", x, asin(x));
} 
void ac(double x) //Accos
{
	
	printf( "ArcCos of %f = %f\n", x, acos(x));
} 
void at(double x) //Actan
{
	
	printf( "ArcTan of %f = %f\n", x, atan(x));
} 
void sh(double x) // sinh
{
	
	printf( "HyperbolicSin of %f = %f\n", x, sinh(x));
} 
void ch(double x) //cosh
{
	
	printf( "HyperbolicCos of %f = %f\n", x, cosh(x));
} 
void th(double x) // tanh
{
	
	printf( "HyperbolicTan of %f = %f\n", x, tanh(x));
} 
//----------------------------





//일반용 한자리---------------
double Sqrt1(double x)// 제곱근(루트)
{
	double result;
	result=sqrt(x);
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}
double X1(double x) //1/x // 분수값 
{
	double result;
	result=1/x;
	printf("= \n");
	printf("%lf\n",result);
	return 0;
}




//----------------------------
//일반용 두자리 --------------
void Per(double x,double y)//백분율
{
	double Mul,Per;
	Mul=x*y;
	Per=(double)Mul/100;	
	printf("= \n");
	printf("%lf\n\n",Per);
}
//----------------------------
//공용 두자리 ----------------
void Sub(double x,double y)//빼기
{
	double Sub;
	Sub = x-y;
	printf("= \n");
	printf("%lf\n\n",(x-y));
}
void Sum(double x,double y)//더하기
{
	double Sum;
	Sum= x+y;
	printf("= \n");
	printf("%lf\n",Sum);
}

void Div(double x,double y)//나누기
{
	double Div;
	Div= x/y;
	printf("= \n");
	printf("%lf\n",x/y);
}
void Mul(double x,double y)//곱셈
{
	double Mul;
	Mul= x*y;
	printf("= \n");
	printf("%lf\n",Mul);
}


//----------------------------
// 진수 함수 ..
 void Cul8()
 {
	 int a,c,b;
	 
	 clrscr();
	 printf("[공학용] 8진수 계산기 입니다\n\n");
	 printf("[1] Oct+ [2] Oct- [3] Oct*  [4] Oct/\n\n");
	 printf("첫번째 숫자 입력하세요(8진수로)\n");
	 scanf("%o",&a);
	 printf("연산을 입력하세요\n");
	 scanf("%d",&b);
	 printf("두번째째 숫자 입력하세요(8진수로)\n");
	 scanf("%o",&c);
	 
	 
	 switch(b)
	 {
	 case 1 : OctSum(a,c);break;
	 case 2 : OctMinus(a,c);break;
	 case 3 : OctMul(a,c);break;
	 case 4 : OctDiv(a,c);break;
	default : printf("잘못입력하셨습니다\n");
	}
 }



void Cul16()
{
	int a,c,b;

	clrscr();
	printf("[공학용] 16진수 계산기 입니다\n\n");
	printf("[1] Hex+ [2] Hex- [3] Hex*  [4] Hex/\n\n");
	printf("첫번째 숫자 입력하세요(16진수로)\n");
	scanf("%X",&a);
	printf("연산을 입력하세요\n");
	scanf("%d",&b);
	printf("두번째째 숫자 입력하세요(16진수로)\n");
	scanf("%X",&c);
	

	switch(b)
	{ 
		case 1 : HexSum(a,c);break;
		case 2 : HexMinus(a,c);break;
		case 3 : HexMul(a,c);break;
		case 4 : HexDiv(a,c);break;
		default : printf("잘못입력하셨습니다\n");
	}

}
// 16진수 더하기 
void HexSum(int x, int y)
{
	printf("=\n");
	printf("%X\n", x + y);
}
void HexMinus(int x, int y)// 16진수 빼기 
{
	printf("=\n");
	printf("%X\n", x - y);
}

void HexMul(int x, int y)
{
	printf("=\n");
	printf("%X\n", x * y);
}
void HexDiv(int x, int y)
{
	printf("=\n");
	printf("%X\n", x / y);
}

//8진수 연산 ------------------------
void OctSum(int x, int y)
{
	printf("=\n");
	printf("%o\n", x + y);
}
void OctMinus(int x, int y)
{
	printf("=\n");
	printf("%o\n", x - y);
}
void OctMul(int x, int y)
{
	printf("=\n");
	printf("%o\n", x * y);
}
void OctDiv(int x, int y)
{
	printf("=\n");
	printf("%o\n", x / y);
}




void clrscr()
{
	system("cls");
}

