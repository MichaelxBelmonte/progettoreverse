// Function: FUN_01275b30
// Address: 01275b30
// Size: 1437 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0127602e) */
/* WARNING: Removing unreachable block (ram,0x01276037) */
/* WARNING: Removing unreachable block (ram,0x01276087) */
/* WARNING: Removing unreachable block (ram,0x01276090) */

undefined8 * FUN_01275b30(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar9;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar4 = (longlong *)*unaff_RSI;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    plVar4 = (longlong *)*unaff_RSI;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar4 + 0x398))();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25c86c0;
  *puVar3 = &DAT_025c86c0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  (*DAT_025c86d8)();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x1e] != dVar9) || (NAN((double)plVar4[0x1e]) || NAN(dVar9)))
    goto LAB_01275c4c;
  }
  else {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x1e] != dVar9) || (NAN((double)plVar5[0x1e]) || NAN(dVar9))) {
LAB_01275c4c:
      FUN_00d64850();
      plVar5[0x1e] = (longlong)dVar9;
      FUN_00d64910();
    }
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x18] == dVar9) && (!NAN((double)plVar4[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  else {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x18] == dVar9) && (!NAN((double)plVar5[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  FUN_00d64850();
  plVar5[0x18] = (longlong)dVar9;
  FUN_00d64910();
LAB_01275cf6:
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265bc0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  plVar5 = plVar4;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  FUN_013f82a0(DAT_0238fee8,plVar5[0x1e]);
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  FUN_01265f70();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  local_38[0] = local_48[0];
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  FUN_00d23310();
  pcVar6 = local_40;
  pcVar8 = local_48;
  if (local_48[0] == '\0') {
    pcVar8 = pcVar6;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (pthread_key_t)pcVar6;
  if (local_40[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd9a0();
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


