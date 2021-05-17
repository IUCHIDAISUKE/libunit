#include "strlen.h"

int32_t strlen_launcher(int fd)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_putstr_fd("STRLEN:\n", STDOUT_FILENO);
	ft_putstr_fd("STRLEN:\n", fd);
	load_test(NULL, "BASIC_TEST", basic_test);
	load_test(&testlist, "NULL_TEST", null_test);
	load_test(&testlist, "NULL_CHAR_TEST", null_char_test);
	load_test(&testlist, "NULL_WORD_TEST", null_word_test);
	load_test(&testlist, "ABORT_TEST", abort_test);
	load_test(&testlist, "BUSS_TEST", buse_test);
	load_test(&testlist, "SEGV_TEST", segv_test);
	load_test(&testlist, "ILLIGAL_TEST", illigal_test);
	load_test(&testlist, "BIGGER_TEST", bigger_test);
	load_test(&testlist, "NONPRINTABLE_TEST", non_printable_test);
	load_test(&testlist, "DELL_TEST", dell_test);
	load_test(&testlist, "NUM_TEST", num_test);
	load_test(&testlist, "HELLO42_TEST", hello42_test);
	load_test(&testlist, "HOUAREYOU_TEST", howareyou_test);
	load_test(&testlist, "THANKYOU_TEST", thankyou_test);
	return (launch_tests(&testlist, fd));
}
