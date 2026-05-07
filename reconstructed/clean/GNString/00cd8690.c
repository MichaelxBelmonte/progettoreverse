// Function: FUN_00cd8690
// Address: 00cd8690
// Size: 1111 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


dword * FUN_00cd8690(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  dword *pdVar7;
  int iVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *this_ptr;
  dword *pdVar12;
  int64_t lVar13;
  void*puVar14;
  uint32_t uVar15;
  uint64_t unaff_R14;
  dword *pdVar16;
  bool bVar17;
  int64_t local_c0;
  char local_b8;
  int64_t *local_a8;
  char local_a0;
  dword *local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int local_6c;
  int64_t *local_68;
  uint32_t local_60;
  int local_5c;
  int64_t *local_58;
  char local_50;
  uint8_t local_44;
  uint8_t local_43;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  int64_t local_38;
  
  lVar11 = g_02704060;
  if (g_02704060 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar11;
  local_88 = '\x01';
  FUN_00d91000(1,&local_90);
  plVar10 = local_58;
  if (local_58 == (int64_t *)0x0) {
    uVar15 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
      uVar15 = 0;
      if ((local_50 == '\0') || (local_58 == (int64_t *)0x0)) goto LAB_00cd8723;
      FUN_00d50b20();
    }
    else {
      local_50 = '\0';
    }
    uVar15 = 0;
  }
LAB_00cd8723:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_6c = *(int *)((int64_t)plVar10 + 0xc);
  local_68 = plVar10;
  local_60 = uVar15;
  if (local_6c == 0) {
    local_40 = 0;
    lVar11 = 0;
LAB_00cd8ad3:
    pdVar7 = (dword *)0x0;
LAB_00cd8ad5:
    if ((char)local_60 == '\0' && local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    return pdVar7;
  }
  iVar8 = 0;
  local_40 = 0;
  lVar11 = 0;
  pdVar16 = (dword *)0x0;
LAB_00cd8788:
  lVar5 = local_68[2];
  pdVar7 = (dword *)(int64_t)iVar8;
  lVar13 = *(int64_t *)(lVar5 + (int64_t)pdVar7 * 8);
  local_5c = iVar8;
  if (lVar11 == lVar13) {
    lVar2 = lVar11;
    if (((char)local_40 == '\0') && (lVar13 != 0)) {
      local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      local_38 = lVar11;
      FUN_00d50b00();
      lVar2 = local_38;
    }
  }
  else {
    if (lVar13 != 0) {
      lVar5 = FUN_00d50b00();
    }
    bVar17 = (char)local_40 != '\0';
    local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
    lVar2 = lVar13;
    if ((bVar17) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = lVar2;
  uVar9 = 0;
  do {
    while( true ) {
      plVar10 = (int64_t *)*this_ptr;
      if (*(uint *)((int64_t)plVar10 + 0x1c) <= uVar9) {
        if (*(uint *)((int64_t)plVar10 + 0x1c) == 0) goto LAB_00cd8970;
        lVar11 = 0;
        pdVar12 = (dword *)0x0;
        goto LAB_00cd891a;
      }
      lVar5 = *(int64_t *)(plVar10[4] + 0x10);
      lVar13 = (uint64_t)uVar9 * 0x23c;
      if ((*(int64_t *)(lVar5 + 8 + lVar13) != 0) &&
         (*(int *)(lVar5 + 0x20 + lVar13) == (int)pdVar16)) break;
      uVar9 = uVar9 + 1;
      pdVar7 = (dword *)0x0;
    }
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      if (*(short *)(lVar5 + lVar13 + 0x24 + uVar6 * 2) == 0) break;
      uVar1 = uVar6 + 1;
    } while (uVar6 < 0x100);
    if ((int)(uVar6 + 1) == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0(plVar10[4],uVar6);
    }
    local_80 = local_38;
    local_78 = '\0';
    cVar3 = (**(code **)(*local_58 + 0x50))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar9 = uVar9 + 1;
    pdVar7 = (dword *)0x0;
    if (cVar3 != '\0') {
      pdVar7 = (dword *)(uint64_t)uVar9;
    }
  } while ((int)pdVar7 == 0);
  lVar11 = local_38;
  iVar8 = local_5c;
  if (*(int64_t *)(lVar5 + lVar13 + 8) < 0) goto LAB_00cd8779;
  goto LAB_00cd8ad3;
LAB_00cd891a:
  do {
    lVar5 = *(int64_t *)(plVar10[4] + 0x10);
    if ((*(int64_t *)(lVar5 + 8 + lVar11) == 0) && (*(int64_t *)(lVar5 + 0x10 + lVar11) == 0)) {
      ___bzero();
      if ((int)pdVar12 != -1) {
        puVar14 = (void*)(lVar5 + lVar11);
        local_98 = (dword *)(uint64_t)((int)pdVar12 + 1);
        iVar8 = local_5c;
        goto LAB_00cd8a45;
      }
    }
    pdVar7 = (dword *)((int64_t)pdVar12 + 1);
    lVar11 = lVar11 + 0x23c;
    pdVar12 = pdVar7;
  } while (pdVar7 < (void*)(uint64_t)*(uint *)((int64_t)plVar10 + 0x1c));
LAB_00cd8970:
  local_50 = '\0';
  local_58 = plVar10;
  puVar14 = (void*)FUN_00cdaed0();
  iVar8 = local_5c;
  uVar9 = *(uint *)((int64_t)plVar10 + 0x1c);
  local_98 = (dword *)(uint64_t)uVar9;
  *(int64_t *)((int64_t)puVar14 + 0x22c) = plVar10[5];
  local_41 = (uint8_t)uVar9;
  local_42 = (uint8_t)(uVar9 >> 8);
  local_43 = (uint8_t)(uVar9 >> 0x10);
  local_44 = (uint8_t)(uVar9 >> 0x18);
  (**(code **)(*(int64_t *)plVar10[7] + 0x3a0))(local_98,0x10);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pdVar7 = &MACH_HEADER.cputype;
  (**(code **)(*(int64_t *)plVar10[7] + 0x388))(4,&local_44);
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (int64_t *)0x0) {
    *(int *)((int64_t)plVar10 + 0x1c) = *(int *)((int64_t)plVar10 + 0x1c) + -1;
    lVar11 = local_38;
    goto LAB_00cd8ad3;
  }
  plVar10[5] = plVar10[5] + 0x22c;
LAB_00cd8a45:
  FUN_00d8d520();
  iVar4 = FUN_00d8c7a0();
  _memcpy(pdVar7,(void *)((int64_t)iVar4 * 2),param_3);
  *puVar14 = 0x22c;
  *(int *)(puVar14 + 4) = (int)pdVar16;
  puVar14[1] = 0x8000000000000000;
  puVar14[2] = 0;
  puVar14[3] = 0;
  local_a0 = '\0';
  cVar3 = FUN_00cdb0d0();
  pdVar7 = local_98;
  if (cVar3 == '\0') {
    pdVar7 = (dword *)0x0;
  }
  lVar11 = local_38;
  local_a8 = plVar10;
  if ((int)pdVar7 == 0) goto LAB_00cd8ad3;
LAB_00cd8779:
  iVar8 = iVar8 + 1;
  lVar11 = local_38;
  pdVar16 = pdVar7;
  if (iVar8 == local_6c) goto LAB_00cd8ad5;
  goto LAB_00cd8788;
}

