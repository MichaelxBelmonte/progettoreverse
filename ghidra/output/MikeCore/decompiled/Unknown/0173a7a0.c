// Function: FUN_0173a7a0
// Address: 0173a7a0
// Size: 1526 bytes
// Class: Unknown


void FUN_0173a7a0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar6;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  local_f8 = *unaff_RSI;
  local_f0 = '\0';
  FUN_01521390();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0002c940();
  if (plVar1 == (longlong *)0x0) {
LAB_0173a81d:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0173a81d;
  }
  plVar1 = (longlong *)*unaff_RSI;
  cVar3 = (char)unaff_RSI[1];
  if ((cVar3 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = DAT_027cd540;
  if (DAT_027cd540 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(longlong *)(unaff_RDI + 0x58) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = DAT_027cd540;
    if (DAT_027cd540 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    (**(code **)(*plVar1 + 0x510))();
    FUN_01736c00();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027e13c8;
  if (DAT_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(longlong *)(unaff_RDI + 0x58) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = DAT_027e13c8;
    if (DAT_027e13c8 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    (**(code **)(*plVar1 + 0x520))();
    FUN_01736c60();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027e3cf0;
  if (DAT_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(longlong *)(unaff_RDI + 0x60) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = DAT_027e3cf0;
    if (DAT_027e3cf0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar2;
    local_90 = '\x01';
    (**(code **)(*plVar1 + 0x538))();
    FUN_01770230();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027cd548;
  if (DAT_027cd548 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(longlong *)(unaff_RDI + 0x60) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = DAT_027cd548;
    if (DAT_027cd548 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x520))();
    FUN_01770300();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027cd550;
  if (DAT_027cd550 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 == '\0') || (*(longlong *)(unaff_RDI + 0x60) == 0)) goto LAB_0173ad77;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = DAT_027cd550;
  local_31 = cVar3;
  if (DAT_027cd550 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  pplVar6 = &local_108;
  (**(code **)(*plVar1 + 0x578))();
  plVar1 = local_108;
  FUN_01a01970();
  if (plVar1 == (longlong *)0x0) {
LAB_0173aceb:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0173aceb;
  }
  local_40 = 0;
  local_48 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
  }
  else {
    local_40 = '\x01';
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  cVar3 = local_31;
  FUN_0176f3a0();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0173ad77:
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  return;
}


