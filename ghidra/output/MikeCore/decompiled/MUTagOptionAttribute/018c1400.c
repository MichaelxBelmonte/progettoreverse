// Function: FUN_018c1400
// Address: 018c1400
// Size: 866 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"


/* WARNING: Removing unreachable block (ram,0x018c1479) */
/* WARNING: Removing unreachable block (ram,0x018c147e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c1400(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong *plVar7;
  undefined4 uVar8;
  longlong local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  undefined1 local_98;
  longlong *local_90;
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
  char local_38;
  
  local_c0 = *param_2;
  local_b8 = 0;
  uVar6 = param_1;
  FUN_018bf620(param_1,&local_c0);
  plVar1 = local_48;
  pVar5 = (pthread_key_t)uVar6;
  local_38 = local_40 != '\0';
  local_90 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61130(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
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
  uVar8 = FUN_00e85ea0();
  plVar1 = local_90;
  local_b0 = local_90;
  local_a8 = 0;
  FUN_018bf6f0(uVar8,&local_b0);
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_018c155d;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_018c155d:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = *unaff_RSI;
    local_80 = '\0';
    FUN_018836f0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1693;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar7 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  (**(code **)(*plVar7 + 0x368))();
  plVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_98 = 1;
  FUN_018bfc40();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1693:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


