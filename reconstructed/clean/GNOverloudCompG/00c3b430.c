// Function: FUN_00c3b430
// Address: 00c3b430
// Size: 545 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


void FUN_00c3b430(float param_1)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t arg1;
  int64_t *plVar4;
  int64_t *this_ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = g_0276ce70;
  if ((param_1 != g_02390124) || (NAN(param_1) || NAN(g_02390124))) {
    if (g_0239426c <= param_1) {
      fVar5 = (float)FUN_00d48b10();
      fVar6 = (float)FUN_00d48af0();
      fVar7 = (float)((uint)(fVar5 - fVar6) & g_02390140);
      fVar5 = *(float *)(arg1 + 0x50);
      fVar8 = g_02390124 / (*(float *)(arg1 + 0x54) - fVar5);
      fVar6 = (float)FUN_00d48af0();
      fVar6 = fVar6 + (param_1 - fVar5) * fVar8 * fVar7;
      if (*(char *)(arg1 + 0x58) != '\0') {
        fVar5 = (float)FUN_00d48b10();
        fVar6 = (float)((uint)(fVar6 - fVar5) ^ g_023945e0);
      }
      FUN_00d49aa0(fVar6);
    }
    else if ((param_1 != 0.0) || (NAN(param_1))) {
      if ((g_0239426c <= param_1) || (param_1 <= 0.0)) {
        FUN_00d8ede0();
      }
      else {
        plVar4 = *(int64_t **)(arg1 + 0x60);
        if (plVar4 == (int64_t *)0x0) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *(void*)((int64_t)puVar3 + 0xc) = 0;
          *(void*)((int64_t)puVar3 + 0x14) = 0;
          *(void*)((int64_t)puVar3 + 0x1a) = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          *puVar3 = &g_0255ebc0;
          *(void*)(puVar3 + 0xb) = 0;
          FUN_00d500e0();
          puVar1 = *(void**)(arg1 + 0x60);
          if (puVar1 == puVar3) {
            FUN_00d50b20();
          }
          else {
            *(void**)(arg1 + 0x60) = puVar3;
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d48ac0();
          FUN_00d48ae0(g_023d7ffc);
          FUN_00d48b00(g_023941f0);
          plVar4 = *(int64_t **)(arg1 + 0x60);
        }
        (**(code **)(*plVar4 + 0x378))
                  ((uint)(param_1 * g_02390d2c + g_02390d00) ^ g_023945e0);
      }
    }
    else {
      FUN_00d933c0();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

