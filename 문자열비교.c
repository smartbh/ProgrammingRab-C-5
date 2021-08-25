#include <stdio.h>
#include <string.h>



int main() 
{
	char id[20] = { "Hansung" };
	char password[20] = { "Computer" };

	char id2[20];
	char password2[20];


	while (1)
	{

		printf("아이디 : ");
		gets(id2);

		strcmp(id, id2);


		if (strcmp(id, id2) > 0 || strcmp(id, id2) < 0)
		{
			printf("등록되지 않은 아이디 입니다.\n");


			break;
		}

		else
		{
			printf("비밀번호 :");
			gets(password2);

			if (strcmp(password, password2) > 0 || strcmp(password, password2) < 0)
			{

				printf("비밀번호가 틀렸습니다.\n");
				break;
			}
			else
			{
				printf("%s님 환영합니다.\n", id);
				break;
			}
		}
	}
}