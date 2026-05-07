// Function: FUN_004a4d90
// Address: 004a4d90
// Size: 619 bytes
// Class: MUAudioFileSource

void FUN_004a4d90(uint32_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar7;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  char local_31;
  
  if (*(int64_t *)(arg1 + 0x48) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    param_1 = (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(int64_t *)(arg1 + 0x48);
    *(int64_t **)(arg1 + 0x48) = plVar5;
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  local_80 = *param_2;
  if (local_80 == 0) {
    param_1 = FUN_00247590();
    puVar4 = local_48;
    puVar6 = (void*)*param_2;
    if (puVar6 == local_48) {
      if (((char)param_2[1] != '\0') || (local_48 == (void*)0x0)) goto LAB_004a4e86;
      local_50 = param_2 + 1;
      if (local_40 == '\0') {
        param_1 = FUN_00d50b00();
        goto LAB_004a4e7f;
      }
LAB_004a4e46:
      *(void*)local_50 = 1;
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 != '\0') {
        *param_2 = (int64_t)local_48;
        if ((cVar1 != '\0') && (puVar6 != (void*)0x0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_004a4e46;
      }
      local_31 = cVar1;
      if (local_48 != (void*)0x0) {
        param_1 = FUN_00d50b00();
      }
      *param_2 = (int64_t)puVar4;
      if ((local_31 != '\0') && (puVar6 != (void*)0x0)) {
        param_1 = FUN_00d50b20();
      }
LAB_004a4e7f:
      *(void*)local_50 = 1;
LAB_004a4e86:
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    local_80 = *param_2;
  }
  local_78 = '\0';
  FUN_004a50f0(param_1,&local_80);
  puVar6 = local_48;
  if (local_48 == (void*)0x0) {
    bVar3 = true;
    puVar6 = (void*)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_40 == '\0') || (local_48 == (void*)0x0)) goto LAB_004a4ef5;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_004a4ef5:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 == (void*)0x0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_024f4960;
    *(void*)((int64_t)puVar6 + 100) = 0;
    puVar6[0xe] = 0;
    *(void*)(puVar6 + 0xf) = 0;
    puVar6[0x10] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(void*)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(void*)((int64_t)puVar6 + 0x51) = 0;
    *(void*)((int64_t)puVar6 + 0x59) = 0;
    uVar7 = (*g_024f4978)();
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    local_70 = puVar6;
    FUN_004a51a0(uVar7,&local_60);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) {
      FUN_00d50b00();
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

