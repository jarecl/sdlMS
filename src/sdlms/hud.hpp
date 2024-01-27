#ifndef HEADER_SDLMS_HUD
#define HEADER_SDLMS_HUD

#include <SDL2/SDL.h>
#include <memory>
#include "util/currenton.hpp"
#include "sdlms/graphics.hpp"
#include "sdlms/minimap.hpp"

class Hud : public Currenton<Hud>
{
public:
    Hud();
    void draw();

public:
    std::unique_ptr<MiniMap> _minimap;
};

#endif