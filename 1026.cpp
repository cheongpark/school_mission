#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int _0[8][8]
{  	
	{0,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,1},	
	{1,1,1,0,0,1,1,1},
	{1,1,1,0,0,1,1,1},
	{1,1,1,0,0,1,1,1},
	{1,1,1,0,0,1,1,1},
	{1,1,1,1,1,1,1,1},
	{0,1,1,1,1,1,1,0},		
},
_1[8][8]
{
	{0,0,0,0,1,1,1,0},
	{0,0,0,1,1,1,1,0},
	{0,0,1,1,1,1,1,0},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},
},
_2[8][8]
{
	{0,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,1},
	{1,1,1,0,0,1,1,1},
	{0,0,0,0,1,1,1,0},
	{0,0,1,1,1,0,0,0},
	{1,1,1,0,0,0,0,0},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
},
_3[8][8]
{
	{1,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,1},
	{0,0,0,0,0,1,1,1},
	{1,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,0},
	{0,0,0,0,0,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,0},
},
_4[8][8]
{
	{1,1,1,0,1,1,1,0},
	{1,1,1,0,1,1,1,0},
	{1,1,1,0,1,1,1,0},
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},
	{0,0,0,0,1,1,1,0},

},
_5[8][8]
{
	{1,1,1,1,1,1,1,1},
	{1,1,1,1,1,1,1,1},
	{1,1,1,0,0,0,0,0},
	{1,1,1,1,1,1,1,0},
	{1,1,1,1,1,1,1,1},
	{0,0,0,0,0,1,1,1},
	{1,1,1,1,1,1,1,1},
	{0,1,1,1,1,1,1,0},

};

void print_0();
void print_1();
void print_2();
void print_3();
void print_4();
void print_5();
void print_bss();
void print_num_0();
void print_num_1();

int main()
{
//	int sum[2], i = 0;
//	time_t ClockTime = time(NULL);
//	struct tm *pLocal = localtime(&ClockTime);
//	int num = pLocal->tm_min;
//	while(num > 0)
//	{
//		sum[i] = num % 10;
//		num /= 10;
//		i++;
//	}
//	
//	cout << sum[1] << " " << sum[0];	
//	Sleep(100);
//	
	while(1)
	{
		print_5();
		print_bss();
		
		print_4();
		print_bss();
		
		print_3();
		print_bss();
		
		print_2();
		print_bss();
		
		print_1();
		print_bss();
	}
}

void print_0()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_0[i][j] == 0)
				print_num_0();
			else
				print_num_1();
		}
		printf("\n");
	}
}

void print_1()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_1[i][j] == 0)
				print_num_0();
			else
				print_num_1();
		}
		printf("\n");
	}
}

void print_2()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_2[i][j] == 0)
				print_num_0();
			else
				print_num_1();
		}
		printf("\n");
	}
}

void print_3()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_3[i][j] == 0)
				print_num_0();
			else
				print_num_1();	
		}
		printf("\n");
	}
}

void print_4()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_4[i][j] == 0)
				print_num_0();
			else
				print_num_1();
		}
		printf("\n");
	}
}

void print_5()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(_5[i][j] == 0)
				print_num_0();
			else
				print_num_1();
		}
		printf("\n");
	}
}

void print_bss()
{
	Beep(360, 500);
	Sleep(1000);
	system("cls");
}

void print_num_0()
{
	cout << "/";
}

void print_num_1()
{
	cout << "*";
}
