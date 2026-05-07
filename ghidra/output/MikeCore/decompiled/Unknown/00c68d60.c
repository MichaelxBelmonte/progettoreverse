// Function: FUN_00c68d60
// Address: 00c68d60
// Size: 1478 bytes
// Class: Unknown
// String references:
//   "compressed frame too big: %u vs. %u\n"


undefined8 FUN_00c68d60(undefined4 param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort uVar11;
  longlong lVar12;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  int local_64;
  int local_60;
  int local_5c;
  
  uVar2 = *(undefined8 *)(unaff_RSI + 4);
  uVar3 = *unaff_RSI;
  uVar4 = unaff_RSI[1];
  uVar5 = unaff_RSI[2];
  uVar6 = unaff_RSI[3];
  sVar1 = *(short *)(unaff_RDI + 8);
  iVar14 = (int)sVar1;
  uVar11 = (ushort)(iVar14 - 0x10U);
  uVar11 = uVar11 << 0xe | uVar11 >> 2;
  uVar9 = 0xffffffce;
  if ((uVar11 < 5) && (uVar11 != 3)) {
    uVar13 = 2;
    if (sVar1 != 0x20) {
      uVar13 = (uint)(0x17 < sVar1);
    }
    iVar8 = *(int *)(&DAT_0000205c + unaff_RDI);
    uVar16 = uVar3;
    switch(iVar14 << 0x1e | iVar14 - 0x10U >> 2) {
    case 0:
      uVar16 = FUN_00c6cfd0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            param_4,2);
      break;
    case 1:
      uVar16 = FUN_00c6d170(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            param_4,2);
      break;
    case 2:
      uVar16 = FUN_00c6d2a0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            param_4,2);
      break;
    case 4:
      uVar16 = FUN_00c6d560(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            param_4,2);
    }
    uVar16 = FUN_00c667a0(uVar16,0xc);
    uVar16 = FUN_00c667a0(uVar16,4);
    if (iVar8 != param_4) {
      uVar16 = FUN_00c667a0(uVar16,0x20);
    }
    local_5c = iVar14 + uVar13 * -8 + 1;
    uVar16 = FUN_00c667a0(uVar16,8);
    uVar16 = FUN_00c667a0(uVar16,8);
    uVar16 = FUN_00c667a0(uVar16,8);
    uVar16 = FUN_00c667a0(uVar16,8);
    lVar12 = (param_3 & 0xffffffff) * 0x200;
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,8);
    uVar16 = FUN_00c667a0(uVar16,8);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    uVar16 = FUN_00c667a0(uVar16,0x10);
    FUN_00c667a0(uVar16,0x10);
    if ((0x17 < sVar1) && (param_4 * 2 != 0)) {
      uVar15 = 0;
      do {
        FUN_00c667a0(uVar13 * 8,uVar13 << 4);
        uVar15 = uVar15 + 2;
      } while (uVar15 < (uint)(param_4 * 2));
    }
    iVar14 = local_5c;
    FUN_00c6b580(unaff_RDI + lVar12 + 0x130,param_4,8,local_5c);
    FUN_00c65990(0xe,0x28,param_4,param_4);
    uVar9 = FUN_00c65f80(param_4,unaff_RSI,iVar14,&local_64);
    if ((int)uVar9 == 0) {
      FUN_00c6b580("/System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork" +
                   unaff_RDI + lVar12 + 0x28,param_4,8,iVar14);
      FUN_00c65990(0xe,0x28,param_4,param_4);
      uVar9 = FUN_00c65f80(param_4,unaff_RSI,iVar14,&local_60);
      if ((int)uVar9 == 0) {
        iVar8 = (uint)(iVar8 != param_4) * 0x20;
        uVar7 = param_4 * 2;
        pcVar10 = (char *)(ulonglong)uVar7;
        iVar14 = 0x140;
        if (0x17 < sVar1) {
          iVar14 = uVar13 * 8 * uVar7 + 0x140;
        }
        uVar13 = (int)*(short *)(unaff_RDI + 8) * uVar7 + iVar8 + 0x10;
        if ((uint)(iVar14 + iVar8 + local_64 + local_60) < uVar13) {
          iVar14 = FUN_00c66700();
          iVar8 = FUN_00c66700();
          if ((uint)(iVar14 - iVar8) < uVar13) {
            return 0;
          }
          _printf(pcVar10,(ulonglong)uVar13);
        }
        *(undefined8 *)(unaff_RSI + 4) = uVar2;
        *unaff_RSI = uVar3;
        unaff_RSI[1] = uVar4;
        unaff_RSI[2] = uVar5;
        unaff_RSI[3] = uVar6;
        FUN_00c68b40(param_1,param_2,param_4);
        uVar9 = 0;
      }
    }
  }
  return uVar9;
}


