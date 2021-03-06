/*################################################################################
  ##
  ##   Copyright (C) 2016-2019 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#include "gcem_tests.hpp"

int main()
{
    std::cout << "\n*** begin acos test ***\n" << std::endl;

    //

    std::function<long double (long double)> test_fn = gcem::acos<long double>;
    std::string test_fn_name = "gcem::acos";

    std::function<long double (long double)> std_fn  = [] (long double x) -> long double { return std::acos(x); };
    std::string std_fn_name = "std::acos";

    //

    static constexpr long double test_vals[] = { 0.0L, 0.001L, 0.5L, -0.5L, 0.7568025L, 1.0L, 5.0L };

    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,0,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,1,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,2,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,3,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,4,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,5,test_fn,std_fn,true," ",6,18,false,false);
    PRINT_TEST_1_COMPARE(test_fn_name,std_fn_name,test_vals,6,test_fn,std_fn,false," ",6,18,false,true);

    //

    std::cout << "\n*** end acos test ***\n" << std::endl;

    return 0;
}
