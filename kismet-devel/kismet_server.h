/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __KISMET_SERVER_H__
#define __KISMET_SERVER_H__

#include "config.h"

#include <map>
#include <string>

string ExpandLogPath(string path, string logname, string type);
void CatchShutdown(int sig);
int Usage(char *argv);

void SoundHandler(int *fds, const char *player, map<string, string> soundmap);
void SpeechHandler(int *fds, const char *player);
int PlaySound(string in_sound);
int SayText(string in_text);

void NetWriteInfo();
void NetWriteStatus(char *in_status);
void NetWriteAlert(char *in_alert);
void NetWriteNew(int in_fd);

#endif
