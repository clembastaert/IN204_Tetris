#ifndef GAME_HPP
# define GAME_HPP

#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "grid.hpp"
#include "block.hpp"
#include "./types_block/block_I.hpp"
#include "./types_block/block_L.hpp"
#include "./types_block/block_J.hpp"
#include "./types_block/block_O.hpp"
#include "./types_block/block_S.hpp"
#include "./types_block/block_Z.hpp"
#include "./types_block/block_T.hpp"

const int WIN_WIDTH = 1500;
const int WIN_HEIGHT = 1000;

class Game
{
     public:
        void Run();
        void set_running(bool new_running);
        void set_fps_grid(float new_fps_grid);
      
        Grid get_grid()const;

        bool generate_new_block();

    private:

        bool _running = true;
        sf::RenderWindow window;
        sf::View grid_view;
        sf::View menu_view;

        sf::RectangleShape bgGrid_;
        sf::RectangleShape bgMenu_;

        Grid grid;

        Block *current_block;

        sf::Clock clock;
        float fps_grid;


        void Initialize();
        void Shutdown();
        void Frame();

};

void InputHandler(sf::Event, Game &, Block &, Grid &);
        
#endif // ! GAME_HPP