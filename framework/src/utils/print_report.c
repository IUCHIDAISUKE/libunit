#include "../../include/libunit.h"

static void	test_list_init(char **test_list)
{
	test_list[0] = "01_basic_test.c";
	test_list[1] = "02_null_test.c";
	test_list[2] = "03_null_char_test.c";
	test_list[3] = "04_null_word_test.c";
	test_list[4] = "05_abort_test.c";
	test_list[5] = "06_buse_test.c";
	test_list[6] = "07_segv_test.c";
	test_list[7] = "08_illigal_test.c";
	test_list[8] = "09_bigger_test.c";
	test_list[9] = "10_nonprintable_test.c";
	test_list[10] = "11_dell_test.c";
	test_list[11] = "12_num_test.c";
	test_list[12] = "13_hello42_test.c";
	test_list[13] = "14_howareyou_test.c";
	test_list[14] = "15_thankyou_test.c";
}

void	print_report(int32_t index, int32_t fd)
{
	char	*test_list[20];

	test_list_init(test_list);
	ft_putstr_fd("          ## Check the strlen/", fd);
	ft_putstr_fd(test_list[index - 1], fd);
	ft_putstr_fd("\n", fd);
}
