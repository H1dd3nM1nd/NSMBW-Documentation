#pragma once
#include <common.h>

struct StartLevelInfo {

	enum MovieType : u8 {
		SUPERSKILLS = 0,
		INFINITE1UP = 1,
		STARCOINS = 2,
		SECRETEXIT = 3,
	};

	enum ScreenType {
		NORMAL = 0,
		SGUIDE = 1,
		TITLE = 2,
		TITLEREPLAY = 3,
		HINTMOVIE = 4,
	};

	u32 replayDuration;     // 0x00 (in frames, max value 0x3840 aka 4 minutes)
	MovieType replayType;   // 0x04 (only used for Hint Movies)
	u8 entrance;            // 0x05
	u8 area;                // 0x06
	bool isReplay;          // 0x07
	ScreenType screenType;  // 0x08
	u8 world1;              // 0x0C
	u8 level1;              // 0x0D
	u8 world2;              // 0x0E (usually copied from the other field)
	u8 level2;              // 0x0F (usually copied from the other field)
};

StartLevelInfo LevelStartStruct;    // 80374060 (used by GameMgr, RestartCrsin and a few others)
StartLevelInfo LevelStartInternal;  // 80315E90 (used by a LOT of actors)
