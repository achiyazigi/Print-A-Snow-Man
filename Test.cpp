// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "snowman.hpp"
#include "doctest.h"
#include <string>
#include "colormod.h"
#include <iostream>
using namespace std;
using namespace ariel;

Color::Modifier red(Color::FG_RED);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier def(Color::FG_DEFAULT);

/*
 * format:
 * 
 * input-
 * HNLRXYTB
 *
 * output-
 *  HHHHH
 *  HHHHH
 * X(LNR)Y
 * X(TTT)Y
 *  (BBB)
 */

static void print_diff(string s, string expected){
    cout << red << "result: " << endl;
    cout << s << def <<endl;
    cout << "expected: " << endl;
    cout << expected << endl;
}

//tests using header consts:
TEST_CASE("42431111"){
    string s = snowman(42431111);
    string expected = H[3]+"\n "+'('+E[3]+N[1]+E[2]+") "+'\n'+X[0]+'('+T[0]+')'+Y[0]+'\n'+" ("+B[0]+')';
    bool result = s == expected;
    CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("32431111"){
    string s = snowman(32431111);
    string expected = H[2]+"\n "+'('+E[3]+N[1]+E[2]+") "+'\n'+X[0]+'('+T[0]+')'+Y[0]+'\n'+" ("+B[0]+')';
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("32432211"){
    string s = snowman(32432211);
    string expected = H[2]+"\n"+X[1]+'('+E[3]+N[1]+E[2]+")"+Y[1]+"\n "+'('+T[0]+") "+'\n'+" ("+B[0]+')';
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }

}

TEST_CASE("12222212"){
    string s = snowman(12222212);
    string expected = H[0]+"\n"+X[1]+'('+E[1]+N[1]+E[1]+")"+Y[1]+"\n "+'('+T[0]+") "+'\n'+" ("+B[1]+')';
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

//invalid input tests:
TEST_CASE("short input"){
    CHECK_THROWS(string s = snowman(1111)); 
}

TEST_CASE("long input"){
    CHECK_THROWS(string s = snowman(111132111));
}

TEST_CASE("not valid 1-4 numbers"){
    CHECK_THROWS(string s = snowman(20471325));
}

TEST_CASE("negative number"){
    CHECK_THROWS(string s = snowman(-13723312));
}

// normal tests:
TEST_CASE("43214321"){
    string s = snowman(43214321);
    string expected = "  ___\n"
                      " (_*_)\n"
                      " (o_.) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("13214321"){
    string s = snowman(13214321);
    string expected = "\n"
                      " _===_\n"
                      " (o_.) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("23214321"){
    string s = snowman(23214321);
    string expected = "  ___\n"
                      " .....\n"
                      " (o_.) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("33214321"){
    string s = snowman(33214321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (o_.) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("31214321"){
    string s = snowman(31214321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (o,.) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("32214321"){
    string s = snowman(32214321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (o..) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34214321"){
    string s = snowman(34214321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (o .) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34114321"){
    string s = snowman(34114321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (. .) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34314321"){
    string s = snowman(34314321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (0 .) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34414321"){
    string s = snowman(34414321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (- .) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34424321"){
    string s = snowman(34424321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (- o) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}

TEST_CASE("34434321"){
    string s = snowman(34434321);
    string expected = "   _\n"
                      "  /_\\\n"
                      " (- 0) \n"
                      " (] [)\\\n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}
TEST_CASE("11114411"){
    string s = snowman(11114411);
    string expected = "\n"
                      " _===_\n"
                      " (.,.) \n"
                      " ( : ) \n"
                      " ( : )";
    bool result = s == expected;
            CHECK(result);
    if(!result){
        print_diff(s, expected);
    }
}



