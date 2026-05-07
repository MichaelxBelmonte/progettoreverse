// Function: FUN_0188cd90
// Address: 0188cd90
// Size: 743 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x0188cf20) */
/* WARNING: Removing unreachable block (ram,0x0188cf29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0188cd90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_70;
  char local_68;
  char local_31;
  
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_0188cde3:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar1 == '\0') goto LAB_0188cde3;
  }
  lVar7 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 == '\0') || (lVar7 == 0)) {
    if ((lVar7 == 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_2 + 400))();
      if (local_70 != 0) {
        lVar7 = local_70;
        if (local_68 != '\0') {
          local_31 = '\x01';
          goto LAB_0188ce17;
        }
        FUN_00d50b00();
        local_31 = '\x01';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_31 = '\x01';
  }
LAB_0188ce17:
  if (lVar7 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    pVar5 = 0x26106d0;
    *puVar3 = &DAT_026106d0;
    puVar3[10] = 0;
    (*DAT_026106e8)();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01822120();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188f8a0();
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


