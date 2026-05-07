// Function: FUN_01a70ac0
// Address: 01a70ac0
// Size: 2501 bytes
// Class: GNValue
// String references:
//   "_scaleModeSequence"
//   "_chordSequence"

void FUN_01a70ac0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x1f8) == *arg1) {
    return;
  }
  plVar7 = (int64_t *)(this_ptr + 0x1f8);
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar6 = (int64_t *)(this_ptr + 0x138);
    local_108 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    local_108 = '\x01';
    local_110 = plVar6;
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(int64_t *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70bce;
LAB_01a70bbd:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(int64_t *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01a70bbd;
LAB_01a70bce:
      lVar4 = 0;
    }
    local_98 = '\x01';
    local_a0 = lVar4;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = 0;
    (**(code **)(*plVar6 + 0x10))();
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = plVar6;
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(int64_t *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70cf4;
LAB_01a70ce6:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(int64_t *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01a70ce6;
LAB_01a70cf4:
      lVar4 = 0;
    }
    local_88 = '\x01';
    local_90 = lVar4;
    FUN_00e8b9a0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      lVar4 = FUN_00cafdf0();
      if (lVar4 == 0) {
        local_d8 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_d8 = '\x01';
        local_e0 = plVar6;
        FUN_00cbb340();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          (**(code **)(*local_e0 + 0x10))();
          FUN_00d50b20();
        }
      }
      else {
        FUN_00cafdf0();
        local_e8 = 0;
        (**(code **)(*plVar6 + 0x10))();
        FUN_00d50b00();
        local_e8 = '\x01';
        local_f0 = plVar6;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        local_138 = '\0';
        local_140 = 0;
        plVar6 = &local_140;
        FUN_00cbadd0(plVar6,&local_60);
        param_1 = (void*)plVar6;
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          (**(code **)(*local_f0 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  lVar4 = *arg1;
  lVar1 = *plVar7;
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *plVar7 = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *plVar7;
    }
  }
  if (lVar2 == 0) {
    local_40 = 0;
    local_38 = '\0';
    FUN_01b6d800();
    if (local_38 == '\0') {
      return;
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  lVar4 = local_120;
  if (local_118 == '\0') {
    if (local_120 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_118 = '\0';
  }
  local_40 = lVar4;
  local_38 = '\0';
  FUN_01b6d800();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = 0;
  plVar7 = (int64_t *)(this_ptr + 0x138);
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_d0 = plVar7;
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if ((lVar4 == 0) || (lVar4 = *(int64_t *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a7115e;
LAB_01a71150:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x30);
    if (lVar4 != 0) goto LAB_01a71150;
LAB_01a7115e:
    lVar4 = 0;
  }
  local_78 = '\x01';
  pVar5 = 0x10;
  local_80 = lVar4;
  FUN_00e8b850(0x10,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_c0 = plVar7;
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x28);
      goto joined_r0x01a71262;
    }
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x30);
joined_r0x01a71262:
    if (lVar4 != 0) {
      local_68 = 0;
      FUN_00d50b00();
      goto LAB_01a71274;
    }
  }
  lVar4 = 0;
LAB_01a71274:
  local_68 = '\x01';
  pVar5 = 0x10;
  local_70 = lVar4;
  FUN_00e8b850(0x10,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_40 != 0) {
    lVar4 = FUN_00cafdf0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00cafdf0();
      local_a8 = 0;
      (**(code **)(*plVar7 + 0x10))();
      FUN_00d50b00();
      local_a8 = '\x01';
      local_b0 = plVar7;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_128 = '\0';
      local_130 = 0;
      FUN_00cbad80(&local_130,&local_50,0x20);
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}

