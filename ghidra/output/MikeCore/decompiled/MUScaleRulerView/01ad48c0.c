// Function: FUN_01ad48c0
// Address: 01ad48c0
// Size: 2515 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01ad4b24) */
/* WARNING: Removing unreachable block (ram,0x01ad4b30) */
/* WARNING: Removing unreachable block (ram,0x01ad4aa6) */
/* WARNING: Removing unreachable block (ram,0x01ad4ab2) */
/* WARNING: Removing unreachable block (ram,0x01ad4a28) */
/* WARNING: Removing unreachable block (ram,0x01ad4a34) */
/* WARNING: Removing unreachable block (ram,0x01ad49aa) */
/* WARNING: Removing unreachable block (ram,0x01ad49b6) */
/* WARNING: Removing unreachable block (ram,0x01ad49e9) */
/* WARNING: Removing unreachable block (ram,0x01ad49f5) */
/* WARNING: Removing unreachable block (ram,0x01ad4a67) */
/* WARNING: Removing unreachable block (ram,0x01ad4a73) */
/* WARNING: Removing unreachable block (ram,0x01ad4ae5) */
/* WARNING: Removing unreachable block (ram,0x01ad4af1) */
/* WARNING: Removing unreachable block (ram,0x01ad4b63) */
/* WARNING: Removing unreachable block (ram,0x01ad4b6f) */

void FUN_01ad48c0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01cb4790();
  (**(code **)(*local_58 + 0x370))();
  FUN_01d44d80(DAT_023b160c);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 600) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x9d8))();
  plVar1 = *(longlong **)(unaff_RDI + 0x228);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01770c90();
  local_b8 = local_58;
  local_b0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_b0 = '\x01';
  FUN_016ac280(uVar5,&local_b8);
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x250);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b6f0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01736d70();
  local_98 = local_58;
  local_90 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_90 = '\x01';
  FUN_016ac280(uVar5,&local_98);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x238);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  local_88 = local_40;
  local_80 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b14f90();
  (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 600) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x270) + 0x998))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


