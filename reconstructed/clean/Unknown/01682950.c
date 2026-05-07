// Function: FUN_01682950
// Address: 01682950
// Size: 4311 bytes
// Class: Unknown
// String references:
//   "audioSource->getDocumentController() == this"
//   "audioModification->getDocumentController() == this"

void* FUN_01682950(int64_t *param_1,int64_t param_2)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  char *pcVar5;
  void* pVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar11;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_88;
  char local_80;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  int64_t *local_38;
  
  plVar9 = local_68;
  plVar2 = (int64_t *)arg1[4];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pVar6 = (void*)param_1;
  local_38 = plVar2;
  if (param_2 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537d40();
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01683023;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_01683023:
      local_60[0] = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = plVar9;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar10 = -local_50._4_4_;
          }
          else {
            iVar10 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar10);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar10 = 0;
          }
          local_50 = CONCAT44(iVar10,(int)local_50);
        }
        lVar4 = (int64_t)(int)local_50;
        iVar10 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar10);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar10) break;
        lVar7 = local_58[2];
        local_68 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        pVar6 = (void*)lVar7;
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01733c10();
        if (cVar1 != '\0') {
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
        }
      }
      plVar2 = local_58;
      FUN_0049cb70();
      pVar6 = (void*)plVar2;
      FUN_00d50b20();
    }
    plVar2 = local_68;
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_016831c0;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_016831c0:
      local_60[0] = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = plVar2;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar10 = -local_50._4_4_;
          }
          else {
            iVar10 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar10);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar10 = 0;
          }
          local_50 = CONCAT44(iVar10,(int)local_50);
        }
        lVar4 = (int64_t)(int)local_50;
        iVar10 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar10);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar10) break;
        lVar7 = local_58[2];
        local_68 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        pVar6 = (void*)lVar7;
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01733c10();
        if (cVar1 != '\0') {
          pvVar3 = _pthread_getspecific(pVar6);
          plVar2 = local_68;
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar2 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar2 + 0x3a0))();
        }
      }
      plVar2 = local_58;
      FUN_0049cc10();
      pVar6 = (void*)plVar2;
      FUN_00d50b20();
    }
  }
  else {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_01538a90();
    (**(code **)(*plVar2 + 0x18))();
    if (local_38 == plVar2) {
      FUN_00d50b20();
LAB_01682a36:
      iVar10 = *(int *)(param_2 + 8);
    }
    else {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
        local_38 = plVar2;
        goto LAB_01682a36;
      }
      iVar10 = *(int *)(param_2 + 8);
      local_38 = plVar2;
    }
    if (iVar10 != 0) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537a10();
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      FUN_01537a40();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(param_2 + 0xc) != 0) {
      uVar8 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_01660830();
        if (local_68 != arg1) {
          FUN_016aea20(uVar11,"audioSource->getDocumentController() == this");
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01733c10();
        if (cVar1 != '\0') {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          param_1 = local_38;
        }
        FUN_01537d70();
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint64_t *)(param_2 + 0xc));
    }
    pVar6 = (void*)param_1;
    if (*(int64_t *)(param_2 + 0x1c) != 0) {
      uVar8 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x24) + uVar8 * 8);
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_0164e2c0();
        if (local_68 != arg1) {
          FUN_016aea20(uVar11,"audioModification->getDocumentController() == this");
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01733c10();
        if (cVar1 != '\0') {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar2 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar2 + 0x3a0))();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650620();
        if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          param_1 = local_38;
        }
        FUN_01537d40();
        local_60[0] = '\0';
        cVar1 = FUN_00d24090();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 == '\0') {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01653310();
        }
        pvVar3 = _pthread_getspecific((void*)param_1);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          param_1 = local_38;
        }
        FUN_01538000();
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        pVar6 = (void*)param_1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint64_t *)(param_2 + 0x1c));
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    pVar6 = (void*)local_38;
  }
  FUN_01537a10();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      pVar6 = (void*)local_38;
    }
    FUN_01537a10();
    pvVar3 = _pthread_getspecific(pVar6);
    plVar2 = local_68;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar2 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    (**(code **)(*plVar2 + 0x378))();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  pVar6 = 0x258cea8;
  *plVar2 = (int64_t)&g_0258cea8;
  *(void*)(plVar2 + 5) = 0;
  *(void*)((int64_t)plVar2 + 0x2c) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  uVar11 = (*g_0258cec0)();
  if (*(int64_t *)(arg1[6] + 0x20) != 0) {
    (**(code **)(arg1[2] + 0x10))();
    FUN_00d50b00();
    uVar11 = FUN_00e4b5a0();
    if (arg1 + 2 != (int64_t *)0x0) {
      (**(code **)(arg1[2] + 0x10))();
      uVar11 = FUN_00d50b20();
    }
  }
  local_108 = local_38;
  local_100 = '\0';
  (**(code **)(*plVar2 + 0x5f0))(uVar11,&local_108);
  if (local_60[0] == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    pVar6 = (void*)local_38;
  }
  FUN_01537a10();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      pVar6 = (void*)local_38;
    }
    FUN_01537a10();
    pvVar3 = _pthread_getspecific(pVar6);
    plVar9 = local_68;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar9 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x380))();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)arg1[4] == local_38) {
    *this_ptr = local_68;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    pvVar3 = _pthread_getspecific((void*)arg1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      arg1 = local_38;
    }
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01537a40();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    while( true ) {
      pvVar3 = _pthread_getspecific((void*)arg1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        arg1 = local_38;
      }
      FUN_01537d40();
      FUN_00d23340();
      local_40[0] = local_60[0];
      pcVar5 = local_60;
      if (local_60[0] == '\0') {
        pcVar5 = local_40;
      }
      *pcVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] == '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 == (int64_t *)0x0) break;
      pvVar3 = _pthread_getspecific((void*)arg1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        arg1 = local_38;
      }
      local_e8 = local_68;
      local_e0 = '\0';
      FUN_01537ea0();
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)arg1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      arg1 = local_38;
    }
    pVar6 = (void*)arg1;
    FUN_01537fd0();
    FUN_00d23340();
    local_40[0] = local_60[0];
    pcVar5 = local_60;
    if (local_60[0] == '\0') {
      pcVar5 = local_40;
    }
    *pcVar5 = '\0';
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    if (plVar2 == (int64_t *)0x0) goto LAB_01683aae;
  }
  FUN_00d50b20();
LAB_01683aae:
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

