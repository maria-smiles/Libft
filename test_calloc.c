#include "ft_calloc.c"

int  main ()
{
	{
//[crash]: you didn't protect your malloc return
//Test code:
		char *ptr;

		ptr = (char *) ft_calloc(4, 20);
//if (!ptr)
//exit(TEST_SUCCESS);
//exit(TEST_FAILED);
	}

	{
		char *str;


		str = (char *) ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
}