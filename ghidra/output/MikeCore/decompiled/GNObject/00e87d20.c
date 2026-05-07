// Function: FUN_00e87d20
// Address: 00e87d20
// Size: 889 bytes
// Class: GNObject


void FUN_00e87d20(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  FUN_00e316f0();
  iVar2 = DAT_02802628 + 1;
  if (0 < DAT_02802628) {
    DAT_02802628 = iVar2;
    FUN_00e31730();
    return;
  }
  uVar7 = DAT_02802630 | DAT_02802634;
  DAT_02802628 = iVar2;
  if (uVar7 == 0) {
    bVar1 = FUN_00da5b80();
    DAT_02802634 = (uint)bVar1 * 2 - 1;
  }
  if (DAT_02802634 != 0xffffffff) {
    if (DAT_02802630 == 0) {
      FUN_00e880e0();
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    else {
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    if (DAT_02802630 == 0) {
      FUN_00e99bf0();
      DAT_028025f8 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802600 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802608 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802610 = FUN_00e38c70();
      FUN_00e99bf0();
      DAT_02802618 = FUN_00e38c70();
      DAT_02802630 = 1;
      FUN_000064f0();
      FUN_000198f0();
      FUN_00020b20();
      FUN_0001b450();
      FUN_000191c0();
      FUN_00021930();
      FUN_0001e9a0();
      FUN_0001fe70();
      plVar6 = (longlong *)FUN_0027a220();
      (**(code **)(*plVar6 + 0x10))();
      FUN_00e84f80();
    }
    DAT_02802630 = 2;
    FUN_00e8cc30();
    FUN_00d7e120();
    FUN_00d7e380();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if (lVar3 != 0) {
          FUN_00e875e0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025736a8;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    (*DAT_025736c0)();
    FUN_00d50b00();
    DAT_028025f0 = puVar4;
    FUN_00da57f0();
    FUN_00d403f0();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
          FUN_00c88ec0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    DAT_02802630 = 3;
    for (iVar2 = 0; iVar8 = FUN_00e38d70(), iVar2 < iVar8; iVar2 = iVar2 + 1) {
      pcVar5 = (code *)FUN_00e38d90();
      (*pcVar5)();
    }
    DAT_02802630 = 4;
    plVar6 = (longlong *)FUN_0027a220();
    (**(code **)(*plVar6 + 0x18))();
    FUN_00e31730();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(uVar7);
}


