// Function: FUN_01518160
// Address: 01518160
// Size: 1812 bytes
// Class: MUPercussivePitchSystem

void FUN_01518160(double param_1,double param_2,char param_3)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int64_t *plVar5;
  void *pvVar6;
  uint in_ECX;
  void* pVar7;
  void*in_RDX;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qa;
  double dVar17;
  void*local_res8;
  void*local_res10;
  uint64_t local_128;
  uint8_t local_120;
  int64_t *local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t *local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  double local_c8;
  int64_t *in_stack_ffffffffffffff60;
  char local_98 [8];
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t *local_78;
  
  pVar7 = in_ECX;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = this_ptr;
  if (1 < *(int *)(*arg1 + 0xc)) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar5 + 0x18))();
    if (plVar5 == this_ptr) {
      FUN_00d50b20();
      plVar5 = this_ptr;
    }
    else if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((char)in_ECX != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_98[0] = '\0';
      uVar11 = FUN_01512be0();
      FUN_01513590(uVar11,0);
      in_stack_ffffffffffffff60 = this_ptr;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_3 != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_01512890();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23340();
  cVar2 = local_98[0];
  pcVar8 = &stack0xffffffffffffff90;
  if (local_98[0] != '\0') {
    pcVar8 = local_98;
  }
  *pcVar8 = '\0';
  if ((local_98[0] != '\0') && (in_stack_ffffffffffffff60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (in_stack_ffffffffffffff60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = in_stack_ffffffffffffff60;
  FUN_00d23740();
  uVar9 = in_ECX & 0xff;
  uVar11 = 0;
  FUN_01517980(param_1,param_2,uVar9,param_3);
  pvVar6 = _pthread_getspecific((void*)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01655040();
  pvVar6 = _pthread_getspecific((void*)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01655100();
  uVar12 = FUN_00e7b500(uVar12);
  lVar1 = *arg1;
  local_d8 = uVar12;
  local_d0 = uVar13;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar10 = 0;
      do {
        uVar12 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar6 = _pthread_getspecific((void*)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01655040();
        pvVar6 = _pthread_getspecific((void*)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_016551c0();
        dVar17 = param_1;
        if (param_1 <= dVar14) {
          dVar17 = dVar14;
        }
        dVar14 = param_2;
        if (dVar15 <= param_2) {
          dVar14 = dVar15;
        }
        if (dVar17 < dVar14) {
          dVar15 = dVar14 - dVar17;
          FUN_00e7b500(dVar17);
          dVar16 = (double)FUN_00e7b600();
          if (NAN(dVar16)) {
            local_110 = 0;
            local_100 = 0;
            local_f8 = *in_RDX;
            local_f0 = 0;
            uVar11 = 1;
            local_118 = plVar5;
            local_108 = uVar12;
            FUN_01517980(dVar17,dVar14,uVar9,param_3);
          }
          else {
            if (dVar17 < dVar16) {
              uVar11 = 1;
              local_c8 = dVar15;
              FUN_01517980(dVar17,dVar16,uVar9,param_3);
              dVar15 = local_c8;
            }
            if (dVar16 + dVar15 < dVar14) {
              local_128 = *in_RDX;
              local_120 = 0;
              uVar11 = 1;
              FUN_01517980(dVar16 + dVar15,&local_128,uVar9,param_3);
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    uVar12 = FUN_00277f20();
    in_stack_ffffffffffffff60 = local_78;
  }
  if (plVar5 != this_ptr) {
    if ((char)in_ECX != '\0') {
      local_98[0] = '\0';
      bVar3 = FUN_01512be0(uVar12,0);
      bVar4 = FUN_01513590(extraout_XMM0_Qa,0);
      if (((bVar3 | bVar4) == 1) && (local_res8 != (void*)0x0)) {
        *local_res8 = 1;
      }
    }
    in_stack_ffffffffffffff60 = local_78;
    if (param_3 != '\0') {
      local_e0 = 0;
      local_e8 = plVar5;
      bVar3 = FUN_01512890();
      if ((bVar3 & local_res10 != (void*)0x0) == 1) {
        *local_res10 = 1;
      }
    }
  }
  if (in_stack_ffffffffffffff60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

