// Function: FUN_00b3df40
// Address: 00b3df40
// Size: 1000 bytes
// Class: GNAudioProcessor

uint64_t FUN_00b3df40(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t **pplVar9;
  uint32_t extraout_XMM0_Da;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = g_0275e918;
  if (g_0275e918 != 0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar5 != '\0') {
    uVar8 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
    if (param_2 != '\0') {
      plVar1 = *(int64_t **)(this_ptr + 0x78);
      uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x930))();
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,uVar5);
      FUN_00b3d240();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01caecd0();
      lVar3 = *plVar1;
      (**(code **)(lVar3 + 0x5e0))(local_58._0_4_,&local_78);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_00b3e314;
  }
  FUN_01cae990();
  plVar1 = local_40;
  lVar3 = g_0275e920;
  if (g_0275e920 != 0) {
    FUN_00d50b00();
  }
  uVar6 = (**(code **)(*plVar1 + 0x50))();
  uVar5 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01e54290(uVar5,param_2);
    uVar8 = (uint64_t)uVar7;
    goto LAB_00b3e314;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
  if (param_2 == '\0') goto LAB_00b3e314;
  pplVar9 = &local_40;
  (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x5d0))();
  plVar1 = local_40;
  FUN_00b10020();
  if (plVar1 == (int64_t *)0x0) {
LAB_00b3e0ec:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00b3e0ec;
  }
  plVar2 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  uVar8 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_58 = plVar2;
    uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x970))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00bf87d0(uVar5,*(void*)(this_ptr + 0x70));
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    FUN_00b3d240();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01caecd0();
    lVar3 = *plVar1;
    (**(code **)(lVar3 + 0x5e0))(uVar5,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00b3e314:
  return uVar8 & 0xffffffff;
}

