// Function: FUN_00c6a000
// Address: 00c6a000
// Size: 785 bytes
// Class: Unknown
// String references:
//   "That ain't right! (%u)\n"


undefined8 FUN_00c6a000(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar9;
  uint local_res18;
  uint local_res24;
  
  uVar2 = *param_1 / local_res18;
  FUN_00c66620(param_2,*(undefined4 *)(&DAT_00002060 + unaff_RDI));
  if (local_res24 == 1) {
    FUN_00c667a0();
    FUN_00c667a0();
    uVar3 = FUN_00c69340(1);
    iVar5 = (int)uVar3;
  }
  else {
    if (local_res24 != 2) {
      iVar5 = *(short *)(unaff_RDI + 8) + 7;
      if (-1 < iVar5) {
        iVar5 = (int)*(short *)(unaff_RDI + 8);
      }
      uVar6 = iVar5 + 7 >> 3;
      uVar9 = 0;
      while (uVar9 < local_res24) {
        pcVar8 = (char *)(ulonglong)(uVar9 * 3);
        bVar4 = (byte)(uVar9 * 3);
        uVar1 = ((uint)(7L << (bVar4 & 0x3f)) &
                *(uint *)(&DAT_023dbf20 + (ulonglong)(local_res24 - 1) * 4)) >> (bVar4 & 0x3f);
        FUN_00c667a0(pcVar8,3);
        uVar7 = uVar6;
        if (uVar1 == 3) {
          FUN_00c667a0();
          uVar3 = FUN_00c69340(local_res24,unaff_RSI,uVar9,uVar2);
          uVar9 = uVar9 + 1;
        }
        else if (uVar1 == 1) {
          FUN_00c667a0();
          uVar3 = FUN_00c67f80(local_res24,unaff_RSI,uVar9,uVar2);
          uVar9 = uVar9 + 2;
          uVar7 = uVar6 * 2;
        }
        else {
          if (uVar1 != 0) {
            _printf(pcVar8);
            return 0xffffffce;
          }
          FUN_00c667a0();
          uVar3 = FUN_00c69340(local_res24,unaff_RSI,uVar9,uVar2);
          uVar9 = uVar9 + 1;
        }
        unaff_RSI = unaff_RSI + (ulonglong)uVar7;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      goto LAB_00c6a2a9;
    }
    FUN_00c667a0();
    FUN_00c667a0();
    if (*(char *)(unaff_RDI + 10) == '\0') {
      uVar3 = FUN_00c67f80(2);
      iVar5 = (int)uVar3;
    }
    else {
      uVar3 = FUN_00c68d60(2);
      iVar5 = (int)uVar3;
    }
  }
  if (iVar5 != 0) {
    return uVar3;
  }
LAB_00c6a2a9:
  FUN_00c667a0();
  FUN_00c66720();
  uVar2 = FUN_00c66700();
  uVar2 = uVar2 >> 3;
  *param_1 = uVar2;
  *(uint *)(&DAT_00002050 + unaff_RDI) = *(int *)(&DAT_00002050 + unaff_RDI) + uVar2;
  if (uVar2 < *(uint *)(&DAT_00002058 + unaff_RDI)) {
    uVar2 = *(uint *)(&DAT_00002058 + unaff_RDI);
  }
  *(uint *)(&DAT_00002058 + unaff_RDI) = uVar2;
  return 0;
}


