#include "SoundCanvas.h"
#include <QDebug>
#include <QThread>
#include <QString>
#include <QSettings>

SoundCanvas::SoundCanvas(std::string name)
{
    drumstick::MidiClient *client = new drumstick::MidiClient;
    client->open();
    client->setClientName( "FluidSynth" );
    // create the port. Pointer is owned by the client instance
    drumstick::MidiPort *port = client->createPort();
    port->setPortName( "FluidSynth" );
    port->setCapability( SND_SEQ_PORT_CAP_READ | SND_SEQ_PORT_CAP_SUBS_READ );
    port->setPortType( SND_SEQ_PORT_TYPE_MIDI_GENERIC );
    // subscribe the port to some other client:port
    port->subscribeTo( "20:0" ); // or "name:port", like in "KMidimon:0"

    // create an event object on the stack, to send a note on message
    drumstick::NoteOnEvent ev( 0, 66, 100 ); // (channel, note number, velocity)
    ev.setSource( port->getPortId() );
    ev.setSubscribers();   // deliver to all the connected ports
    ev.setDirect();        // not scheduled, deliver immediately
    client->output( &ev ); // or outputDirect() if you prefer not buffered
    client->drainOutput(); // flush the buffer

}

SoundCanvas::~SoundCanvas(){
    // close and clean
}

void SoundCanvas::Update(float mid, int mindepth, float distance)
{
    this->mid = mid;
    this->mindepth = mindepth;
    this->distance = distance;

    std::cout << "Mid: " << mid << " Min: " << mindepth << " Dist: " << distance  << std::endl;

}

int SoundCanvas::calcPitchbend(int mindepth) {
    //std::cout << mindepth << std::endl;
    float depthMax = 255.0;
    float pitchbendMax = 16383.0;
    float percentage = ((float)mindepth / depthMax);
    //std::cout << percentage << std::endl;
    float pitchbend = percentage * pitchbendMax;
    std::cout << pitchbend << std::endl;

    return pitchbend;
}
