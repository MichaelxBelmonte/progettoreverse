// Function: FUN_01650af0
// Address: 01650af0
// Size: 2504 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01650af0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  undefined4 uVar12;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar2 = local_50;
  local_38[0] = local_48[0];
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar1 = local_50;
  local_d0 = local_48[0];
  pcVar8 = &local_d0;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_c0 = local_60;
  local_b8 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_b8 = '\x01';
  FUN_012992a0();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar2 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar1 = local_50;
  local_40[0] = local_48[0];
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar3 = local_50;
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  local_38[0] = local_48[0];
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_90 = local_60;
  local_88 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_88 = '\x01';
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_0124df10();
  local_80 = local_50;
  local_78 = 0;
  if (local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  local_78 = '\x01';
  uVar12 = FUN_012996f0(uVar12,0);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  FUN_0164e420(uVar12,0);
  FUN_01650330();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar11 = &local_50;
  FUN_012e78c0();
  plVar1 = local_50;
  if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    pVar10 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_016511f7;
  }
  pplVar11 = (longlong **)&DAT_02802688;
LAB_016511f7:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_50;
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x2607248;
      *puVar9 = &DAT_02607248;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x76) = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      puVar9[0x18] = 0;
      puVar9[0x19] = 0;
      puVar9[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_01650330();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57f0();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


