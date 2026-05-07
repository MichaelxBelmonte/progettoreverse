// Function: FUN_012fb890
// Address: 012fb890
// Size: 1451 bytes
// Class: MULSSGenerator


uint FUN_012fb890(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_70 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = local_70;
  local_88 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_90);
  local_58 = local_40;
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  uVar5 = FUN_00e7bdb0();
  uVar6 = FUN_00e7bdb0();
  local_40 = lVar11;
  local_38[0] = '\0';
  uVar3 = FUN_01254260(uVar6,uVar5);
  pVar10 = (pthread_key_t)uVar6;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar3 != '\0') goto LAB_012fbdfa;
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_012f9ac0();
  if (cVar2 != '\0') {
    FUN_012f9cd0();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  lVar11 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar11 = local_58, lVar7 != 0)) {
    lVar11 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_50;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar7 == 0) && (0xe < *(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) + 7U)) {
    local_80 = **(undefined8 **)(*(longlong *)(lVar11 + 0x48) + 0x10);
  }
  else {
    local_80 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = &local_50;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  if (lVar7 == 0) {
    pVar10 = *(pthread_key_t *)(*(longlong *)(lVar11 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fbcf8;
    local_78 = *(undefined8 *)
                ((longlong)(int)pVar10 + -8 + *(longlong *)(*(longlong *)(lVar11 + 0x48) + 0x10));
  }
  else {
LAB_012fbcf8:
    local_78 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar11 = local_40;
    pcVar8 = &local_50;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_50 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar8;
    if ((local_50 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  local_40 = local_58;
  local_38[0] = '\0';
  FUN_012549c0(local_78,local_80,0);
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_012fbdfa:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_70;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar3 ^ 1;
}


