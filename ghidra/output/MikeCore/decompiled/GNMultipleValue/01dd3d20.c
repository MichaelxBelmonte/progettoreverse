// Function: FUN_01dd3d20
// Address: 01dd3d20
// Size: 906 bytes
// Class: GNMultipleValue


void FUN_01dd3d20(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [16];
  void *pvVar7;
  char in_DL;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  longlong local_68;
  char local_60 [8];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38 [8];
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  if (*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') {
    return;
  }
  uVar13 = FUN_00d23340();
  pvVar7 = (void *)CONCAT71((int7)((ulonglong)param_1 >> 8),local_60[0]);
  pcVar9 = local_38;
  if (local_60[0] != '\0') {
    pcVar9 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar9 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_68 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
    uVar13 = FUN_01dd48a0();
  }
  if (unaff_ESI != -1) {
    lVar12 = unaff_RDI[0x34];
    if ((int)unaff_RDI[0x36] == unaff_ESI) {
LAB_01dd3dc6:
      if (lVar12 == 0) {
        return;
      }
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 4) {
        return;
      }
    }
    else if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      pvVar7 = (void *)(ulonglong)uVar1;
      uVar5 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar5 = uVar1;
      }
      if (3 < (int)uVar1) {
        pvVar7 = *(void **)(lVar12 + 0x10);
        lVar11 = 0;
        do {
          if (*(int *)((longlong)pvVar7 + lVar11 * 4) == unaff_ESI) goto LAB_01dd3dc6;
          lVar11 = lVar11 + 1;
        } while ((int)uVar5 >> 2 != (int)lVar11);
      }
    }
  }
  if ((int)unaff_RDI[0x36] != -1) {
    FUN_01dcf710();
    uVar13 = (**(code **)(*unaff_RDI + 0x618))();
  }
  *(int *)(unaff_RDI + 0x36) = unaff_ESI;
  if (unaff_ESI != -1) {
    FUN_01dcf710();
    uVar13 = (**(code **)(*unaff_RDI + 0x618))();
  }
  lVar12 = unaff_RDI[0x34];
  if (lVar12 == 0) goto LAB_01dd4016;
  if (in_DL == '\0') {
    if (6 < *(int *)(lVar12 + 0x18) + 3U) {
      uVar15 = FUN_01dcf710();
      local_58._0_4_ = fVar14;
      local_58._4_4_ = uVar17;
      uStack_50 = in_XMM1_Dc;
      uStack_4c = in_XMM1_Dd;
      if (7 < *(int *)(unaff_RDI[0x34] + 0x18)) {
        lVar12 = 1;
        do {
          local_48 = uVar15;
          FUN_01dcf710();
          uVar15 = FUN_00d052e0((float)local_48);
          lVar12 = lVar12 + 1;
          iVar2 = *(int *)(unaff_RDI[0x34] + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          pvVar7 = (void *)(longlong)(iVar8 >> 2);
        } while (lVar12 < (longlong)pvVar7);
      }
      local_48 = uVar15;
      FUN_01e436c0();
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uVar15 = FUN_00d05360((float)local_48);
      local_48._0_4_ = (float)local_58;
      local_48._4_4_ = local_58._4_4_;
      local_58 = uVar15;
      FUN_00c8e340((int)uVar15,0);
      fVar14 = (float)local_48;
      uVar17 = local_48._4_4_;
      in_XMM1_Dc = uStack_40;
      in_XMM1_Dd = uStack_3c;
      uVar13 = (**(code **)(*unaff_RDI + 0x618))((float)local_58);
    }
    if (unaff_ESI != -1) {
      lVar12 = unaff_RDI[0x34];
      iVar2 = *(int *)(lVar12 + 0x18);
      FUN_00c8e340(uVar13,1);
      *(int *)(*(longlong *)(lVar12 + 0x10) + (longlong)iVar2) = unaff_ESI;
      goto LAB_01dd3fbd;
    }
  }
  else if (unaff_ESI != -1) {
    uVar1 = *(uint *)(lVar12 + 0x18);
    lVar11 = (longlong)(int)uVar1;
    uVar5 = uVar1 + 3;
    if (-1 < lVar11) {
      uVar5 = uVar1;
    }
    pvVar7 = (void *)(ulonglong)uVar5;
    if (3 < lVar11) {
      pvVar7 = (void *)(ulonglong)(uint)((int)uVar5 >> 2);
      lVar10 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar12 + 0x10) + lVar10 * 4) == unaff_ESI) goto LAB_01dd3fd5;
        lVar10 = lVar10 + 1;
      } while ((int)uVar5 >> 2 != (uint)lVar10);
    }
    FUN_00c8e340(pvVar7,1);
    *(int *)(*(longlong *)(lVar12 + 0x10) + lVar11) = unaff_ESI;
LAB_01dd3fbd:
    FUN_01dcf710();
    uVar13 = (**(code **)(*unaff_RDI + 0x618))();
  }
LAB_01dd3fd5:
  lVar12 = unaff_RDI[0x34];
  if (lVar12 != 0) {
    uVar13 = FUN_00d50b00();
  }
  FUN_00c8e340(uVar13,0);
  _memcpy(pvVar7,(void *)(longlong)*(int *)(lVar12 + 0x18),param_3);
  FUN_00d50b20();
LAB_01dd4016:
  if (unaff_ESI != -1) {
    local_48 = FUN_01dcf710();
    local_58._0_4_ = fVar14;
    local_58._4_4_ = uVar17;
    uStack_50 = in_XMM1_Dc;
    uStack_4c = in_XMM1_Dd;
    uStack_40 = extraout_XMM0_Dc;
    uStack_3c = extraout_XMM0_Dd;
    uVar16 = FUN_01e436c0();
    auVar18._8_4_ = uStack_40;
    auVar18._0_8_ = local_48;
    auVar18._12_4_ = uStack_3c;
    uVar17 = extraout_XMM0_Dc_00;
    uVar13 = extraout_XMM0_Dd_00;
    uVar15 = uVar16;
    if ((float)uVar16 <= (float)local_48) {
      uVar17 = uStack_40;
      uVar13 = uStack_3c;
      uVar15 = local_48;
    }
    auVar4._8_4_ = uVar17;
    auVar4._0_8_ = uVar15;
    auVar4._12_4_ = uVar13;
    auVar18 = blendps(auVar18,auVar4,0xd);
    fVar14 = (float)uVar16 + fVar14 + DAT_02390d00;
    auVar6._4_4_ = local_58._4_4_;
    auVar6._0_4_ = (float)local_58;
    auVar6._8_4_ = uStack_50;
    auVar6._12_4_ = uStack_4c;
    if (fVar14 < (float)local_58 + (float)uVar15 + DAT_02390d00) {
      auVar3._4_4_ = (int)((ulonglong)uVar16 >> 0x20);
      auVar3._0_4_ = (fVar14 - (float)uVar15) + DAT_02390d00;
      auVar3._8_4_ = extraout_XMM0_Dc_00;
      auVar3._12_4_ = extraout_XMM0_Dd_00;
      blendps(auVar6,auVar3,1);
    }
    (**(code **)(*unaff_RDI + 0x518))(auVar18._0_4_);
  }
  (**(code **)(*unaff_RDI + 0x400))();
  return;
}


