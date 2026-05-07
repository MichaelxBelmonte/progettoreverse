// Function: FUN_007e24c0
// Address: 007e24c0
// Size: 2680 bytes
// Class: Unknown

void FUN_007e24c0(char *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  char *pcVar6;
  char *pcVar7;
  void* pVar8;
  uint unaff_ESI;
  uint uVar9;
  int64_t local_f0;
  char local_e8;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar3 = *(int *)(local_40 + 0xc);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar2;
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  lVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  uVar9 = unaff_ESI;
  if (0 < (int)unaff_ESI) {
    do {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      lVar1 = local_40;
      local_70 = local_38[0];
      pcVar6 = &local_70;
      pcVar7 = local_38;
      if (local_38[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar6;
      if ((local_70 == '\0') && (lVar1 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar8 = (void*)local_48;
      }
      FUN_012e68b0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar5 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_012edae0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eff0();
      FUN_00d23310();
      lVar5 = local_40;
      local_70 = local_38[0];
      param_1 = &local_70;
      pcVar6 = local_38;
      if (local_38[0] == '\0') {
        pcVar6 = param_1;
      }
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 == '\0') && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      FUN_0150f380();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar1 = local_48;
  local_60 = lVar2;
  pcVar6 = (char *)(uint64_t)~unaff_ESI;
  iVar3 = iVar3 + ~unaff_ESI;
  if (0 < iVar3) {
    do {
      pvVar4 = _pthread_getspecific((void*)pcVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23340();
      lVar2 = local_40;
      local_70 = local_38[0];
      pcVar6 = &local_70;
      pcVar7 = local_38;
      if (local_38[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (void*)pcVar6;
      if ((local_70 == '\0') && (lVar2 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e68b0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar5 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_012edae0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar8 = (void*)local_60;
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eff0();
      FUN_00d23340();
      lVar5 = local_40;
      local_70 = local_38[0];
      pcVar6 = &local_70;
      pcVar7 = local_38;
      if (local_38[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 == '\0') && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      FUN_0150f380();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

