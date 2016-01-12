
#ifndef SOUNDCANVAS_H
#define SOUNDCANVAS_H

#include <iostream>
#include <string>
#include <drumstick.h>

#include "rtmidiinput.h"
#include "rtmidioutput.h"

class SoundCanvas
{
    public:
        SoundCanvas(std::string name);
        ~SoundCanvas();
        void Update(float, int, float);

    private:
        drumstick::rt::MIDIOutput* midiOutput;
        int midichannel;
        std::string name;
        float mid;
        int mindepth;
        float distance;
        int calcPitchbend(int);

};

#endif // SOUNDCANVAS_H
