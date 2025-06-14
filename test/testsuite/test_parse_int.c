#include "unity.h"
#include "push_swap.h"
#include <stddef.h>

void	setUp()
{

}

void	tearDown()
{
	
}

void	null_pointer_should_fail()
{
	int	output;
	
	TEST_ASSERT_FALSE(parse_int(NULL, &output));
}

void	empty_string_should_fail()
{
	int	output;

	TEST_ASSERT_FALSE(parse_int("", &output));
}

void	whitespace_before_number_should_pass()
{
	int	output;

	TEST_ASSERT_TRUE(parse_int(" 123", &output));
	TEST_ASSERT_EQUAL_INT(123, output);
}

void	positive_sign_before_number_should_pass()
{
	int	output;

	TEST_ASSERT_TRUE(parse_int("+123", &output));
	TEST_ASSERT_EQUAL_INT(123, output);
}

void	negative_sign_before_number_should_pass()
{
	int	output;

	TEST_ASSERT_TRUE(parse_int("-123", &output));
	TEST_ASSERT_EQUAL_INT(-123, output);
}

void	single_digit_should_pass()
{
	int	output;

	TEST_ASSERT_TRUE(parse_int("5", &output));
	TEST_ASSERT_EQUAL_INT(5, output);
}

void	non_digits_should_fail()
{
	int	output;

	TEST_ASSERT_FALSE(parse_int("hello", &output));
}

void	trailing_characters_should_fail()
{
	int	output;

	TEST_ASSERT_FALSE(parse_int("69420abcde", &output));
}

void	multi_test_should_pass()
{
	int	output;

	TEST_ASSERT_TRUE(parse_int("    +++-+--+4295929", &output));
	TEST_ASSERT_EQUAL_INT(4295929, output);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(null_pointer_should_fail);
	RUN_TEST(empty_string_should_fail);
	RUN_TEST(whitespace_before_number_should_pass);
	RUN_TEST(positive_sign_before_number_should_pass);
	RUN_TEST(negative_sign_before_number_should_pass);
	RUN_TEST(single_digit_should_pass);
	RUN_TEST(non_digits_should_fail);
	RUN_TEST(trailing_characters_should_fail);
	RUN_TEST(multi_test_should_pass);
    return UNITY_END();
	return (0);
}