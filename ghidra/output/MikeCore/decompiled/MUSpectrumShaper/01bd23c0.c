// Function: FUN_01bd23c0
// Address: 01bd23c0
// Size: 1645 bytes
// Class: MUSpectrumShaper


void FUN_01bd23c0(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    local_70 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_60 = 0;
    local_68 = *(longlong *)(unaff_RDI + 0x20);
    local_78 = (longlong *)(unaff_RDI + 0x10);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    plVar1 = &local_d8;
    FUN_00cbadd0(plVar1,&local_68);
    param_1 = (pthread_key_t)plVar1;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x40);
    local_50 = 0;
    lVar4 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar4;
    (**(code **)(*plVar1 + 0x3a8))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x40) + 0x468))();
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      *(undefined8 *)(unaff_RDI + 0x20) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x28) != 0) {
      *(undefined8 *)(unaff_RDI + 0x28) = 0;
      FUN_00d50b20();
    }
  }
  local_38 = (longlong *)*unaff_RSI;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d51d20();
  plVar1 = local_98;
  if (local_90 == '\0') {
    if (local_98 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_38 = plVar1;
  local_30 = '\0';
  FUN_00d243f0();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c8 = *unaff_RSI;
  if (local_c8 == 0) {
    return;
  }
  if (*(int *)(local_c8 + 0xc) == 0) {
    return;
  }
  local_c0 = '\0';
  FUN_017fa230();
  plVar1 = *(longlong **)(unaff_RDI + 0x20);
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_01bd265a;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01bd2618;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x20);
    *(longlong **)(unaff_RDI + 0x20) = local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_01bd2618:
    *(longlong **)(unaff_RDI + 0x20) = plVar3;
  }
  param_1 = (pthread_key_t)plVar1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_01bd265a:
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x40) == 0) {
    plVar1 = (longlong *)FUN_00e8fc40();
    FUN_00039550();
    (**(code **)(*plVar1 + 0x18))();
    lVar4 = *(longlong *)(unaff_RDI + 0x40);
    *(longlong **)(unaff_RDI + 0x40) = plVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x28) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x28);
        *(longlong **)(unaff_RDI + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong **)(unaff_RDI + 0x28) = local_38;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ebb00();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  plVar1 = local_38;
  pvVar2 = _pthread_getspecific(param_1);
  plVar3 = local_38;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar1 = plVar3, lVar4 != 0)) {
    plVar1 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar1 + 0x1a0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  local_40 = 0;
  lVar4 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar4;
  (**(code **)(*plVar1 + 0x3a0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_b0 = '\x01';
  local_80 = 0;
  local_88 = *(longlong *)(unaff_RDI + 0x20);
  local_b8 = (longlong *)(unaff_RDI + 0x10);
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00cbad80(&local_a8,&local_88,0x20);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    (**(code **)(*local_b8 + 0x10))();
    FUN_00d50b20();
  }
  return;
}


