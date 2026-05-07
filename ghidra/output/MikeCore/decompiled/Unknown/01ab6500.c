// Function: FUN_01ab6500
// Address: 01ab6500
// Size: 1044 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab6500(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  longlong *unaff_RDI;
  undefined4 uVar13;
  float fVar15;
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong local_48;
  char local_40;
  
  lVar1 = unaff_RDI[0x2d];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d23310();
  plVar7 = local_70;
  pcVar11 = &local_80;
  if (local_68[0] != '\0') {
    pcVar11 = local_68;
  }
  local_80 = local_68[0];
  *pcVar11 = '\0';
  if ((local_68[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (plVar7 == (longlong *)0x0) goto LAB_01ab6773;
    FUN_00d50b00();
  }
  else if (plVar7 == (longlong *)0x0) {
LAB_01ab6773:
    bVar6 = true;
    if (unaff_RDI[0x2d] == 0) {
      puVar9 = (undefined8 *)0x0;
      lVar10 = unaff_RDI[0x2d];
    }
    else {
      unaff_RDI[0x2d] = 0;
      FUN_00d50b20();
      puVar9 = (undefined8 *)0x0;
      lVar10 = unaff_RDI[0x2d];
    }
    goto joined_r0x01ab67b6;
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025dfa10;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  FUN_00d500e0();
  if (unaff_RDI[0x2a] == 0) {
LAB_01ab6717:
    iVar12 = FUN_014148b0();
    if (iVar12 < 1) goto LAB_01ab67bd;
    puVar2 = (undefined8 *)unaff_RDI[0x2d];
    if (puVar2 == puVar9) goto LAB_01ab67fd;
    FUN_00d50b00();
    unaff_RDI[0x2d] = (longlong)puVar9;
    if (puVar2 == (undefined8 *)0x0) goto LAB_01ab67fd;
    FUN_00d50b20();
  }
  else {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = unaff_RDI[0x2a];
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar10 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)(local_60 + 0xc) <= iVar12) break;
      local_70 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar10 * 8);
      FUN_01415010();
      local_40 = 0;
      lVar10 = CONCAT71(uStack_7f,local_80);
      if (local_78 == '\0') {
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_40 = '\x01';
      local_48 = lVar10;
      FUN_01414910();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01aca120();
    if (puVar9 != (undefined8 *)0x0) goto LAB_01ab6717;
LAB_01ab67bd:
    if (unaff_RDI[0x2d] == 0) {
LAB_01ab67fd:
      bVar6 = false;
      lVar10 = unaff_RDI[0x2d];
      goto joined_r0x01ab67b6;
    }
    unaff_RDI[0x2d] = 0;
    FUN_00d50b20();
  }
  bVar6 = false;
  lVar10 = unaff_RDI[0x2d];
joined_r0x01ab67b6:
  if ((lVar10 != 0) || (lVar1 != 0)) {
    (**(code **)(*unaff_RDI + 0x640))();
    plVar8 = local_70;
    FUN_01e3f820();
    uVar13 = (**(code **)(*plVar8 + 0x3d0))();
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar14._8_8_ = in_XMM1_Qb;
    auVar14._0_8_ = param_2;
    uVar3 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
    fVar15 = (float)((ulonglong)param_2 >> 0x20);
    auVar16 = ZEXT416(_DAT_023945e0 & (uint)(DAT_0240b530 * fVar15)) | _DAT_023945f0;
    auVar16._0_4_ = auVar16._0_4_ + DAT_0240b530 * fVar15;
    auVar16 = roundss(ZEXT816(0),auVar16,0xb);
    fVar5 = DAT_0241fd58;
    if (auVar16._0_4_ <= DAT_0241fd58) {
      fVar5 = auVar16._0_4_;
    }
    auVar4._4_4_ = fVar15;
    auVar4._0_4_ = fVar15 - fVar5;
    auVar4._8_4_ = uVar3;
    auVar4._12_4_ = uVar3;
    auVar14 = insertps(auVar14,auVar4,0x10);
    (**(code **)(*unaff_RDI + 0x618))(uVar13,auVar14._0_8_);
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar6 && puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


