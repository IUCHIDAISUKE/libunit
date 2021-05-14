#include "strlen/strlen.h"
#include "../framework/include/libunit.h"

int main()
{
	if (!strlen_launcher())
		ft_putstr_fd("STRLEN TEST CLEAR :)", STDOUT_FILENO);
	else
		ft_putstr_fd("TRY AGAIN :(", STDOUT_FILENO);
}