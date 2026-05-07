// Function: FUN_0054f740
// Address: 0054f740
// Size: 1417 bytes
// Class: MDURLOpenedController

void FUN_0054f740(void)

{
  int64_t lVar1;
  void* pVar2;
  int iVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar10;
  double dVar11;
  double dVar12;
  int64_t local_c0;
  char local_b8;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  void* local_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  double local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0054fec0();
  if ((char)local_80 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80._0_1_ = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  while (*(int *)(local_88 + 0xc) != 0) {
    FUN_00d23340();
    local_58 = CONCAT71(local_58._1_7_,(char)local_80);
    plVar4 = &local_80;
    if ((char)local_80 == '\0') {
      plVar4 = &local_58;
    }
    *(void*)plVar4 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    FUN_0054df20();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_80._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    uStack_6c = 0;
    local_78 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      do {
        pVar2 = local_70;
        pVar9 = local_70;
        pvVar5 = _pthread_getspecific(local_70);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_0125a280();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01259520();
        local_50 = '\0';
        local_58 = 0;
        local_48 = local_88;
        local_40 = 0xffffffff;
        local_38 = 0;
        if (dVar10 <= local_60) {
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar3 = -local_40._4_4_;
              }
              else {
                iVar3 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar3);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar3 = 0;
              }
              local_40 = CONCAT44(iVar3,(int)local_40);
            }
            lVar6 = (int64_t)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) break;
            lVar7 = *(int64_t *)(local_48 + 0x10);
            local_58 = *(int64_t *)(lVar7 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar7);
            pVar9 = (void*)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
          }
LAB_0054fba0:
          FUN_0032bfd0();
          FUN_00361f80(local_60,dVar10);
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_58 = local_c0;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_c0 != 0) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          dVar11 = dVar10;
          iVar3 = 0;
          while( true ) {
            if (iVar3 != 0) {
              if (iVar3 < 1) {
                iVar3 = -iVar3;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar3);
                FUN_00d23690(dVar11,iVar3);
                local_38 = local_38 + local_40._4_4_;
                iVar3 = 0;
              }
              local_40 = CONCAT44(iVar3,(int)local_40);
            }
            lVar6 = (int64_t)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) goto LAB_0054fba0;
            lVar7 = *(int64_t *)(local_48 + 0x10);
            lVar6 = *(int64_t *)(lVar7 + 8 + lVar6 * 8);
            local_58 = lVar6;
            pvVar5 = _pthread_getspecific((void*)lVar7);
            lVar8 = local_58;
            pVar9 = (void*)lVar7;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar6 = lVar8, lVar7 != 0)) {
              lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            lVar7 = local_58;
            dVar12 = *(double *)(lVar6 + 0x38);
            pvVar5 = _pthread_getspecific(pVar9);
            lVar6 = local_58;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar6, lVar8 != 0)) {
              lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar12 = dVar12 + g_023944d8;
            dVar11 = *(double *)(lVar7 + 0x40) + g_02391030;
            if ((dVar12 < dVar11) &&
               (((dVar12 <= local_60 && (local_60 < dVar11)) ||
                ((dVar12 < dVar10 && (local_60 <= dVar11)))))) break;
            iVar3 = local_40._4_4_;
          }
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003623b0(local_60,dVar10);
          FUN_0032bfd0();
        }
        local_70 = pVar2 + 1;
      } while ((int)local_70 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  local_80._0_1_ = 0;
  uStack_6c = 0;
  local_68 = 0;
  for (iVar3 = 0; local_70 = iVar3, iVar3 < *(int *)(local_88 + 0xc); iVar3 = iVar3 + 1) {
    FUN_0054ddf0();
  }
  FUN_0032bfd0();
  FUN_0054e050();
  FUN_00d50b20();
  return;
}

