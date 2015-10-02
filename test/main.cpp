//
// Created by 王晓辰 on 15/10/1.
//

#include "tester.h"

#include "test_cwd.h"
#include "test_isabs.h"
#include "test_join.h"
#include "test_basename.h"
#include "test_dirname.h"
#include "test_split.h"
#include "test_normpath.h"
#include "test_abspath.h"
#include "test_relpath.h"
#include "test_listdir.h"
#include "test_isdir.h"
#include "test_isfile.h"


int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return 1;
    }

    CASE_ONE_TEST_BY_ARGV1("cwd", test_cwd());
    CASE_ONE_TEST_BY_ARGV1("isabs", test_isabs());
    CASE_ONE_TEST_BY_ARGV1("join", test_join());
    CASE_ONE_TEST_BY_ARGV1("basename", test_basename());
    CASE_ONE_TEST_BY_ARGV1("dirname", test_dirname());
    CASE_ONE_TEST_BY_ARGV1("split", test_split());
    CASE_ONE_TEST_BY_ARGV1("normpath", test_normpath());
    CASE_ONE_TEST_BY_ARGV1("abspath", test_abspath());
    CASE_ONE_TEST_BY_ARGV1("relpath", test_relpath());
    CASE_ONE_TEST_BY_ARGV1("listdir", test_listdir());
    CASE_ONE_TEST_BY_ARGV1("isdir", test_isabs());
    CASE_ONE_TEST_BY_ARGV1("isfile", test_isfile());

    return 0;
}