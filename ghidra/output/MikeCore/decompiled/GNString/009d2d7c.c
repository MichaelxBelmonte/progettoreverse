// Function: FUN_009d2d7c
// Address: 009d2d7c
// Size: 1314 bytes
// Class: GNString


void FUN_009d2d7c(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_5c;
  ulonglong uVar14;
  
  lVar3 = *(longlong *)PTR____stack_chk_guard_024a9898;
LAB_009d2da5:
  do {
    uVar1 = unaff_RSI - 0x28;
    uVar11 = unaff_RDI;
LAB_009d2dd1:
    unaff_RDI = uVar11;
    uVar11 = unaff_RSI - unaff_RDI;
    if ((ulonglong)(((longlong)uVar11 >> 3) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x009d3247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_009d33ac +
                *(int *)(&DAT_009d33ac + ((longlong)uVar11 >> 3) * 0x3333333333333334)))();
      return;
    }
    if ((longlong)uVar11 < 0x118) {
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar3) {
        FUN_009d3a71(uVar11,param_2);
        return;
      }
      goto LAB_009d33a6;
    }
    uVar16 = unaff_RDI + (uVar11 / 0x50) * 0x28;
    if ((longlong)uVar11 < 0x9c19) {
      local_5c = FUN_009d33c4(param_2,uVar1);
    }
    else {
      local_5c = FUN_009d382a((uVar11 / 0x14 & 0xfffffffffffffff8) * 5 + uVar16,uVar16,uVar1,param_2
                             );
    }
    iVar10 = FUN_009d0902();
    uVar11 = uVar1;
    uVar13 = unaff_RSI - 0x50;
    if (-1 < iVar10) {
      do {
        uVar11 = uVar13;
        if (unaff_RDI == uVar11) {
          uVar16 = unaff_RDI + 0x28;
          iVar10 = FUN_009d0902();
          if (iVar10 < 0) goto LAB_009d2f36;
          if (uVar16 == uVar1) goto LAB_009d32b6;
          uVar16 = unaff_RDI + 0x50;
          goto LAB_009d2eba;
        }
        iVar10 = FUN_009d0902();
        uVar13 = uVar11 - 0x28;
      } while (-1 < iVar10);
      uVar2 = *(undefined4 *)(unaff_RDI + 0x20);
      uVar4 = *(undefined8 *)(unaff_RDI + 0x18);
      uVar5 = *(undefined8 *)(unaff_RDI + 8);
      uVar6 = *(undefined8 *)(unaff_RDI + 0x10);
      *(undefined4 *)(unaff_RDI + 0x20) = *(undefined4 *)(uVar11 + 0x20);
      *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(uVar11 + 0x18);
      uVar7 = *(undefined8 *)(uVar11 + 8);
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(uVar11 + 0x10);
      *(undefined8 *)(unaff_RDI + 8) = uVar7;
      *(undefined4 *)(uVar11 + 0x20) = uVar2;
      *(undefined8 *)(uVar11 + 0x18) = uVar4;
      *(undefined8 *)(uVar11 + 0x10) = uVar6;
      *(undefined8 *)(uVar11 + 8) = uVar5;
      local_5c = local_5c + 1;
    }
    uVar13 = unaff_RDI + 0x28;
    uVar15 = uVar13;
    if (uVar13 < uVar11) {
      while( true ) {
        uVar13 = uVar15 - 0x28;
        do {
          uVar14 = uVar13;
          uVar13 = uVar14 + 0x28;
          iVar10 = FUN_009d0902();
        } while (iVar10 < 0);
        uVar15 = uVar14 + 0x50;
        do {
          uVar17 = uVar11;
          uVar11 = uVar17 - 0x28;
          iVar10 = FUN_009d0902();
        } while (-1 < iVar10);
        if (uVar11 < uVar13) break;
        uVar2 = *(undefined4 *)(uVar14 + 0x48);
        uVar4 = *(undefined8 *)(uVar14 + 0x40);
        uVar5 = *(undefined8 *)(uVar14 + 0x30);
        uVar6 = *(undefined8 *)(uVar14 + 0x38);
        *(undefined4 *)(uVar14 + 0x48) = *(undefined4 *)(uVar17 - 8);
        *(undefined8 *)(uVar14 + 0x40) = *(undefined8 *)(uVar17 - 0x10);
        uVar7 = *(undefined8 *)(uVar17 - 0x20);
        *(undefined8 *)(uVar14 + 0x38) = *(undefined8 *)(uVar17 - 0x18);
        *(undefined8 *)(uVar14 + 0x30) = uVar7;
        *(undefined4 *)(uVar17 - 8) = uVar2;
        *(undefined8 *)(uVar17 - 0x10) = uVar4;
        *(undefined8 *)(uVar17 - 0x18) = uVar6;
        *(undefined8 *)(uVar17 - 0x20) = uVar5;
        local_5c = local_5c + 1;
        if (uVar16 == uVar13) {
          uVar16 = uVar11;
        }
      }
    }
    if ((uVar13 != uVar16) && (iVar10 = FUN_009d0902(), iVar10 < 0)) {
      uVar2 = *(undefined4 *)(uVar13 + 0x20);
      uVar4 = *(undefined8 *)(uVar13 + 0x18);
      uVar5 = *(undefined8 *)(uVar13 + 8);
      uVar6 = *(undefined8 *)(uVar13 + 0x10);
      *(undefined4 *)(uVar13 + 0x20) = *(undefined4 *)(uVar16 + 0x20);
      *(undefined8 *)(uVar13 + 0x18) = *(undefined8 *)(uVar16 + 0x18);
      uVar7 = *(undefined8 *)(uVar16 + 8);
      *(undefined8 *)(uVar13 + 0x10) = *(undefined8 *)(uVar16 + 0x10);
      *(undefined8 *)(uVar13 + 8) = uVar7;
      *(undefined4 *)(uVar16 + 0x20) = uVar2;
      *(undefined8 *)(uVar16 + 0x18) = uVar4;
      *(undefined8 *)(uVar16 + 0x10) = uVar6;
      *(undefined8 *)(uVar16 + 8) = uVar5;
      local_5c = local_5c + 1;
    }
    if (local_5c != 0) goto LAB_009d31d0;
    cVar8 = FUN_009d3bc1();
    cVar9 = FUN_009d3bc1();
    if (cVar9 == '\0') break;
    unaff_RSI = uVar13;
    if (cVar8 != '\0') {
LAB_009d32b6:
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar3) {
        return;
      }
LAB_009d33a6:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
  uVar11 = uVar13 + 0x28;
  if (cVar8 == '\0') {
LAB_009d31d0:
    lVar12 = ((longlong)(unaff_RSI - uVar13) >> 3) * -0x3333333333333333;
    if (lVar12 <= ((longlong)(uVar13 - unaff_RDI) >> 3) * -0x3333333333333333) {
      FUN_009d2d7c(lVar12,param_2);
      unaff_RSI = uVar13;
      goto LAB_009d2da5;
    }
    FUN_009d2d7c(lVar12,param_2);
    uVar11 = uVar13 + 0x28;
  }
  goto LAB_009d2dd1;
LAB_009d2eba:
  iVar10 = FUN_009d0902();
  if (iVar10 < 0) goto LAB_009d2ed8;
  uVar16 = uVar16 + 0x28;
  if (unaff_RSI == uVar16) goto LAB_009d32b6;
  goto LAB_009d2eba;
LAB_009d2ed8:
  uVar2 = *(undefined4 *)(uVar16 - 8);
  uVar4 = *(undefined8 *)(uVar16 - 0x10);
  uVar5 = *(undefined8 *)(uVar16 - 0x20);
  uVar6 = *(undefined8 *)(uVar16 - 0x18);
  *(undefined4 *)(uVar16 - 8) = *(undefined4 *)(unaff_RSI - 8);
  *(undefined8 *)(uVar16 - 0x10) = *(undefined8 *)(unaff_RSI - 0x10);
  uVar7 = *(undefined8 *)(unaff_RSI - 0x20);
  *(undefined8 *)(uVar16 - 0x18) = *(undefined8 *)(unaff_RSI - 0x18);
  *(undefined8 *)(uVar16 - 0x20) = uVar7;
  *(undefined4 *)(unaff_RSI - 8) = uVar2;
  *(undefined8 *)(unaff_RSI - 0x10) = uVar4;
  *(undefined8 *)(unaff_RSI - 0x18) = uVar6;
  *(undefined8 *)(unaff_RSI - 0x20) = uVar5;
LAB_009d2f36:
  uVar13 = uVar1;
  if (uVar16 == uVar1) goto LAB_009d32b6;
  while( true ) {
    uVar11 = uVar16 - 0x28;
    do {
      uVar15 = uVar11;
      uVar11 = uVar15 + 0x28;
      iVar10 = FUN_009d0902();
    } while (-1 < iVar10);
    uVar16 = uVar15 + 0x50;
    do {
      uVar14 = uVar13;
      uVar13 = uVar14 - 0x28;
      iVar10 = FUN_009d0902();
    } while (iVar10 < 0);
    if (uVar13 <= uVar11) break;
    uVar2 = *(undefined4 *)(uVar15 + 0x48);
    uVar4 = *(undefined8 *)(uVar15 + 0x40);
    uVar5 = *(undefined8 *)(uVar15 + 0x30);
    uVar6 = *(undefined8 *)(uVar15 + 0x38);
    *(undefined4 *)(uVar15 + 0x48) = *(undefined4 *)(uVar14 - 8);
    *(undefined8 *)(uVar15 + 0x40) = *(undefined8 *)(uVar14 - 0x10);
    uVar7 = *(undefined8 *)(uVar14 - 0x20);
    *(undefined8 *)(uVar15 + 0x38) = *(undefined8 *)(uVar14 - 0x18);
    *(undefined8 *)(uVar15 + 0x30) = uVar7;
    *(undefined4 *)(uVar14 - 8) = uVar2;
    *(undefined8 *)(uVar14 - 0x10) = uVar4;
    *(undefined8 *)(uVar14 - 0x18) = uVar6;
    *(undefined8 *)(uVar14 - 0x20) = uVar5;
  }
  goto LAB_009d2dd1;
}


