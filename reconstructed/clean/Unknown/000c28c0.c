// Function: FUN_000c28c0
// Address: 000c28c0
// Size: 2572 bytes
// Class: Unknown

void* FUN_000c28c0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*puVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  int iVar10;
  uint32_t uVar11;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  int64_t *local_38;
  
  plVar6 = (int64_t *)arg1[0x2b];
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  local_110 = *param_2;
  local_108 = '\0';
  FUN_00c9fe40(uVar11,&local_110);
  plVar9 = local_68;
  local_78._0_1_ = local_60[0];
  plVar3 = &local_78;
  if (local_60[0] != '\0') {
    plVar3 = (int64_t *)local_60;
  }
  *(void*)plVar3 = 0;
  if ((local_60[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 == '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) goto LAB_000c32c7;
  plVar3 = plVar9;
  local_90 = plVar6;
  FUN_00751e50();
  pVar8 = (void*)plVar3;
  local_88 = local_68;
  if (local_68 == (int64_t *)0x0) {
    local_88 = plVar9;
  }
  else if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) &&
          (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x720))();
  local_100 = local_88;
  local_f8 = '\0';
  (**(code **)(*local_68 + 0x5f0))();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_88 + 0x498))();
  FUN_00cafd20();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_88 + 0x498))();
  FUN_00cb1f10();
  FUN_00db3260();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  local_80 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar8 = (void*)local_80;
  }
  FUN_01240660();
  plVar6 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000c2be5;
    }
LAB_000c2cf0:
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar6[7] = 0;
    *plVar6 = (int64_t)&g_024cbc70;
    *(void*)(plVar6 + 8) = 0;
    FUN_00d500e0();
    pvVar4 = _pthread_getspecific(pVar8);
    local_38 = plVar6;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar8 = (void*)local_38;
    }
    FUN_0124a800();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f0 = local_38;
    local_e8 = '\0';
    FUN_01240690();
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240920();
    FUN_00d23310();
    plVar9 = local_68;
    plVar6 = (int64_t *)local_40;
    plVar3 = (int64_t *)local_60;
    if (local_60[0] == '\0') {
      plVar3 = plVar6;
    }
    local_40[0] = local_60[0];
    *(void*)plVar3 = 0;
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
      FUN_00d50b20();
    }
    iVar10 = 0;
    while( true ) {
      pvVar4 = _pthread_getspecific((void*)plVar6);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar6 = local_38;
      }
      iVar2 = FUN_0124a860();
      pVar8 = (void*)plVar6;
      if (iVar2 <= iVar10) break;
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_024cc370;
      puVar7[7] = 0;
      puVar7[8] = 0;
      FUN_00d500e0();
      pvVar4 = _pthread_getspecific((void*)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar4 = _pthread_getspecific((void*)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar4 = _pthread_getspecific((void*)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = local_38;
      local_d8 = '\0';
      FUN_0123fb40();
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)plVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = '\0';
      local_d0 = puVar7;
      FUN_01240230();
      if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      iVar10 = iVar10 + 1;
    }
    bVar1 = true;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_000c2cf0;
LAB_000c2be5:
    local_60[0] = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar6;
    local_50 = 0xffffffff;
    local_48 = 0;
    while( true ) {
      lVar5 = (int64_t)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      plVar6 = local_58;
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar10) break;
      local_68 = *(int64_t **)(local_58[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)local_58[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_0124a850();
      if (iVar10 == 0x24) {
        local_38 = local_68;
        plVar6 = (int64_t *)0x0;
        if (local_68 != (int64_t *)0x0) {
          plVar6 = local_68;
          if (local_60[0] == '\0') {
            FUN_00d50b00();
          }
          else {
            local_60[0] = '\0';
          }
          pVar8 = (void*)plVar6;
          bVar1 = true;
          goto LAB_000c2cd4;
        }
        break;
      }
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar10 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
    }
    pVar8 = (void*)plVar6;
    bVar1 = false;
    local_38 = (int64_t *)0x0;
LAB_000c2cd4:
    FUN_000e2ec0();
    FUN_00d50b20();
    if (local_38 == (int64_t *)0x0) goto LAB_000c2cf0;
  }
  plVar6 = local_88;
  FUN_00757c60();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = local_38;
  local_b8 = '\0';
  FUN_012e8aa0();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x498))();
  FUN_00cb1f10();
  FUN_00db3270();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x498))();
  uVar11 = (**(code **)(*local_68 + 0x3c8))();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_b0 = *param_2;
  local_a8 = '\0';
  local_68 = plVar6;
  local_60[0] = '\0';
  FUN_00ca0840(uVar11,&local_b0);
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *param_2;
  local_98 = '\0';
  (**(code **)(*plVar6 + 0x620))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_90;
  plVar9 = local_88;
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar9 = local_88;
  }
LAB_000c32c7:
  *this_ptr = plVar9;
  *(void*)(this_ptr + 1) = 1;
  (**(code **)(*plVar6 + 0x378))();
  return this_ptr;
}

