// Function: FUN_01a70ac0
// Address: 01a70ac0
// Size: 2501 bytes
// Class: GNValue
// String references:
//   "_scaleModeSequence"
//   "_chordSequence"


void FUN_01a70ac0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) == *unaff_RSI) {
    return;
  }
  plVar7 = (longlong *)(unaff_RDI + 0x1f8);
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar6 = (longlong *)(unaff_RDI + 0x138);
    local_108 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b00();
    local_108 = '\x01';
    local_110 = plVar6;
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70bce;
LAB_01a70bbd:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
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
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
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
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a70cf4;
LAB_01a70ce6:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
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
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
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
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
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
        param_1 = (pthread_key_t)plVar6;
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          (**(code **)(*local_f0 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  lVar4 = *unaff_RSI;
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
  plVar7 = (longlong *)(unaff_RDI + 0x138);
  (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_d0 = plVar7;
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01a7115e;
LAB_01a71150:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
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
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
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
      lVar4 = *(longlong *)(lVar4 + 0x28);
      goto joined_r0x01a71262;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
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
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
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
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
}


