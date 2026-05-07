// Function: FUN_014a89c0
// Address: 014a89c0
// Size: 584 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a8b95) */
/* WARNING: Removing unreachable block (ram,0x014a8ba2) */

undefined8 * FUN_014a89c0(float param_1,double param_2,double param_3)

{
  float fVar1;
  dword dVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong local_58;
  char local_50;
  longlong local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_014a42b0(0,0,DAT_02391090,DAT_02421228);
  if (local_58 == 0) {
    bVar5 = true;
    local_38 = 0;
    dVar2 = MACH_HEADER.filetype;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
    dVar2 = *(dword *)(local_58 + 0xc);
    local_38 = local_58;
  }
  if ((int)dVar2 < 1) {
    bVar4 = false;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    bVar4 = false;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_38 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar3) {
        if ((!bVar4) && (lVar8 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
LAB_014a8b30:
        fVar1 = *(float *)(lVar8 + 0x20);
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar8 = lVar3;
          goto LAB_014a8b30;
        }
        bVar4 = true;
        fVar1 = *(float *)(lVar3 + 0x20);
        lVar8 = lVar3;
      }
      if (((param_1 < fVar1) && (param_2 <= *(double *)(lVar8 + 0x10))) &&
         (*(double *)(lVar8 + 0x10) < param_3)) {
        FUN_00d21140();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_38 + 0xc));
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar5) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


