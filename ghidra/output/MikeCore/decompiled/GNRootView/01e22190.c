// Function: FUN_01e22190
// Address: 01e22190
// Size: 1166 bytes
// Class: GNRootView


/* WARNING: Removing unreachable block (ram,0x01e221d8) */
/* WARNING: Removing unreachable block (ram,0x01e221e1) */
/* WARNING: Removing unreachable block (ram,0x01e2237a) */

void FUN_01e22190(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong unaff_RDI;
  float *pfVar15;
  int iVar16;
  undefined8 unaff_R15;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  longlong local_90;
  char local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  char local_68;
  float local_54;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  uVar17 = FUN_01cb4790();
  if (local_50 == (longlong *)0x0) {
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = local_50;
    if (local_48 == '\0') {
      uVar17 = FUN_00d50b00();
      local_74 = 0;
    }
    else {
      local_74 = 0;
    }
  }
  local_80 = plVar13;
  if (*(longlong *)(unaff_RDI + 0x168) == 0) {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar17 = FUN_00c92160();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x168);
    if (puVar1 == puVar11) {
      uVar17 = FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x168) = puVar11;
      if (puVar1 != (undefined8 *)0x0) {
        uVar17 = FUN_00d50b20();
      }
    }
  }
  else {
    uVar17 = FUN_00c8e340(uVar17,0);
  }
  local_a8._0_8_ = (**(code **)(*plVar13 + 0x3c8))(uVar17,0);
  local_a8._8_4_ = extraout_XMM0_Dc;
  local_a8._12_4_ = extraout_XMM0_Dd;
  uVar5 = (**(code **)(*plVar13 + 0x3c8))((int)local_a8._0_8_,1);
  auVar4._8_4_ = extraout_XMM0_Dc_00;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = extraout_XMM0_Dd_00;
  local_a8 = insertps(local_a8,auVar4,0x10);
  local_54 = DAT_023b169c;
  bVar8 = false;
  local_40 = (longlong *)0x0;
  iVar16 = 0;
  do {
    iVar10 = FUN_01d5b230();
    uVar17 = local_74;
    plVar13 = local_80;
    if (iVar10 <= iVar16) {
      uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x168) + 0x18);
      if (0xf < (int)uVar2) {
        uVar2 = uVar2 >> 4;
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
        if ((ulonglong)uVar2 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          pfVar15 = (float *)(lVar3 + 0x38);
          uVar14 = 0;
          do {
            pfVar15[-0xc] = local_54;
            pfVar15[-8] = local_54;
            pfVar15[-4] = local_54;
            *pfVar15 = local_54;
            uVar14 = uVar14 + 4;
            pfVar15 = pfVar15 + 0x10;
          } while ((uVar2 & 0xfffffffc) != uVar14);
        }
        if ((ulonglong)(uVar2 & 3) != 0) {
          lVar12 = 0;
          do {
            *(float *)(lVar3 + uVar14 * 0x10 + 8 + lVar12) = local_54;
            lVar12 = lVar12 + 0x10;
          } while ((ulonglong)(uVar2 & 3) << 4 != lVar12);
        }
      }
      if ((bVar8) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar17 == '\0' && plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Da,iVar16);
    if (local_50 == local_40) {
      if ((bVar8) || (local_50 == (longlong *)0x0)) {
joined_r0x01e22360:
        plVar13 = local_40;
        bVar9 = bVar8;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar13 = local_40;
        bVar9 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e22348;
        }
      }
    }
    else {
      plVar13 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar8) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_50;
LAB_01e22348:
          bVar8 = true;
          goto joined_r0x01e22360;
        }
      }
      else {
        bVar9 = true;
        if ((bVar8) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar8 = bVar9;
    FUN_01d65230();
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_50;
    local_90 = *(longlong *)(unaff_RDI + 0x158);
    local_88 = '\0';
    local_b8 = (undefined1  [8])
               (**(code **)(*local_80 + 0x5d0))(*(undefined1 *)(unaff_RDI + 0x178),&local_90);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = in_XMM0_Dd;
    if (SUB84(local_b8,0) < (float)param_1) {
      _local_b8 = blendps(_local_b8,auVar7,1);
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x168);
    iVar10 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340((float)param_1,1);
    fVar18 = (float)local_b8._0_4_;
    if ((float)local_b8._0_4_ <= local_54) {
      fVar18 = local_54;
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10);
    *puVar1 = local_a8._0_8_;
    *(undefined4 *)(puVar1 + 1) = local_b8._0_4_;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_b8._4_4_;
    auVar6._4_4_ = (float)local_b8._4_4_ + local_a8._4_4_;
    auVar6._0_4_ = (float)local_b8._0_4_ + local_a8._0_4_;
    auVar6._8_4_ = fStack_b0 + local_a8._8_4_;
    auVar6._12_4_ = fStack_ac + local_a8._12_4_;
    local_a8 = blendps(local_a8,auVar6,2);
    iVar16 = iVar16 + 1;
    local_54 = fVar18;
    local_40 = plVar13;
  } while( true );
}


