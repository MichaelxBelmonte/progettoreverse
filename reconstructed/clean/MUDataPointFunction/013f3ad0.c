// Function: FUN_013f3ad0
// Address: 013f3ad0
// Size: 1610 bytes
// Class: MUDataPointFunction

void FUN_013f3ad0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t *in_RCX;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t *local_60;
  int64_t local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)in_RCX);
  if (*(int *)(this_ptr[9] + 0xc) == 0) {
                                            (**(code **)(*this_ptr + 0x3e0))(0,0);
    return;
  }
  if (*arg1 == 0) {
    param_1 = FUN_00d23310();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3be4;
      }
      in_RCX = arg1 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(void*)local_60 = 1;
  }
LAB_013f3be4:
  if (*param_2 == 0) {
    param_1 = FUN_00d23340();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3cb4;
      }
      in_RCX = param_2 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(void*)local_60 = 1;
  }
LAB_013f3cb4:
  if ((char)local_40 != '\0') {
    local_80 = *arg1;
    local_78 = 0;
    uVar8 = FUN_013f37e0(param_1,&local_80);
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] == '\0') && (local_50 != 0)) {
        in_RCX = arg1 + 1;
        local_40 = in_RCX;
        if (local_48[0] == '\0') {
          uVar8 = FUN_00d50b00();
        }
        goto LAB_013f3d62;
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_40 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          uVar8 = FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
LAB_013f3d62:
      *(void*)local_40 = 1;
    }
    local_70 = *param_2;
    local_68 = 0;
    FUN_013f38b0(uVar8,&local_70);
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3e10;
      }
      in_RCX = param_2 + 1;
      local_40 = in_RCX;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(void*)local_40 = 1;
  }
LAB_013f3e10:
  if (*arg1 == 0) {
    FUN_00d23310();
    in_RCX = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *arg1;
    if (lVar1 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3f2f;
      }
      in_RCX = arg1 + 1;
      local_40 = in_RCX;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(void*)local_40 = 1;
  }
LAB_013f3f2f:
  pVar4 = (void*)in_RCX;
  if (*param_2 == 0) {
    FUN_00d23340();
    plVar5 = (int64_t *)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (void*)plVar5;
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3fff;
      }
      plVar5 = param_2 + 1;
      local_40 = plVar5;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pVar4 = (void*)plVar5;
    *(void*)local_40 = 1;
  }
LAB_013f3fff:
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (int64_t *)FUN_013faed0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_013faed0();
  (**(code **)(*this_ptr + 0x3e0))(local_40,uVar7);
  return;
}

