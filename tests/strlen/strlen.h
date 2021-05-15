#ifndef STRLEN_H
# define STRLEN_H

# include "../../framework/include/libunit.h"

int32_t	strlen_launcher(int fd);
int32_t	basic_test(void);
int32_t	null_test(void);
int32_t	null_char_test(void);
int32_t	null_word_test(void);
int32_t	buse_test(void);
int32_t	segv_test(void);
int32_t	abort_test(void);
int32_t	illigal_test(void);
int32_t	bigger_test(void);
int32_t	num_test(void);
int32_t	non_printable_test(void);
int32_t	dell_test(void);
int32_t	hello42_test(void);
int32_t	howareyou_test(void);
int32_t	thankyou_test(void);

#endif /* STRLEN_H */
