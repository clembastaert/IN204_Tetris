#include <SFML/System/Vector2.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "../inc/block_O.hpp"

Block_O::Block_O(unsigned i,unsigned j):Block( i, j)
{
    value = 1;

    rotate_value = 0;

    list_squares.push_back({i,j});
    list_squares.push_back({i+1,j});
    list_squares.push_back({i+1,j+1});
    list_squares.push_back({i,j+1});
}

void Block_O::rotate(){};