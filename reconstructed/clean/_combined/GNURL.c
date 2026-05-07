// ===================================================================
// GNURL — Complete reconstructed pseudocode
// 6 functions
// ===================================================================


// ============================================================
// 00dba5e0
// ============================================================
// Function: FUN_00dba5e0
// Address: 00dba5e0
// Size: 2256 bytes
// Class: GNURL

void FUN_00dba5e0(void)

{
  int iVar1;
  int64_t *plVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
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
  int64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = *(int64_t *)(arg1 + 0x20);
  if (lVar4 != 0) {
    *(void*)(this_ptr + 1) = 0;
    FUN_00d50b00();
LAB_00dba611:
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar4 = *(int64_t *)(arg1 + 0x20);
  *(int64_t **)(arg1 + 0x20) = plVar2;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_027837c0;
  if (g_027837c0 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (iVar1 == -1) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *(int64_t *)(arg1 + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    goto LAB_00dba611;
  }
  FUN_00d8f140();
  lVar4 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_02704060;
  if (g_02704060 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = lVar4;
  if (iVar1 != -1) {
    FUN_00d97ce0();
    lVar6 = local_48;
    lVar5 = lVar4;
    if (lVar4 != local_48) {
      if (local_40[0] != '\0') {
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00dba7dc;
      }
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      lVar5 = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    lVar6 = lVar5;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00dba7dc:
  iVar1 = FUN_00d8c7a0();
  lVar4 = g_02781680;
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *(int64_t *)(arg1 + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    goto LAB_00dbae9a;
  }
  local_68 = lVar6;
  if (g_02781680 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar4;
  local_118 = '\x01';
  FUN_00d91000(1,&local_120);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = lVar4;
  FUN_00d23340();
  lVar4 = local_48;
  local_38[0] = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027d3890;
  if (g_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar6;
  local_108 = '\x01';
  FUN_00d91000(1,&local_110);
  local_50 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar4 = local_48;
  local_60 = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = &local_60;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  local_100 = g_027861f0;
  if (local_60 == '\0') {
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_100 = g_027861f0;
    }
  }
  else {
    local_60 = '\0';
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  g_027861f0 = local_100;
  if (local_100 != 0) {
    local_a0 = '\x01';
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_00cd2930();
  lVar4 = local_b0;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_50 + 0xc) == 2) {
    FUN_00d23340();
    lVar4 = local_48;
    pcVar3 = &local_60;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_60 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    local_f0 = g_02763508;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_f0 = g_02763508;
      }
    }
    else {
      local_60 = '\0';
    }
    local_90 = '\x01';
    local_98 = lVar4;
    g_02763508 = local_f0;
    if (local_f0 != 0) {
      local_90 = '\x01';
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_b0;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = local_68;
  if (*(int *)(lVar4 + 0xc) == 2) {
    FUN_00d23310();
    lVar4 = local_48;
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = g_027d3890;
    if (g_027d3890 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar6;
    local_d8 = '\x01';
    FUN_00d91000(1,&local_e0);
    lVar6 = CONCAT71(uStack_5f,local_60);
    if (local_50 == lVar6) {
LAB_00dbac6d:
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = lVar6;
      if (local_58 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_00dbac6d;
      }
      FUN_00d50b20();
      local_58 = '\0';
      local_50 = lVar6;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar4 = local_48;
    local_60 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_60;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    local_d0 = g_026f6f98;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_d0 = g_026f6f98;
      }
    }
    else {
      local_60 = '\0';
    }
    local_80 = '\x01';
    local_88 = lVar4;
    g_026f6f98 = local_d0;
    if (local_d0 != 0) {
      local_80 = '\x01';
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_50;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = local_68;
    if (*(int *)(lVar4 + 0xc) == 2) {
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_60;
      }
      local_60 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      lVar4 = g_027837e8;
      local_70 = '\x01';
      local_78 = local_48;
      if (g_027837e8 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar4;
      local_b8 = '\x01';
      FUN_00cd2930();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = local_68;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar4 = *(int64_t *)(arg1 + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
LAB_00dbae9a:
  if (lVar6 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00dbe290
// ============================================================
// Function: FUN_00dbe290
// Address: 00dbe290
// Size: 1493 bytes
// Class: GNURL
// String references:
//   "%@=\"%@\""

int64_t * FUN_00dbe290(int64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t *local_110 [2];
  uint8_t local_100;
  uint8_t local_f0;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_02781680;
  if (*param_1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  local_98 = param_2;
  if (g_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_02783b00;
  if (cVar2 == '\0') {
    if (g_02783b00 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    param_1 = (int64_t *)*param_1;
    cVar2 = FUN_00d8ca70();
    if (cVar2 == '@') {
      FUN_00d8f140();
    }
    else {
      local_78 = 0;
      if (param_1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_80 = param_1;
    }
    local_a0 = local_90;
    local_110[0] = local_80;
    FUN_00083ea0(2,local_110);
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_00dbe120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (int64_t *)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  param_1 = (int64_t *)*param_1;
  cVar2 = FUN_00d8ca70();
  if (cVar2 == '@') {
    FUN_00d8f140();
    param_1 = local_70;
    if (local_68 != '\0') goto LAB_00dbe45c;
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00dbe460;
    }
    param_1 = (int64_t *)0x0;
    if (param_3 == '\0') goto LAB_00dbe6ab;
LAB_00dbe469:
    lVar3 = g_027f2f20;
    if (g_027f2f20 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02783b08;
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      lVar3 = *local_98;
      if ((char)local_98[1] == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(local_98 + 1) = 0;
      }
      goto LAB_00dbe848;
    }
    if (g_02783b08 == 0) {
LAB_00dbe6c1:
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = 0;
    if (param_1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
LAB_00dbe45c:
    local_68 = '\0';
LAB_00dbe460:
    if (param_3 != '\0') goto LAB_00dbe469;
LAB_00dbe6ab:
    lVar3 = g_02783b10;
    if (g_02783b10 == 0) goto LAB_00dbe6c1;
    FUN_00d50b00();
  }
  FUN_00dbdbc0();
  local_80 = local_90;
  local_a0 = param_1;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f0 = 1;
  FUN_00dbe120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_00dbe848:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00db9d10
// ============================================================
// Function: FUN_00db9d10
// Address: 00db9d10
// Size: 1334 bytes
// Class: GNURL
// String references:
//   "GNURL::initWithStringValue: failed with string value:%@"

void FUN_00db9d10(void)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  short sVar4;
  int iVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  sVar4 = FUN_00d8cbc0();
  lVar2 = g_027837c0;
  if (sVar4 == 0x2f) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025795a8;
    (*g_025795c0)();
    puVar1 = *(void**)(this_ptr + 0x10);
    if (puVar1 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x10) = puVar6;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    sVar4 = FUN_00d8cbc0();
    lVar2 = g_027837b8;
    if (sVar4 == 0x2f) {
      if (g_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027d3890;
      if (g_027d3890 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027837c0;
      if (g_027837c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027837c8;
      if (g_027837c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
  }
  else {
    if (g_027837c0 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d90650();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00d8c7a0();
      if (2 < iVar5) {
        FUN_00d8e3d0();
        lVar2 = g_027837d0;
        if (g_027837d0 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d92590();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 0) {
          puVar6 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &g_025795a8;
          (*g_025795c0)();
          puVar1 = *(void**)(this_ptr + 0x10);
          if (puVar1 == puVar6) {
            FUN_00d50b20();
          }
          else {
            *(void**)(this_ptr + 0x10) = puVar6;
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          lVar2 = g_027837d8;
          if (g_027837d8 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = g_027837c0;
          if (g_027837c0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d8dbf0();
          return;
        }
      }
      lVar2 = g_027837e0;
      if (g_027837e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *arg1;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = *arg1;
      lVar3 = *(int64_t *)(this_ptr + 0x10);
      if (lVar3 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x10) = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}



// ============================================================
// 00dbb5a0
// ============================================================
// Function: FUN_00dbb5a0
// Address: 00dbb5a0
// Size: 607 bytes
// Class: GNURL

uint FUN_00dbb5a0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00dba5e0();
  local_88 = g_02763508;
  if (g_02763508 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01de4130(param_1,&local_88);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_78 = plVar1;
    local_70 = '\0';
    uVar3 = FUN_00c716c0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar3 < 0x10000) goto LAB_00dbb7bd;
  }
  FUN_00dba530();
  plVar1 = local_38;
  local_68 = g_027837f0;
  if (g_027837f0 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = 0x1bb;
  if (cVar2 == '\0') {
    FUN_00dba530();
    plVar1 = local_38;
    local_58 = g_027837d8;
    if (g_027837d8 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar3 = 0x50;
    if (cVar2 == '\0') {
      FUN_00dba530();
      plVar1 = local_38;
      local_48 = g_027837f8;
      if (g_027837f8 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = 0x15;
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
    }
  }
LAB_00dbb7bd:
  return uVar3 & 0xffff;
}



// ============================================================
// 00dbd3b0
// ============================================================
// Function: FUN_00dbd3b0
// Address: 00dbd3b0
// Size: 534 bytes
// Class: GNURL
// String references:
//   "com.celemony.SecTrustEvaluate.%I"

uint64_t FUN_00dbd3b0(uint64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t this_ptr;
  void*local_90;
  uint32_t local_88;
  int local_84;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  int local_1c;
  
  local_38 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_00e1cfc0();
  _SecPolicyCreateSSL();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _SecTrustSetPolicies();
  _CFRelease();
  local_1c = 0;
  local_84 = _SecTrustEvaluate();
  local_70 = g_02783870;
  if (local_84 == 0) {
    uVar2 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    if ((local_1c == 1) || (local_1c == 4)) goto LAB_00dbd5b8;
    if (g_02783870 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02783878;
    local_68 = '\x01';
    if (g_02783878 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00e972c0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = 1;
    local_90 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_90);
    local_30 = local_50;
    local_28 = 0;
    local_80 = g_02783868;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_80 = g_02783868;
      }
    }
    else {
      local_48 = '\0';
    }
    local_28 = '\x01';
    g_02783868 = local_80;
    if (local_80 != 0) {
      local_28 = '\x01';
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00e972c0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar2 = 0;
LAB_00dbd5b8:
  return uVar2 & 0xffffffff;
}



// ============================================================
// 00dbebd0
// ============================================================
// Function: FUN_00dbebd0
// Address: 00dbebd0
// Size: 775 bytes
// Class: GNURL
// String references:
//   "=\""
//   "\""

void FUN_00dbebd0(int64_t *param_1,void*param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  
  if ((*param_3 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    *(void*)(this_ptr + 1) = 0;
    puVar7 = (void*)*param_2;
    if (*(char *)(param_2 + 1) != '\0') {
      *this_ptr = puVar7;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b00();
    }
    goto LAB_00dbee9b;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025795a8;
  (*g_025795c0)();
  lVar4 = g_0277c878;
  plVar1 = (int64_t *)*param_1;
  if (g_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_02783b18;
  if (cVar5 != '\0') {
    if (g_02783b18 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    lVar2 = *param_1;
    if (lVar2 == local_a8) {
      if (((char)param_1[1] == '\0') && (local_a8 != 0)) {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_00dbedbf;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_a8;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_00dbedbf:
      *(void*)(param_1 + 1) = 1;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8dbf0();
  FUN_00d8db40();
  FUN_00d8c7d0();
LAB_00dbee9b:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

