// Function: FUN_017fada0
// Address: 017fada0
// Size: 1952 bytes
// Class: Unknown

void FUN_017fada0(void)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int iVar5;
  void*puVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint8_t local_158 [8];
  uint8_t local_150;
  uint8_t local_148 [8];
  uint8_t local_140;
  uint8_t local_130;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  void*local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  
  FUN_017e1dd0();
  lVar10 = local_60;
  if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_68 = lVar10;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  pcVar1 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_70 = puVar6;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*pcVar1)();
  FUN_00c92170();
  FUN_00c92160();
  local_b0 = puVar6;
  FUN_017e1d40();
  lVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017faecd;
    }
  }
  else if (local_60 != 0) {
LAB_017faecd:
    puVar6 = local_70;
    local_58 = '\0';
    local_60 = 0;
    local_50 = lVar10;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      puVar4 = local_70;
      lVar10 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)(local_50 + 0xc) <= iVar9) break;
      local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar10 * 8);
      iVar5 = FUN_017e4480();
      iVar9 = *(int *)(puVar4 + 3);
      lVar10 = (int64_t)iVar9;
      iVar7 = iVar9 + 3;
      if (-1 < lVar10) {
        iVar7 = iVar9;
      }
      if (3 < lVar10) {
        iVar7 = iVar7 >> 2;
        lVar8 = 0;
        do {
          if (*(int *)(local_70[2] + lVar8 * 4) == iVar5) goto LAB_017fafc6;
          lVar8 = lVar8 + 1;
        } while (iVar7 != (int)lVar8);
      }
      FUN_00c8e340(iVar7,1);
      *(int *)(puVar6[2] + lVar10) = iVar5;
LAB_017fafc6:
    }
    FUN_01916320();
    FUN_00d50b20();
  }
  FUN_017e1d40();
  lVar10 = local_68;
  puVar6 = local_70;
  iVar9 = *(int *)(local_60 + 0xc);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if (iVar9 == 0) goto LAB_017fb514;
  FUN_017e1dd0();
  lVar8 = local_88;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_150 = 1;
  FUN_017e1b40();
  local_a8 = local_f0;
  local_a0 = 0;
  if (local_e8 == '\0') {
    if (local_f0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_e8 = '\0';
  }
  local_a0 = '\x01';
  FUN_017e1bf0();
  local_98 = local_e0;
  local_90 = 0;
  if (local_d8 == '\0') {
    if (local_e0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d8 = '\0';
  }
  local_90 = '\x01';
  FUN_017e1ac0();
  lVar2 = local_d0;
  if (local_c8 == '\0') {
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c8 = '\0';
  }
  local_140 = 1;
  FUN_017e1bc0();
  lVar3 = local_c0;
  if (local_b8 == '\0') {
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b8 = '\0';
  }
  local_130 = 1;
  FUN_017fb9d0(&local_a8,local_158,&local_98,local_148);
  local_78 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  lVar8 = local_78;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1d40();
  lVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017fb3a0;
    }
  }
  else if (local_60 != 0) {
LAB_017fb3a0:
    local_58 = '\0';
    local_60 = 0;
    local_50 = lVar2;
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar10 = 0;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 8);
        local_60 = lVar8;
        FUN_017e4480();
        local_f8 = '\0';
        local_100 = lVar8;
        FUN_017e4370(*(void*)(local_78 + 0x10),&local_100);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (*(char *)(this_ptr + 0x38) != '\0') {
          FUN_017e1dd0();
          FUN_017e4290();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        local_48 = CONCAT44(local_48._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
    }
    FUN_01916320();
    FUN_00d50b20();
    lVar8 = local_78;
    lVar10 = local_68;
    puVar6 = local_70;
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_017fb514:
  if (local_b0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return;
}

