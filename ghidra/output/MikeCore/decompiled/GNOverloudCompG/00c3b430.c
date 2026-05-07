// Function: FUN_00c3b430
// Address: 00c3b430
// Size: 545 bytes
// Class: GNOverloudCompG


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c3b430(float param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  longlong *plVar4;
  longlong *unaff_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = DAT_0276ce70;
  if ((param_1 != DAT_02390124) || (NAN(param_1) || NAN(DAT_02390124))) {
    if (DAT_0239426c <= param_1) {
      fVar5 = (float)FUN_00d48b10();
      fVar6 = (float)FUN_00d48af0();
      fVar7 = (float)((uint)(fVar5 - fVar6) & _DAT_02390140);
      fVar5 = *(float *)(unaff_RSI + 0x50);
      fVar8 = DAT_02390124 / (*(float *)(unaff_RSI + 0x54) - fVar5);
      fVar6 = (float)FUN_00d48af0();
      fVar6 = fVar6 + (param_1 - fVar5) * fVar8 * fVar7;
      if (*(char *)(unaff_RSI + 0x58) != '\0') {
        fVar5 = (float)FUN_00d48b10();
        fVar6 = (float)((uint)(fVar6 - fVar5) ^ _DAT_023945e0);
      }
      FUN_00d49aa0(fVar6);
    }
    else if ((param_1 != 0.0) || (NAN(param_1))) {
      if ((DAT_0239426c <= param_1) || (param_1 <= 0.0)) {
        FUN_00d8ede0();
      }
      else {
        plVar4 = *(longlong **)(unaff_RSI + 0x60);
        if (plVar4 == (longlong *)0x0) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          *puVar3 = &DAT_0255ebc0;
          *(undefined1 *)(puVar3 + 0xb) = 0;
          FUN_00d500e0();
          puVar1 = *(undefined8 **)(unaff_RSI + 0x60);
          if (puVar1 == puVar3) {
            FUN_00d50b20();
          }
          else {
            *(undefined8 **)(unaff_RSI + 0x60) = puVar3;
            if (puVar1 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d48ac0();
          FUN_00d48ae0(DAT_023d7ffc);
          FUN_00d48b00(DAT_023941f0);
          plVar4 = *(longlong **)(unaff_RSI + 0x60);
        }
        (**(code **)(*plVar4 + 0x378))
                  ((uint)(param_1 * DAT_02390d2c + DAT_02390d00) ^ _DAT_023945e0);
      }
    }
    else {
      FUN_00d933c0();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


