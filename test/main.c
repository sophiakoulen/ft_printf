# include "test.h"

static void	test_c(void)
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
	printf("\n\n");
}

static void	test_s(void)
{
	int actual, expected;

	actual = ft_printf("%s", (char *)0);
	expected = printf("%s", (char *)0);
	if (actual != expected)
		printf("actual: %d, expected: %d\n", actual, expected);
	assert(actual == expected);
	printf("\n\n");
}

static void test_p(void)
{
	int actual, expected;

	actual = ft_printf("%p\n", (void *)-14523);
	expected = printf("%p\n", (void *)-14523);
	if (actual != expected)
		printf("actual: %d, expected: %d\n", actual, expected);
	assert(actual == expected);
	printf("\n\n");
}

int main()
{
	//test_c();
	//test_s();
	//test_p();
	ft_dprintf(2, "hello world\n");
	return (0);
}