// Function: FUN_018c18e0
// Address: 018c18e0
// Size: 884 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"


/* WARNING: Removing unreachable block (ram,0x018c195c) */
/* WARNING: Removing unreachable block (ram,0x018c1961) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c18e0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_c8;
  undefined1 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined1 local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  longlong *local_48;
  char local_40;
  char local_38;
  
  local_4c = (undefined4)param_1;
  local_c8 = *param_2;
  local_c0 = 0;
  FUN_018bf620(param_1,&local_c8);
  plVar1 = local_48;
  pVar5 = (pthread_key_t)param_1;
  local_38 = local_40 != '\0';
  local_98 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_70 = *unaff_RSI;
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    FUN_00d61270(local_4c,&local_60,param_3);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((DAT_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027b50e8 = FUN_011b5ca0();
    _DAT_027b50d0 = "MUTagOptionAttribute";
    _DAT_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    _DAT_027b50e0 = FUN_011bbd10;
    _DAT_027b50f0 = 0;
    uRam00000000027b50f8 = 0;
    _DAT_027b5100 = 0;
    uRam00000000027b5108 = 0;
    _DAT_027b5110 = 0;
    uRam00000000027b5118 = 0;
    _DAT_027b5120 = 0;
    uRam00000000027b5128 = 0;
    _DAT_027b5130 = 0;
    uRam00000000027b5138 = 0;
    _DAT_027b5140 = 0;
    uRam00000000027b5148 = 0;
    _DAT_027b5150 = 0;
    uRam00000000027b5158 = 0;
    _DAT_027b5160 = 0;
    uRam00000000027b5168 = 0;
    _DAT_027b5170 = 0;
    uRam00000000027b5178 = 0;
    _DAT_027b5180 = 0;
    uRam00000000027b5188 = 0;
    _DAT_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar7 = FUN_00e85ea0();
  plVar1 = local_98;
  local_b8 = local_98;
  local_b0 = 0;
  FUN_018bf6f0(uVar7,&local_b8);
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_018c1a43;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_018c1a43:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01883820();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1b85;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar6 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_80 = *unaff_RSI;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x368))();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a0 = 1;
  FUN_018bfc40();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1b85:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


