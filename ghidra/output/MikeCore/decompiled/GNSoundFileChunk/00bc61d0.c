// Function: FUN_00bc61d0
// Address: 00bc61d0
// Size: 1096 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc62dd) */
/* WARNING: Removing unreachable block (ram,0x00bc62e6) */
/* WARNING: Removing unreachable block (ram,0x00bc63a2) */
/* WARNING: Removing unreachable block (ram,0x00bc63ab) */
/* WARNING: Removing unreachable block (ram,0x00bc6337) */
/* WARNING: Removing unreachable block (ram,0x00bc6360) */
/* WARNING: Removing unreachable block (ram,0x00bc6339) */
/* WARNING: Removing unreachable block (ram,0x00bc6362) */
/* WARNING: Removing unreachable block (ram,0x00bc6547) */
/* WARNING: Removing unreachable block (ram,0x00bc6570) */
/* WARNING: Removing unreachable block (ram,0x00bc6549) */
/* WARNING: Removing unreachable block (ram,0x00bc6572) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc61d0(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  int local_58;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  do {
    iVar4 = FUN_00e31390();
    if (iVar4 != 0) break;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*pcVar3)();
    (**(code **)(*DAT_028a5710 + 0x368))();
    lVar8 = DAT_028a5700;
    if (DAT_028a5700 != 0) {
      FUN_00d50b00();
    }
    FUN_00d243f0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      local_58 = -1;
      while (local_58 = local_58 + 1, local_58 < *(int *)((longlong)puVar5 + 0xc)) {
        FUN_00d21140();
      }
      FUN_00bcdaf0();
    }
    (**(code **)(*DAT_028a5710 + 0x378))();
    dVar10 = (double)FUN_00e7d6f0();
    lVar7 = FUN_00e7dae0(((dVar10 - _DAT_02765b70) - _DAT_028024d8) * DAT_02411988);
    lVar8 = 0;
    if (0 < lVar7) {
      lVar8 = lVar7;
    }
    uVar9 = (ulonglong)(lVar8 - lVar7 != 0);
    lVar7 = (((lVar8 - lVar7) - uVar9) / 0xffffffff + uVar9) * 0xffffffff + lVar7;
    lVar8 = 0xffffffff;
    if (lVar7 < 0xffffffff) {
      lVar8 = lVar7;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (lVar7 + 0xfffffffe) - lVar8;
    FUN_00e7dae0((dVar10 - _DAT_028024d8) * DAT_02411988,
                 SUB168(auVar1 * ZEXT816(0x8000000080000001),8));
    if (puVar5 == (undefined8 *)0x0) {
LAB_00bc670c:
      FUN_00d216c0();
      FUN_00d216c0();
      FUN_00e8f8c0();
      bVar2 = true;
      FUN_00dee5a0(DAT_023934c8);
    }
    else {
      local_58 = -1;
      do {
        do {
          local_58 = local_58 + 1;
          if (*(int *)((longlong)puVar5 + 0xc) <= local_58) {
            FUN_00bcdaf0();
            goto LAB_00bc670c;
          }
          iVar4 = FUN_00b88630();
        } while (iVar4 == 10);
        FUN_00bc7190();
        iVar4 = FUN_00e31390();
      } while (iVar4 == 0);
      FUN_00bcdaf0();
      bVar2 = false;
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  } while (bVar2);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


