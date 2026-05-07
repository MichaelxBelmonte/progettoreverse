// Function: FUN_01f125d0
// Address: 01f125d0
// Size: 879 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x01f1260a) */
/* WARNING: Removing unreachable block (ram,0x01f12613) */
/* WARNING: Removing unreachable block (ram,0x01f12814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f125d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  undefined8 in_XMM1_Qb;
  undefined4 uVar18;
  undefined1 auVar16 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  uVar18 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  FUN_01cb4790();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar12 = FUN_00c92160();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x168);
  if (puVar1 == puVar6) {
    uVar12 = FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x168) = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      uVar12 = FUN_00d50b20();
    }
  }
  uVar10 = (**(code **)(*local_40 + 0x3c8))(uVar12,1);
  uVar12 = FUN_01e3f820();
  uVar12 = (**(code **)(*local_40 + 0x3c8))(uVar12,1);
  fVar11 = (float)(**(code **)(*local_40 + 0x3c8))(uVar12,3);
  auVar14._4_4_ = fVar17;
  auVar14._0_4_ = fVar17;
  auVar14._8_4_ = uVar18;
  auVar14._12_4_ = uVar18;
  auVar16._4_12_ = auVar14._4_12_;
  auVar16._0_4_ = (fVar17 - (float)uVar12) - fVar11;
  local_88 = insertps(_DAT_0241b5f0,uVar10,0x10);
  local_98 = insertps(_DAT_0241b5f0,auVar16,0x10);
  bVar3 = false;
  iVar9 = 0;
  plVar7 = (longlong *)0x0;
  do {
    iVar5 = FUN_01d5b230();
    if (iVar5 <= iVar9) {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar3) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Qa,iVar9);
    if (local_40 == plVar7) {
      if ((bVar3) || (local_40 == (longlong *)0x0)) {
joined_r0x01f127fc:
        plVar8 = plVar7;
        bVar4 = bVar3;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar8 = plVar7;
        bVar4 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f127e7;
        }
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_40;
LAB_01f127e7:
          bVar3 = true;
          goto joined_r0x01f127fc;
        }
      }
      else {
        bVar4 = true;
        if ((bVar3) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar3 = bVar4;
    FUN_01d65230();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    auVar13._0_8_ = FUN_01d43d10();
    auVar13._8_8_ = extraout_XMM0_Qb;
    auVar14 = roundss(auVar13,auVar13,9);
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = auVar14._0_4_ + DAT_02390d28;
    uVar12 = auVar15._0_8_;
    if (local_40 != (longlong *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x168);
    iVar5 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar12,1);
    local_98 = blendps(local_98,auVar15,1);
    puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar5);
    *puVar1 = local_88._0_8_;
    puVar1[1] = local_98._0_8_;
    local_88._0_4_ = local_88._0_4_ + auVar15._0_4_;
    iVar9 = iVar9 + 1;
    plVar7 = plVar8;
  } while( true );
}


