// Function: FUN_01e49f80
// Address: 01e49f80
// Size: 934 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e4a07b) */
/* WARNING: Removing unreachable block (ram,0x01e4a084) */
/* WARNING: Removing unreachable block (ram,0x01e4a12b) */
/* WARNING: Removing unreachable block (ram,0x01e4a138) */
/* WARNING: Removing unreachable block (ram,0x01e4a306) */
/* WARNING: Removing unreachable block (ram,0x01e4a313) */

undefined8 * FUN_01e49f80(undefined8 param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  pcVar5 = DAT_02572370;
  local_38 = (undefined8 *)0x0;
  bVar4 = false;
  plVar10 = (longlong *)0x0;
  bVar2 = false;
  do {
    if (plVar10 == unaff_RSI) {
      bVar3 = bVar2;
      if ((!bVar2) && (unaff_RSI != (longlong *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (unaff_RSI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uStack_50 = in_XMM0_Qb;
    local_58 = (undefined1  [8])param_1;
    plVar10 = unaff_RSI;
    bVar2 = bVar3;
    while( true ) {
      (**(code **)(*plVar10 + 0x498))();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_48 == (longlong *)0x0) break;
      plVar7 = plVar10;
      if ((longlong *)plVar10[6] == local_48) {
        uVar11 = (**(code **)(*plVar10 + 0x4d8))();
        uVar12 = (**(code **)(*plVar10 + 0x4d8))();
        local_88 = (float)uVar11;
        fStack_84 = (float)((ulonglong)uVar11 >> 0x20);
        fStack_80 = (float)extraout_XMM0_Qb_01;
        fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar16._0_4_ = local_88 + (float)local_58._0_4_;
        auVar16._4_4_ = fStack_84 + (float)local_58._4_4_;
        auVar16._8_4_ = fStack_80 + (float)uStack_50;
        auVar16._12_4_ = fStack_7c + uStack_50._4_4_;
        auVar14._0_4_ = (float)uVar12 + (float)local_58._0_4_;
        auVar14._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + (float)local_58._4_4_;
        auVar14._8_4_ = (float)extraout_XMM0_Qb_02 + (float)uStack_50;
        auVar14._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) + uStack_50._4_4_;
        _local_58 = blendps(auVar14,auVar16,0xd);
      }
      else {
        do {
          cVar6 = (**(code **)(*plVar7 + 0x4b8))();
          plVar9 = local_48;
          if (cVar6 != '\0') break;
          uVar11 = (**(code **)(*plVar7 + 0x4d8))();
          uVar12 = (**(code **)(*plVar7 + 0x4d8))();
          local_88 = (float)uVar11;
          fStack_84 = (float)((ulonglong)uVar11 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb;
          fStack_7c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar15._0_4_ = local_88 + (float)local_58._0_4_;
          auVar15._4_4_ = fStack_84 + (float)local_58._4_4_;
          auVar15._8_4_ = fStack_80 + (float)uStack_50;
          auVar15._12_4_ = fStack_7c + uStack_50._4_4_;
          auVar13._0_4_ = (float)uVar12 + (float)local_58._0_4_;
          auVar13._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + (float)local_58._4_4_;
          auVar13._8_4_ = (float)extraout_XMM0_Qb_00 + (float)uStack_50;
          auVar13._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + uStack_50._4_4_;
          _local_58 = blendps(auVar13,auVar15,0xd);
          plVar8 = (longlong *)plVar7[6];
          if ((longlong *)plVar7[6] == plVar7) {
            plVar8 = plVar7;
          }
          plVar7 = plVar8;
        } while (plVar8 != (longlong *)0x0);
        do {
          cVar6 = (**(code **)(*plVar9 + 0x4b8))();
          if (cVar6 != '\0') break;
          uVar11 = (**(code **)(*plVar9 + 0x4d8))();
          uVar12 = (**(code **)(*plVar9 + 0x4d8))();
          local_88 = (float)uVar11;
          fStack_84 = (float)((ulonglong)uVar11 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb_03;
          fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          auVar17._0_4_ = (float)local_58._0_4_ - (float)uVar12;
          auVar17._4_4_ = (float)local_58._4_4_ - (float)((ulonglong)uVar12 >> 0x20);
          auVar17._8_4_ = (float)uStack_50 - (float)extraout_XMM0_Qb_04;
          auVar17._12_4_ = uStack_50._4_4_ - (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
          auVar1._4_4_ = (float)local_58._4_4_ - fStack_84;
          auVar1._0_4_ = (float)local_58._0_4_ - local_88;
          auVar1._8_4_ = (float)uStack_50 - fStack_80;
          auVar1._12_4_ = uStack_50._4_4_ - fStack_7c;
          _local_58 = blendps(auVar17,auVar1,0xd);
          plVar7 = (longlong *)plVar9[6];
          if ((longlong *)plVar9[6] == plVar9) {
            plVar7 = plVar9;
          }
          plVar9 = plVar7;
        } while (plVar7 != (longlong *)0x0);
      }
      if (local_48 == plVar10) {
        plVar7 = plVar10;
        bVar3 = bVar2;
        if (!bVar2) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        FUN_00d50b00();
        plVar7 = local_48;
        bVar3 = true;
        if ((bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
      }
      bVar2 = bVar3;
      FUN_00d50b20();
      plVar10 = plVar7;
    }
    if ((plVar10 == unaff_RSI) || (*(char *)((longlong)plVar10 + 0xa9) == '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar4) && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &DAT_02572358;
      (*pcVar5)();
      bVar4 = true;
    }
    local_40 = '\0';
    FUN_00d21140();
    local_48 = plVar10;
  } while( true );
}


