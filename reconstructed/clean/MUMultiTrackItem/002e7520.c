// Function: FUN_002e7520
// Address: 002e7520
// Size: 1427 bytes
// Class: MUMultiTrackItem

void FUN_002e7520(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  void*this_ptr;
  bool bVar9;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar6 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    lVar2 = g_027296a0;
    if (g_027296a0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_026fe440;
    if (g_026fe440 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar3;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00d31230(&local_e8,&local_f8);
    local_60 = local_40;
    local_58 = 0;
    local_d8 = g_026fe448;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        local_d8 = g_026fe448;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    g_026fe448 = local_d8;
    if (local_d8 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d5d9b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    *this_ptr = plVar7;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  FUN_0027c9f0();
  plVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026fe450;
  if (g_026fe450 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  FUN_01d5e6e0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) goto LAB_002e7a7f;
  FUN_01d64cb0();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar8;
  FUN_01d5dc80();
  local_b8 = g_027296a0;
  if (g_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fe440;
  local_b0 = '\x01';
  if (g_026fe440 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  local_50 = local_40;
  local_48 = 0;
  local_88 = g_026fe448;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_88 = g_026fe448;
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  g_026fe448 = local_88;
  if (local_88 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d5d9b0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026fe458;
  if (g_026fe458 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_01d5e6e0();
  plVar5 = local_40;
  plVar8 = plVar4;
  plVar1 = plVar4;
  if (plVar4 == local_40) {
joined_r0x002e7a04:
    bVar9 = plVar8 == (int64_t *)0x0;
    if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = plVar5;
      plVar1 = local_40;
      goto joined_r0x002e7a04;
    }
    FUN_00d50b20();
    local_38 = '\0';
    bVar9 = local_40 == (int64_t *)0x0;
    plVar8 = local_40;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = local_68;
  if (!bVar9) {
    FUN_01d66e50();
  }
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_002e7a7f:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  return;
}

