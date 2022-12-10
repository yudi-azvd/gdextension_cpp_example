#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <sprite2d.hpp>

namespace godot
{

    class GDExample : public Sprite2D
    {
        GDCLASS(GDExample, Sprite2D)

    private:
        float time_passed;

    protected:
        static void _bind_methods();

    public:
        GDExample();
        ~GDExample();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}

#endif