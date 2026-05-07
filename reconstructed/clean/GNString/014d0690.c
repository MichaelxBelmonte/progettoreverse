// Function: FUN_014d0690
// Address: 014d0690
// Size: 3296 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_014d0690(int64_t *param_1)

{
  uint uVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  void*puVar13;
  void* pVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar18;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar19;
  int64_t *plVar20;
  bool bVar21;
  int64_t local_e8;
  char local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_60;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  int64_t *plVar17;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x378))();
    plVar17 = (int64_t *)*arg1;
    if (plVar17 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_014d077f;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014d0773;
      }
    }
    else {
      lVar10 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_014d0773:
        *(void*)(arg1 + 1) = 1;
LAB_014d077f:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_014d0793;
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_014d0793:
  FUN_014bc000();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_014d07d1;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_014d07d1:
    FUN_014d19a0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_014d1b50();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_014d083e;
      }
LAB_014d09a5:
      local_78 = local_40;
      pVar14 = (void*)param_1;
      bVar21 = false;
      if (local_40 == (int64_t *)0x0) goto LAB_014d0a46;
LAB_014d09b5:
      pvVar7 = _pthread_getspecific(pVar14);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      local_50 = local_40;
      param_1 = local_40;
      if (local_40 == (int64_t *)0x0) goto LAB_014d0a46;
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_014d09a5;
LAB_014d083e:
      pvVar7 = _pthread_getspecific((void*)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = local_40;
      }
      FUN_014d1d00();
      if (local_40 == (int64_t *)0x0) {
        bVar21 = false;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          param_1 = local_40;
        }
        FUN_014d1d00();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        bVar21 = local_e8 != 0;
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar21) goto LAB_014d09a5;
      FUN_00d50b20();
      pVar14 = (void*)param_1;
      bVar21 = true;
      local_78 = (int64_t *)0x0;
      if (local_40 != (int64_t *)0x0) goto LAB_014d09b5;
LAB_014d0a46:
      local_50 = (int64_t *)0x0;
      bVar4 = false;
    }
    if (local_78 == (int64_t *)0x0) {
      bVar3 = false;
      local_48 = (int64_t *)0x0;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      local_48 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_48 = (int64_t *)0x0;
        bVar3 = false;
        param_1 = local_40;
      }
      else {
        bVar3 = true;
        param_1 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(local_40 + 6);
    uVar8 = (uint64_t)(int)uVar1;
    dVar2 = g_0238fee8 / (double)local_40[7];
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if (local_50 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      if (local_48 != (int64_t *)0x0) goto LAB_014d0c98;
LAB_014d0d3c:
      local_60 = (int64_t *)0x0;
    }
    else {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_70 = local_40;
      if (local_48 == (int64_t *)0x0) goto LAB_014d0d3c;
LAB_014d0c98:
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_60 = local_40;
    }
    uVar9 = (**(code **)(*this_ptr + 0x388))();
    uVar16 = (uVar9 | uVar8) >> 0x20;
    if (uVar16 == 0) {
      uVar18 = (uVar9 & 0xffffffff) % (uint64_t)uVar1;
      iVar5 = (int)((uVar9 & 0xffffffff) / (uint64_t)uVar1);
    }
    else {
      iVar5 = (int)((int64_t)uVar9 / (int64_t)uVar8);
      uVar18 = (int64_t)uVar9 % (int64_t)uVar8;
    }
    FUN_00c8e690(uVar16,uVar18);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar10 = (**(code **)(*this_ptr + 0x380))();
    if (-2 < iVar5) {
      uVar15 = iVar5 + 2;
      plVar17 = (int64_t *)(uint64_t)uVar15;
      uVar9 = 1;
      if (1 < (int)uVar15) {
        uVar9 = (uint64_t)uVar15;
      }
      iVar19 = 0;
      uVar16 = 0;
      do {
        pvVar7 = _pthread_getspecific((void*)plVar17);
        plVar20 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = local_40;
          plVar20 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific((void*)plVar17);
        plVar17 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar17 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        uVar6 = (**(code **)(*plVar17 + 0x3a0))();
        lVar11 = (int64_t)iVar19 + lVar10 + -((int)(((uint)(uVar8 >> 0x1f) & 1) + uVar1) >> 1);
        plVar17 = (int64_t *)0x0;
        (**(code **)(*plVar20 + 0x388))(0,g_0238fee8,uVar6,lVar11);
        if ((local_50 != (int64_t *)0x0) && (uVar16 < 3)) {
          pvVar7 = _pthread_getspecific((void*)plVar17);
          plVar20 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = local_50;
            plVar20 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          pvVar7 = _pthread_getspecific((void*)plVar17);
          plVar17 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          uVar6 = (**(code **)(*plVar17 + 0x3a0))();
          plVar17 = (int64_t *)0x0;
          uVar6 = (**(code **)(*plVar20 + 0x388))(0,g_0238fee8,uVar6,lVar11);
          (**(code **)(g_02786500 + 0x28))(uVar6,uVar1);
        }
        if ((local_48 != (int64_t *)0x0) && ((int64_t)(iVar5 + -2) < (int64_t)uVar16)) {
          pvVar7 = _pthread_getspecific((void*)plVar17);
          plVar20 = local_48;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = local_48;
            plVar20 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          pvVar7 = _pthread_getspecific((void*)plVar17);
          plVar17 = local_48;
          if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            plVar17 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
          uVar6 = (**(code **)(*plVar17 + 0x3a0))();
          plVar17 = (int64_t *)0x0;
          uVar6 = (**(code **)(*plVar20 + 0x388))(0,g_0238fee8,uVar6,lVar11);
          (**(code **)(g_02786500 + 0x28))(uVar6,uVar1);
        }
        uVar6 = (**(code **)(g_02786500 + 0x10))();
        *(void*)(local_40[2] + uVar16 * 4) = uVar6;
        uVar16 = uVar16 + 1;
        iVar19 = iVar19 + uVar1;
      } while (uVar9 != uVar16);
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar13 + 7) = 0;
    *(void*)((int64_t)puVar13 + 0x3c) = 0;
    *(void*)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &g_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*g_025dca00)();
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar7 = _pthread_getspecific(pVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if ((local_48 != (int64_t *)0x0) && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != (int64_t *)0x0) && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar21 && local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)puVar13 >> 8),1);
    FUN_00d50b20();
    goto LAB_014d137c;
  }
  uVar8 = 0;
LAB_014d137c:
  return uVar8 & 0xffffffff;
}

