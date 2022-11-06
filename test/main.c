# include "test.h"

/*static void	test_c(void)
{
	int actual, expected;

	for (int i = -1000; i < 2000; i++)
	{
		actual = ft_printf("%c", i);
		expected = printf("%c", i);
		if (actual != expected)
			printf("actual: %d, expected: %d\n", actual, expected);
		assert(actual == expected);
	}
}*/

/*static void	test_s(void)
{
	int actual, expected;

	actual = ft_printf("%s", (char *)0);
	expected = printf("%s", (char *)0);
	if (actual != expected)
		printf("actual: %d, expected: %d\n", actual, expected);
	assert(actual == expected);
}*/

int main()
{
	//test_c();
	//test_s();
	int actual = ft_printf("%p", (void *)-14523);
	int expected = printf("%p", (void *)-14523);
	if (actual != expected)
		printf("actual: %d, expected: %d\n", actual, expected);
	assert(actual == expected);
	return (0);
}