// Function: FUN_00bcb330
// Address: 00bcb330
// Size: 559 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bcb330(undefined8 param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  longlong unaff_RDI;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  if (param_2 == '\0') {
    dVar12 = dVar12 + DAT_023b3490;
  }
  lVar7 = FUN_00e7dae0((dVar12 - _DAT_028024d8) * DAT_02411988);
  lVar10 = 0;
  if (0 < lVar7) {
    lVar10 = lVar7;
  }
  uVar8 = (ulonglong)(lVar10 - lVar7 != 0);
  lVar7 = (((lVar10 - lVar7) - uVar8) / 0xffffffff + uVar8) * 0xffffffff + lVar7;
  lVar10 = 0xffffffff;
  if (lVar7 < 0xffffffff) {
    lVar10 = lVar7;
  }
  uVar11 = (int)lVar7 + (int)((ulonglong)((lVar7 + 0xfffffffe) - lVar10) / 0xffffffff);
  iVar9 = (int)((ulonglong)unaff_RSI >> 0x20);
  if (0 < iVar9) {
    lVar10 = (longlong)(int)unaff_RSI;
    do {
      uVar5 = FUN_00e31390();
      if (uVar5 != uVar11) {
        do {
          bVar2 = -(uVar11 - uVar5) < 0x80000001;
          if (uVar5 <= uVar11) {
            bVar2 = (int)(uVar11 - uVar5) < 0;
          }
          if (bVar2) break;
          bVar3 = FUN_00e314a0(0,uVar11);
        } while ((bVar3 | uVar5 == uVar11) != 1);
      }
      iVar6 = FUN_00e31390();
      do {
        cVar4 = FUN_00e314a0(3,iVar6 + -0x10);
      } while (cVar4 == '\0');
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar9 + (int)unaff_RSI);
  }
  uVar5 = FUN_00e31390();
  if (uVar5 != uVar11) {
    do {
      bVar2 = -(uVar11 - uVar5) < 0x80000001;
      if (uVar5 <= uVar11) {
        bVar2 = (int)(uVar11 - uVar5) < 0;
      }
    } while ((!bVar2) && (cVar4 = FUN_00e314a0(0,uVar11), cVar4 == '\0' && uVar5 != uVar11));
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


