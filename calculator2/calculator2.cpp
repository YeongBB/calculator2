
#include<iostream>
#include<cstdlib>
#include<math.h>


using namespace std;
void main()
{
	double num1 = 0, num2 = 0;			// 입력받을 숫자
	double value = 0;					// 결과 값
	char oper = NULL, str = NULL;		// 문자 입력

	cout << "계산할 내용을 입력해 주세요\n 숫자  수식  숫자\n 입력 : ";
	cin >> num1 >> oper >> num2;

	while (1)
	{
		switch (oper)
		{
		case '+':
			value = num1 + num2;
			break;
		case '-':
			value = num1 - num2;
			break;
		case '*':
			value = num1 * num2;
			break;
		case '/':
			if (num2 == 0)
				goto out;
			value = num1 / num2;
			break;
		case '%':
			if (num2 == 0)
				goto out;
			value = fmod(num1, num2);
			break;
		default:
			cout << " 잘못된 문자로 인해 종료합니다" << endl;
			exit(0);
			break;
		}
		//-----------------------------------------------------------
		int va;								// 정수변환
		va = (int)value;
		cout << "--------------------------------" << endl;
		printf("8진수  : %10o\n", va);
		printf("10진수 : %10.3f\n", value);
		printf("16진수 : %10x\n", va);
		cout << "--------------------------------" << endl;
		//-----------------------------------------------------------
		cout << "이어서 하기 : r\t초기화 : c\t 종료 : e\n 입력 : ";
		cin >> str;
		if (str == 'r')
		{
			cout << "계산할 내용을 입력 해주세요 \n 수식  숫자  \n 입력 : ";
			cin >> oper >> num2;
			num1 = value;
		}
		else if (str == 'c')
		{
			cout << "계산할 내용을 입력 해주세요 \n 숫자  수식  숫자 \n 입력 : ";
			cin >> num1 >> oper >> num2;
		}
		else if (str == 'e')
		{
			printf("\n-----종료-----\n\n");
			break;
		}
		else
		{
			cout << " \n잘못된 문자\n" << endl;
		}
	}
out:
	if (num2 == 0)
		printf("2번째 값이 0입니다. 나눗셈과 나머지 연산이 불가능 합니다. 종료합니다.\n");
}