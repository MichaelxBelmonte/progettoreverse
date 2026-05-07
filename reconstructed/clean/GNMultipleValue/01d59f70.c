// Function: FUN_01d59f70
// Address: 01d59f70
// Size: 1026 bytes
// Class: GNMultipleValue

void FUN_01d59f70(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar9 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar8 = (uint32_t)param_2;
  plVar5 = (int64_t *)this_ptr[0x2b];
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar3 = (**(code **)(*this_ptr + 0x9f8))();
  if ((iVar3 == 0) || (plVar5 == (int64_t *)0x0)) goto LAB_01d5a21f;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x548))();
  uVar7 = uVar8;
  uVar6 = FUN_00d92190();
  plVar4 = local_40;
  if (((local_38 == '\0') &&
      ((local_40 != (int64_t *)0x0 && (uVar6 = FUN_00d50b00(), local_38 != '\0')))) &&
     (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar1 = g_027259e0;
  local_68 = plVar4;
  if (g_027259e0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  FUN_00d95130(uVar6,&local_b8);
  plVar4 = plVar5;
  if (plVar5 == local_40) {
LAB_01d5a0d4:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01d5a0d4;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = '\0';
  local_98 = *arg1;
  local_90 = '\0';
  local_a8 = plVar4;
  (**(code **)(*this_ptr + 0xa00))(uVar7,&local_a8);
  plVar5 = plVar4;
  if (local_40 == plVar4) {
joined_r0x01d5a1ac:
    plVar4 = local_68;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar4 = local_68;
    }
  }
  else {
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto joined_r0x01d5a1ac;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    plVar4 = local_68;
  }
  local_68 = plVar4;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d5a21f:
  FUN_01d48370();
  plVar4 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar4 + 0x390))();
  local_88 = *arg1;
  local_80 = '\0';
  uVar7 = FUN_01e3f820();
  local_68 = (int64_t *)CONCAT44(uVar9,uVar8);
  local_70 = '\0';
  uVar8 = extraout_XMM0_Dc;
  local_78 = plVar5;
  (**(code **)(*this_ptr + 0x9e0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*plVar2 + 0x400))
            (uVar7,(uint32_t)local_68,&local_50,*(void*)((int64_t)this_ptr + 0x174),uVar7
             ,uVar8);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

