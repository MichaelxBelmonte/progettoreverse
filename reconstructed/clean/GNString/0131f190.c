// Function: FUN_0131f190
// Address: 0131f190
// Size: 2487 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0131f190(void* param_1,uint64_t param_2)

{
  double *pdVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  int64_t lVar7;
  uint uVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  int64_t lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  int64_t lVar15;
  double dVar16;
  int64_t local_d8;
  char local_d0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  void* local_64;
  double local_60;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_64 = param_1;
  local_60 = (double)(**(code **)(*this_ptr + 0x5f8))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01263cd0();
  if (cVar4 == '\0') {
    dVar16 = (double)(**(code **)(*this_ptr + 0x5e0))();
    this_ptr[0x1e] = (int64_t)(dVar16 - (double)this_ptr[0x21]);
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar15 = FUN_0125a280();
    this_ptr[0x21] = lVar15;
    dVar16 = (double)(**(code **)(*this_ptr + 0x5f0))();
    this_ptr[0x1f] = (int64_t)(dVar16 - (double)this_ptr[0x21]);
    lVar15 = this_ptr[0x23];
  }
  else {
    dVar16 = (double)this_ptr[0x1e];
    dVar13 = (double)(**(code **)(*this_ptr + 0x5e0))();
    dVar14 = (double)(**(code **)(*this_ptr + 0x5f0))();
    this_ptr[0x1f] = (int64_t)((dVar16 - dVar13) + dVar14);
    lVar15 = this_ptr[0x23];
  }
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  local_70 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_70 + 0xc) < 1) {
    bVar3 = false;
    local_38 = 0;
  }
  else {
    lVar11 = 0;
    local_38 = 0;
    bVar3 = false;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar11 * 8);
      lVar10 = local_70;
      if (local_38 == lVar7) {
        if (bVar3) {
          if (local_38 != 0) goto LAB_0131f3ff;
        }
        else if (local_38 != 0) {
          bVar3 = true;
          lVar7 = local_70;
          FUN_00d50b00();
          pVar9 = (void*)lVar7;
          goto LAB_0131f434;
        }
LAB_0131f3a0:
        local_38 = 0;
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_38 != 0)) {
          FUN_00d50b20();
        }
        local_38 = lVar7;
        bVar3 = true;
        if (lVar7 == 0) goto LAB_0131f3a0;
LAB_0131f3ff:
        pVar9 = (void*)lVar10;
LAB_0131f434:
        cVar4 = FUN_0131eff0();
        if (cVar4 == '\0') {
          FUN_012ddc30();
          FUN_0131dde0();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == 0) break;
          FUN_00d50b00();
          FUN_012dd9b0();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (local_60 <= g_02390448) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_011eeeb0();
          }
          else {
            dVar16 = (double)this_ptr[0x1e];
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_011eedd0();
            dVar16 = dVar16 - dVar13;
          }
          lVar7 = this_ptr[0x22];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          local_88 = 0;
          lVar10 = this_ptr[0x23];
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          local_88 = '\x01';
          local_90 = lVar10;
          FUN_0141d120(dVar16,&local_90,this_ptr[0x20]);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(local_70 + 0xc));
  }
  lVar11 = this_ptr[0x24];
  uVar8 = *(uint *)(lVar11 + 0xc);
  dVar16 = (double)(uint64_t)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      local_60 = dVar16;
      uVar12 = uVar8 - 1;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + (uint64_t)uVar12 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar8 = local_64;
      (**(code **)(*plVar2 + 0x400))(local_64,param_2);
      cVar4 = FUN_0141d060();
      if (cVar4 == '\0') {
        FUN_012ddc30();
        lVar11 = *(int64_t *)(*(int64_t *)(this_ptr[0x24] + 0x10) + (uint64_t)uVar12 * 8);
        local_78 = 0;
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        local_78 = '\x01';
        local_80 = lVar11;
        FUN_0131dea0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
      }
      FUN_00d50b20();
      if ((int64_t)local_60 < 2) break;
      lVar11 = this_ptr[0x24];
      uVar8 = uVar12;
      dVar16 = (double)((int64_t)local_60 - 1);
    }
  }
  pvVar6 = _pthread_getspecific(uVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01263cd0();
  if (cVar4 != '\0') {
    this_ptr[0x1e] = this_ptr[0x1f];
  }
  lVar11 = this_ptr[0x20];
  lVar7 = FUN_012dd9d0();
  lVar10 = (int64_t)(int)local_64;
  if (lVar7 < lVar11 - lVar10) goto LAB_0131f9fd;
  local_60 = (double)this_ptr[0x1f];
  pvVar6 = _pthread_getspecific(local_64);
  pVar9 = (void*)lVar10;
  if ((pvVar6 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
    if (local_60 < *(double *)(lVar15 + 0xf0) || local_60 == *(double *)(lVar15 + 0xf0))
    goto LAB_0131f936;
  }
  else {
    pdVar1 = (double *)
             (*(int64_t *)(lVar15 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8) + 0xf0);
    if (local_60 < *pdVar1 || local_60 == *pdVar1) {
LAB_0131f936:
      if (0.0 < (double)this_ptr[0x1f] || (double)this_ptr[0x1f] == 0.0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_48 == 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          bVar5 = FUN_01263cd0();
          bVar5 = bVar5 ^ 1;
        }
        else {
          bVar5 = 0;
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (bVar5 == 0) {
          local_60 = (double)this_ptr[0x1f];
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01270640();
          if (dVar16 < local_60) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_01264170();
            if ((dVar16 == g_023b2568) && (!NAN(dVar16) && !NAN(g_023b2568))) {
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01259540((double)(int)local_64 * (double)this_ptr[4] + (double)this_ptr[0x1f]);
            }
            *(void*)(this_ptr + 0x1d) = 0;
            FUN_0131ed90();
          }
          goto LAB_0131f9fd;
        }
      }
    }
  }
  *(void*)(this_ptr + 0x1d) = 0;
  FUN_0131ed90();
LAB_0131f9fd:
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

