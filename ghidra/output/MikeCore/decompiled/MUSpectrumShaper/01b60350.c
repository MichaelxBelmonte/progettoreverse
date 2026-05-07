// Function: FUN_01b60350
// Address: 01b60350
// Size: 1088 bytes
// Class: MUSpectrumShaper
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x01b6045b) */
/* WARNING: Removing unreachable block (ram,0x01b60467) */

void FUN_01b60350(pthread_key_t param_1)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  float fVar4;
  undefined8 *local_90;
  undefined4 local_88;
  int local_84;
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
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_015b7ba0();
  if (iVar2 == 3) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_015bb7e0();
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    FUN_01b60d60(extraout_XMM0_Da,iVar2);
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
    (**(code **)(*plVar1 + 0x958))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    iVar2 = iVar2 + 7;
    FUN_01b60d60((ulonglong)((longlong)iVar2 * 0x2aaaaaab) >> 0x3f,
                 iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc);
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015ba320();
    iVar2 = FUN_00e7d780();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar4 = (float)FUN_015ba390();
    iVar2 = iVar2 + (uint)(0.0 < fVar4);
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    local_84 = iVar2;
    FUN_00d8cb40(fVar4,&local_90);
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
    (**(code **)(*plVar1 + 0x958))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015ba3a0();
    local_84 = FUN_00e7d780();
    local_84 = local_84 + iVar2;
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_90);
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


