#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Adding a node")
{
    LinkedList l;
    REQUIRE(l.size() == 0);
    Link *link = new Link("Gold");
    l.add(link);

    REQUIRE(l.size() == 1);
    REQUIRE(l.get_head()->data->get_material() == "Gold");
}

TEST_CASE("Adding multiple nodes")
{
    LinkedList l;
    Link *link = new Link("Gold");
    Link *link2 = new Link("Silver");
    Link *link3 = new Link("Bronze");
    l.add(link);
    l.add(link2);
    l.add(link3);

    REQUIRE(l.size() == 3);
    REQUIRE(l.get_head()->data->get_material() == "Gold");
    REQUIRE(l.get_head()->next->data->get_material() == "Silver");
    REQUIRE(l.get_head()->next->next->data->get_material() == "Bronze");
}