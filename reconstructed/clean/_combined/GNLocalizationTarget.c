// ===================================================================
// GNLocalizationTarget — Complete reconstructed pseudocode
// 7 functions
// ===================================================================


// ============================================================
// 00e44550
// ============================================================
// Function: FUN_00e44550
// Address: 00e44550
// Size: 1838 bytes
// Class: GNLocalizationTarget

void FUN_00e44550(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  void*puVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00c899d0();
  *(void*)((int64_t)this_ptr + 0x2c) = 1;
  FUN_00d79550();
  lVar1 = this_ptr[0xc];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44591;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0xc];
      this_ptr[0xc] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44591:
      this_ptr[0xc] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  pcVar3 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  puVar6 = (void*)this_ptr[10];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e4463e:
    puVar4 = (void*)this_ptr[10];
    if (puVar4 != (void*)0x0) goto LAB_00e44653;
    puVar4 = (void*)0x0;
  }
  else {
    this_ptr[10] = (int64_t)puVar4;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
      goto LAB_00e4463e;
    }
LAB_00e44653:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = this_ptr[0xb];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44687;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0xb];
      this_ptr[0xb] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44687:
      this_ptr[0xb] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar3)();
  FUN_00c92170();
  puVar6 = (void*)this_ptr[0xd];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e44739:
    puVar4 = (void*)this_ptr[0xd];
    if (puVar4 != (void*)0x0) goto LAB_00e4474e;
    puVar4 = (void*)0x0;
  }
  else {
    this_ptr[0xd] = (int64_t)puVar4;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
      goto LAB_00e44739;
    }
LAB_00e4474e:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = this_ptr[0xe];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44782;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0xe];
      this_ptr[0xe] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44782:
      this_ptr[0xe] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar3)();
  FUN_00c92170();
  puVar6 = (void*)this_ptr[0xf];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
LAB_00e44834:
    puVar4 = (void*)this_ptr[0xf];
    if (puVar4 != (void*)0x0) goto LAB_00e44849;
    puVar4 = (void*)0x0;
  }
  else {
    this_ptr[0xf] = (int64_t)puVar4;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
      goto LAB_00e44834;
    }
LAB_00e44849:
    FUN_00d50b00();
  }
  FUN_00daa540();
  lVar1 = this_ptr[0x10];
  lVar7 = lVar1;
  if (lVar1 != local_38) {
    lVar7 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar7 = 0;
        goto LAB_00e44880;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x10];
      this_ptr[0x10] = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e44880:
      this_ptr[0x10] = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_0258a670;
  pcVar3 = g_0258a688;
  (*g_0258a688)();
  puVar6 = (void*)this_ptr[0x11];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x11] = (int64_t)puVar4;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x12];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x12] = (int64_t)plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_0258a670;
  (*pcVar3)();
  puVar6 = (void*)this_ptr[0x13];
  if (puVar6 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x13] = (int64_t)puVar4;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x14];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x14] = (int64_t)plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,1);
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x15];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x15] = (int64_t)plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,1);
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x16];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x16] = (int64_t)plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(1,1);
  FUN_00e44f20();
  lVar1 = this_ptr[0x17];
  lVar7 = lVar1;
  if (lVar1 == local_38) goto LAB_00e44b77;
  lVar7 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar7 = 0;
      goto LAB_00e44b2c;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[0x17];
    this_ptr[0x17] = local_38;
  }
  else {
    local_30 = '\0';
LAB_00e44b2c:
    this_ptr[0x17] = lVar7;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar7 = local_38;
  }
LAB_00e44b77:
  if ((local_30 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00023900();
  (**(code **)(*plVar5 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x18];
  if (plVar2 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x18] = (int64_t)plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e39cc0(0,0);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_0258ed08;
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *(void*)((int64_t)puVar6 + 0x11) = 0;
  (*g_0258ed20)();
  FUN_00e5e400();
  (**(code **)(*this_ptr + 0x600))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00e42bc0
// ============================================================
// Function: FUN_00e42bc0
// Address: 00e42bc0
// Size: 862 bytes
// Class: GNLocalizationTarget

void FUN_00e42bc0(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  char cVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50 [8];
  uint64_t local_48;
  int64_t local_40;
  char local_38 [7];
  char local_31;
  
  plVar1 = (int64_t *)(this_ptr + 0x10);
  lVar9 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar10 = 0;
  cVar8 = '\0';
  do {
    FUN_00c9fe20();
    local_38[0] = local_50[0];
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar2 <= lVar9) {
      if (((char)local_48 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((cVar8 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00c9fe20();
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = pcVar5;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar9 * 8);
    if (lVar10 == lVar3) {
      lVar4 = lVar10;
      local_31 = cVar8;
      if ((cVar8 == '\0') && (lVar3 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      lVar4 = lVar3;
      if ((cVar8 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar10 = lVar4;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    uVar7 = FUN_00e427c0();
    if (local_40 == local_58) {
      if (((char)local_48 == '\0') && (local_40 != 0)) {
        local_48 = CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
        if (local_50[0] == '\0') {
          FUN_00d50b00();
        }
      }
      else if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          uVar7 = FUN_00d50b00();
        }
        if (((char)local_48 != '\0') && (local_40 != 0)) {
          local_40 = local_58;
          uVar7 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          goto LAB_00e42e1a;
        }
      }
      else if (((char)local_48 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      local_40 = local_58;
      local_48 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    }
LAB_00e42e1a:
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_88 = '\0';
    local_80 = local_40;
    local_78 = '\0';
    local_90 = lVar10;
    FUN_00e3fb50(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b20();
    }
    lVar9 = lVar9 + 1;
    cVar8 = local_31;
  } while( true );
}



// ============================================================
// 00e41520
// ============================================================
// Function: FUN_00e41520
// Address: 00e41520
// Size: 823 bytes
// Class: GNLocalizationTarget
// String references:
//   "GNLocalizationTarget"

void FUN_00e41520(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar6 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x40);
  if (lVar2 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x40) = lVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_40[0];
  pcVar7 = local_40;
  if (local_40[0] == '\0') {
    pcVar7 = local_38;
  }
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_48;
  uVar1 = *(uint *)(local_48 + 0xc);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(local_70 + 0x10) + uVar8 * 8);
      // [STATIC_INIT: property registration]
      if (plVar3 == (int64_t *)0x0) {
        lVar6 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        lVar6 = FUN_00e86120();
      }
      FUN_00c9fe20();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar8 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00ca1380();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar8 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00e41a10();
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      local_60 = 0;
      FUN_00d50b00();
      lVar4 = local_78;
      local_60 = '\x01';
      local_98 = local_78;
      local_90 = '\0';
      local_88 = local_48;
      local_80 = '\0';
      local_68 = this_ptr;
      (**(code **)(*(int64_t *)((int64_t)plVar3 + lVar6) + 0x20))(&local_88,&local_98);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00e43c20
// ============================================================
// Function: FUN_00e43c20
// Address: 00e43c20
// Size: 551 bytes
// Class: GNLocalizationTarget

int FUN_00e43c20(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int64_t this_ptr;
  
  if (0 < *(int *)(this_ptr + 0x18)) {
    iVar6 = *(int *)(this_ptr + 0x18) + 0x1f >> 5;
    puVar5 = (uint *)((uint64_t)(iVar6 - 1) * 4 + *(int64_t *)(this_ptr + 0x10));
    iVar4 = iVar6 << 5;
    do {
      iVar3 = iVar4 + -0x20;
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        if ((int)uVar1 < 0) {
          iVar6 = 0x1f;
        }
        else {
          iVar6 = 0x1e;
          if ((((((((uVar1 & 0x40000000) == 0) && (iVar6 = 0x1d, (uVar1 & 0x20000000) == 0)) &&
                 (iVar6 = 0x1c, (uVar1 & 0x10000000) == 0)) &&
                ((iVar6 = 0x1b, (uVar1 & 0x8000000) == 0 && (iVar6 = 0x1a, (uVar1 & 0x4000000) == 0)
                 ))) && (iVar6 = 0x19, (uVar1 & 0x2000000) == 0)) &&
              (((iVar6 = 0x18, (uVar1 & 0x1000000) == 0 && (iVar6 = 0x17, (uVar1 & 0x800000) == 0))
               && ((iVar6 = 0x16, (uVar1 & 0x400000) == 0 &&
                   (((iVar6 = 0x15, (uVar1 & 0x200000) == 0 &&
                     (iVar6 = 0x14, (uVar1 & 0x100000) == 0)) &&
                    (iVar6 = 0x13, (uVar1 & 0x80000) == 0)))))))) &&
             (((iVar6 = 0x12, (uVar1 & 0x40000) == 0 && (iVar6 = 0x11, (uVar1 & 0x20000) == 0)) &&
              (iVar6 = 0x10, (uVar1 & 0x10000) == 0)))) {
            if ((short)uVar1 < 0) {
              return iVar4 + -0x11;
            }
            iVar6 = 0xe;
            if (((((uVar1 & 0x4000) == 0) && (iVar6 = 0xd, (uVar1 & 0x2000) == 0)) &&
                ((iVar6 = 0xc, (uVar1 & 0x1000) == 0 &&
                 (((iVar6 = 0xb, (uVar1 & 0x800) == 0 && (iVar6 = 10, (uVar1 & 0x400) == 0)) &&
                  (iVar6 = 9, (uVar1 & 0x200) == 0)))))) && (iVar6 = 8, (uVar1 & 0x100) == 0)) {
              if ((char)uVar1 < '\0') {
                return iVar4 + -0x19;
              }
              iVar6 = 6;
              if (((((uVar1 & 0x40) == 0) && (iVar6 = 5, (uVar1 & 0x20) == 0)) &&
                  ((iVar6 = 4, (uVar1 & 0x10) == 0 &&
                   ((iVar6 = 3, (uVar1 & 8) == 0 && (iVar6 = 2, (uVar1 & 4) == 0)))))) &&
                 (iVar6 = 1, (uVar1 & 2) == 0)) {
                return ((uVar1 & 1) - 1) + iVar3;
              }
            }
          }
        }
        return iVar6 + iVar3;
      }
      puVar5 = puVar5 + -1;
      iVar7 = iVar6 + -1;
      bVar2 = 0 < iVar6;
      iVar6 = iVar7;
      iVar4 = iVar3;
    } while (iVar7 != 0 && bVar2);
  }
  return -1;
}



// ============================================================
// 00e44ff0
// ============================================================
// Function: FUN_00e44ff0
// Address: 00e44ff0
// Size: 600 bytes
// Class: GNLocalizationTarget
// String references:
//   "Unknown compressor '%@'"

void FUN_00e44ff0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t *local_40;
  uint local_38;
  int64_t *local_30;
  char local_28;
  
  FUN_00c8ced0();
  if (*arg1 == 0) {
    *(void*)(this_ptr + 0x28) = 0;
    return;
  }
  FUN_00d4efa0();
  FUN_00c7e7b0();
  plVar2 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02786798;
  if (g_02786798 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027867a0;
  uVar4 = 1;
  if (cVar3 == '\0') {
    if (g_027867a0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027867a8;
    uVar4 = 2;
    if (cVar3 == '\0') {
      if (g_027867a8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027816e8;
      uVar4 = 3;
      if (cVar3 == '\0') {
        if (g_027816e8 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        local_40 = &g_024c5048;
        FUN_00d50b00();
        local_30 = plVar2;
        local_28 = '\x01';
        FUN_00cc7b40(param_1,&local_40);
        local_40 = &g_024c5048;
        if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00e4516b;
      }
    }
  }
  *(void*)(this_ptr + 0x28) = uVar4;
LAB_00e4516b:
  FUN_00d50b20();
  return;
}



// ============================================================
// 001efe70
// ============================================================
// Function: FUN_001efe70
// Address: 001efe70
// Size: 2442 bytes
// Class: GNLocalizationTarget
// String references:
//   "GNLocalizationTarget"
//   "GNTableColumn"

void FUN_001efe70(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_0258bc60;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02692468;
  this_ptr[2] = &g_026927f8;
  FUN_001f08b0();
  FUN_001f0ba0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f0e90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1000();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1170();
    FUN_00e87980();
  }
  FUN_001f12e0();
  FUN_001f15e0();
  FUN_001f1860();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1ae0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1c50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x52) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1dc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x53) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f1f30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f20a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f22d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f1b83 == '\0') {
    FUN_001f2440();
    FUN_00e87980();
  }
  FUN_001f25b0();
  return;
}



// ============================================================
// 001f5ef0
// ============================================================
// Function: FUN_001f5ef0
// Address: 001f5ef0
// Size: 752 bytes
// Class: GNLocalizationTarget
// String references:
//   "GNLocalizationTarget"
//   "GNTabViewItem"

void FUN_001f5ef0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_0258bc60;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0269bce0;
  this_ptr[2] = &g_0269c0a0;
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f300b == '\0') {
    FUN_001f62f0();
    FUN_00e87980();
  }
  FUN_001f6460();
  FUN_001f6750();
  FUN_001f69d0();
  FUN_001f6c50();
  FUN_001f6f40();
  FUN_001f7240();
  FUN_001f7530();
  FUN_001f7820();
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f300b == '\0') {
    FUN_001f7b10();
    FUN_00e87980();
  }
  return;
}

