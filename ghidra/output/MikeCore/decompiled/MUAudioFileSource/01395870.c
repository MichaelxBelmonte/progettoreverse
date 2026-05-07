// Function: FUN_01395870
// Address: 01395870
// Size: 1424 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01395870(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong **pplVar6;
  undefined4 uVar7;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  uVar7 = FUN_01394a40();
  plVar1 = local_50;
  local_b0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_40;
  (**(code **)(*plVar1 + 0x400))(uVar7,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar4 = *(longlong **)(unaff_RDI + 0x38);
  local_40 = plVar4;
  local_38 = '\0';
  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0139598d;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_0139598d:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    uVar7 = (**(code **)(*local_80 + 0x3c0))();
    local_90 = local_50;
    local_88 = 0;
    plVar4 = DAT_027bf468;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        uVar7 = FUN_00d50b00();
        plVar4 = DAT_027bf468;
      }
    }
    else {
      local_48 = '\0';
    }
    local_88 = '\x01';
    DAT_027bf468 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      local_88 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = plVar4;
    FUN_00ca0840(uVar7,&local_40);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar7 = FUN_00c94880();
  local_70 = local_50;
  local_68 = 0;
  plVar4 = DAT_027bf440;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = DAT_027bf440;
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  DAT_027bf440 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    local_68 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x3f0))();
  (**(code **)(*local_80 + 0x3b0))();
  uVar7 = FUN_00d468f0();
  local_60 = local_50;
  local_58 = 0;
  plVar4 = DAT_027bf448;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
      plVar4 = DAT_027bf448;
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  DAT_027bf448 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    local_58 = '\x01';
    uVar7 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar4;
  FUN_00ca0840(uVar7,&local_40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00ca5c10();
  local_a0 = plVar1;
  local_98 = '\0';
  FUN_00c91c80();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


