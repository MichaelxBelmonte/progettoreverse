// Function: FUN_01c08690
// Address: 01c08690
// Size: 3829 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c08690(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x30) == 0) {
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x48) != 0) {
        *(undefined8 *)(unaff_RDI + 0x48) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x50) != 0) {
        *(undefined8 *)(unaff_RDI + 0x50) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x58) != 0) {
        *(undefined8 *)(unaff_RDI + 0x58) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    if (*(longlong *)(unaff_RDI + 0x60) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x60) != 0) {
        *(undefined8 *)(unaff_RDI + 0x60) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    if (*(longlong *)(unaff_RDI + 0x68) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x68) != 0) {
        *(undefined8 *)(unaff_RDI + 0x68) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    FUN_01c07df0();
    if (*(longlong *)(unaff_RDI + 0x88) != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x88) != 0) {
        *(undefined8 *)(unaff_RDI + 0x88) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    FUN_01c08020();
    FUN_01c08250();
    FUN_01c08480(0);
    FUN_01c07d10();
    if (*(int *)(unaff_RDI + 0x80) != 0) {
      FUN_00d64850();
      *(undefined4 *)(unaff_RDI + 0x80) = 0;
      FUN_00d64910();
    }
    if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
      return;
    }
    FUN_00d64850();
    if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
      *(undefined8 *)(unaff_RDI + 0xa8) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d21e0();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(longlong **)(unaff_RDI + 0x48) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x48);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x48) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017cc420();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(longlong **)(unaff_RDI + 0x50) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x50);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x50) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_50;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = DAT_027e8bd0;
  if (DAT_027e8bd0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  (**(code **)(*plVar6 + 0x88))();
  plVar6 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
LAB_01c08b89:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c08b89;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0x58) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x58);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x58) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017cad90();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(longlong **)(unaff_RDI + 0x60) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x60);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x60) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_50;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = DAT_027d37e0;
  if (DAT_027d37e0 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  (**(code **)(*plVar6 + 0x88))();
  plVar6 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01c08ded;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01c08ded:
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if (*(longlong **)(unaff_RDI + 0x68) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x68);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x68) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d1790();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c07df0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d17d0();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_50;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = DAT_027e8bd8;
  if (DAT_027e8bd8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x88))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(longlong **)(unaff_RDI + 0x88) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x88) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017cb7f0();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c08020();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017cb550();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c08250();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d2520();
  FUN_01c08480();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d0270();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c07d10();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_017d5870();
  if (*(int *)(unaff_RDI + 0x80) != iVar3) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0x80) = iVar3;
    FUN_00d64910();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017d2380();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(longlong **)(unaff_RDI + 0xa8) != plVar6) {
    FUN_00d64850();
    plVar1 = *(longlong **)(unaff_RDI + 0xa8);
    if (plVar1 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0xa8) = plVar6;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


