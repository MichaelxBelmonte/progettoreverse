// Function: FUN_00762a70
// Address: 00762a70
// Size: 1289 bytes
// Class: MUAudioFileSource

uint32_t FUN_00762a70(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_100;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar4 = local_78;
  FUN_017a52b0();
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  cVar6 = (**(code **)(*plVar4 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    return 0;
  }
  (**(code **)(*this_ptr + 0x628))();
  plVar4 = local_78;
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    return 0;
  }
  (**(code **)(*this_ptr + 0x610))();
  FUN_00d23310();
  plVar4 = local_78;
  plVar9 = &local_98;
  if (local_70[0] != '\0') {
    plVar9 = (int64_t *)local_70;
  }
  local_98 = CONCAT71(local_98._1_7_,local_70[0]);
  *(char *)plVar9 = '\0';
  if ((local_70[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 == '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  local_a0 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    FUN_01e561b0();
    local_48 = local_78;
    if (local_78 != (int64_t *)0x0) {
      if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = this_ptr[0xd];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729550;
      if (g_02729550 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar3;
      local_98 = lVar1;
      FUN_00083ea0(2,&local_100);
      FUN_000b4da0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02729558;
      if (g_02729558 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      local_d0 = lVar5;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_c0 = plVar4;
      local_b8 = '\0';
      local_b0 = local_48;
      local_a8 = '\0';
      uVar8 = FUN_00172950();
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
      local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
      goto LAB_00762e85;
    }
  }
  local_48 = (int64_t *)0x0;
  local_80 = 0;
LAB_00762e85:
  FUN_00763390();
  uVar7 = FUN_00760600();
  lVar1 = this_ptr[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00324fe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00172bc0();
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
    return uVar7;
  }
  return uVar7;
}

