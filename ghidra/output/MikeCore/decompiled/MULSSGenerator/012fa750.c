// Function: FUN_012fa750
// Address: 012fa750
// Size: 2736 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012fad59) */

ulonglong FUN_012fa750(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  undefined8 unaff_RSI;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  longlong local_40;
  char local_38 [8];
  
  lVar1 = local_40;
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  pVar10 = (pthread_key_t)local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  local_a0 = 0;
  local_a8 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  cVar2 = FUN_00d51e10();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    FUN_01822e80();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    local_98 = local_40;
    FUN_01822eb0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    local_38[0] = '\0';
    local_40 = 0;
    FUN_0124f820();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = local_40;
  local_d8 = local_40;
  local_d0 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_d8,unaff_RSI,param_2);
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (cVar2 != '\0') {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
    local_38[0] = '\0';
    cVar2 = FUN_01254260(uVar6,uVar5);
    pVar10 = (pthread_key_t)uVar6;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      uVar11 = 0;
      lVar4 = lVar1;
      goto joined_r0x012fb190;
    }
  }
  local_50 = lVar1;
  pvVar3 = _pthread_getspecific(pVar10);
  lVar4 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar4 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  local_60 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_60;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 == 0) && (0xe < *(int *)(*(longlong *)(lVar4 + 0x48) + 0x18) + 7U)) {
    local_c8 = **(undefined8 **)(*(longlong *)(lVar4 + 0x48) + 0x10);
  }
  else {
    local_c8 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  local_60 = local_38[0];
  pcVar8 = &local_60;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  if (local_40 == 0) {
    pVar10 = *(pthread_key_t *)(*(longlong *)(lVar4 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fafe8;
    uVar5 = *(undefined8 *)
             ((longlong)(int)pVar10 + -8 + *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10));
  }
  else {
LAB_012fafe8:
    uVar5 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(longlong *)(lVar4 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    pcVar8 = &local_60;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_60 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar8;
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38[0] = '\0';
  FUN_012549c0(uVar5,local_c8,1);
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  local_b0 = 0;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = local_40;
  local_b0 = '\x01';
  FUN_012879b0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  lVar4 = local_50;
joined_r0x012fb190:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}


