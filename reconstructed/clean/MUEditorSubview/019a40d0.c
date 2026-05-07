// Function: FUN_019a40d0
// Address: 019a40d0
// Size: 1170 bytes
// Class: MUEditorSubview

void FUN_019a40d0(void)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  int iVar11;
  uint64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  char local_98;
  uint64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_40;
  int64_t local_38;
  
  plVar1 = (int64_t *)*arg1;
  plVar8 = (int64_t *)this_ptr[0x3d];
  if (plVar1 == plVar8) {
    return;
  }
  if (plVar1 != (int64_t *)0x0) {
    local_78 = 0;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = plVar8;
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    plVar8 = (int64_t *)(uint64_t)uVar3;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  if (this_ptr[0x9e] != 0) {
    this_ptr[0x9e] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x990))();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x38))();
  FUN_00d216c0();
  if (*arg1 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar8 = &local_b0;
    local_58 = *arg1;
    iVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar4 = -iVar11;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar7 = (int64_t)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)(local_58 + 0xc) <= iVar11) break;
      local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
      iVar11 = iVar4;
      if (local_68 != 0) {
        local_a8 = '\0';
        local_b0 = local_68;
        FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = local_50._4_4_;
      }
    }
    FUN_000be170();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x30))();
  (**(code **)(*this_ptr + 0x970))();
  lVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_019a42e5;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
LAB_019a42b9:
    local_70 = lVar7;
    uVar5 = FUN_0197c2b0();
    lVar7 = local_68;
    if (local_68 == 0) {
      local_40 = 0;
      local_38 = 0;
joined_r0x019a4302:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = lVar7 != 0;
      if (local_38 != 0) {
        uVar9 = (uint64_t)plVar1 & 0xffffff00;
        goto LAB_019a433d;
      }
      local_38 = 0;
      uVar9 = (uint64_t)plVar1 & 0xffffff00;
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        local_38 = lVar7;
        goto joined_r0x019a4302;
      }
      uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      bVar2 = true;
      local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      local_38 = local_68;
LAB_019a433d:
      local_a0 = *arg1;
      local_98 = '\0';
      FUN_01a17f30();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = FUN_0197c480();
    lVar12 = local_68;
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    uVar10 = (undefined7)(uVar9 >> 8);
    if (local_68 == local_38) {
      if (lVar7 == 0) {
        if (local_68 == 0) {
          uVar9 = local_40 & 0xffffffff;
        }
        else {
          lVar12 = local_38;
          if (local_60 != '\0') goto joined_r0x019a43d0;
          uVar9 = CONCAT71(uVar10,1);
          local_40 = 0;
          FUN_00d50b00();
        }
      }
      else {
        uVar9 = local_40 & 0xffffffff;
      }
LAB_019a4463:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        bVar2 = false;
        local_40 = uVar9 & 0xffffffff;
        goto LAB_019a44ce;
      }
      local_40 = uVar9 & 0xffffffff;
      lVar12 = local_38;
    }
    else {
      if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if ((bool)(bVar2 & local_38 != 0)) {
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          local_38 = lVar12;
          FUN_00d50b20();
          uVar9 = CONCAT71(uVar10,1);
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          local_38 = lVar12;
        }
        goto LAB_019a4463;
      }
      if ((bool)(bVar2 & local_38 != 0)) {
        local_40 = CONCAT71(uVar6,1);
        local_38 = local_68;
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
joined_r0x019a43d0:
      local_40 = CONCAT71(uVar6,1);
      if (lVar12 == 0) {
        bVar2 = false;
        goto LAB_019a44ce;
      }
    }
    local_90 = *arg1;
    local_88 = '\0';
    FUN_01a17f30();
    bVar2 = false;
    if ((local_88 != '\0') && (bVar2 = false, local_90 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    if (local_68 != 0) goto LAB_019a42b9;
LAB_019a42e5:
    bVar2 = true;
    local_40 = 0;
LAB_019a44ce:
    lVar12 = 0;
  }
  (**(code **)(*this_ptr + 0x998))();
  (**(code **)(*this_ptr + 0xa00))();
  lVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *this_ptr + 0x40))();
  }
  (**(code **)(&g_00001620 + *this_ptr))();
  (**(code **)(*this_ptr + 0x540))();
  (**(code **)(*this_ptr + 0xa48))();
  if (((char)local_40 != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

