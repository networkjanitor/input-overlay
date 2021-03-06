/**
 * Created by univrsal on 13.07.2017.
 * This file is part of input-overlay which is licensed
 * under the MOZILLA PUBLIC LICENSE 2.0 - mozilla.org/en-US/MPL/2.0/
 * github.com/univrsal/input-overlay
 */

#include "Palette.hpp"

Palette::Palette()
{
    m_black = {0, 0, 0, 255};
    m_white = {213, 213, 213, 255};

    m_foreground = {255, 255, 255, 255};
    m_background = {255, 255, 255, 255};
    m_accent = {64, 64, 64, 255};

    m_tooltip_body = {248, 230, 177, 128};
    m_orange = {255, 92, 38, 255};

    m_red = {240, 20, 20, 255};
    m_green = {33, 135, 55, 255};
    m_blue = {33, 118, 243, 255};
    m_gray = {55, 55, 55, 255};
    m_dark_gray = {45, 45, 45, 255};
    m_light_gray = {80, 80, 80, 255};
}

Palette::~Palette()
= default;

SDL_Color* Palette::get_bg()
{
    return &m_background;
}

SDL_Color* Palette::get_fg()
{
    return &m_foreground;
}

SDL_Color* Palette::get_accent()
{
    return &m_accent;
}

SDL_Color* Palette::white()
{
    return &m_white;
}

SDL_Color* Palette::black()
{
    return &m_black;
}

SDL_Color* Palette::gray()
{
    return &m_gray;
}

SDL_Color* Palette::dark_gray()
{
    return &m_dark_gray;
}

SDL_Color* Palette::light_gray()
{
    return &m_light_gray;
}

SDL_Color* Palette::blue()
{
    return &m_blue;
}

SDL_Color* Palette::red()
{
    return &m_red;
}

SDL_Color* Palette::green()
{
    return &m_green;
}

SDL_Color* Palette::orange()
{
    return &m_orange;
}

SDL_Color* Palette::get_tooltip_body()
{
    return &m_tooltip_body;
}
