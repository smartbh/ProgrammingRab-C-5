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

		printf("���̵� : ");
		gets(id2);

		strcmp(id, id2);


		if (strcmp(id, id2) > 0 || strcmp(id, id2) < 0)
		{
			printf("��ϵ��� ���� ���̵� �Դϴ�.\n");


			break;
		}

		else
		{
			printf("��й�ȣ :");
			gets(password2);

			if (strcmp(password, password2) > 0 || strcmp(password, password2) < 0)
			{

				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
				break;
			}
			else
			{
				printf("%s�� ȯ���մϴ�.\n", id);
				break;
			}
		}
	}
}