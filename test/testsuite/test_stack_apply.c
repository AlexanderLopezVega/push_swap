#include "unity.h"

void	setUp()
{

}

void	tearDown()
{
	
}

void	null_pointer_should_fail()
{

}

int main(void)
{
	UNITY_BEGIN();
    RUN_TEST(null_pointer_should_fail);
    return UNITY_END();
	return (0);
}