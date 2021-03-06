#include <stdio.h>
#include <stdlib.h>

#include "ft_split.c"

static void			ft_print_result(char const *s)
{
	printf("%s\n", s);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		printf("\n");
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}

void check(int succes)
{
	if (succes)
		printf("OK\n");
	else
		printf("KO\n");
}

int					main()
{

	printf ("test 1\n");
	check_split("          ", ' ');
	printf ("\n");
	printf ("test 2\n");
		check_split("one. two, three", ' ');
	printf ("\n");
	printf ("test 3\n");
		check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	printf ("\n");
	printf ("test 4\n");
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	printf ("\n");
	printf ("test 5\n");
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	printf ("\n");
	printf ("test 6\n");
	check_split(NULL, 'q');
	printf ("\n");


	printf ("\ntest 7\n");
	// TEST 1: |UN_DEUX_TROIS| with '_' as sep
	check_split("UN_DEUX_TROIS", '_');

	printf ("\ntest 8\n");
	//TEST 2: |U_N_D_E_U_X_T_R_O_I_S| with '_' as sep
	check_split("U_N_D_E_U_X_T_R_O_I_S", '_');

	printf ("\ntest 9\n");
	//TEST 3: |_UNDEUXTROIS| with '_' as sep
	check_split("_UNDEUXTROIS", '_');

	printf ("\ntest 10\n");
	//TEST 4: |UNDEUXTROIS_| with '_' as sep
	check_split("UNDEUXTROIS_", '_');
	printf ("\ntest 11\n");

	//TEST 5: |UN____DEUX___TROIS| with '_' as sep
	check_split("UN____DEUX___TROIS", '_');
	printf ("\ntest 12\n");

	//TEST 6: |_UN_DEUX_TROIS_| with '_' as sep
	check_split("_UN_DEUX_TROIS_", '_');

	printf ("\ntest 13\n");
	//TEST 7: |_UN__DEUX___TROIS____| with '_' as sep
	check_split("_UN_DEUX_TROIS_", '_');
	printf ("\ntest 14\n");

	//TEST 8: |____UN___DEUX__TROIS_| with '_' as sep
	check_split("_UN_DEUX_TROIS_", '_');

	printf ("\ntest 15\n");
	//TEST 9: |_UNDEUXTROIS_| with '_' as sep
	check_split("_UNDEUXTROIS_", '_');
	printf ("\ntest 16\n");

	//TEST 10: |UNDEUXTROIS| with '_' as sep
	check_split("_UNDEUXTROIS_", '_');
	printf ("\ntest 17\n");

	//TEST 11: |U| with '_' as sep
	check_split("U", '_');

	printf ("\ntest 18\n");
	//TEST 12: |_| with '_' as sep
	check_split("_", '_');
	printf ("\ntest 19\n");

	//TEST 13: |___________________| with '_' as sep
	check_split("___________________", '_');
	printf ("\ntest 20\n");
	//TEST 14: |_| with '(empty)' as sep
	check_split("_", 0);
	printf ("\ntest 21\n");

	//TEST 15: |UN_DEUX_TROIS| with '(empty)' as sep
	check_split("UN_DEUX_TROIS", 0);

	printf ("\ntest 22\n");
	//TEST 16: |\0| with '(empty)' as sep
	check_split("", 0);
	printf ("\ntest 23\n");

	//TEST 17: |\0| with '_' as sep
	check_split("", '_');
	printf ("\ntest 24\n");

	//TEST 18: |(empty)| with '_' as sep
	check_split(0, '_');

	printf ("\ntest 25\n");
	//TEST 19: |(empty)| with '(empty)' as sep
	check_split(0, 0);

	printf ("\ntest 26\n");
	char *invalidReadCheck;
	invalidReadCheck = malloc(sizeof (char));
	invalidReadCheck = 0;
	char	**tab = ft_split(invalidReadCheck, 0);
	/* 10 */ check(tab[0] == NULL);

	free(tab);



	printf ("\ntest 25\n");

	check_split("1-2-3-4-5-6-7-8--8-8--8-4------4--4", '-');


	/*
	 Testing ft_split
 [!] Error - Wrong separation
 [!] Args: string: "1-2-3-4-5-6-7-8--8-8--8-4------4--4", sep: '-' and index: 4
 [!] Expected: "5" - Got: "6"
 [!] Error - Wrong separation
 [!] Args: string: "1-2-3-4-5-6-7-8--8-8--8-4------4--4", sep: '-' and index: 5
 [!] Expected: "6" - Got: "7"
 [!] Error - Wrong separation
 [!] Args: string: "1-2-3-4-5-6-7-8--8-8--8-4------4--4", sep: '-' and index: 6
 [!] Expected: "7" - Got: "8"
 [!] Error - Wrong separation
 [!] Args: string: "1-2-3-4-5-6-7-8--8-8--8-4------4--4", sep: '-' and index: 10
 [!] Expected: "8" - Got: "4"
 [!] Error - Wrong separation
 [!] Args: string: "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---", sep: '-' and index: 4
 [!] Expected: "5" - Got: "6"
 [!] Error - Wrong separation
 [!] Args: string: "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---", sep: '-' and index: 5
 [!] Expected: "6" - Got: "7"
 [!] Error - Wrong separation
 [!] Args: string: "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---", sep: '-' and index: 6
 [!] Expected: "7" - Got: "8"
 [!] Error - Wrong separation
 [!] Args: string: "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---", sep: '-' and index: 10
 [!] Expected: "8" - Got: "4"
 [!] Error - Wrong separation
 [!] Args: string: "nV3CdE TVSa4WBC5Pif 7wlxVj8Gh2rKJaq KNSeW3zdEUmC0R vOyq5if cmdgC9 b8OdLjTe KCchSYZbA8EO1G32 5MxLVnXNkqGDYFu LFR pVUED68uoxY4hj 4SaqtgVIhi3RlwnTy ncgENTUyjwuMsal vmXq2zpchrYMO Cl4QM", sep: ' ' and index: 8
 [!] Expected: "5MxLVnXNkqGDYFu" - Got: "MxLVnXNkqGDYFu"
 [!] Error - Wrong separation
 [!] Args: string: "So0g e4AsdPMS nbBahMvDJdof blIAeG PBOVfX8YM9s6 ZvM 8bo2FYESIWalLH9v v2XEMZjeQ5 FmkCvgj F0QofHpnZu 90QVWOyliL6T 3K5xVm P4Ly1YjVZWGE", sep: ' ' and index: 6
 [!] Expected: "8bo2FYESIWalLH9v" - Got: "bo2FYESIWalLH9v"
 [!] Error - Wrong separation
 [!] Args: string: "Oh9dP6trs21E m1CUXoaIv7G hE9Zda lBOY y6sfCeRG pE2Y sO1WdFiEpH9Qqn zifTvFG5 9sLUoH", sep: ' ' and index: 8
 [!] Expected: "9sLUoH" - Got: "sLUoH"
 [*] ft_split : [KO]
	 */



	return (0);
}
