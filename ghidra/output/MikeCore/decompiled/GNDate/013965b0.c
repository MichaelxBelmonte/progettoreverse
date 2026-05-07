// Function: FUN_013965b0
// Address: 013965b0
// Size: 1424 bytes
// Class: GNDate
// String references:
//   "GNDate"
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_013965b0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  longlong **pplVar10;
  longlong *plVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    uVar9 = 0;
    goto LAB_013969db;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  uVar13 = FUN_01394a40();
  plVar8 = local_58;
  local_a0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  pplVar10 = &local_40;
  (**(code **)(*plVar8 + 0x400))(uVar13,&local_a0);
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    local_90 = plVar8;
    local_88 = '\0';
    uVar13 = FUN_00ca94c0();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar3 = DAT_027bf468;
    if (plVar8 == (longlong *)0x0) {
      bVar2 = false;
      local_48 = (longlong *)0x0;
    }
    else {
      local_60 = plVar8;
      if (DAT_027bf468 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      pplVar12 = &local_40;
      FUN_000175c0(uVar13,&local_80);
      plVar8 = local_40;
      if ((DAT_026d02f0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d0240 = FUN_00d4fe50();
        _DAT_026d0228 = "GNDate";
        _DAT_026d0230 = 0x18;
        _DAT_026d0238 = FUN_000378e0;
        _DAT_026d0248 = 0;
        uRam00000000026d0250 = 0;
        _DAT_026d0258 = 0;
        uRam00000000026d0260 = 0;
        _DAT_026d0268 = 0;
        uRam00000000026d0270 = 0;
        _DAT_026d0278 = 0;
        uRam00000000026d0280 = 0;
        _DAT_026d0288 = 0;
        uRam00000000026d0290 = 0;
        _DAT_026d0298 = 0;
        uRam00000000026d02a0 = 0;
        _DAT_026d02a8 = 0;
        uRam00000000026d02b0 = 0;
        _DAT_026d02b8 = 0;
        uRam00000000026d02c0 = 0;
        _DAT_026d02c8 = 0;
        uRam00000000026d02d0 = 0;
        _DAT_026d02d8 = 0;
        uRam00000000026d02e0 = 0;
        _DAT_026d02e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_01396725:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_01396725;
      }
      plVar8 = *pplVar12;
      if (plVar8 == (longlong *)0x0) {
        bVar2 = false;
        local_48 = (longlong *)0x0;
      }
      else {
        local_48 = plVar8;
        if (*(char *)(pplVar12 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        bVar2 = true;
      }
      param_1 = (pthread_key_t)plVar8;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x38);
  local_40 = plVar8;
  local_38 = '\0';
  if ((DAT_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
    _DAT_026e3230 = FUN_00136df0;
    _DAT_026e3240 = 0;
    uRam00000000026e3248 = 0;
    _DAT_026e3250 = 0;
    uRam00000000026e3258 = 0;
    _DAT_026e3260 = 0;
    uRam00000000026e3268 = 0;
    _DAT_026e3270 = 0;
    uRam00000000026e3278 = 0;
    _DAT_026e3280 = 0;
    uRam00000000026e3288 = 0;
    _DAT_026e3290 = 0;
    uRam00000000026e3298 = 0;
    _DAT_026e32a0 = 0;
    uRam00000000026e32a8 = 0;
    _DAT_026e32b0 = 0;
    uRam00000000026e32b8 = 0;
    _DAT_026e32c0 = 0;
    uRam00000000026e32c8 = 0;
    _DAT_026e32d0 = 0;
    uRam00000000026e32d8 = 0;
    _DAT_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_0139686c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0139686c;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    bVar1 = false;
    plVar11 = (longlong *)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_58 + 0x3c0))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
      plVar11 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 == plVar11) {
    uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  }
  else {
    uVar9 = 0;
    if ((local_48 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
      local_68 = '\0';
      local_70 = plVar11;
      uVar5 = (**(code **)(*local_48 + 0x50))();
      uVar9 = (ulonglong)uVar5;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  if ((bVar1) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar9 = uVar9 ^ 1;
  if ((bVar2) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_013969db:
  return uVar9 & 0xffffffff;
}


