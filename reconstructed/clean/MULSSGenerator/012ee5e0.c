// Function: FUN_012ee5e0
// Address: 012ee5e0
// Size: 2931 bytes
// Class: MULSSGenerator

void FUN_012ee5e0(double param_1,double param_2)

{
  void *pvVar1;
  int64_t lVar2;
  void* pVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *arg1;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t in_XMM1_Qb;
  double dVar10;
  double dVar11;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  double local_a8;
  uint64_t uStack_a0;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  double local_70;
  double local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  local_138 = 0;
  local_130 = '\0';
  pVar3 = (void*)&local_138;
  local_a8 = param_2;
  uStack_a0 = in_XMM1_Qb;
  FUN_01271d60();
  local_78 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  local_128 = *arg1;
  local_120 = '\0';
  FUN_01266770();
  local_60 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar3);
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    pVar3 = (void*)local_60;
  }
  dVar7 = (double)FUN_0125a280();
  local_118 = *arg1;
  local_110 = '\0';
  FUN_01266b80();
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = (double)FUN_01259520();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  pVar3 = 0;
  if (*arg1 != 0) {
    dVar8 = (double)(~-(uint64_t)(!NAN(param_1) && !NAN(param_1)) & (uint64_t)dVar7 |
                    (uint64_t)param_1 & -(uint64_t)(!NAN(param_1) && !NAN(param_1)));
    uStack_a0 = ~in_XMM0_Qb & extraout_XMM0_Qb | in_XMM0_Qb;
    uVar6 = -(uint64_t)(local_70 - dVar7 == local_a8);
    dVar10 = (double)(~uVar6 & (uint64_t)local_a8 | g_023908c8 & uVar6);
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    dVar11 = (double)(~-(uint64_t)(!NAN(dVar10) && !NAN(dVar10)) & (uint64_t)local_70 |
                     (uint64_t)(dVar8 + dVar10) & -(uint64_t)(!NAN(dVar10) && !NAN(dVar10))) -
             dVar8;
    local_40._4_4_ = 0;
    local_a8 = dVar8;
    local_70 = local_70 - dVar7;
    local_48 = *arg1;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar2 = (int64_t)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar4 = *(int64_t *)(local_48 + 0x10);
      local_58 = *(int64_t *)(lVar4 + 8 + lVar2 * 8);
      if (NAN(dVar10)) {
        pvVar1 = _pthread_getspecific((void*)lVar4);
        pVar3 = (void*)lVar4;
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_0125a280();
        FUN_012642b0((dVar8 + local_a8) - dVar7);
      }
      else {
        pvVar1 = _pthread_getspecific((void*)lVar4);
        pVar3 = (void*)lVar4;
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_0125a280();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (double)FUN_01259520();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012646c0();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012642b0(((local_68 - dVar7) / local_70) * dVar11 + local_a8);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        FUN_01259540((((local_90 - dVar7) / local_70) * dVar11 + local_a8) - dVar9);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        FUN_01264390((((dVar8 - dVar7) / local_70) * dVar11 + local_a8) - dVar9);
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_01264170();
        pvVar1 = _pthread_getspecific(pVar3);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012758f0();
        if (local_68 < dVar8) {
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = (double)FUN_01264380();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = (double)FUN_012758f0();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar8 = (double)FUN_01264170();
          FUN_01264390((local_68 + local_90) - dVar8);
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012758f0();
          FUN_01259540();
          pvVar1 = _pthread_getspecific(pVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          lVar2 = local_88;
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            pvVar1 = _pthread_getspecific(pVar3);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            pvVar1 = _pthread_getspecific(pVar3);
            if (pvVar1 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dffb0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    FUN_001159b0();
    pVar3 = (void*)*arg1;
  }
  FUN_012e6c30();
  FUN_012e7fb0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_012ef019;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_012ef019;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_108 = *arg1;
  local_100 = '\0';
  FUN_0150ddd0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012ef019:
  local_f8 = *arg1;
  local_f0 = '\0';
  FUN_012879b0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = *arg1;
  local_e0 = '\0';
  local_d8 = local_78;
  local_d0 = '\0';
  FUN_0127e4d0(0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = *arg1;
  local_c0 = '\0';
  FUN_0127f8b0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_00e7bdb0();
  FUN_01287c80();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return;
}

