#include "../include/libunit.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static int32_t	exec_test(t_func func)
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid == -1)
		ft_putstrerr("Fork failed :(");
	else if (pid == 0)
		exit(func());
	wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	if (WIFSIGNALED(status))
		return (WTERMSIG(status));
	return (TESRA);
}

static int32_t	exec_and_print_result(t_unit_test *tmp, int32_t index, int fd)
{
	int32_t	end_status;

	print_test_title(tmp->title, index, STDOUT_FILENO);
	print_test_title(tmp->title, index, fd);
	end_status = exec_test(tmp->func);
	print_status_with_color(end_status, STDOUT_FILENO);
	print_status(end_status, fd);
	return (end_status);
}

int	launch_tests(t_unit_test **test_list)
{
	int			fd;
	int32_t		tests_num;
	int32_t		score;
	t_unit_test	*tmp;

	fd = open("result.log", O_WRONLY|O_CREAT|O_TRUNC, 0666);
	tmp = *test_list;
	tests_num = 0;
	score = 0;
	while (tmp)
	{
		tests_num++;
		if (exec_and_print_result(tmp, tests_num, fd) == 0)
			score++;
		tmp = tmp->next;
	}
	print_score(score, tests_num, STDOUT_FILENO);

	free_link(*test_list);
	if (score == tests_num)
		return (0);
	else
		return (-1);
}
