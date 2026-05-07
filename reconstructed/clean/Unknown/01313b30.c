// Function: FUN_01313b30
// Address: 01313b30
// Size: 4588 bytes
// Class: Unknown

void FUN_01313b30(double param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t *in_RCX;
  uint64_t uVar12;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar13;
  byte local_res8;
  int64_t *local_res10;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  uint64_t local_e8;
  double local_e0;
  uint64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  
  lVar4 = local_70;
  local_e0 = param_1;
  local_d8 = param_4;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar11 = 0x2572358;
  *puVar6 = &g_02572358;
  local_b0 = puVar6;
  (*g_02572370)();
  local_e8 = param_2;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = local_40;
  FUN_00243390();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar8 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_58) break;
      local_70 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar8 * 8);
      pvVar7 = _pthread_getspecific((void*)*(int64_t *)(lVar4 + 0x10));
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      local_40 = local_c0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_38 = '\0';
      FUN_00d235a0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar8 = lVar4;
    FUN_001159b0();
    pVar11 = (void*)lVar8;
  }
  lVar8 = *(int64_t *)(this_ptr + 0x38);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar10 = *arg1;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    lVar10 = *arg1;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(int64_t *)(lVar10 + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  pVar1 = (void*)lVar8;
  if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar11 = pVar1;
  }
  FUN_012caf10();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (*in_RCX == 0) {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar11 = pVar1;
    }
    FUN_012cb110();
    lVar10 = *in_RCX;
    if (lVar10 == local_70) {
      if (((char)in_RCX[1] != '\0') || (local_70 == 0)) goto LAB_01314072;
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_0131406e;
      }
    }
    else {
      lVar9 = in_RCX[1];
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        *in_RCX = local_70;
        if (((char)lVar9 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
LAB_0131406e:
        *(void*)(in_RCX + 1) = 1;
LAB_01314072:
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01314086;
      }
      *in_RCX = local_70;
      if (((char)lVar9 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(in_RCX + 1) = 1;
  }
LAB_01314086:
  if (*param_3 != 0) goto LAB_01314182;
  pvVar7 = _pthread_getspecific(pVar11);
  if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    pVar11 = (void*)lVar2;
  }
  FUN_015058d0();
  lVar10 = *param_3;
  if (lVar10 == local_70) {
    if (((char)param_3[1] != '\0') || (local_70 == 0)) goto LAB_0131416e;
    if (local_68 == '\0') {
      FUN_00d50b00();
      goto LAB_0131416a;
    }
  }
  else {
    lVar9 = param_3[1];
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_70;
      if (((char)lVar9 != '\0') && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_0131416a:
      *(void*)(param_3 + 1) = 1;
LAB_0131416e:
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01314182;
    }
    *param_3 = local_70;
    if (((char)lVar9 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(param_3 + 1) = 1;
LAB_01314182:
  puVar6 = local_b0;
  if (local_d8._4_4_ != 0) {
    if (local_res8 == 0) {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7bdb0();
      pVar11 = 0;
      local_e0 = (double)FUN_016c46a0();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (void*)local_70;
      }
      dVar13 = (double)FUN_016c98e0();
      local_e0 = dVar13 - local_e0;
      puVar6 = local_b0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = (void*)local_70;
      }
      FUN_00e7bdb0();
      FUN_016c4760();
      FUN_00e7b970();
      puVar6 = local_b0;
    }
  }
  local_b0 = puVar6;
  if (puVar6 != (void*)0x0) {
    local_58 = -1;
    while( true ) {
      lVar10 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((int64_t)puVar6 + 0xc) <= local_58) break;
      lVar9 = puVar6[2];
      local_40 = *(int64_t *)(lVar9 + 8 + lVar10 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar9);
      pVar11 = (void*)lVar9;
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        pVar11 = pVar1;
      }
      FUN_012cb480();
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        lVar10 = *arg1;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          lVar10 = *arg1;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
        }
        lVar10 = *(int64_t *)(lVar10 + 0x38);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb5e0();
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb4b0();
      }
    }
    FUN_00115e00();
    pVar11 = (void*)puVar6;
  }
  if (lVar4 != 0) {
    local_58 = -1;
    while (local_58 = local_58 + 1, local_58 < *(int *)(lVar4 + 0xc)) {
      pVar11 = (void*)*(void*)(lVar4 + 0x10);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_013145f0;
        }
LAB_013148e0:
        bVar3 = true;
      }
      else {
        if (local_40 == 0) goto LAB_013148e0;
LAB_013145f0:
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150da40();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d560();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d3a0();
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d720();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        bVar3 = false;
      }
      if ((byte)(local_d8._4_4_ == 0 | local_res8 ^ 1) == 1) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125a280();
        FUN_012642b0(dVar13 + local_e0);
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
    }
    lVar10 = lVar4;
    FUN_001159b0();
    pVar11 = (void*)lVar10;
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  if ((local_d8 >> 0x20 == 0) || (local_res8 == 0)) {
    local_128 = lVar4;
    local_120 = '\0';
    uVar12 = local_d8;
    FUN_00e7bdb0();
    pVar11 = (void*)uVar12;
    FUN_01287c80();
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_148 = local_70;
    local_140 = '\0';
    local_138 = 0;
    local_130 = '\0';
    uVar12 = local_d8;
    FUN_012910e0(g_0238fee8,&local_148,&local_138);
    pVar11 = (void*)uVar12;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = *local_res10;
  local_110 = '\0';
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
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

