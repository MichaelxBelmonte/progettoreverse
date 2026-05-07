// Function: FUN_016cdc10
// Address: 016cdc10
// Size: 2697 bytes
// Class: MDMetaWindowController

double FUN_016cdc10(uint64_t param_1,void*param_2)

{
  void*puVar1;
  int64_t lVar2;
  bool bVar3;
  void*puVar4;
  char cVar5;
  void *pvVar6;
  void* pVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *arg1;
  void*puVar10;
  int64_t lVar11;
  double dVar12;
  uint64_t uVar13;
  double dVar14;
  void*local_108;
  void*local_100;
  char local_f8;
  void*local_f0;
  double local_e8;
  void*local_e0;
  uint64_t local_d8;
  uint32_t local_d0;
  uint32_t uStack_cc;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  void*local_98;
  void*local_90;
  char local_88;
  double local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint32_t local_44;
  double local_40;
  void*local_38;
  
  if (((*(int *)(*arg1 + 0x10) != 0) && (*(int *)(*arg1 + 0x18) != 0)) &&
     (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
    return g_02395720;
  }
  pVar7 = 0;
  FUN_016ce9f0();
  puVar10 = local_78;
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  lVar11 = *arg1;
  local_f0 = puVar10;
  if (((*(int *)(lVar11 + 0x10) != 0) && (*(int *)(lVar11 + 0x18) != 0)) &&
     (cVar5 = FUN_00e7c000(), cVar5 == '\0')) {
    puVar1 = *(void**)(lVar11 + 0xc);
    pVar7 = (void*)((uint64_t)puVar1 >> 0x20);
    if (((uint64_t)puVar1 >> 0x20 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
      local_d0 = 2;
      local_78 = puVar1;
      FUN_00e7c260();
      local_90 = local_78;
      if (((uint64_t)local_78 >> 0x20 != 0) &&
         ((*(int *)(lVar11 + 0x18) != 0 && (cVar5 = FUN_00e7c020(), cVar5 == '\0')))) {
        if (param_2 != (void*)0x0) {
          *param_2 = 1;
        }
        puVar10 = *(void**)((int64_t)puVar10 + 0x14);
        pVar7 = (void*)((uint64_t)puVar10 >> 0x20);
        if ((uint64_t)puVar10 >> 0x20 == 0) {
          FUN_00e7bdb0();
        }
        else {
          local_90 = (void*)CONCAT44(local_90._4_4_,1);
          local_78 = puVar10;
          FUN_00e7c280();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_018fd630();
        bVar3 = true;
        local_80 = g_02395720;
        goto LAB_016ce572;
      }
    }
  }
  if (*(uint64_t *)((int64_t)puVar10 + 0xc) >> 0x20 == 0) {
    FUN_00e7bdb0();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = FUN_0165d690();
  puVar1 = *(void**)((int64_t)puVar10 + 0x14);
  pVar7 = (void*)((uint64_t)puVar1 >> 0x20);
  if ((uint64_t)puVar1 >> 0x20 == 0) {
    local_78 = (void*)FUN_00e7bdb0();
  }
  else {
    local_90 = (void*)CONCAT44(local_90._4_4_,1);
    local_78 = puVar1;
    FUN_00e7c280();
  }
  local_90 = (void*)CONCAT44(local_90._4_4_,1);
  FUN_00e7c260();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d8 = FUN_0165d690();
  if (((local_a0._4_4_ != 0) && (local_d8 >> 0x20 != 0)) && (cVar5 = FUN_00e7c000(), cVar5 != '\0'))
  {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_018fd630();
    local_80 = g_02395720;
    bVar3 = true;
    goto LAB_016ce572;
  }
  local_40 = (double)FUN_00e7c860();
  local_80 = (double)FUN_00e7c860();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_e8 = (double)FUN_018fcb10();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_018fcb10();
  dVar14 = local_40 - local_80;
  local_80 = g_02395720;
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    dVar12 = local_e8 - dVar12;
    if ((dVar12 != 0.0) || (NAN(dVar12))) {
      local_80 = (dVar14 * g_023b4df8) / dVar12;
    }
  }
  bVar3 = false;
  if (param_2 == (void*)0x0) goto LAB_016ce572;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_018fe5d0();
  if (cVar5 != '\0') {
    *param_2 = 1;
    goto LAB_016ce572;
  }
  local_44 = 0xffffffff;
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = &local_44;
  FUN_018fea90(puVar8,local_a0);
  puVar1 = local_78;
  pVar7 = (void*)puVar8;
  local_e0 = param_2;
  if (((local_70 == '\0') && (local_78 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_70 != '\0' && (local_78 != (void*)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = &local_44;
  FUN_018ff490(puVar8,local_d8);
  puVar4 = local_78;
  pVar7 = (void*)puVar8;
  if (local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_016ce116;
    }
    if (puVar1 == (void*)0x0) goto LAB_016ce546;
LAB_016ce11f:
    local_38 = puVar1;
    if (puVar1 != puVar4) goto LAB_016ce12c;
LAB_016ce546:
    *local_e0 = 1;
  }
  else {
LAB_016ce116:
    if (puVar1 != (void*)0x0) goto LAB_016ce11f;
    if (puVar4 == (void*)0x0) goto LAB_016ce546;
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    local_38 = local_78;
    if (local_78 == (void*)0x0) {
      local_38 = puVar1;
    }
    else if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
            (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_016ce12c:
    local_98 = puVar4;
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_108 = local_98;
    uVar9 = 2;
    FUN_00083ea0(2,&local_108);
    uVar13 = FUN_016cef10();
    local_a8 = 0;
    local_b0 = CONCAT44(uStack_cc,local_d0);
    if (local_c8 == '\0') {
      if (local_b0 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_a8 = '\x01';
    FUN_01901690(uVar13,&local_b0);
    puVar1 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != (void*)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
         (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (CONCAT44(uStack_cc,local_d0) != 0)) {
      FUN_00d50b20();
    }
    local_78 = (void*)&g_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)uVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = local_38;
    local_f8 = '\0';
    local_40 = (double)FUN_018fde50();
    if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *local_e0 = 1;
    if (1 < *(int *)((int64_t)puVar1 + 0xc)) {
      local_e8 = g_0238fee8 / local_40;
      lVar11 = 1;
      do {
        pvVar6 = _pthread_getspecific((void*)uVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar2 = *(int64_t *)(puVar1[2] + lVar11 * 8);
        local_b8 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        local_c0 = lVar2;
        local_40 = (double)FUN_018fde50();
        puVar10 = local_f0;
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 * local_e8 < g_02411978) || (g_02411980 < local_40 * local_e8)) {
          *local_e0 = 0;
          break;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((int64_t)puVar1 + 0xc));
    }
    FUN_00d50b20();
    puVar1 = local_38;
    puVar4 = local_98;
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 == (void*)0x0) {
    return local_80;
  }
  bVar3 = false;
LAB_016ce572:
  FUN_00d50b20();
  if (!bVar3) {
    return local_80;
  }
  return local_40;
}

