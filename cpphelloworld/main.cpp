//
//  main.cpp
//  cpphelloworld
//
//  Created by Min Zhang on 2020/3/20.
//  Copyright © 2020 Min Zhang. All rights reserved.
//

#include <stdio.h>
#include <array>
#include "pch.h"

enum Color{Black, White};
static std::array<Color, 2> colors = {Color::Black, Color::White};

enum class Columns{A, B, C, D, E, F, G, H};
static std::array<Columns, 8> columns = {Columns::A, Columns::B, Columns::C, Columns::D, Columns::E, Columns::F, Columns::G, Columns::H
};

typedef int Rows;
static std::array<Rows, 8> rows = {1,2,3,4,5,6,7,8};

enum class Pieces{Pawn, Rook, Knight, Bishop, Queen, King, NA};


class Square{
public:
    bool occupied;
    Pieces piece;
    Columns col;
    Rows row;
    
    Square(Columns col, Rows row){
        occupied = false;
        piece = Pieces::NA;
        col = col;
        row = row;
    };
};

class Board{
private:
    std::vector<Square> m_board;
public:
    void initial_board(){
        for (Columns col: columns){
            for (Rows row: rows){
                m_board.emplace_back(Square(col, row));
            }
        }
    }
    
};

int main(){
    Board board;
    board.initial_board();
    
    std::cout << Color::Black << std::endl;
    return 0;
}

