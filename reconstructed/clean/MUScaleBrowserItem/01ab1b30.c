// Function: FUN_01ab1b30
// Address: 01ab1b30
// Size: 1009 bytes
// Class: MUScaleBrowserItem

void* FUN_01ab1b30(int64_t *param_1,void*param_2)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  void*puVar5;
  int64_t lVar6;
  void*puVar7;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t *local_d8;
  uint8_t local_d0;
  code *local_c8;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int local_68;
  void*local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*(int64_t *)*param_2 + 1000))();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
      goto LAB_01ab1bce;
    }
  }
  else if (local_80 != 0) {
LAB_01ab1bce:
    local_68 = -1;
    local_c8 = g_02641270;
LAB_01ab1c2b:
    lVar6 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_80 + 0xc) <= local_68) {
      FUN_00115910();
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      return this_ptr;
    }
    plVar1 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar6 * 8);
    cVar2 = (**(code **)(*plVar1 + 0x3a0))();
    if (cVar2 == '\0') goto LAB_01ab1d20;
    goto LAB_01ab1c8e;
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
LAB_01ab1d20:
  cVar2 = (**(code **)(*plVar1 + 0x398))();
  if (cVar2 != '\0') {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (**(code **)(*plVar1 + 0x370))();
      if (local_88 == '\0') {
        if (local_90 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_40 = local_90;
      local_38 = '\0';
      cVar2 = FUN_00d23d70();
      if (local_90 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') goto LAB_01ab1c2b;
    }
LAB_01ab1c8e:
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_02641258;
    *(void*)((int64_t)puVar7 + 0xc) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    (*local_c8)();
    FUN_01aa3fc0();
    (**(code **)(*plVar1 + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01aa3f40();
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01ab2450();
    bVar4 = (**(code **)(*plVar1 + 0x3a0))();
    if ((bVar4 & bVar3) == 1) {
      local_d0 = 0;
      local_d8 = plVar1;
      FUN_01aafac0(extraout_XMM0_Da,&local_d8);
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01aa3f00();
    local_38 = '\0';
    FUN_00d21140();
    FUN_00d50b20();
    local_40 = puVar7;
  }
  goto LAB_01ab1c2b;
}

