// Function: FUN_012ee5e0
// Address: 012ee5e0
// Size: 2931 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012ee695) */
/* WARNING: Removing unreachable block (ram,0x012ee6a1) */

void FUN_012ee5e0(double param_1,double param_2)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  int iVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong in_XMM0_Qb;
  ulonglong extraout_XMM0_Qb;
  ulonglong in_XMM1_Qb;
  double dVar10;
  double dVar11;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  double local_a8;
  ulonglong uStack_a0;
  double local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  double local_70;
  double local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*unaff_RSI == 0) {
    return;
  }
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    return;
  }
  local_138 = 0;
  local_130 = '\0';
  pVar3 = (pthread_key_t)&local_138;
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
  local_128 = *unaff_RSI;
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
    pVar3 = (pthread_key_t)local_60;
  }
  dVar7 = (double)FUN_0125a280();
  local_118 = *unaff_RSI;
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
  if (*unaff_RSI != 0) {
    dVar8 = (double)(~-(ulonglong)(!NAN(param_1) && !NAN(param_1)) & (ulonglong)dVar7 |
                    (ulonglong)param_1 & -(ulonglong)(!NAN(param_1) && !NAN(param_1)));
    uStack_a0 = ~in_XMM0_Qb & extraout_XMM0_Qb | in_XMM0_Qb;
    uVar6 = -(ulonglong)(local_70 - dVar7 == local_a8);
    dVar10 = (double)(~uVar6 & (ulonglong)local_a8 | DAT_023908c8 & uVar6);
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    dVar11 = (double)(~-(ulonglong)(!NAN(dVar10) && !NAN(dVar10)) & (ulonglong)local_70 |
                     (ulonglong)(dVar8 + dVar10) & -(ulonglong)(!NAN(dVar10) && !NAN(dVar10))) -
             dVar8;
    local_40._4_4_ = 0;
    local_a8 = dVar8;
    local_70 = local_70 - dVar7;
    local_48 = *unaff_RSI;
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
      lVar2 = (longlong)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar4 = *(longlong *)(local_48 + 0x10);
      local_58 = *(longlong *)(lVar4 + 8 + lVar2 * 8);
      if (NAN(dVar10)) {
        pvVar1 = _pthread_getspecific((pthread_key_t)lVar4);
        pVar3 = (pthread_key_t)lVar4;
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
        pvVar1 = _pthread_getspecific((pthread_key_t)lVar4);
        pVar3 = (pthread_key_t)lVar4;
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
    pVar3 = (pthread_key_t)*unaff_RSI;
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
  local_108 = *unaff_RSI;
  local_100 = '\0';
  FUN_0150ddd0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012ef019:
  local_f8 = *unaff_RSI;
  local_f0 = '\0';
  FUN_012879b0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = *unaff_RSI;
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
  local_c8 = *unaff_RSI;
  local_c0 = '\0';
  FUN_0127f8b0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = *unaff_RSI;
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


