#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("evenMaskTest", "[even]") {
    std::vector<int> v{2,5,3,1,2};
    std::vector<bool> vec{true, false, false, false, true};
    
    std::vector<int> v2{2,2,2,2,2};
    std::vector<bool> vec2{true, true, true, true, true};
    
    std::vector<int> v3{1,1,1,1};
    std::vector<bool> vec3{false, false, false, false};
    
    REQUIRE( EvenMask(v) == vec);
    REQUIRE( EvenMask(v2) == vec2);
    REQUIRE( EvenMask(v3) == vec3);
}

TEST_CASE ("oddMaskTest", "[odd]") {
    std::vector<int> v{2,5,3,1,2};
    std::vector<bool> vec{false, true, true, true, false};
    
    std::vector<int> v2{2,2,2,2,2};
    std::vector<bool> vec2{false, false, false, false, false};
    
    std::vector<int> v3{1,1,1,1};
    std::vector<bool> vec3{true, true, true, true};
    
    REQUIRE( OddMask(v) == vec);
}

TEST_CASE ("JoinTest", "[String]") {
    std::vector<std::string> v{"Hello", "world"};
    std::vector<std::string> v2{"Hi", "this", "is", "a", "test"};
    std::vector<std::string> v3{"Still", "on", "a", "coding", "test", "for", "this"};
    
    REQUIRE( Join(v, " ") == "Hello world");
    REQUIRE( Join(v2, " ") == "Hi this is a test");
    REQUIRE( Join(v3, " ") == "Still on a coding test for this");
}