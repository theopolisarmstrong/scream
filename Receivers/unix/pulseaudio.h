#ifndef PULSEAUDIO_H
#define PULSEAUDIO_H

#include "scream.h"

int pulse_output_init(int latency, char *sink, char *stream_name);
int pulse_output_send(receiver_data_t *data);

#endif
