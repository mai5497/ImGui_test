#ifndef __BOSS_H__
#define __BOSS_H__

#include "Main.h"

//*****************************************************************************
// �v���g�^�C�v�錾
//*****************************************************************************
HRESULT InitBoss(void);
void UninitBoss(void);
bool UpdateBoss(void);
void DrawBoss(void);
int CollisionBoss(XMFLOAT3 pos, float radius, float damage);

#endif