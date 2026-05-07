// Function: FUN_01921620
// Address: 01921620
// Size: 2359 bytes
// Class: Unknown

void FUN_01921620(uint64_t param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  int64_t lVar6;
  void *pvVar7;
  byte bVar9;
  void* pVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t uVar13;
  uint64_t unaff_R12;
  int64_t *unaff_R15;
  undefined7 uVar14;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  uint local_98;
  uint32_t local_94;
  uint8_t local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint32_t local_6c;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  local_98 = param_2;
  if (*(int *)(*(int64_t *)(arg1 + 0x38) + 0xc) != 0) goto LAB_01921eb2;
  FUN_01f27fe0();
  (**(code **)(*(int64_t *)CONCAT71(uStack_8f,local_90) + 0x610))();
  local_80 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027e07a0;
  if (g_027e07a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_80 + 0x400))();
  local_48 = local_40;
  plVar12 = local_40;
  if (local_40 == (int64_t *)0x0) {
    uVar13 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    local_48 = (int64_t *)0x0;
    local_58 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar5 = FUN_00d50b00();
      uVar13 = 0;
      local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0192175c;
      plVar4 = (int64_t *)FUN_00d50b20();
    }
    else {
      local_38 = '\0';
      plVar4 = local_40;
    }
    local_58 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
    uVar13 = 0;
  }
LAB_0192175c:
  pVar10 = (void*)plVar12;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  local_90 = 0;
  local_94 = uVar13;
  if ((local_48 == (int64_t *)0x0) || (cVar3 = (**(code **)(*local_48 + 0x398))(), cVar3 == '\0'))
  {
    local_50 = (int64_t *)0x0;
LAB_0192184d:
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
    bVar2 = true;
    uVar5 = 0;
    local_78 = (int64_t *)0x0;
LAB_01921862:
    local_6c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    local_60 = (int64_t *)0x0;
LAB_0192186d:
    local_68 = (int64_t *)0x0;
    lVar6 = g_027e07a8;
  }
  else {
    FUN_017a57b0();
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar12 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = plVar12;
    if (plVar12 == (int64_t *)0x0) goto LAB_0192184d;
    local_78 = plVar12;
    uVar5 = FUN_017a7c70();
    local_68 = local_40;
    unaff_R15 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019219c8;
      }
      bVar2 = false;
      goto LAB_01921862;
    }
    if (local_40 == (int64_t *)0x0) {
      local_6c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      bVar2 = false;
      local_60 = local_40;
      local_50 = local_78;
      goto LAB_0192186d;
    }
LAB_019219c8:
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (void*)local_68;
    }
    FUN_01313ad0();
    plVar12 = local_68;
    unaff_R15 = local_78;
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_108 = (int64_t *)0x0;
    local_100 = '\0';
    local_f8 = (int64_t *)0x0;
    local_f0 = '\0';
    FUN_012cc0c0(&local_f8,&local_108,1,0);
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      (**(code **)(*local_f8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      (**(code **)(*local_108 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = plVar12;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_6c = 0;
    bVar2 = false;
    lVar6 = g_027e07a8;
    local_60 = plVar12;
    local_50 = unaff_R15;
  }
  g_027e07a8 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_e8 = lVar6;
  uVar5 = (**(code **)(*local_80 + 0x400))();
  plVar12 = local_40;
  uVar8 = (undefined7)((uint64_t)uVar5 >> 8);
  uVar14 = (undefined7)((uint64_t)unaff_R15 >> 8);
  if (local_40 == local_48) {
    bVar9 = (byte)local_94 & local_40 != (int64_t *)0x0;
    pVar10 = CONCAT31((int3)((uint)local_94 >> 8),bVar9);
    if (bVar9 == 1) {
      if (local_38 != '\0') goto LAB_01921900;
      uVar11 = CONCAT71(uVar14,1);
      FUN_00d50b00();
    }
    else {
      uVar11 = local_58 & 0xffffffff;
    }
LAB_01921b71:
    if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) {
      local_58 = uVar11 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_58 = uVar11 & 0xffffffff;
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar9 = (byte)local_58 & local_48 != (int64_t *)0x0;
      pVar10 = (void*)CONCAT71((int7)(local_58 >> 8),bVar9);
      uVar11 = CONCAT71(uVar14,1);
      if (bVar9 == 1) {
        local_48 = plVar12;
        FUN_00d50b20();
      }
      else {
        local_48 = plVar12;
      }
      goto LAB_01921b71;
    }
    bVar9 = (byte)local_58 & local_48 != (int64_t *)0x0;
    pVar10 = (void*)CONCAT71((int7)(local_58 >> 8),bVar9);
    local_48 = plVar12;
    if (bVar9 == 1) {
      local_48 = local_40;
      FUN_00d50b20();
      local_48 = plVar12;
      uVar8 = extraout_var;
    }
LAB_01921900:
    local_38 = '\0';
    local_58 = CONCAT71(uVar8,1);
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  local_d8 = local_48;
  local_d0 = '\0';
  FUN_017a57b0();
  plVar12 = local_40;
  plVar4 = local_50;
  if (local_78 == local_40) {
LAB_01921c47:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar4 = plVar12;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (!bVar2) {
        local_50 = plVar12;
        FUN_00d50b20();
      }
      goto LAB_01921c47;
    }
    if (!bVar2) {
      local_50 = local_40;
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
  local_50 = plVar4;
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
    plVar12 = local_60;
    if (local_68 != (int64_t *)0x0) goto LAB_01921ca4;
LAB_01921cfa:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_017a7c70();
    plVar12 = local_60;
    if (local_68 == local_40) goto LAB_01921cfa;
LAB_01921ca4:
    plVar12 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((char)local_6c == '\0') {
        local_60 = plVar12;
        FUN_00d50b20();
      }
      goto LAB_01921cfa;
    }
    if ((char)local_6c == '\0') {
      local_60 = local_40;
      FUN_00d50b20();
    }
  }
  if (plVar12 != (int64_t *)0x0) {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = local_48;
    local_c0 = '\0';
    local_b8 = (int64_t *)0x0;
    local_b0 = '\0';
    local_a8 = (int64_t *)0x0;
    local_a0 = '\0';
    FUN_012cc0c0(&local_a8,&local_b8,1,0);
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      (**(code **)(*local_b8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar12;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01921eb2:
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    uVar11 = (uint64_t)local_98;
    if (iVar1 <= (int)local_98) {
      uVar11 = 0;
    }
    if ((int)local_98 < 0) {
      uVar11 = 0;
    }
    lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + uVar11 * 8);
    *(void*)(this_ptr + 1) = 0;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

