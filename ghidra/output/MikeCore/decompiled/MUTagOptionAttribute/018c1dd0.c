// Function: FUN_018c1dd0
// Address: 018c1dd0
// Size: 641 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"


/* WARNING: Removing unreachable block (ram,0x018c1e43) */
/* WARNING: Removing unreachable block (ram,0x018c1e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c1dd0(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined4 uVar6;
  longlong local_a0;
  undefined1 local_98;
  longlong *local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38;
  
  local_a0 = *param_2;
  local_98 = 0;
  uVar5 = param_1;
  FUN_018bf620(param_1,&local_a0);
  plVar1 = local_48;
  pVar4 = (pthread_key_t)uVar5;
  local_38 = local_40 != '\0';
  local_80 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61730(param_1 & 0xff,&local_58);
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
    pVar4 = 0x11bbd10;
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
  uVar6 = FUN_00e85ea0();
  plVar1 = local_80;
  local_90 = local_80;
  local_88 = 0;
  FUN_018bf6f0(uVar6,&local_90);
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_018c1f85;
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) goto LAB_018c1f85;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_01883960();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_018c1f85:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


