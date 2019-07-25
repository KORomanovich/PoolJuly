#include <stdio.h>
#include <stdlib.h>

int  ft_atoi(char *str);

int  ft_putchar(char c);

void ft_putstr(char *str)
{
	 while (*str != 0)
		  {
			    ft_putchar(*str);
				  str++;
				   }
}

void assert(char *t1)
{
	 printf("\x1B[0m" "\n");
	  ft_putstr(t1);
	   printf("\natoi: %d\n", atoi(t1));
	    printf("ft_atoi: %d\n", ft_atoi(t1));
		 if (atoi(t1) - ft_atoi(t1))
			   printf("\x1B[31m" "Failed!\n");
		  else
			    printf("\x1B[32m" "Passed!\n");
}

void test_atoi(void)
{
	 char int_max[] = "2147483647";
	  char int_min[] = "-2147483648";
	   char int_max_plus[] = "21474836480";
	    char int_min_minus[] = "-21474836490";
		 //general
		  assert("0");
		   assert("+0");
		    assert("-0");
		     assert("1");
		      assert("+1");
		      assert("-1");
		       assert("10");
		        assert("+10");
		         assert("-10");
		          //special symbols & breaks
		           assert("\b5\b1 3");
		            assert("\t \t5_1+3");
		             assert("\n \t5+1=3");
		              assert("\v \t5-1\v3");
		               assert("\f\t+5\t1\t3");
		                assert("\r \t-5\n4\n5");
		                 
		                     //limits
		                         assert(int_max);
		                             assert(int_min);
		                                 assert(int_max_plus);
		                                     assert(int_min_minus);
		                                     }
