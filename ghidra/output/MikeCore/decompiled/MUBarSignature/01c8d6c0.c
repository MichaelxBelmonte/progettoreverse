// Function: FUN_01c8d6c0
// Address: 01c8d6c0
// Size: 714 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c8d6c0(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  bool bVar9;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined7 uVar8;
  
  if (*(longlong *)(unaff_RDI + 0x180) == 0) {
    uVar7 = 0;
    goto LAB_01c8d8b2;
  }
  bVar9 = *(int *)(unaff_RDI + 0x18c) == 0;
  uVar8 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar7 = CONCAT71(uVar8,!bVar9);
  if (((bVar9) || (param_2 == '\0')) ||
     (uVar7 = CONCAT71(uVar8,1), *(longlong *)(unaff_RDI + 0x158) == 0)) goto LAB_01c8d8b2;
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar6 = &local_60;
  (**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x980))();
  plVar1 = local_60;
  if ((DAT_026d8a28 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027ed1e8 = FUN_00d4fe50();
    _DAT_027ed1d0 = "MUBarSignature";
    _DAT_027ed1d8 = 0x18;
    param_1 = 0x92680;
    _DAT_027ed1e0 = FUN_00092680;
    _DAT_027ed1f0 = 0;
    uRam00000000027ed1f8 = 0;
    _DAT_027ed200 = 0;
    _DAT_027ed278 = 0;
    uRam00000000027ed280 = 0;
    _DAT_027ed288 = 0;
    DAT_027ed28a = 2;
    _DAT_027ed208 = 0;
    uRam00000000027ed210 = 0;
    _DAT_027ed218 = 0;
    uRam00000000027ed220 = 0;
    _DAT_027ed228 = 0;
    uRam00000000027ed230 = 0;
    _DAT_027ed238 = 0;
    uRam00000000027ed240 = 0;
    _DAT_027ed248 = 0;
    uRam00000000027ed250 = 0;
    _DAT_027ed258 = 0;
    uRam00000000027ed260 = 0;
    _DAT_027ed268 = 0;
    uRam00000000027ed270 = 0;
    DAT_027ed293 = 0;
    _DAT_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01c8d76d:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c8d76d;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = '\0';
    local_50 = plVar1;
    FUN_01703b00(&local_50,*(undefined8 *)(unaff_RDI + 0x188));
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x1a8) != 0) {
      FUN_01c4e030();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_01c453b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c886d0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8d8b2:
  return uVar7 & 0xffffffff;
}


