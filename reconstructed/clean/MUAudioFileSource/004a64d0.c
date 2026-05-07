// Function: FUN_004a64d0
// Address: 004a64d0
// Size: 2472 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.copy"

void FUN_004a64d0(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t *arg1;
  void* pVar7;
  uint64_t uVar8;
  uint8_t local_138 [8];
  uint8_t local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012e6000();
  local_50 = local_128;
  local_58 = 1;
  local_60 = &g_024c5048;
  local_48 = 0;
  if (local_128 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_00d8cb40(uVar8,&local_60);
  local_e0 = local_70;
  local_d8 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_d8 = '\x01';
  local_118 = *arg1;
  local_110 = '\0';
  pVar7 = 1;
  FUN_004f83c0(1,&local_118);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = lVar3;
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_60 = (void*)*arg1;
  local_58 = local_58 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  puVar2 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_130 = 1;
  pVar7 = iVar4 + 1;
  FUN_004a17d0(pVar7,local_138);
  lVar1 = local_e8;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  local_d0 = local_60;
  local_c8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_c8 = '\x01';
  FUN_012e8aa0();
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  local_c0 = local_60;
  local_b8 = 0;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  local_b8 = '\x01';
  FUN_012e89e0();
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  iVar4 = *(int *)((int64_t)local_60 + 0xc);
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  if (iVar4 != 0) {
    FUN_01ca6a90();
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a8 = '\x01';
    FUN_01c92fe0();
    puVar2 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01c93060();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_01266770();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0125a280();
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_90 = local_60;
    local_88 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_88 = '\x01';
    uVar6 = FUN_00e7bdb0();
    FUN_01c936e0(1,uVar6);
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_108 = lVar1;
    local_100 = '\0';
    FUN_000ba510();
    local_80 = local_60;
    local_78 = 0;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_78 = '\x01';
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01c9db50(uVar8,&local_f8);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

