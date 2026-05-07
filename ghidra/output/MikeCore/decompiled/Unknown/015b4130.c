// Function: FUN_015b4130
// Address: 015b4130
// Size: 866 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x015b43aa) */
/* WARNING: Removing unreachable block (ram,0x015b43b3) */
/* WARNING: Removing unreachable block (ram,0x015b425b) */
/* WARNING: Removing unreachable block (ram,0x015b4264) */
/* WARNING: Removing unreachable block (ram,0x015b42f3) */
/* WARNING: Removing unreachable block (ram,0x015b42fc) */
/* WARNING: Removing unreachable block (ram,0x015b4457) */
/* WARNING: Removing unreachable block (ram,0x015b4460) */

undefined8 * FUN_015b4130(float param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char in_CL;
  uint uVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (2 < (int)param_2) {
    if (in_CL == '\0') {
      fVar2 = *(float *)*unaff_RSI;
      if ((param_1 < fVar2) &&
         (pfVar1 = (float *)*unaff_RSI + 1, *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
        FUN_014328b0(0,(double)fVar2);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar6 = param_2 - 1;
      uVar7 = 1;
      do {
        lVar3 = *unaff_RSI;
        fVar2 = *(float *)(lVar3 + uVar7 * 4);
        if (((param_1 < fVar2) && (*(float *)(lVar3 + -4 + uVar7 * 4) <= fVar2)) &&
           (pfVar1 = (float *)(lVar3 + 4 + uVar7 * 4), *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          FUN_014328b0((double)(int)uVar7,(double)fVar2);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      fVar2 = *(float *)(*unaff_RSI + (longlong)(int)uVar6 * 4);
      if ((param_1 < fVar2) &&
         (pfVar1 = (float *)(*unaff_RSI + (ulonglong)(param_2 - 2) * 4),
         *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
        FUN_014328b0((double)(int)uVar6,(double)fVar2);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar7 = 1;
      do {
        lVar3 = *unaff_RSI;
        fVar2 = *(float *)(lVar3 + -4 + uVar7 * 4);
        uVar5 = uVar7;
        if (param_2 == uVar7) {
          uVar5 = 0;
        }
        if (((param_1 < fVar2) &&
            (*(float *)(lVar3 + (longlong)((int)(param_2 + (int)uVar7 + -2) % (int)param_2) * 4) <=
             fVar2)) &&
           (pfVar1 = (float *)(lVar3 + uVar5 * 4), *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          FUN_014328b0((double)((int)uVar7 + -1),(double)fVar2);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar8 = uVar7 != param_2;
        uVar7 = uVar7 + 1;
      } while (bVar8);
    }
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


