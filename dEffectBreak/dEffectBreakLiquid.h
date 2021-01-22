#pragma once
#include <common.h>
#include <dEffectBreakBase.h>

/* Settings: ((Layer << 0x10) & 1) | (Type & 0xF)

Types (no idea of the differences):
0/1/2 = Water
3/4/5 = Lava
6/7 = Poison

Layer: 0 = Layer 1, 1 = Layer 2 */

class dEffectBreakLiquid_c : public dEffectBreakBase_c {
	public:
		u32 type;
		u32 layer;
		EGG::Effect effect;

		static const char* EffectBreakLiquidEfList[8][]; // 803118C8

		virtual ~dEffectBreakLiquid_c(); // 80092200

		virtual void init();    // 80091F60
		virtual void execute(); // 80091FB0
		virtual void draw();    // 80092010
		virtual void cleanup(); // 80092020

	private:
		bool spawnEffect();     // 80092030
		void checkPosition();   // 80092150
};
