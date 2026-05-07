// Function: FUN_01d54d20
// Address: 01d54d20
// Size: 1164 bytes
// Class: GNString


void FUN_01d54d20(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 local_c0 [8];
  undefined1 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  float local_70;
  float local_6c;
  longlong local_68;
  char local_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_3c;
  longlong local_38;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar4 == 0) {
LAB_01d54d68:
    local_38 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
  }
  else {
    FUN_00d50b00();
    local_38 = *(longlong *)(unaff_RDI + 0x10);
    if (local_38 == 0) goto LAB_01d54d68;
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar8 = FUN_01d553b0();
    lVar1 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b8 = 1;
    FUN_01d534b0(uVar8,local_c0);
    lVar3 = local_a0;
    if (lVar4 == local_a0) {
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      bVar5 = lVar4 != 0;
      lVar4 = lVar3;
      if (bVar5) {
        FUN_00d50b20();
      }
    }
    else {
      bVar5 = lVar4 != 0;
      lVar4 = lVar3;
      if (bVar5) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x20) == 0) goto LAB_01d54f6c;
  FUN_00d50b00();
  uVar8 = FUN_01d553b0();
  local_58 = (float)local_68;
  uStack_54 = (undefined4)((ulonglong)local_68 >> 0x20);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  lVar1 = local_38;
  local_a8 = 1;
  FUN_01d534b0(uVar8,local_b0);
  if (lVar1 == local_a0) {
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
LAB_01d54f56:
    lVar1 = CONCAT44(uStack_54,local_58);
  }
  else {
    if (local_98 != '\0') {
      if (local_38 == 0) {
        local_38 = local_a0;
      }
      else {
        FUN_00d50b20();
        local_38 = local_a0;
      }
      goto LAB_01d54f56;
    }
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != 0) {
      local_38 = local_a0;
      FUN_00d50b20();
      goto LAB_01d54f56;
    }
    lVar1 = CONCAT44(uStack_54,local_58);
    local_38 = local_a0;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d54f6c:
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_01d480c0();
    FUN_01d48370();
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x530))();
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    fVar6 = *(float *)(*(longlong *)(unaff_RDI + 0x10) + 0x48);
    local_3c = DAT_02390124;
    if (DAT_02390124 < fVar6) {
      local_3c = DAT_02390124 / fVar6;
    }
    local_6c = *(float *)(&DAT_024207d8 + (ulonglong)(DAT_02390124 < fVar6) * 4);
    fVar6 = 0.0;
    do {
      local_70 = (DAT_02390d34 - fVar6) * (DAT_02390d34 - fVar6);
      local_58 = 0.0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x30);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        auVar9._4_4_ = uStack_54;
        auVar9._0_4_ = local_58;
        auVar9._8_4_ = uStack_50;
        auVar9._12_4_ = uStack_4c;
        fVar7 = SQRT((DAT_02390d34 - local_58) * (DAT_02390d34 - local_58) + local_70) / local_6c;
        fVar10 = DAT_02390124 - fVar7 * fVar7;
        fVar7 = 0.0;
        if (0.0 <= fVar10) {
          fVar7 = fVar10;
        }
        fVar10 = DAT_02390124;
        if (fVar7 <= DAT_02390124) {
          fVar10 = fVar7;
        }
        local_88 = '\0';
        auVar9 = insertps(ZEXT416((uint)fVar6),auVar9,0x10);
        local_90 = lVar4;
        FUN_01d49110(auVar9._0_8_,fVar10);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_58 = local_58 + local_3c;
      } while (local_58 <= DAT_02390d2c);
      fVar6 = fVar6 + local_3c;
    } while (fVar6 <= DAT_02390d2c);
  }
  plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x18) + 0x30);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_80 = local_38;
  local_78 = '\0';
  (**(code **)(*plVar2 + 0x400))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x30) != 0) {
    FUN_01d48390();
    FUN_01d481c0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


