// ===== MULSSGenerator — Annotated small functions =====
// 105 readable functions

// ==================================================
// @004879c0 (2967 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *this;
  longlong *plVar5;
  undefined4 uVar6;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_58;
  char local_50 [8];
  longlong *plVar7;
  char local_40;
  char local_38;
  
  if (this != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  plVar5 = this;
  plVar7 = this;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_58 == plVar5) {
      if (((local_38 == '\0') && (local_58 != (longlong *)0x0)) && (local_50[0] != '\0'))
      goto LAB_00487a57;
    }
    else {
      plVar5 = local_58;
      plVar7 = local_58;
      if (local_50[0] == '\0') {
        if (local_38 == '\0') {
          pcVar3 = &stack0xffffffffffffffc8;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &stack0xffffffffffffffc8;
        }
      }
      else {
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
LAB_00487a57:
        local_38 = '\x01';
        pcVar3 = local_50;
      }
      *pcVar3 = '\0';
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffb8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38 == '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_00487b03;
    }
    if (plVar5 == (longlong *)0x0) {
LAB_00487b03:
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x498))();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x498))();
          plVar4 = this + 0x1a;
          local_118 = 0;
          (**(code **)(this[0x1a] + 0x10))();
          FUN_00d50b00();
          local_118 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          local_120 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_1d0 = DAT_027086f8;
          if (DAT_027086f8 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1c8 = '\x01';
          FUN_00c841b0(uVar6,&local_1d0);
          local_b8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_b8 = '\x01';
          local_c0 = plVar7;
          FUN_00cbad30(&local_c0,&local_1e0,4);
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            (**(code **)(*local_120 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_108 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_108 = '\x01';
          local_1c0 = 0;
          local_1b8 = '\0';
          local_110 = plVar4;
          if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            _DAT_027e77e8 = FUN_0015ef90();
            _DAT_027e77d0 = "MULSSGenerator";
            _DAT_027e77d8 = 0x70;
            _DAT_027e77e0 = FUN_0015ef30;
            _DAT_027e77f0 = 0;
            uRam00000000027e77f8 = 0;
            _DAT_027e7800 = 0;
            uRam00000000027e7808 = 0;
            _DAT_027e7810 = 0;
            uRam00000000027e7818 = 0;
            _DAT_027e7820 = 0;
            uRam00000000027e7828 = 0;
            _DAT_027e7830 = 0;
            uRam00000000027e7838 = 0;
            _DAT_027e7840 = 0;
            uRam00000000027e7848 = 0;
            _DAT_027e7850 = 0;
            uRam00000000027e7858 = 0;
            _DAT_027e7860 = 0;
            uRam00000000027e7868 = 0;
            _DAT_027e7870 = 0;
            uRam00000000027e7878 = 0;
            _DAT_027e7880 = 0;
            uRam00000000027e7888 = 0;
            _DAT_027e7890 = 0;
            ___cxa_guard_release();
          }
          uVar6 = FUN_00e86210();
          local_1b0 = DAT_02708700;
          if (DAT_02708700 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_1a8 = '\x01';
          FUN_00c841b0(uVar6,&local_1b0);
          local_a8 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_a8 = '\x01';
          local_b0 = plVar7;
          FUN_00cbad30(&local_b0,&local_1c0,4);
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
            (**(code **)(*local_110 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_f8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_f8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          local_100 = plVar4;
          FUN_002771e0();
          uVar6 = FUN_00e86210();
          local_190 = DAT_02708708;
          if (DAT_02708708 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_188 = '\x01';
          FUN_00c841b0(uVar6,&local_190);
          local_98 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          local_a0 = plVar7;
          FUN_00cbad30(&local_a0,&local_1a0,4);
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            (**(code **)(*local_100 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_e8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_e8 = '\x01';
          local_180 = 0;
          local_178 = '\0';
          local_f0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_170 = DAT_027ebef0;
          if (DAT_027ebef0 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_168 = '\x01';
          FUN_00c841b0(uVar6,&local_170);
          local_88 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar7;
          FUN_00cbad30(&local_90,&local_180,4);
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_d8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_d8 = '\x01';
          local_160 = 0;
          local_158 = '\0';
          local_e0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_150 = DAT_02708710;
          if (DAT_02708710 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_148 = '\x01';
          FUN_00c841b0(uVar6,&local_150);
          local_78 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_80 = plVar7;
          FUN_00cbad30(&local_80,&local_160,4);
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar5 + 0x498))();
          local_c8 = 0;
          (**(code **)(*plVar4 + 0x10))();
          FUN_00d50b00();
          local_c8 = '\x01';
          local_140 = 0;
          local_138 = '\0';
          local_d0 = plVar4;
          FUN_0049c3f0();
          uVar6 = FUN_00e86210();
          local_130 = DAT_02708718;
          if (DAT_02708718 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_128 = '\x01';
          FUN_00c841b0(uVar6,&local_130);
          local_68 = 0;
          if (local_40 == '\0') {
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68 = '\x01';
          local_70 = plVar7;
          FUN_00cbad30(&local_70,&local_140,4);
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            (**(code **)(*local_d0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          *(undefined1 *)(this + 0x1b) = 1;
        }
      }
      FUN_0047dd70();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}




// ==================================================
// @012ee5e0 (2931 bytes) — math_loop

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  int iVar5;
  longlong *arg1;
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
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
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
    pVar3 = (pthread_key_t)local_60;
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
    pVar3 = (pthread_key_t)*arg1;
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




// ==================================================
// @01bd7b90 (2891 bytes) — math_loop

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong this;
  undefined8 unaff_R13;
  undefined7 uVar12;
  bool bVar13;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  longlong *local_50;
  char local_48;
  undefined4 local_3c;
  
  uVar1 = *(uint *)(*(longlong *)(this + 0x78) + 0xc);
  pplVar4 = (longlong **)(ulonglong)uVar1;
  if (uVar1 == 1) {
    if (*(longlong *)(this + 0x98) != 0) {
      unaff_R13 = 0;
      FUN_00d50130();
      if (*(longlong *)(this + 0x98) != 0) {
        *(undefined8 *)(this + 0x98) = 0;
        unaff_R13 = 0;
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    pplVar4 = &local_78;
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_78);
    pplVar11 = &local_50;
    if ((char)local_78 != '\0') {
      pplVar11 = pplVar4;
    }
    local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_78);
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_78 != '\0') && (local_80 != 0)) {
      pplVar4 = (longlong **)FUN_00d50b20();
    }
    if (local_80 != 0) {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      if (local_80 == 0) {
        bVar13 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar4 = &local_50;
        FUN_012e78c0();
        plVar6 = local_50;
        if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027e77e8 = FUN_0015ef90();
          _DAT_027e77d0 = "MULSSGenerator";
          _DAT_027e77d8 = 0x70;
          pVar10 = 0x15ef30;
          _DAT_027e77e0 = FUN_0015ef30;
          _DAT_027e77f0 = 0;
          uRam00000000027e77f8 = 0;
          _DAT_027e7800 = 0;
          uRam00000000027e7808 = 0;
          _DAT_027e7810 = 0;
          uRam00000000027e7818 = 0;
          _DAT_027e7820 = 0;
          uRam00000000027e7828 = 0;
          _DAT_027e7830 = 0;
          uRam00000000027e7838 = 0;
          _DAT_027e7840 = 0;
          uRam00000000027e7848 = 0;
          _DAT_027e7850 = 0;
          uRam00000000027e7858 = 0;
          _DAT_027e7860 = 0;
          uRam00000000027e7868 = 0;
          _DAT_027e7870 = 0;
          uRam00000000027e7878 = 0;
          _DAT_027e7880 = 0;
          uRam00000000027e7888 = 0;
          _DAT_027e7890 = 0;
          ___cxa_guard_release();
        }
        if (plVar6 == (longlong *)0x0) {
LAB_01bd8284:
          pplVar4 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_01bd8284;
        }
        bVar13 = *pplVar4 != (longlong *)0x0;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (bVar13) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_80 == 0) {
          puVar9 = (undefined8 *)0x0;
          local_88 = 0;
joined_r0x01bd8359:
          if (((char)local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
          local_88 = local_80;
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            puVar9 = (undefined8 *)CONCAT71(uVar12,1);
            goto joined_r0x01bd8359;
          }
          puVar9 = (undefined8 *)CONCAT71(uVar12,1);
        }
        if (local_88 == 0) goto LAB_01bd83be;
        local_58 = puVar9;
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_80 == 0) {
          bVar13 = false;
          lVar7 = 0;
        }
        else {
          if ((((char)local_78 == '\0') && (FUN_00d50b00(), (char)local_78 != '\0')) &&
             (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar10);
          lVar7 = local_80;
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar7 = *(longlong *)(local_80 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar7 + 0x58) != 0) {
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar9 = (undefined8 *)FUN_017ed3a0();
            if (local_80 == local_88) {
              if (((char)local_58 == '\0') && (local_80 != 0)) {
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_78 != '\0') goto LAB_01bd85ed;
                local_3c = CONCAT31(local_3c._1_3_,1);
                puVar9 = (undefined8 *)FUN_00d50b00();
              }
              else {
                local_3c = CONCAT31(local_3c._1_3_,(char)local_58);
                puVar9 = local_58;
              }
LAB_01bd85d9:
              if (((char)local_78 != '\0') && (local_80 != 0)) {
                puVar9 = (undefined8 *)FUN_00d50b20();
              }
            }
            else {
              if ((char)local_78 == '\0') {
                if (local_80 != 0) {
                  puVar9 = (undefined8 *)FUN_00d50b00();
                }
                local_3c = CONCAT31(local_3c._1_3_,1);
                if ((char)local_58 == '\0') {
                  local_88 = local_80;
                }
                else {
                  local_88 = local_80;
                  puVar9 = (undefined8 *)FUN_00d50b20();
                }
                goto LAB_01bd85d9;
              }
              local_3c = CONCAT31(local_3c._1_3_,1);
              if ((char)local_58 == '\0') {
                local_88 = local_80;
              }
              else {
                local_88 = local_80;
                puVar9 = (undefined8 *)FUN_00d50b20();
              }
            }
LAB_01bd85ed:
            local_58 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),(undefined1)local_3c);
          }
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2970();
          if (cVar2 == '\0') {
            bVar13 = false;
            lVar7 = 0;
            FUN_00d50b20();
          }
          else {
            bVar13 = true;
            lVar7 = local_80;
          }
        }
        local_3c = 0;
        if (((char)local_58 == '\0') || (local_88 == 0)) goto LAB_01bd84c6;
        FUN_00d50b20();
      }
      else {
LAB_01bd83be:
        bVar13 = false;
        lVar7 = 0;
      }
      local_3c = 0;
      goto LAB_01bd84c6;
    }
LAB_01bd8139:
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)pplVar4 >> 8),1);
    bVar13 = false;
    lVar7 = 0;
  }
  else {
    if ((int)uVar1 < 2) goto LAB_01bd8139;
    local_3c = (undefined4)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (*(longlong *)(this + 0x98) == 0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_01bdae30();
      (**(code **)(*plVar6 + 0x18))();
      lVar7 = *(longlong *)(this + 0x98);
      *(longlong **)(this + 0x98) = plVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
        plVar6 = *(longlong **)(this + 0x98);
      }
      plVar6[3] = this;
    }
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar10 = 0x2572358;
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    local_58 = puVar9;
    if (*(longlong *)(this + 0x78) != 0) {
      local_78._0_1_ = '\0';
      local_80 = 0;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      local_70 = *(longlong *)(this + 0x78);
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar3 = -local_68._4_4_;
          }
          else {
            iVar3 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar3);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar3 = 0;
          }
          local_68 = CONCAT44(iVar3,(int)local_68);
        }
        lVar7 = (longlong)(int)local_68;
        iVar3 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (*(int *)(local_70 + 0xc) <= iVar3) break;
        local_80 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        plVar6 = local_50;
        if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027e77e8 = FUN_0015ef90();
          _DAT_027e77d0 = "MULSSGenerator";
          _DAT_027e77d8 = 0x70;
          _DAT_027e77e0 = FUN_0015ef30;
          _DAT_027e77f0 = 0;
          uRam00000000027e77f8 = 0;
          _DAT_027e7800 = 0;
          uRam00000000027e7808 = 0;
          _DAT_027e7810 = 0;
          uRam00000000027e7818 = 0;
          _DAT_027e7820 = 0;
          uRam00000000027e7828 = 0;
          _DAT_027e7830 = 0;
          uRam00000000027e7838 = 0;
          _DAT_027e7840 = 0;
          uRam00000000027e7848 = 0;
          _DAT_027e7850 = 0;
          uRam00000000027e7858 = 0;
          _DAT_027e7860 = 0;
          uRam00000000027e7868 = 0;
          _DAT_027e7870 = 0;
          uRam00000000027e7878 = 0;
          _DAT_027e7880 = 0;
          uRam00000000027e7888 = 0;
          _DAT_027e7890 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar4 = &local_50;
          if (cVar2 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        plVar6 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
        }
        pVar10 = (pthread_key_t)pplVar4;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific(pVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6cb0();
          if (local_50 != (longlong *)0x0) {
            if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
               (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_017f2970();
            if (cVar2 != '\0') {
              pvVar5 = _pthread_getspecific(pVar10);
              lVar7 = local_80;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar7 = *(longlong *)
                         (local_80 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (*(longlong *)(lVar7 + 0x58) != 0) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017ed3a0();
                if (plVar6 != local_50) {
                  plVar6 = local_50;
                  if (local_48 != '\0') {
                    FUN_00d50b20();
                    goto LAB_01bd8049;
                  }
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01bd8049:
              local_48 = '\0';
              local_50 = plVar6;
              FUN_00d235a0();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar7 = local_70;
      FUN_000be170();
      pVar10 = (pthread_key_t)lVar7;
    }
    FUN_01bd23c0();
    if (*(longlong *)(*(longlong *)(this + 0x98) + 0x20) == 0) {
      bVar13 = false;
      local_80 = 0;
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar7 = *(longlong *)(*(longlong *)(this + 0x98) + 0x20);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      if (local_80 == 0) {
        local_80 = 0;
        bVar13 = false;
      }
      else if ((char)local_78 == '\0') {
        FUN_00d50b00();
        bVar13 = true;
        if (((char)local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        bVar13 = true;
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    lVar7 = local_80;
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_80 = 0;
LAB_01bd84c6:
  FUN_01d2a770();
  FUN_01bd69c0();
  if ((bVar13) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01951ef0 (2846 bytes) — math_loop

{
  int iVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *arg1;
  longlong *this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_48;
  longlong lVar7;
  
  lVar3 = local_60;
  FUN_01948a20();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  pVar2 = (pthread_key_t)local_60;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e6160();
  FUN_00d237a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e68b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    FUN_00d50b00();
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_48) break;
      lVar7 = *(longlong *)(lVar3 + 0x10);
      local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_012edae0();
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = lVar3;
    FUN_000be170();
    param_1 = (pthread_key_t)lVar5;
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e5ae0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  FUN_012edae0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001850 + *this))();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_60 + 0xc);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != 1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e68b0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e66e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    if (local_60 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001668 + *this))();
  if (*arg1 == local_60) {
    (**(code **)(&DAT_00001680 + *this))();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @012ef510 (2841 bytes) — math_loop

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *arg1;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  longlong local_148;
  char local_140;
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
  ulonglong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  double local_80;
  longlong local_78;
  longlong local_60;
  char local_58;
  int local_48;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  local_60 = CONCAT44(local_60._4_4_,1);
  lVar2 = local_60;
  lVar5 = param_1;
  local_a8 = param_4;
  local_80 = param_2;
  if (param_4 >> 0x20 == 0) {
LAB_012ef57c:
    pVar8 = (pthread_key_t)lVar5;
    bVar10 = 1;
  }
  else {
    cVar3 = FUN_00e7c630();
    pVar8 = (pthread_key_t)lVar5;
    if (cVar3 == '\0') goto LAB_012ef57c;
    bVar10 = param_3 ^ 1;
  }
  FUN_01266770();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_012e8920();
  lVar5 = local_90;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_78 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_88 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar8 = 1;
  }
  FUN_0125e930();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = FUN_01507970();
  FUN_00e7bac0();
  local_b8 = local_a0;
  local_a0 = param_1;
  FUN_00e7b970();
  lVar5 = local_a0;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 == 0) {
    dVar11 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01259650();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (double)FUN_016c25f0(dVar12);
    dVar13 = (double)FUN_00e7c860();
    pvVar4 = _pthread_getspecific(pVar8);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar8 = (pthread_key_t)local_78;
    }
    local_80 = (double)FUN_016c26c0(dVar11 + local_80 * dVar13);
    lVar5 = *arg1;
    if (lVar5 != 0) {
      local_80 = local_80 - dVar12;
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar6 = (longlong)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_48) break;
        lVar9 = *(longlong *)(lVar5 + 0x10);
        local_60 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        FUN_012642b0(dVar11 + local_80);
      }
      FUN_001159b0();
      pVar8 = (pthread_key_t)lVar5;
    }
  }
  else {
    local_148 = local_78;
    local_140 = '\0';
    FUN_00e7c860();
    local_138 = *local_res8;
    local_130 = '\0';
    FUN_012910e0(lVar5,&local_148,&local_138);
    pVar8 = (pthread_key_t)lVar5;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_012e6c30();
  FUN_012e7fb0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_012efc1b;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_012efc1b;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = *arg1;
  local_120 = '\0';
  FUN_0150ddd0();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012efc1b:
  local_118 = *arg1;
  local_110 = '\0';
  FUN_0127f8b0();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *arg1;
  if (lVar5 == 0) {
    local_e8 = 0;
  }
  else {
    local_48 = -1;
    do {
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) goto LAB_012eff5a;
      pVar8 = (pthread_key_t)*(undefined8 *)(lVar5 + 0x10);
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_90 == 0) {
        bVar1 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_a0 == 0) {
          bVar1 = false;
        }
        else {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01508530();
          bVar1 = uVar7 >> 0x20 == 0;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    } while (!bVar1);
    bVar10 = 1;
LAB_012eff5a:
    FUN_001159b0();
    local_e8 = *arg1;
  }
  local_e0 = '\0';
  FUN_012879b0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10 == 0) {
    local_c8 = *arg1;
    local_c0 = '\0';
    FUN_0152eef0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d8 = *arg1;
    local_d0 = '\0';
    FUN_00e7bdb0();
    FUN_01287c80();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012fa750 (2736 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  undefined8 arg1;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  longlong local_40;
  char local_38 [8];
  
  lVar1 = local_40;
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  pVar10 = (pthread_key_t)local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar10;
  }
  FUN_01822e80();
  local_a0 = 0;
  local_a8 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  cVar2 = FUN_00d51e10();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    FUN_01822e80();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    local_98 = local_40;
    FUN_01822eb0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = pVar10;
    }
    local_38[0] = '\0';
    local_40 = 0;
    FUN_0124f820();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c0 = local_40;
  local_d8 = local_40;
  local_d0 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_d8,arg1,param_2);
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (cVar2 != '\0') {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
    local_38[0] = '\0';
    cVar2 = FUN_01254260(uVar6,uVar5);
    pVar10 = (pthread_key_t)uVar6;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      uVar11 = 0;
      lVar4 = lVar1;
      goto joined_r0x012fb190;
    }
  }
  local_50 = lVar1;
  pvVar3 = _pthread_getspecific(pVar10);
  lVar4 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar4 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  local_60 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_60;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 == 0) && (0xe < *(int *)(*(longlong *)(lVar4 + 0x48) + 0x18) + 7U)) {
    local_c8 = **(undefined8 **)(*(longlong *)(lVar4 + 0x48) + 0x10);
  }
  else {
    local_c8 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  local_60 = local_38[0];
  pcVar8 = &local_60;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  if (local_40 == 0) {
    pVar10 = *(pthread_key_t *)(*(longlong *)(lVar4 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fafe8;
    uVar5 = *(undefined8 *)
             ((longlong)(int)pVar10 + -8 + *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10));
  }
  else {
LAB_012fafe8:
    uVar5 = FUN_00e7bdb0();
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(longlong *)(lVar4 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    pcVar8 = &local_60;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_60 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar8;
    if ((local_60 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38[0] = '\0';
  FUN_012549c0(uVar5,local_c8,1);
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar10);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  local_b0 = 0;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = local_40;
  local_b0 = '\x01';
  FUN_012879b0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  lVar4 = local_50;
joined_r0x012fb190:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}




// ==================================================
// @012e9900 (2622 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  int in_EDX;
  longlong *arg1;
  undefined8 *this;
  longlong lVar10;
  uint uVar11;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_78;
  char local_70;
  int local_60;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar10 = arg1[0x27];
  if (lVar10 == 0) {
LAB_012e9a22:
    pcVar4 = DAT_02572370;
    lVar10 = arg1[0x16];
    if (lVar10 != 0) {
      local_70 = '\0';
      local_78 = (undefined8 *)0x0;
      local_60 = -1;
      bVar2 = false;
      local_40 = (undefined8 *)0x0;
      while( true ) {
        lVar8 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar10 + 0xc) <= local_60) break;
        local_78 = *(undefined8 **)(*(longlong *)(lVar10 + 0x10) + 8 + lVar8 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar10 + 0x10));
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_012754d0(param_1,param_2);
        if (cVar5 != '\0') {
          if (local_40 == (undefined8 *)0x0) {
            local_40 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = &DAT_02572358;
            (*pcVar4)();
            bVar2 = true;
          }
          local_48 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_50 = local_78;
        }
      }
      FUN_001159b0();
LAB_012e9bcc:
      if ((local_40 != (undefined8 *)0x0) && (in_EDX != 0)) {
        uVar11 = *(uint *)((longlong)local_40 + 0xc);
        if (in_EDX == 1) {
          if (0 < (int)uVar11) {
            lVar8 = (ulonglong)uVar11 + 1;
            lVar10 = 0;
            bVar3 = false;
            do {
              uVar11 = uVar11 - 1;
              lVar1 = *(longlong *)(local_40[2] + (ulonglong)uVar11 * 8);
              pVar9 = uVar11;
              if (lVar10 == lVar1) {
                if ((!bVar3) && (lVar10 != 0)) {
                  bVar3 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar3) && (lVar10 != 0)) {
                  FUN_00d50b20();
                  bVar3 = true;
                  lVar10 = lVar1;
                }
                else {
                  bVar3 = true;
                  lVar10 = lVar1;
                }
              }
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_78 == (undefined8 *)0x0) {
                cVar5 = '\0';
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                if (local_50 == (undefined8 *)0x0) {
                  cVar5 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a560();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef460();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd6a0();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar5 = FUN_014bc070();
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_00d23620();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
LAB_012ea359:
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if (0 < (int)uVar11) {
          lVar8 = (ulonglong)uVar11 + 1;
          lVar10 = 0;
          bVar3 = false;
          do {
            uVar11 = uVar11 - 1;
            lVar1 = *(longlong *)(local_40[2] + (ulonglong)uVar11 * 8);
            pVar9 = uVar11;
            if (lVar10 == lVar1) {
              if ((!bVar3) && (lVar10 != 0)) {
                bVar3 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar3) && (lVar10 != 0)) {
                FUN_00d50b20();
                bVar3 = true;
                lVar10 = lVar1;
              }
              else {
                bVar3 = true;
                lVar10 = lVar1;
              }
            }
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            if (local_78 == (undefined8 *)0x0) {
              bVar6 = 1;
            }
            else {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef460();
              if (local_50 == (undefined8 *)0x0) {
                bVar6 = 1;
              }
              else {
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_014bc070();
                if ((local_a8 != '\0') && (local_b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                bVar6 = bVar6 ^ 1;
              }
              if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar6 != 0) {
              FUN_00d23620();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
          goto LAB_012ea359;
        }
      }
      goto LAB_012ea38b;
    }
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      lVar10 = arg1[0x27];
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar10 + 0x38) == '\0') goto LAB_012e9a22;
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015292f0(param_1,param_2);
    if (local_78 != (undefined8 *)0x0) {
      bVar2 = true;
      local_40 = local_78;
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_012e9bcc;
    }
    local_40 = (undefined8 *)0x0;
    bVar2 = false;
LAB_012ea38b:
    *(undefined1 *)(this + 1) = 0;
    if (bVar2) goto LAB_012ea3a6;
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012ea3a6;
    }
  }
  local_40 = (undefined8 *)0x0;
LAB_012ea3a6:
  *this = local_40;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01650af0 (2504 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  undefined4 uVar12;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar2 = local_50;
  local_38[0] = local_48[0];
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar1 = local_50;
  local_d0 = local_48[0];
  pcVar8 = &local_d0;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_c0 = local_60;
  local_b8 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_b8 = '\x01';
  FUN_012992a0();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  plVar2 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505930();
  FUN_00d23310();
  plVar1 = local_50;
  local_40[0] = local_48[0];
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar3 = local_50;
  pcVar8 = local_38;
  pcVar7 = local_48;
  if (local_48[0] == '\0') {
    pcVar7 = pcVar8;
  }
  local_38[0] = local_48[0];
  *pcVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  local_90 = local_60;
  local_88 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_88 = '\x01';
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_0124df10();
  local_80 = local_50;
  local_78 = 0;
  if (local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  local_78 = '\x01';
  uVar12 = FUN_012996f0(uVar12,0);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  FUN_0164e420(uVar12,0);
  FUN_01650330();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar11 = &local_50;
  FUN_012e78c0();
  plVar1 = local_50;
  if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    pVar10 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_016511f7;
  }
  pplVar11 = (longlong **)&DAT_02802688;
LAB_016511f7:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_50;
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x2607248;
      *puVar9 = &DAT_02607248;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      *(undefined8 *)((longlong)puVar9 + 0x76) = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      puVar9[0x18] = 0;
      puVar9[0x19] = 0;
      puVar9[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_01650330();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57f0();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0165e970 (2444 bytes) — math_loop

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong this;
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  longlong local_58;
  char local_50 [8];
  ulonglong local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(this + 0x48) != '\0') {
    return;
  }
  lVar14 = *(longlong *)(this + 0x40);
  uVar9 = param_1;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar14 = *(longlong *)(this + 0x40);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  pVar10 = (pthread_key_t)uVar9;
  if (*(int *)(*(longlong *)(lVar14 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar14 = local_58;
    pVar10 = (pthread_key_t)CONCAT71((int7)(uVar9 >> 8),local_50[0]);
    plVar12 = &local_40;
    if (local_50[0] != '\0') {
      plVar12 = (longlong *)local_50;
    }
    local_40 = CONCAT71(local_40._1_7_,local_50[0]);
    *(char *)plVar12 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 == 0) {
      return;
    }
  }
  local_38 = '\0';
  local_40 = 0;
  local_64 = param_3;
  if (param_2 >> 0x20 == 0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(&local_70,1,&local_88,&local_64);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (ulonglong *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_2,1,&local_70,&local_88);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (ulonglong *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = '\x01';
LAB_0165ec85:
  local_50[0] = '\0';
  local_58 = 0;
  puVar11 = (undefined8 *)(local_70 >> 0x20);
  if (puVar11 == (undefined8 *)0x0) {
    local_70 = FUN_0165be20();
  }
  else {
    local_80 = local_70;
    local_48 = CONCAT44(iStack_84,local_88);
    local_78 = CONCAT44(local_78._4_4_,local_64);
    pvVar6 = _pthread_getspecific((pthread_key_t)(local_70 >> 0x20));
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_80;
    FUN_012535e0(puVar11,&local_58,&local_48,&local_78);
    if (local_80._4_4_ == 0) {
      local_80 = FUN_0165be20();
    }
  }
  do {
    if (local_58 == 0) {
      local_78 = FUN_00e7bdb0();
      iVar5 = 0;
    }
    else {
      local_48 = local_70;
      FUN_00e7b970();
      uVar9 = local_48;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      local_48 = uVar9;
      FUN_00e7bdc0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar1 = *(int *)(lVar14 + 0x44);
      iVar5 = FUN_00e7cea0();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffb0();
      local_48 = uVar9;
      FUN_00e7bac0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      local_48 = *(ulonglong *)(lVar14 + 0x48);
      FUN_00e7b820();
      iVar5 = iVar5 + iVar1;
      local_78 = local_48;
    }
    lVar14 = local_40;
    pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
    lVar7 = local_40;
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
      lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    lVar7 = local_40;
    if (*(int *)(lVar14 + 0x44) == iVar5) {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (((*(int *)(lVar7 + 0x4c) == 0) || (local_78._4_4_ == 0)) ||
         (cVar4 = FUN_00e7c000(), cVar4 == '\0')) goto LAB_0165ef60;
      bVar2 = false;
    }
    else {
LAB_0165ef60:
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      lVar14 = local_40;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar7 = local_40;
      *(int *)(lVar14 + 0x44) = iVar5;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      *(ulonglong *)(lVar7 + 0x48) = local_78;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64910();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar2 = true;
      FUN_00d64910();
    }
    if (iStack_84 == 0) break;
    uVar9 = param_1 >> 0x20;
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar9 == 0);
    if ((((!bVar2 && uVar9 != 0) && (local_70._4_4_ != 0)) && (uVar9 != 0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 == '\0')) break;
    cVar3 = local_38;
    lVar7 = local_40;
    cVar4 = local_50[0];
    lVar14 = local_58;
    if (local_58 == local_40) {
      cVar3 = local_50[0];
      if (((local_38 != '\0') && (local_50[0] == '\0')) && (local_40 != 0)) {
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      local_58 = lVar7;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    local_50[0] = cVar3;
    local_80 = local_70;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_70;
    cVar4 = FUN_01253c10(puVar11,&local_40,&local_88,&local_64);
  } while (cVar4 != '\0');
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012d0a00 (2372 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *arg1;
  longlong *this;
  longlong local_140;
  char local_138;
  longlong local_98;
  char local_90;
  int local_80;
  longlong local_60;
  char local_58;
  int local_48;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  lVar6 = *arg1;
  if (lVar6 == 0) {
    lVar6 = this[0x2e];
    if (lVar6 == 0) goto LAB_012d113e;
    lVar11 = *(longlong *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) == 0) {
      if (*(longlong *)(lVar6 + 0x10) == 0) goto LAB_012d11d5;
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012d1344;
    }
    FUN_00d50b00();
LAB_012d0aa1:
    bVar3 = true;
    local_60 = lVar11;
LAB_012d0aae:
    local_58 = '\0';
    local_48 = -1;
    while( true ) {
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_60 + 0xc) <= local_48) break;
      lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
      lVar11 = this[0x21];
      lVar10 = *(longlong *)(local_60 + 0x10);
      if (lVar11 == 0) {
LAB_012d0c1c:
        pVar9 = (pthread_key_t)lVar10;
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_011ce1f0();
        (**(code **)(*plVar7 + 0x18))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b33530();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e57e0();
        FUN_00b335a0();
        (**(code **)(*this + 0x3a8))();
        (**(code **)(*plVar7 + 0x3a0))();
        FUN_00b335d0();
        (**(code **)(*plVar7 + 0x398))();
        FUN_00d50b00();
        FUN_012dd9b0();
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_01308480();
        (**(code **)(*plVar7 + 0x368))();
        FUN_00ca0840();
        FUN_01308ea0();
        FUN_00d50b20();
      }
      else {
        local_80 = -1;
        do {
          local_80 = local_80 + 1;
          if (*(int *)(lVar11 + 0xc) <= local_80) {
            FUN_01312d90();
            lVar10 = lVar11;
            goto LAB_012d0c1c;
          }
          FUN_01308710();
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
        } while (local_140 != lVar6);
        FUN_01312d90();
      }
    }
    FUN_000be170();
    bVar1 = false;
  }
  else {
    lVar11 = *(longlong *)(lVar6 + 0x18);
    if (*(int *)(lVar11 + 0xc) != 0) {
      FUN_00d50b00();
      goto LAB_012d0aa1;
    }
    if (*(longlong *)(lVar6 + 0x10) != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      FUN_000ba510();
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        local_58 = '\0';
        bVar3 = true;
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
LAB_012d1344:
      if (local_60 == 0) {
        bVar1 = true;
        goto LAB_012d0e64;
      }
      goto LAB_012d0aae;
    }
LAB_012d11d5:
    bVar1 = true;
    bVar3 = false;
  }
LAB_012d0e64:
  lVar6 = this[0x21];
  if (lVar6 != 0) {
    local_58 = '\0';
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      FUN_01308ea0();
    }
    FUN_01312d90();
  }
  lVar6 = *arg1;
  if (lVar6 == 0) {
    *(undefined1 *)((longlong)this + 0x1d3) = 0;
    lVar6 = FUN_00e313b0();
    do {
      cVar4 = FUN_00e31450(3,plVar5);
    } while (cVar4 == '\0');
    FUN_012d21a0();
    if (local_58 == '\0') {
      if (lVar6 != 0) {
        FUN_00d50b00();
        goto LAB_012d10a6;
      }
    }
    else if (lVar6 != 0) {
LAB_012d10a6:
      for (lVar11 = 0; (int)lVar11 < *(int *)(lVar6 + 0xc); lVar11 = lVar11 + 1) {
        (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8) + 0x370))();
      }
      FUN_00540a20();
      FUN_00d50b20();
    }
    bVar2 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
      bVar2 = true;
    }
  }
  else {
    plVar7 = *(longlong **)(lVar6 + 0x28);
    if (plVar7 != plVar5) {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(lVar6 + 0x28) = plVar5;
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
        bVar2 = false;
        goto joined_r0x012d1113;
      }
    }
    bVar2 = false;
  }
joined_r0x012d1113:
  if (bVar3 && !bVar1) {
    FUN_00d50b20();
  }
  if (bVar2 || plVar5 == (longlong *)0x0) {
    return;
  }
LAB_012d113e:
  FUN_00d50b20();
  return;
}




// ==================================================
// @012ec4a0 (2143 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong this;
  int iVar8;
  pthread_key_t pVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong local_b8;
  char local_b0;
  double local_40;
  double local_38;
  
  if (*(char *)(this + 0x6b) != '\0') {
    return;
  }
  *(undefined1 *)(this + 0x6b) = 1;
  dVar11 = (double)FUN_012f7cb0();
  dVar12 = (double)FUN_012f7cb0();
  dVar13 = (double)FUN_012f7d90();
  iVar8 = 0;
  if (*(longlong *)(this + 0x60) == 0) {
    pVar9 = 0;
    lVar6 = *(longlong *)(this + 0xb0);
    if (lVar6 != 0) goto LAB_012ec5a1;
LAB_012ecc8f:
    local_40 = 0.0;
    local_38 = 0.0;
    if ((*(double *)(this + 0x78) == 0.0) && (!NAN(*(double *)(this + 0x78))))
    goto LAB_012ecd00;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar3 = FUN_016572c0();
    pVar9 = 2 - bVar3;
    if (*(longlong *)(this + 0x60) != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar3 = FUN_01657320();
      iVar8 = 2 - (uint)bVar3;
    }
    lVar6 = *(longlong *)(this + 0xb0);
    if (lVar6 == 0) goto LAB_012ecc8f;
LAB_012ec5a1:
    if (*(int *)(lVar6 + 0xc) < 1) {
      local_40 = 0.0;
      local_38 = 0.0;
    }
    else {
      dVar12 = dVar12 + dVar13;
      dVar16 = dVar11 + DAT_0240d350;
      dVar13 = DAT_0240d350 + dVar12;
      local_38 = 0.0;
      iVar10 = 0;
      local_40 = 0.0;
      do {
        pVar7 = pVar9;
        dVar14 = local_38;
        if (pVar9 == 1) {
          pvVar5 = _pthread_getspecific(1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129aaf0();
          if (cVar4 == '\0') goto joined_r0x012ec797;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129adc0();
          pVar7 = 0x2802558;
          if (cVar4 == '\0') {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(dVar16);
            dVar14 = DAT_0240d2e8;
            if (dVar11 - dVar15 <= DAT_0240d2e8) {
              dVar14 = dVar11 - dVar15;
            }
            if (dVar14 <= local_38) {
              dVar14 = local_38;
            }
joined_r0x012ec8c4:
            bVar2 = true;
            local_38 = dVar14;
          }
          else {
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_012648e0();
            dVar14 = dVar11 - dVar15;
            if (local_38 < dVar11 - dVar15) goto joined_r0x012ec797;
            bVar2 = false;
          }
          if (iVar8 == 2) goto LAB_012ec79d;
LAB_012ec8ca:
          if (iVar8 != 1) goto LAB_012ec970;
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 == '\0') goto LAB_012ec970;
          if (pVar9 == 1) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129aeb0();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (local_b8 != 0) {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              bVar1 = true;
              FUN_0129b630(dVar13);
              goto LAB_012ec972;
            }
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_012648f0();
          dVar14 = dVar14 - dVar12;
          bVar1 = DAT_0240d2e8 < dVar14;
          if (DAT_0240d2e8 < dVar14) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(dVar12);
            dVar14 = DAT_0240d2e8;
          }
          if (local_40 < dVar14) {
            local_40 = dVar14;
          }
        }
        else {
          if (pVar9 == 2) {
            pvVar5 = _pthread_getspecific(2);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0129aaf0();
            if (cVar4 != '\0') {
              pvVar5 = _pthread_getspecific(pVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0129b5c0(dVar16);
              goto joined_r0x012ec8c4;
            }
          }
joined_r0x012ec797:
          local_38 = dVar14;
          bVar2 = false;
          if (iVar8 != 2) goto LAB_012ec8ca;
LAB_012ec79d:
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0129ac30();
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar1 = true;
            FUN_0129b630(dVar12);
            goto LAB_012ec972;
          }
LAB_012ec970:
          bVar1 = false;
        }
LAB_012ec972:
        if (!bVar2) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b5b0();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b5c0(DAT_023908c8);
          }
        }
        if (!bVar1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_0129b620();
          if (!NAN(dVar14)) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0129b630(DAT_023908c8);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar6 + 0xc));
    }
    FUN_001159b0();
    if ((local_38 == *(double *)(this + 0x78)) &&
       (!NAN(local_38) && !NAN(*(double *)(this + 0x78)))) goto LAB_012ecd00;
  }
  FUN_00d64850();
  *(double *)(this + 0x78) = local_38;
  FUN_00d64910();
LAB_012ecd00:
  if ((local_40 != *(double *)(this + 0x80)) ||
     (NAN(local_40) || NAN(*(double *)(this + 0x80)))) {
    FUN_00d64850();
    *(double *)(this + 0x80) = local_40;
    FUN_00d64910();
  }
  return;
}




// ==================================================
// @012fc0c0 (2141 bytes) — math_loop

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  undefined8 **ppuVar11;
  int iVar12;
  longlong *arg1;
  undefined8 *this;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*arg1 + 0xc) == 0) goto LAB_012fc90c;
  FUN_00d23310();
  pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_68[0]);
  ppuVar11 = &local_48;
  if (local_68[0] != '\0') {
    ppuVar11 = (undefined8 **)local_68;
  }
  local_48 = (undefined8 *)CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)ppuVar11 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = local_70[0xb];
  }
  else {
    lVar5 = *(longlong *)(local_70[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x58);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 == 0) {
    FUN_012e8880(0,FUN_012e8440);
    if (local_68[0] == '\0') {
      if (local_70 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_012fc6de;
      }
    }
    else if (local_70 != (undefined8 *)0x0) {
LAB_012fc6de:
      local_68[0] = 0;
      local_50 = 0;
      local_58 = 0;
      if (0 < *(int *)((longlong)local_70 + 0xc)) {
        iVar12 = 0;
        do {
          FUN_000ba510();
          local_98 = local_a8;
          local_90 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_90 = '\x01';
          FUN_00c9fe20();
          puVar6 = local_48;
          local_38[0] = local_40[0];
          pcVar9 = local_40;
          if (local_40[0] == '\0') {
            pcVar9 = local_38;
          }
          *pcVar9 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38[0] == '\0') {
            if (puVar6 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          FUN_012fceb0();
          local_d0 = 0;
          local_d8 = CONCAT71(uStack_e7,local_e8);
          if ((local_e0 == '\0') && (local_d8 != 0)) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          FUN_012fce00();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          iVar12 = iVar12 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
        } while (iVar12 < *(int *)((longlong)local_70 + 0xc));
      }
      FUN_000be170();
      *this = plVar3;
      *(undefined1 *)(this + 1) = 1;
      FUN_00d50b20();
      return this;
    }
LAB_012fc90c:
    *this = plVar3;
    *(undefined1 *)(this + 1) = 1;
    return this;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar2)();
  if ((undefined8 *)*arg1 != (undefined8 *)0x0) {
    local_68[0] = '\0';
    local_70 = (undefined8 *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = (undefined8 *)*arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar5 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar12) break;
      local_70 = *(undefined8 **)(local_60[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)local_60[2]);
      puVar8 = local_70;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        puVar8 = (undefined8 *)local_70[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      puVar8 = (undefined8 *)puVar8[8];
      local_40[0] = '\0';
      local_48 = puVar8;
      iVar12 = FUN_00d237a0();
      if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar12 == -1) {
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        (*pcVar2)();
        local_40[0] = '\0';
        local_48 = puVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = local_70;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
  }
  FUN_012e8880(0,FUN_012e8440);
  if (local_68[0] == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_012fc47a;
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
LAB_012fc47a:
    local_68[0] = '\0';
    local_60 = local_70;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((longlong)local_70 + 0xc)) {
      lVar5 = 0;
      do {
        local_48 = *(undefined8 **)(local_70[2] + lVar5 * 8);
        local_40[0] = '\0';
        iVar12 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(longlong *)(puVar6[2] + (longlong)iVar12 * 8);
        local_c0 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_c0 = '\x01';
        local_c8 = lVar1;
        FUN_00c9fe20();
        puVar8 = local_48;
        local_e8 = local_40[0];
        pcVar9 = local_40;
        if (local_40[0] == '\0') {
          pcVar9 = &local_e8;
        }
        *pcVar9 = '\0';
        if ((local_40[0] != '\0') && (puVar8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_e8 == '\0') {
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        FUN_012fceb0();
        lVar1 = local_a8;
        local_b0 = 0;
        if ((local_a0 == '\0') && (local_a8 != 0)) {
          FUN_00d50b00();
        }
        local_b8 = lVar1;
        local_b0 = '\x01';
        FUN_012fce00();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if (puVar8 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((longlong)local_70 + 0xc));
    }
    FUN_000be170();
    *this = plVar3;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x012fc6a1;
  }
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
joined_r0x012fc6a1:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01319960 (2103 bytes) — math_loop

{
  bool bVar1;
  undefined4 uVar2;
  void *pvVar3;
  char unaff_SIL;
  int iVar4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01319a03;
    }
  }
  else if (local_a0 != 0) {
LAB_01319a03:
    if (*(int *)(local_a0 + 0xc) < 1) {
      local_44 = 1;
    }
    else {
      local_44 = 1;
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_01319ba0;
          FUN_00d50b00();
LAB_01319b00:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == 0) {
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
LAB_0131a182:
              bVar1 = false;
              uVar2 = local_44;
            }
          }
          else {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff70();
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != local_b0) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dff70();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                if (unaff_SIL == '\0') {
                  local_44 = 0;
                }
                else {
                  pvVar3 = _pthread_getspecific(param_1);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012dffb0();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              bVar1 = false;
              goto LAB_01319eae;
            }
            bVar1 = false;
            uVar2 = 0;
            if (unaff_SIL != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              goto LAB_0131a182;
            }
          }
        }
        else {
          if (local_40 != 0) goto LAB_01319b00;
LAB_01319ba0:
          bVar1 = true;
LAB_01319eae:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          uVar2 = local_44;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_01319f30;
            }
          }
          else if (local_40 != 0) {
LAB_01319f30:
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 != local_b0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              if (unaff_SIL == '\0') {
                local_44 = 0;
              }
              else {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dffb0();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            uVar2 = local_44;
          }
        }
        local_44 = uVar2;
        if (!bVar1) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_44;
  }
  return 1;
}




// ==================================================
// @0131ae60 (1992 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  void *pvVar11;
  byte bVar12;
  pthread_key_t pVar13;
  byte unaff_SIL;
  longlong this;
  byte bVar14;
  undefined8 unaff_R13;
  undefined7 uVar15;
  bool bVar16;
  longlong local_140;
  char local_138;
  undefined1 local_b0 [8];
  undefined1 local_a8;
  undefined1 local_98;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  uint local_70;
  uint local_6c;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  
  lVar1 = *(longlong *)(this + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150d280();
  if (*(int *)(local_50 + 0xc) == 0) {
    bVar16 = false;
    uVar15 = 0;
  }
  else {
    lVar2 = *(longlong *)(this + 0x38);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar11 = _pthread_getspecific(param_1);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    bVar16 = *(int *)(local_140 + 0xc) == 0;
    uVar15 = (undefined7)((ulonglong)unaff_R13 >> 8);
    if (local_138 != '\0') {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_01505ea0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  bVar14 = bVar16 ^ 1U | unaff_SIL;
  bVar12 = (byte)uVar10 & unaff_SIL;
  pVar13 = CONCAT31((int3)((uint)uVar10 >> 8),bVar12);
  local_6c = 0;
  if ((byte)uVar10 == 0) {
    local_6c = (uint)bVar14;
  }
  param_2 = param_2 & 0xff;
  if (bVar12 == 1) {
    lVar1 = *(longlong *)(this + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar13);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01506110();
    local_6c = (uint)CONCAT71(uVar15,bVar14);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  lVar1 = *(longlong *)(this + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_70 = param_2;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(this + 0x38);
  }
  else {
    lVar2 = *(longlong *)(this + 0x38);
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_a8 = 1;
  pVar13 = (pthread_key_t)unaff_SIL;
  bVar12 = FUN_013157a0(unaff_SIL,local_b0,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar14 = FUN_01316740();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar4 = FUN_013168e0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  bVar5 = FUN_01317b70();
  FUN_00d50b20();
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_98 = 1;
  bVar6 = FUN_01318610();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar11 = _pthread_getspecific(pVar13);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_88 = 1;
  bVar7 = FUN_01319320(local_70,1);
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar8 = FUN_0131a4f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar9 = FUN_0131ac40();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return (char)local_6c != '\0' & bVar9 & bVar8 & bVar7 & bVar6 & bVar5 & bVar4 & bVar14 & bVar12;
}




// ==================================================
// @012edae0 (1988 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *arg1;
  longlong this;
  uint uVar12;
  ulonglong uVar13;
  longlong local_c0;
  char local_b8;
  longlong *local_78;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  if (*arg1 == 0) {
    return;
  }
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  iVar8 = *(int *)(this + 0x108) + 1;
  *(int *)(this + 0x108) = iVar8;
  lVar7 = *arg1;
  uVar12 = *(uint *)(lVar7 + 0xc);
  uVar13 = (ulonglong)uVar12;
  if (0 < (int)uVar12) {
    plVar10 = (longlong *)0x0;
    bVar2 = false;
    local_38 = (undefined8 *)0x0;
    bVar1 = false;
    do {
      uVar12 = uVar12 - 1;
      plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar12 * 8);
      pVar9 = uVar12;
      if (plVar10 == plVar11) {
        if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar11 = plVar10;
          goto LAB_012edc10;
        }
        lVar7 = *(longlong *)(this + 0xb0);
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_012edc10:
        bVar2 = true;
        lVar7 = *(longlong *)(this + 0xb0);
        plVar10 = plVar11;
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d23d70();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        local_78 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = local_48;
          FUN_00d235a0();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01275420();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_78 != (longlong *)0x0) {
          if (local_38 == (undefined8 *)0x0) {
            local_38 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &DAT_02572358;
            (*pcVar3)();
            bVar1 = true;
          }
          FUN_00d21140();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0150ec20();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23740();
        }
        FUN_012e6e20();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if ((longlong)uVar13 < 2) goto LAB_012ee0b3;
      uVar13 = uVar13 - 1;
      lVar7 = *arg1;
    } while( true );
  }
  bVar1 = false;
  local_38 = (undefined8 *)0x0;
  bVar2 = false;
  plVar10 = (longlong *)0x0;
LAB_012ee0da:
  uVar13 = (ulonglong)(iVar8 - 1U);
  *(uint *)(this + 0x108) = iVar8 - 1U;
  FUN_012e57f0();
  if ((*(longlong *)(this + 0x58) == 0) && (puVar5 != (undefined8 *)0x0)) {
    if (0 < *(int *)((longlong)puVar5 + 0xc)) {
      iVar8 = 0;
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar13);
          plVar11 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x3e0))();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((longlong)puVar5 + 0xc));
    }
    FUN_00115190();
  }
  if ((bVar1) && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_012ee0b3:
  iVar8 = *(int *)(this + 0x108);
  goto LAB_012ee0da;
}




// ==================================================
// @012cfa20 (1908 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong this;
  undefined4 uVar6;
  longlong local_30;
  char local_28;
  
  FUN_012dd890();
  *(undefined8 *)(this + 0x120) = 0x3ff0000000000000;
  FUN_00d21370();
  *(undefined2 *)(this + 0xd4) = 0x101;
  *(undefined4 *)(this + 0xd0) = 0x1010101;
  FUN_012d03c0();
  lVar1 = *(longlong *)(this + 0x138);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfa94;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x138);
      *(longlong *)(this + 0x138) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfa94:
      *(longlong *)(this + 0x138) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d03c0();
  lVar1 = *(longlong *)(this + 0x140);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfb17;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x140);
      *(longlong *)(this + 0x140) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfb17:
      *(longlong *)(this + 0x140) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(longlong *)(this + 0x158);
  *(longlong **)(this + 0x158) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0460();
  lVar1 = *(longlong *)(this + 0x160);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfbd0;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x160);
      *(longlong *)(this + 0x160) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfbd0:
      *(longlong *)(this + 0x160) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_00d22760();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc6) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xce) = 0;
  *puVar3 = &DAT_025ed490;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  (*DAT_025ed4a8)();
  puVar4 = *(undefined8 **)(this + 0x110);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0x110) = puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(this + 0x110);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *(longlong *)(lVar1 + 0x100);
  *(undefined8 **)(lVar1 + 0x100) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
  *puVar3 = &DAT_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  (*DAT_0252ffb0)();
  puVar4 = *(undefined8 **)(this + 0x118);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0x118) = puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025e1318;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*DAT_025e1330)();
  puVar4 = *(undefined8 **)(this + 400);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
LAB_012cfe58:
    puVar3 = *(undefined8 **)(this + 400);
    if (puVar3 != (undefined8 *)0x0) goto LAB_012cfe70;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined8 **)(this + 400) = puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
      goto LAB_012cfe58;
    }
LAB_012cfe70:
    FUN_00d50b00();
  }
  FUN_012ddcf0();
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_012d0500();
  lVar1 = *(longlong *)(this + 0x1a8);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cfec8;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x1a8);
      *(longlong *)(this + 0x1a8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cfec8:
      *(longlong *)(this + 0x1a8) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21370();
  FUN_012d05a0();
  lVar1 = *(longlong *)(this + 0x128);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012cff5c;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x128);
      *(longlong *)(this + 0x128) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012cff5c:
      *(longlong *)(this + 0x128) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(longlong *)(this + 0x1d8);
  *(longlong **)(this + 0x1d8) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(longlong *)(this + 0x1e0);
  lVar5 = lVar1;
  if (lVar1 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_012d0015;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x1e0);
      *(longlong *)(this + 0x1e0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_012d0015:
      *(longlong *)(this + 0x1e0) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_012d0640();
  lVar1 = *(longlong *)(this + 0x1e8);
  lVar5 = lVar1;
  if (lVar1 == local_30) goto LAB_012d00e3;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_012d0098;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(this + 0x1e8);
    *(longlong *)(this + 0x1e8) = local_30;
  }
  else {
    local_28 = '\0';
LAB_012d0098:
    *(longlong *)(this + 0x1e8) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_012d00e3:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00d6f370();
  lVar1 = DAT_027bedd0;
  if (DAT_027bedd0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  DAT_028ac87a = FUN_00d70f90(uVar6,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0131bcd0 (1822 bytes) — math_loop

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  longlong lVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte unaff_SIL;
  longlong *this;
  bool bVar15;
  undefined1 local_a0 [8];
  undefined1 local_98;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  byte local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  pthread_key_t local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*this != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505930();
    if (local_48 == 0) {
      bVar15 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      bVar15 = *(int *)(local_58 + 0xc) == 1;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar15) {
      lVar13 = *this;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        lVar13 = *this;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
      }
      FUN_01505930();
      FUN_00d23310();
      lVar7 = local_48;
      pcVar11 = local_40;
      local_38[0] = local_40[0];
      pcVar8 = pcVar11;
      if (local_40[0] == '\0') {
        pcVar8 = local_38;
      }
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)pcVar11;
      if (lVar7 == 0) {
        lVar7 = 0;
        uVar12 = (undefined4)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        uVar12 = 0;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        local_60 = uVar12;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar1 = FUN_01505ea0();
        pVar9 = param_2 & 0xff;
        local_68 = pVar9;
        if ((bVar1 & unaff_SIL) == 1) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01506110();
          bVar1 = 1;
        }
        else {
          bVar1 = bVar1 ^ 1;
        }
        local_5c = CONCAT31(local_5c._1_3_,bVar1);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar7 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_98 = 1;
        local_64 = (uint)unaff_SIL;
        local_6c = unaff_SIL;
        cVar2 = FUN_013157a0(local_64,local_a0,1);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        cVar3 = FUN_01316740();
        cVar4 = FUN_013168e0();
        pcVar8 = (char *)0x0;
        pVar9 = 0;
        pcVar11 = (char *)(ulonglong)(byte)local_5c;
        if (cVar2 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar3 == '\0') {
          pcVar11 = pcVar8;
        }
        if (cVar4 == '\0') {
          pcVar11 = pcVar8;
        }
        pvVar6 = _pthread_getspecific(0);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_48 == 0) {
          bVar15 = false;
        }
        else {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb480();
          bVar15 = *(int *)(local_58 + 0xc) != 0;
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar10 = (pthread_key_t)pcVar11;
        pVar9 = 0;
        if (bVar15 == false) {
          pVar9 = pVar10;
        }
        if ((local_6c & bVar15) == 1) {
          while( true ) {
            local_5c = pVar10;
            pvVar6 = _pthread_getspecific((pthread_key_t)pcVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb480();
            FUN_00d23340();
            lVar13 = local_48;
            local_38[0] = local_40[0];
            pcVar11 = local_38;
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = pcVar11;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (pthread_key_t)pcVar11;
            if (lVar13 == 0) break;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_80 = lVar13;
            local_78 = '\0';
            FUN_012cb5e0();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            pVar10 = local_5c;
          }
          cVar2 = (char)local_5c;
        }
        else {
          cVar2 = (char)pVar9;
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        lVar13 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = 1;
        bVar1 = FUN_01319320(local_68,1);
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        bVar5 = FUN_0131a4f0();
        uVar14 = CONCAT71((int7)((ulonglong)lVar13 >> 8),cVar2 != '\0' & bVar5 & bVar1);
        if ((char)local_60 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_0131bf19;
      }
    }
  }
  uVar14 = 0;
LAB_0131bf19:
  return uVar14 & 0xffffffff;
}




// ==================================================
// @012e8e10 (1774 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  uint uVar11;
  code *in_RCX;
  code *pcVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *in_RDX;
  longlong arg1;
  longlong *this;
  longlong lVar15;
  longlong lVar16;
  ulonglong local_80;
  int local_60;
  longlong local_40;
  char local_38;
  
  lVar3 = *(longlong *)(arg1 + 0x138);
  if (lVar3 == 0) {
LAB_012e8ea5:
    lVar8 = *(longlong *)(arg1 + 0xb0);
    if (lVar8 == 0) goto LAB_012e9168;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar4 = false;
      lVar16 = 0;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      bVar4 = false;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar15 * 8);
        cVar5 = (*in_RCX)(param_1,param_2);
        if (cVar5 != '\0') {
          if (*in_RDX != 0) {
            local_38 = '\0';
            cVar5 = FUN_00d24090();
            local_40 = lVar9;
            if (cVar5 != '\0') goto LAB_012e8ef4;
          }
          if (lVar16 == 0) {
            FUN_0025e9a0();
            if (local_40 == 0) {
              lVar16 = 0;
            }
            else {
              bVar4 = true;
              lVar16 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          local_38 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_40 = lVar9;
        }
LAB_012e8ef4:
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
LAB_012e94f5:
    *(undefined1 *)(this + 1) = 0;
    if (bVar4) goto LAB_012e951b;
    if (lVar16 != 0) {
      FUN_00d50b00();
      goto LAB_012e951b;
    }
  }
  else {
    pcVar12 = in_RCX;
    FUN_00d50b00();
    pVar10 = (pthread_key_t)pcVar12;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      cVar5 = *(char *)(lVar3 + 0x38);
    }
    else {
      cVar5 = *(char *)(*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                       + 0x38);
    }
    if (cVar5 == '\0') goto LAB_012e8ea5;
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar14 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(lVar8 + 0x40);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    uVar11 = (uint)(param_1 / (double)iVar14 + (double)iVar1);
    uVar13 = (ulonglong)uVar11;
    iVar14 = (int)((double)*(int *)(lVar8 + 0x40) + (param_1 + param_2) / (double)iVar2);
    uVar6 = 0;
    if (-1 < (int)uVar11) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 <= iVar14) {
      lVar16 = 0;
      bVar4 = false;
      local_80 = (ulonglong)uVar6;
LAB_012e91cc:
      pVar10 = (pthread_key_t)uVar13;
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x48) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)
                            (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x48) +
                        0xc);
      }
      if ((longlong)local_80 < (longlong)iVar1) {
        pvVar7 = _pthread_getspecific(pVar10);
        lVar8 = lVar3;
        if ((pvVar7 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x10) + local_80 * 8);
        uVar13 = local_80;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
        if ((pvVar7 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          lVar15 = *(longlong *)(lVar8 + 0x38);
        }
        else {
          lVar15 = *(longlong *)
                    (*(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8) +
                    0x38);
        }
        if (lVar15 != 0) {
          local_60 = -1;
LAB_012e9303:
          do {
            lVar9 = (longlong)local_60;
            local_60 = local_60 + 1;
            if (*(int *)(lVar15 + 0xc) <= local_60) goto LAB_012e94c0;
            lVar9 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + 8 + lVar9 * 8);
            cVar5 = (*in_RCX)(param_1,param_2);
            if (cVar5 != '\0') {
              if (*in_RDX != 0) {
                local_38 = '\0';
                cVar5 = FUN_00d24090();
                local_40 = lVar9;
                if (cVar5 != '\0') goto LAB_012e9303;
              }
              if (lVar16 == 0) {
                FUN_0025e9a0();
                if (local_40 == 0) {
                  lVar16 = 0;
                }
                else {
                  bVar4 = true;
                  lVar16 = local_40;
                  if (local_38 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_38 = '\0';
              cVar5 = FUN_00d24090();
              local_40 = lVar9;
              if (cVar5 == '\0') {
                local_38 = '\0';
                FUN_00d24b60(0,FUN_012e8c90,0);
              }
            }
          } while( true );
        }
        goto LAB_012e94cc;
      }
      goto LAB_012e94f5;
    }
LAB_012e9168:
    *(undefined1 *)(this + 1) = 0;
  }
  lVar16 = 0;
LAB_012e951b:
  *this = lVar16;
  *(undefined1 *)(this + 1) = 1;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this;
LAB_012e94c0:
  FUN_001159b0();
LAB_012e94cc:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  uVar13 = local_80 + 1;
  local_80 = uVar13;
  if (uVar13 == iVar14 + 1) goto LAB_012e94f5;
  goto LAB_012e91cc;
}




// ==================================================
// @016557b0 (1611 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(this + 0x65) == '\0') {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016501d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650620();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016676b0();
    if (local_38 != '\0') {
      local_38 = '\0';
    }
    FUN_01650af0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650210();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016c25f0(*(undefined8 *)(this + 0x40));
  *(undefined8 *)(this + 0x70) = uVar3;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
LAB_01655bbd:
    dVar5 = *(double *)(this + 0x58);
    if ((dVar5 == 0.0) && (dVar6 = DAT_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
    dVar4 = *(double *)(this + 0x48);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_016c25f0(*(undefined8 *)(this + 0x50));
    *(undefined8 *)(this + 0x78) = uVar3;
    if (*(char *)(this + 0x60) == '\0') goto LAB_01655bbd;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c25f0(*(double *)(this + 0x40) + *(double *)(this + 0x48));
    dVar4 = dVar4 - *(double *)(this + 0x70);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(*(double *)(this + 0x50) + *(double *)(this + 0x58));
    dVar5 = dVar5 - *(double *)(this + 0x78);
    if ((dVar5 == 0.0) && (dVar6 = DAT_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
  }
  if ((dVar4 != 0.0) || (dVar6 = DAT_0238fee8, NAN(dVar4))) {
    dVar6 = dVar5 / dVar4;
  }
LAB_01655c99:
  *(double *)(this + 0x68) = dVar6;
  *(undefined1 *)(this + 0x65) = 0;
  FUN_00d403d0();
  lVar1 = DAT_026dc2a0;
  if (DAT_026dc2a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @006d8580 (1553 bytes) — math_loop

{
  int iVar1;
  pthread_key_t pVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong lVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  undefined8 this;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  longlong local_b8;
  char local_b0;
  longlong local_60;
  char local_58;
  int local_48;
  
  FUN_006cb500();
  uVar15 = (undefined7)((ulonglong)this >> 8);
  if (local_b8 == 0) {
    uVar14 = CONCAT71(uVar15,1);
    goto LAB_006d8bca;
  }
  FUN_006cb500();
  iVar1 = *(int *)(local_60 + 0xc);
  uVar14 = CONCAT71(uVar15,iVar1 == 0);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if (local_b0 != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 0) || (param_2 == '\0')) goto LAB_006d8bca;
  FUN_006cb500();
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
      goto LAB_006d8643;
    }
  }
  else if (local_b8 != 0) {
LAB_006d8643:
    if (0 < *(int *)(local_b8 + 0xc)) {
      uVar16 = 0;
      do {
        lVar13 = local_60;
        uVar3 = *(undefined8 *)(*(longlong *)(local_b8 + 0x10) + (ulonglong)uVar16 * 8);
        pVar11 = uVar16;
        pvVar9 = _pthread_getspecific(uVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            goto LAB_006d8750;
          }
        }
        else if (local_60 != 0) {
LAB_006d8750:
          pvVar9 = _pthread_getspecific(pVar11);
          pVar2 = (pthread_key_t)local_60;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar17 = (float)FUN_012c6a80();
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          fVar18 = (float)FUN_012c6af0();
          dVar7 = DAT_023b67d8;
          dVar20 = (double)fVar17;
          bVar4 = dVar20 < DAT_023b67e0;
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = pVar2;
          }
          FUN_012c6a20(0);
          cVar8 = FUN_006cff00();
          if (cVar8 == '\0') {
            pvVar9 = _pthread_getspecific(pVar11);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar11 = pVar2;
            }
            FUN_012c6a90(0);
          }
          pvVar9 = _pthread_getspecific(pVar11);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar11 = (pthread_key_t)uVar3;
          }
          FUN_012e5ae0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              goto LAB_006d8918;
            }
          }
          else if (local_60 != 0) {
LAB_006d8918:
            bVar5 = (double)fVar18 < DAT_023b67e0;
            bVar6 = DAT_023b67d8 < (double)fVar18;
            local_58 = '\0';
            local_60 = 0;
            local_48 = -1;
            while( true ) {
              lVar10 = (longlong)local_48;
              local_48 = local_48 + 1;
              if (*(int *)(lVar13 + 0xc) <= local_48) break;
              lVar12 = *(longlong *)(lVar13 + 0x10);
              local_60 = *(longlong *)(lVar12 + 8 + lVar10 * 8);
              cVar8 = FUN_006cff00();
              pVar11 = (pthread_key_t)lVar12;
              if (cVar8 == '\0' && (bVar6 || bVar5)) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_01265b70();
                FUN_01259600(fVar19 + fVar18);
              }
              if (dVar7 < dVar20 || bVar4) {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar19 = (float)FUN_0125a2c0();
                FUN_0125a580(fVar19 + fVar17);
              }
            }
            FUN_001159b0();
            pVar11 = (pthread_key_t)lVar13;
            FUN_00d50b20();
          }
          if (dVar7 < dVar20 || bVar4) {
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_012879b0();
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(local_b8 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  uVar14 = 0;
LAB_006d8bca:
  return (uVar14 ^ 1) & 0xffffffff;
}




// ==================================================
// @00523d70 (1543 bytes) — math_loop

{
  float *pfVar1;
  char cVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  pthread_key_t pVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong arg1;
  ulonglong uVar16;
  longlong *this;
  longlong lVar17;
  longlong lVar18;
  size_t sVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  int iVar29;
  int iVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  
  if ((((0 < (int)param_2) && (0 < (int)param_3)) && (arg1 != 0)) &&
     (((uVar13 = (ulonglong)param_2, param_1 == '\0' ||
       (*(char *)((longlong)this + 0x24b) == '\0')) &&
      (cVar2 = (**(code **)(*this + 0x5a8))(), cVar2 == '\0')))) {
    uVar4 = (ulonglong)param_3;
    if ((param_1 == '\0') || (this[0x61] != 0)) {
      uVar11 = 0;
      do {
        uVar12 = 0xffffffffffffffff;
        do {
          if (uVar12 - uVar13 == -1) goto LAB_00523e48;
          fVar38 = *(float *)(this[uVar11 + 0x23] + 4 + uVar12 * 4);
          uVar12 = uVar12 + 1;
        } while ((fVar38 == 0.0) && (!NAN(fVar38)));
        if (uVar12 < uVar13) {
          uVar13 = 0;
          do {
            if ((*(longlong *)(arg1 + uVar13 * 8) != 0) && (this[uVar13 + 0x23] != 0)) {
              (**(code **)(DAT_02786500 + 0x28))();
            }
            uVar13 = uVar13 + 1;
          } while (uVar4 != uVar13);
          return;
        }
LAB_00523e48:
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar4);
    }
    else {
      dVar27 = (double)FUN_00b335d0();
      lVar5 = FUN_00e7dae0((double)this[0x4c] * dVar27);
      iVar8 = (int)(dVar27 * DAT_02391030);
      fVar38 = (float)(int)(dVar27 * DAT_02391030);
      pVar3 = 0;
      do {
        lVar23 = (int)pVar3 + lVar5;
        pvVar6 = _pthread_getspecific(pVar3);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar20 = uVar13 + lVar5;
        cVar2 = FUN_0054f510(dVar27);
        sVar19 = (size_t)lVar20;
        pVar10 = param_2;
        if (cVar2 != '\0') {
          pVar10 = pVar3;
          if (-lVar23 != 0 && lVar23 < 1) {
            iVar22 = (int)-lVar23;
            lVar23 = lVar23 + iVar22;
            pVar10 = pVar3 + iVar22;
          }
          if ((int)pVar10 < (int)param_2) {
            iVar21 = (int)lVar23;
            iVar22 = -iVar21;
            iVar9 = iVar22 - iVar8;
            iVar39 = _DAT_02394180;
            iVar40 = _UNK_02394184;
            iVar41 = _UNK_02394188;
            iVar42 = _UNK_0239418c;
            if (iVar9 != 0 && iVar8 <= iVar22) {
              iVar24 = param_2 - pVar10;
              iVar22 = iVar24;
              if (iVar9 < iVar24) {
                iVar22 = iVar9;
              }
              pvVar6 = (void *)((longlong)iVar22 * 4);
              if (param_3 == 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                do {
                  if ((*(longlong *)(arg1 + uVar11 * 8) != 0) &&
                     ((void *)this[uVar11 + 0x23] != (void *)0x0)) {
                    _memcpy((void *)this[uVar11 + 0x23],pvVar6,(size_t)lVar20);
                    iVar39 = _DAT_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  if ((*(longlong *)(arg1 + 8 + uVar11 * 8) != 0) &&
                     ((void *)this[uVar11 + 0x24] != (void *)0x0)) {
                    _memcpy((void *)this[uVar11 + 0x24],pvVar6,(size_t)lVar20);
                    iVar39 = _DAT_02394180;
                    iVar40 = _UNK_02394184;
                    iVar41 = _UNK_02394188;
                    iVar42 = _UNK_0239418c;
                  }
                  sVar19 = (size_t)lVar20;
                  uVar11 = uVar11 + 2;
                } while ((param_3 & 0xfffffffe) != uVar11);
              }
              if ((((param_3 & 1) != 0) && (*(longlong *)(arg1 + uVar11 * 8) != 0)) &&
                 ((void *)this[uVar11 + 0x23] != (void *)0x0)) {
                _memcpy((void *)this[uVar11 + 0x23],pvVar6,sVar19);
                iVar39 = _DAT_02394180;
                iVar40 = _UNK_02394184;
                iVar41 = _UNK_02394188;
                iVar42 = _UNK_0239418c;
              }
              pVar10 = iVar22 + pVar10;
              if (iVar24 <= iVar9) goto LAB_00523f40;
              iVar21 = iVar21 + iVar22;
              iVar22 = iVar8;
            }
            if (0 < iVar22) {
              iVar9 = param_2 - pVar10;
              if (iVar22 <= (int)(param_2 - pVar10)) {
                iVar9 = iVar22;
              }
              lVar23 = (longlong)(int)pVar10;
              uVar15 = iVar9 - 1;
              if (uVar15 < 3) {
                uVar11 = 0;
                do {
                  lVar20 = *(longlong *)(arg1 + uVar11 * 8);
                  if (((lVar20 != 0) && (lVar18 = this[uVar11 + 0x23], lVar18 != 0)) &&
                     (0 < iVar9)) {
                    lVar20 = lVar20 + lVar23 * 4;
                    lVar17 = 0;
                    do {
                      fVar26 = (float)((int)lVar17 + iVar21 + iVar8);
                      *(float *)(lVar20 + lVar17 * 4) =
                           ((fVar38 - fVar26) * *(float *)(lVar18 + lVar23 * 4 + lVar17 * 4)) /
                           fVar38 + (fVar26 * *(float *)(lVar20 + lVar17 * 4)) / fVar38;
                      lVar17 = lVar17 + 1;
                    } while (iVar9 != (int)lVar17);
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 != uVar4);
              }
              else {
                iVar22 = iVar21 + iVar8;
                uVar11 = (ulonglong)uVar15 + 1;
                uVar25 = uVar11 & 0xfffffffffffffffc;
                lVar20 = lVar23 + (ulonglong)uVar15 + 1;
                uVar12 = 0;
                do {
                  lVar18 = *(longlong *)(arg1 + uVar12 * 8);
                  if (((lVar18 != 0) && (lVar17 = this[uVar12 + 0x23], lVar17 != 0)) &&
                     (0 < iVar9)) {
                    uVar14 = lVar17 + lVar23 * 4;
                    uVar7 = lVar18 + lVar23 * 4;
                    if (((ulonglong)(lVar17 + lVar20 * 4) <= uVar7) ||
                       (uVar15 = 0, (ulonglong)(lVar18 + lVar20 * 4) <= uVar14)) {
                      uVar16 = 0;
                      auVar28 = _DAT_0238fcc0;
                      do {
                        iVar24 = auVar28._4_4_;
                        iVar29 = auVar28._8_4_;
                        iVar30 = auVar28._12_4_;
                        fVar26 = (float)(iVar22 + auVar28._0_4_);
                        fVar31 = (float)(iVar22 + iVar24);
                        fVar32 = (float)(iVar22 + iVar29);
                        fVar33 = (float)(iVar22 + iVar30);
                        pfVar1 = (float *)(uVar7 + uVar16 * 4);
                        auVar34._0_4_ = *pfVar1 * fVar26;
                        auVar34._4_4_ = pfVar1[1] * fVar31;
                        auVar34._8_4_ = pfVar1[2] * fVar32;
                        auVar34._12_4_ = pfVar1[3] * fVar33;
                        auVar35._4_4_ = fVar38;
                        auVar35._0_4_ = fVar38;
                        auVar35._8_4_ = fVar38;
                        auVar35._12_4_ = fVar38;
                        auVar35 = divps(auVar34,auVar35);
                        pfVar1 = (float *)(uVar14 + uVar16 * 4);
                        auVar36._0_4_ = (fVar38 - fVar26) * *pfVar1;
                        auVar36._4_4_ = (fVar38 - fVar31) * pfVar1[1];
                        auVar36._8_4_ = (fVar38 - fVar32) * pfVar1[2];
                        auVar36._12_4_ = (fVar38 - fVar33) * pfVar1[3];
                        auVar37._4_4_ = fVar38;
                        auVar37._0_4_ = fVar38;
                        auVar37._8_4_ = fVar38;
                        auVar37._12_4_ = fVar38;
                        auVar37 = divps(auVar36,auVar37);
                        pfVar1 = (float *)(uVar7 + uVar16 * 4);
                        *pfVar1 = auVar37._0_4_ + auVar35._0_4_;
                        pfVar1[1] = auVar37._4_4_ + auVar35._4_4_;
                        pfVar1[2] = auVar37._8_4_ + auVar35._8_4_;
                        pfVar1[3] = auVar37._12_4_ + auVar35._12_4_;
                        uVar16 = uVar16 + 4;
                        auVar28._0_4_ = auVar28._0_4_ + iVar39;
                        auVar28._4_4_ = iVar24 + iVar40;
                        auVar28._8_4_ = iVar29 + iVar41;
                        auVar28._12_4_ = iVar30 + iVar42;
                      } while (uVar25 != uVar16);
                      uVar15 = (uint)uVar11 & 0xfffffffc;
                      uVar7 = uVar7 + uVar25 * 4;
                      uVar14 = uVar14 + uVar25 * 4;
                      if (uVar11 == uVar25) goto LAB_005242a0;
                    }
                    lVar18 = 0;
                    do {
                      fVar26 = (float)(int)(uVar15 + iVar8 + iVar21 + (int)lVar18);
                      *(float *)(uVar7 + lVar18 * 4) =
                           ((fVar38 - fVar26) * *(float *)(uVar14 + lVar18 * 4)) / fVar38 +
                           (fVar26 * *(float *)(uVar7 + lVar18 * 4)) / fVar38;
                      lVar18 = lVar18 + 1;
                    } while (iVar9 - uVar15 != (int)lVar18);
                  }
LAB_005242a0:
                  uVar12 = uVar12 + 1;
                } while (uVar12 != uVar4);
              }
              pVar10 = iVar9 + pVar10;
            }
          }
        }
LAB_00523f40:
        pVar3 = (pVar10 == pVar3) + pVar10;
      } while ((int)pVar3 < (int)param_2);
    }
  }
  return;
}




// ==================================================
// @006d8d80 (1478 bytes) — math_loop

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong this;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  float fVar13;
  longlong local_128;
  undefined1 local_120;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  float local_b4;
  longlong local_b0;
  char local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  float local_64;
  uint local_60;
  float local_5c;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  local_60 = FUN_01caecd0();
  if (local_60 == 1) {
    uVar11 = FUN_006cb500();
    lVar7 = local_b0;
    lVar1 = DAT_02726d08;
    if (local_a8[0] == '\0') {
      if (local_b0 != 0) {
        uVar11 = FUN_00d50b00();
        lVar1 = DAT_02726d08;
      }
    }
    else {
      local_a8[0] = '\0';
    }
    DAT_02726d08 = lVar1;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_120 = 1;
    local_128 = lVar1;
    FUN_006d9620(uVar11,&local_128);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar1 = local_b0;
  local_38[0] = local_a8[0];
  pcVar2 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_38[0] == '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_00e986f0();
  local_5c = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)FUN_01caeac0();
  fVar9 = (float)(**(code **)(**(longlong **)(this + 0x130) + 0xac0))();
  local_b4 = (float)(**(code **)(**(longlong **)(this + 0x130) + 0xad0))();
  FUN_006cb500();
  lVar1 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 == 0) goto LAB_006d933d;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_006d933d;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_a0 = lVar1;
  local_90 = 0;
  local_98 = 0;
  if (0 < *(int *)(lVar1 + 0xc)) {
    fVar8 = fVar8 / local_5c;
    auVar12 = ZEXT416((uint)fVar8);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
      local_f0 = '\0';
      local_f8 = lVar5;
      local_b0 = lVar5;
      FUN_00c9fe40(auVar12._0_8_,&local_f8);
      local_38[0] = local_40[0];
      pcVar2 = local_38;
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = pcVar2;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)pcVar2;
      if ((local_38[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
LAB_006d90e0:
        fVar10 = (float)FUN_01caeac0();
      }
      else {
        if ((local_5c == DAT_0239424c) && (!NAN(local_5c) && !NAN(DAT_0239424c))) goto LAB_006d90e0;
        if (*(char *)(this + 0x1c0) == '\0') {
          fVar10 = (float)FUN_00d459e0();
        }
        else {
          fVar10 = (float)FUN_00d459e0();
        }
        fVar10 = fVar10 * fVar8;
      }
      fVar13 = fVar9;
      if (fVar9 <= fVar10) {
        fVar13 = fVar10;
      }
      fVar10 = (float)(~-(uint)NAN(fVar10) & (uint)fVar13 | -(uint)NAN(fVar10) & (uint)fVar9);
      local_64 = local_b4;
      if (fVar10 <= local_b4) {
        local_64 = fVar10;
      }
      if (local_60 < 2) {
        local_e0 = '\0';
        local_e8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        local_80 = 0;
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar5;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((local_80 != '\0') && (local_88 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_00;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_01;
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_02;
        }
      }
      else {
        local_d0 = '\0';
        local_d8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = '\0';
        local_c8 = 0;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb_03;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_04;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_05;
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_06;
        }
      }
      if (local_48 != 0) {
        auVar12._0_8_ = FUN_00d50b20();
        auVar12._8_8_ = extraout_XMM0_Qb_07;
      }
      lVar7 = lVar7 + 1;
      local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d933d:
  if (local_60 == 3) {
    FUN_00ca1340();
  }
  return 1;
}




// ==================================================
// @004fa380 (1475 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *this;
  longlong local_f8;
  char local_f0 [8];
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  longlong local_60;
  char local_58;
  int local_48;
  char local_38 [8];
  
  local_78 = param_2;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  lVar6 = *this;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != local_60) goto LAB_004fa4e8;
  local_e8 = *this;
  local_e0 = '\0';
  FUN_00243390();
  lVar6 = *this;
  if (lVar6 == local_60) {
    if (((char)this[1] != '\0') || (local_60 == 0)) goto LAB_004fa4ba;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004fa4b5;
    }
LAB_004fa47a:
    *(undefined1 *)(this + 1) = 1;
    local_58 = '\0';
  }
  else {
    lVar1 = this[1];
    if (local_58 != '\0') {
      *this = local_60;
      if (((char)lVar1 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004fa47a;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *this = local_60;
    if (((char)lVar1 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_004fa4b5:
    *(undefined1 *)(this + 1) = 1;
LAB_004fa4ba:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_004fa4e8:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *this;
  if (lVar6 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      pVar4 = (pthread_key_t)*(undefined8 *)(lVar6 + 0x10);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      local_38[0] = local_f0[0];
      pcVar5 = local_38;
      pcVar3 = local_f0;
      if (local_f0[0] == '\0') {
        pcVar3 = pcVar5;
      }
      *pcVar3 = '\0';
      if ((local_f0[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (pthread_key_t)pcVar5;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = local_f8;
      local_c0 = '\0';
      FUN_0150d560();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = local_f8;
      local_b0 = '\0';
      FUN_0150d3a0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar6;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *this;
  local_a0 = '\0';
  FUN_012e6fe0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = *this;
  local_90 = '\0';
  FUN_012e6c30();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *this;
  local_80 = '\0';
  FUN_01298d30();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012ce720 (1475 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  char local_40;
  
  bVar1 = false;
  plVar10 = (longlong *)0x0;
  bVar2 = false;
  plVar8 = (longlong *)0x0;
  bVar5 = false;
LAB_012ce75d:
  FUN_00dee5a0(DAT_023908c8);
  do {
    FUN_012cf020();
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_48 == (longlong *)0x0) break;
    (**(code **)(*local_48 + 0x5d0))();
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_012ce850;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_012ce850:
      plVar9 = plVar8;
      bVar3 = bVar2;
      if (!bVar5) {
        FUN_00b33760();
        if (local_48 == plVar10) {
          if ((bVar1) || (local_48 == (longlong *)0x0)) {
joined_r0x012ce911:
            plVar7 = plVar10;
            bVar5 = bVar1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar7 = plVar10;
            bVar5 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce8f9;
            }
          }
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar10 = local_48;
LAB_012ce8f9:
              bVar1 = true;
              goto joined_r0x012ce911;
            }
          }
          else {
            bVar5 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar5 = true;
            }
          }
        }
        bVar1 = bVar5;
        bVar5 = true;
        if (plVar7 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar7 + 0x368))();
          plVar10 = plVar7;
          if (local_48 == plVar8) {
            if ((bVar2) || (local_48 == (longlong *)0x0)) goto joined_r0x012ce9e4;
            bVar3 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_012ce9cf;
            }
          }
          else {
            plVar9 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar2) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_012ce9cf:
              bVar3 = true;
joined_r0x012ce9e4:
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if ((bVar2) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      FUN_00b33760();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = plVar9;
      bVar2 = bVar1;
      bVar4 = bVar3;
      if (local_48 == plVar10) {
        if (plVar10 != (longlong *)0x0) goto LAB_012cec14;
        plVar10 = (longlong *)0x0;
      }
      else {
        if ((plVar10 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x370))();
        }
        FUN_00b33760();
        if (local_48 == plVar10) {
          plVar7 = plVar10;
          if ((bVar1) || (plVar10 == (longlong *)0x0)) {
LAB_012ceb1b:
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb2f;
          }
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            goto LAB_012ceb1b;
          }
          bVar2 = true;
        }
        else {
          plVar7 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012ceb1b;
          }
          bVar2 = true;
          if ((bVar1) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_012ceb2f:
          plVar10 = plVar7;
          if (plVar7 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            bVar1 = bVar2;
            goto LAB_012cec45;
          }
        }
        (**(code **)(*plVar10 + 0x368))();
        if (local_48 == plVar9) {
          if ((!bVar3) && (local_48 != (longlong *)0x0)) {
            bVar4 = true;
            if (local_40 != '\0') goto LAB_012cec14;
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          plVar8 = local_48;
          if (local_40 != '\0') {
            bVar4 = true;
            if ((bVar3) && (plVar9 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012cec14;
          }
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_012cec14:
        bVar3 = bVar4;
        FUN_00da5ad0();
        FUN_00b33790();
        FUN_00da6740();
        plVar9 = plVar8;
        bVar1 = bVar2;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_012cec45:
      if (*(char *)((longlong)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      FUN_0130f550();
      if (*(char *)((longlong)local_48 + 0x19f) != '\0') {
        _pthread_setspecific(param_1,param_2);
      }
      iVar6 = FUN_00e31690();
      if (iVar6 < 1) {
        FUN_00dee620();
      }
      FUN_00d50b20();
      plVar8 = plVar9;
      bVar2 = bVar3;
    }
    FUN_00d50b20();
  } while( true );
  if (DAT_028ac878 == '\x01') {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x370))();
    }
    if ((bVar1) && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return;
  }
  goto LAB_012ce75d;
}




// ==================================================
// @01656bf0 (1454 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  undefined8 *****pppppuVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *****arg1;
  longlong this;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 local_8c;
  undefined8 ****local_78;
  char local_70;
  double local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  local_60 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && ((undefined8 *****)local_78 != (undefined8 *****)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_68 = DAT_0238fee8 / *(double *)(this + 0x68);
  }
  else {
    local_8c = 0xffffffff;
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    local_68 = (double)FUN_016c98e0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (pthread_key_t)local_60;
    }
    local_58 = param_2;
    uVar6 = FUN_00e7b820();
    uVar6 = FUN_016c98e0(uVar6,&local_8c);
    local_68 = (double)FUN_016553c0(local_68);
    uVar6 = FUN_016553c0(uVar6);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar5 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
    }
    if ((local_70 != '\0') && ((undefined8 *****)local_78 != (undefined8 *****)0x0)) {
      FUN_00d50b20();
    }
    local_58 = CONCAT44(local_58._4_4_,0xffffffff);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_016c25f0(local_68);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_016c25f0(uVar6);
    dVar8 = (double)FUN_00e7c860();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_68 = (local_68 - dVar7) / dVar8;
  }
  local_58 = FUN_00e7bcc0();
  local_50 = FUN_00e7bcc0();
  local_48 = FUN_00e7bcc0();
  local_40 = FUN_00e7bcc0();
  while (dVar7 = (double)FUN_00e7c860(), local_68 < dVar7) {
    local_78 = (undefined8 ****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c3c0();
    local_68 = local_68 + local_68;
  }
  while (dVar7 = (double)FUN_00e7c860(), dVar7 < local_68) {
    local_78 = (undefined8 ****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c2a0();
    local_68 = local_68 * DAT_023942d0;
  }
  dVar7 = (double)FUN_00e7c860();
  dVar8 = (double)FUN_00e7c860();
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  dVar11 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  if (((local_68 < SQRT(dVar7 * dVar8)) || (local_68 < SQRT(dVar9 * dVar10))) ||
     (local_68 < SQRT(dVar11 * dVar12))) {
    local_78 = arg1;
    FUN_00e7bac0();
    bVar2 = true;
    bVar1 = true;
    pppppuVar3 = (undefined8 *****)local_78;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    pppppuVar3 = &local_78;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (bVar1) {
    arg1 = pppppuVar3;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return arg1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ==================================================
// @012fb890 (1451 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_70 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = local_70;
  local_88 = 0;
  uVar5 = FUN_00e7bcc0();
  FUN_012fa130(uVar5,&local_90);
  local_58 = local_40;
  pVar10 = (pthread_key_t)uVar5;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  uVar5 = FUN_00e7bdb0();
  uVar6 = FUN_00e7bdb0();
  local_40 = lVar11;
  local_38[0] = '\0';
  uVar3 = FUN_01254260(uVar6,uVar5);
  pVar10 = (pthread_key_t)uVar6;
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar3 != '\0') goto LAB_012fbdfa;
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_012f9ac0();
  if (cVar2 != '\0') {
    FUN_012f9cd0();
  }
  pvVar4 = _pthread_getspecific(pVar10);
  lVar11 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar11 = local_58, lVar7 != 0)) {
    lVar11 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_50;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar7 == 0) && (0xe < *(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) + 7U)) {
    local_80 = **(undefined8 **)(*(longlong *)(lVar11 + 0x48) + 0x10);
  }
  else {
    local_80 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  lVar7 = local_40;
  local_50 = local_38[0];
  pcVar8 = &local_50;
  pcVar9 = local_38;
  if (local_38[0] == '\0') {
    pcVar9 = pcVar8;
  }
  *pcVar9 = '\0';
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (pthread_key_t)pcVar8;
  if (lVar7 == 0) {
    pVar10 = *(pthread_key_t *)(*(longlong *)(lVar11 + 0x48) + 0x18);
    if (pVar10 + 7 < 0xf) goto LAB_012fbcf8;
    local_78 = *(undefined8 *)
                ((longlong)(int)pVar10 + -8 + *(longlong *)(*(longlong *)(lVar11 + 0x48) + 0x10));
  }
  else {
LAB_012fbcf8:
    local_78 = FUN_00e7bdb0();
    if ((local_50 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar11 = local_40;
    pcVar8 = &local_50;
    pcVar9 = local_38;
    if (local_38[0] == '\0') {
      pcVar9 = pcVar8;
    }
    local_50 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pcVar8;
    if ((local_50 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar10);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar11 = local_58;
  local_40 = local_58;
  local_38[0] = '\0';
  FUN_012549c0(local_78,local_80,0);
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_012fbdfa:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_70;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar3 ^ 1;
}




// ==================================================
// @006da4e0 (1450 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong this;
  undefined4 uVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  longlong local_d8;
  undefined1 local_d0;
  undefined1 local_c0;
  longlong local_b0;
  char local_a8;
  int local_9c;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caecd0();
  if (iVar4 == 1) {
    uVar11 = FUN_006cb500();
    lVar6 = DAT_02726cb0;
    if (local_78[0] == '\0') {
      if (local_80 != 0) {
        uVar11 = FUN_00d50b00();
        lVar6 = DAT_02726cb0;
      }
    }
    else {
      local_78[0] = '\0';
    }
    local_c0 = 1;
    DAT_02726cb0 = lVar6;
    if (lVar6 != 0) {
      local_c0 = 1;
      uVar11 = FUN_00d50b00();
    }
    local_d0 = 1;
    local_d8 = lVar6;
    FUN_006d9620(uVar11,&local_d8);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_78[0];
  pcVar5 = local_78;
  if (local_78[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_9c = iVar4;
  if ((local_38[0] == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e986f0();
  local_3c = (float)FUN_00e991a0();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  local_40 = (float)FUN_01caeac0();
  local_48 = (float)(**(code **)(**(longlong **)(this + 0x140) + 0xac0))();
  local_44 = (float)(**(code **)(**(longlong **)(this + 0x140) + 0xad0))();
  FUN_006cb500();
  if (local_78[0] == '\0') {
    if (local_80 == 0) goto LAB_006daa98;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_006daa98;
  local_40 = local_40 * DAT_023908e0 - local_3c;
  local_48 = local_48 * DAT_023908e0;
  fVar12 = local_44 * DAT_023908e0;
  local_78[0] = '\0';
  local_70 = local_80;
  local_68 = 0xffffffff;
  local_60 = 0;
  iVar4 = 0;
  local_44 = fVar12;
  while( true ) {
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar4);
        FUN_00d23690(fVar12,iVar4);
        local_60 = local_60 + iVar4;
        iVar4 = 0;
      }
      local_68 = CONCAT44(iVar4,(int)local_68);
    }
    lVar6 = (longlong)(int)local_68;
    iVar4 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar4);
    if (*(int *)(local_70 + 0xc) <= iVar4) break;
    local_b0 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar6 * 8);
    local_a8 = '\0';
    FUN_00c9fe40(*(longlong *)(local_70 + 0x10),&local_b0);
    plVar2 = local_58;
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = pcVar5;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pcVar5;
    if ((local_38[0] == '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      local_3c = (float)FUN_01caeac0();
      local_3c = local_3c * DAT_023908e0;
    }
    else if (*(char *)(this + 0x1c0) == '\0') {
      local_3c = (float)FUN_00d459e0();
      local_3c = local_3c + local_40;
    }
    else {
      local_3c = (float)FUN_00d459e0();
      fVar12 = (float)FUN_01caeac0();
      local_3c = local_3c + fVar12 * DAT_023908e0;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar12 = (float)FUN_012e78c0();
    plVar1 = local_58;
    if ((DAT_0270c820 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), fVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      fVar12 = (float)___cxa_guard_release();
    }
    pplVar10 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar10 = &local_58;
      fVar12 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar10 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        fVar12 = (float)FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    pVar9 = (pthread_key_t)pplVar10;
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = local_48;
      if (local_48 <= local_3c) {
        fVar12 = local_3c;
      }
      fVar13 = local_44;
      if (fVar12 <= local_44) {
        fVar13 = fVar12;
      }
      FUN_012c6a20(fVar13);
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      fVar12 = (float)FUN_00d50b20();
    }
    iVar4 = local_68._4_4_;
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006daa98:
  if (local_9c == 3) {
    FUN_00ca1340();
  }
  return 1;
}




// ==================================================
// @006daca0 (1397 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong this;
  undefined4 uVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  longlong local_d8;
  undefined1 local_d0;
  undefined1 local_c0;
  longlong local_b0;
  char local_a8;
  float local_9c;
  float local_98;
  int local_94;
  longlong local_78;
  char local_70 [8];
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caecd0();
  if (iVar4 == 1) {
    uVar11 = FUN_006cb500();
    lVar6 = DAT_02726cc8;
    if (local_70[0] == '\0') {
      if (local_78 != 0) {
        uVar11 = FUN_00d50b00();
        lVar6 = DAT_02726cc8;
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_c0 = 1;
    DAT_02726cc8 = lVar6;
    if (lVar6 != 0) {
      local_c0 = 1;
      uVar11 = FUN_00d50b00();
    }
    local_d0 = 1;
    local_d8 = lVar6;
    FUN_006d9620(uVar11,&local_d8);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_70[0];
  pcVar5 = local_70;
  if (local_70[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_70[0] != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_94 = iVar4;
  if ((local_38[0] == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e986f0();
  local_3c = (float)FUN_00e991a0();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  local_40 = (float)FUN_01caeac0();
  local_9c = (float)(**(code **)(**(longlong **)(this + 0x138) + 0xac0))();
  local_98 = (float)(**(code **)(**(longlong **)(this + 0x138) + 0xad0))();
  FUN_006cb500();
  if (local_70[0] == '\0') {
    if (local_78 == 0) goto LAB_006db22e;
    FUN_00d50b00();
  }
  else if (local_78 == 0) goto LAB_006db22e;
  fVar12 = local_40 - local_3c;
  local_70[0] = '\0';
  local_68 = local_78;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar4 = 0;
  local_40 = fVar12;
  while( true ) {
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar4);
        FUN_00d23690(fVar12,iVar4);
        local_58 = local_58 + iVar4;
        iVar4 = 0;
      }
      local_60 = CONCAT44(iVar4,(int)local_60);
    }
    lVar6 = (longlong)(int)local_60;
    iVar4 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    if (*(int *)(local_68 + 0xc) <= iVar4) break;
    local_b0 = *(longlong *)(*(longlong *)(local_68 + 0x10) + 8 + lVar6 * 8);
    local_a8 = '\0';
    FUN_00c9fe40(*(longlong *)(local_68 + 0x10),&local_b0);
    plVar2 = local_50;
    local_38[0] = local_48[0];
    pcVar5 = local_38;
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = pcVar5;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pcVar5;
    if ((local_38[0] == '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (longlong *)0x0) {
      local_3c = (float)FUN_01caeac0();
    }
    else if (*(char *)(this + 0x1c0) == '\0') {
      local_3c = (float)FUN_00d459e0();
      local_3c = local_3c + local_40;
    }
    else {
      local_3c = (float)FUN_00d459e0();
      fVar12 = (float)FUN_01caeac0();
      local_3c = local_3c + fVar12;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar12 = (float)FUN_012e78c0();
    plVar1 = local_50;
    if ((DAT_0270c820 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), fVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      fVar12 = (float)___cxa_guard_release();
    }
    pplVar10 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar10 = &local_50;
      fVar12 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar10 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        fVar12 = (float)FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    pVar9 = (pthread_key_t)pplVar10;
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = local_9c;
      if (local_9c <= local_3c) {
        fVar12 = local_3c;
      }
      fVar13 = local_98;
      if (fVar12 <= local_98) {
        fVar13 = fVar12;
      }
      FUN_012c6a90(fVar13);
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      fVar12 = (float)FUN_00d50b20();
    }
    iVar4 = local_60._4_4_;
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006db22e:
  if (local_94 == 3) {
    FUN_00ca1340();
  }
  return 1;
}




// ==================================================
// @006d9da0 (1325 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong this;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  longlong local_e8;
  undefined1 local_e0;
  undefined1 local_d0;
  longlong local_c0;
  char local_b8;
  float local_ac;
  float local_a8;
  int local_a4;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  float local_54;
  longlong *local_48;
  char local_40 [12];
  float local_34;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar5 = FUN_01caecd0();
  if (iVar5 == 1) {
    uVar12 = FUN_006cb500();
    lVar11 = local_a0;
    lVar2 = DAT_02726c98;
    if (local_98[0] == '\0') {
      if (local_a0 != 0) {
        uVar12 = FUN_00d50b00();
        lVar2 = DAT_02726c98;
      }
    }
    else {
      local_98[0] = '\0';
    }
    local_d0 = 1;
    DAT_02726c98 = lVar2;
    if (lVar2 != 0) {
      local_d0 = 1;
      uVar12 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar2;
    FUN_006d9620(uVar12,&local_e8);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar2 = local_a0;
  local_68 = local_98[0];
  pcVar6 = local_98;
  if (local_98[0] == '\0') {
    pcVar6 = &local_68;
  }
  *pcVar6 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_68 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_00e986f0();
  local_34 = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_54 = (float)FUN_01caeac0();
  local_ac = (float)(**(code **)(**(longlong **)(this + 0x148) + 0xac0))();
  local_a8 = (float)(**(code **)(**(longlong **)(this + 0x148) + 0xad0))();
  FUN_006cb500();
  lVar2 = local_a0;
  if (local_98[0] == '\0') {
    if (local_a0 == 0) goto LAB_006da2ca;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_006da2ca;
  local_98[0] = '\0';
  local_a0 = 0;
  local_90 = lVar2;
  local_80 = 0;
  local_88 = 0;
  local_a4 = iVar5;
  if (0 < *(int *)(lVar2 + 0xc)) {
    fVar13 = local_54 - local_34;
    lVar11 = 0;
    local_54 = fVar13;
    do {
      local_c0 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 8);
      local_b8 = '\0';
      local_a0 = local_c0;
      FUN_00c9fe40(fVar13,&local_c0);
      plVar3 = local_48;
      local_68 = local_40[0];
      pcVar6 = &local_68;
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)pcVar6;
      if ((local_68 == '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        local_34 = (float)FUN_01caeac0();
      }
      else if (*(char *)(this + 0x1c0) == '\0') {
        local_34 = (float)FUN_00d459e0();
        local_34 = local_34 + local_54;
      }
      else {
        local_34 = (float)FUN_00d459e0();
        fVar13 = (float)FUN_01caeac0();
        local_34 = local_34 + fVar13;
      }
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2810();
      plVar1 = local_48;
      fVar13 = (float)FUN_004fbac0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_48;
        fVar13 = extraout_XMM0_Da;
        if (cVar4 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          fVar13 = (float)FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      pVar9 = (pthread_key_t)pplVar10;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar13 = local_ac;
        if (local_ac <= local_34) {
          fVar13 = local_34;
        }
        fVar14 = local_a8;
        if (fVar13 <= local_a8) {
          fVar14 = fVar13;
        }
        FUN_012de780(fVar14);
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        fVar13 = (float)FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_88 = CONCAT44(local_88._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)(lVar2 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  iVar5 = local_a4;
LAB_006da2ca:
  if (iVar5 == 3) {
    FUN_00ca1340();
  }
  return 1;
}




// ==================================================
// @0164f500 (1318 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *arg1;
  longlong this;
  longlong local_98;
  char local_90;
  undefined8 local_70;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0184a0c0();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0xa8);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar5 + 0xa8) != 0) {
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (cVar3 = FUN_0131bcd0(), cVar3 != '\0')) {
    if (lVar8 == 0) {
      bVar2 = true;
      local_70 = 0;
      bVar1 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727928;
      if (DAT_02727928 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727930;
      if (DAT_02727930 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727938;
      if (DAT_02727938 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01823610();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      local_70 = 1;
      bVar2 = false;
      bVar1 = false;
    }
  }
  else {
    FUN_00d50b20();
    bVar2 = true;
    local_70 = 0;
    bVar1 = true;
  }
  FUN_0164e420();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined1 *)(this + 0xb0) = *(undefined1 *)(lVar8 + 0xb0);
  if (param_2 != '\0') {
    lVar8 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(this + 0xb1) = *(undefined1 *)(lVar8 + 0xb1);
  }
  FUN_01733c40();
  if (!bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return local_70;
}




// ==================================================
// @006d0340 (1316 bytes) — math_loop

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  longlong this;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  uVar5 = FUN_006d0b50();
  local_38 = local_a0;
  if ((local_98 == '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b00();
  }
  local_70 = 0;
  lVar4 = *(longlong *)(this + 0x168);
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar3 = DAT_02705b68;
  local_70 = '\x01';
  local_78 = lVar4;
  if (DAT_02705b68 != 0) {
    uVar5 = FUN_00d50b00();
  }
  lVar4 = DAT_0270b8b0;
  local_f0 = lVar3;
  local_e8 = '\x01';
  if (DAT_0270b8b0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_e0 = lVar4;
  local_d8 = '\x01';
  uVar5 = FUN_01e57260(uVar5,&local_e0);
  local_58 = local_a0;
  local_50 = 0;
  local_d0 = DAT_02726ca8;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar5 = FUN_00d50b00();
      local_d0 = DAT_02726ca8;
    }
  }
  else {
    local_98 = '\0';
  }
  local_50 = '\x01';
  DAT_02726ca8 = local_d0;
  if (local_d0 != 0) {
    local_50 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_01e57260(uVar5,&local_d0);
  local_48 = local_b0;
  local_40 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(longlong *)(this + 0x130);
  }
  else {
    local_a8 = '\0';
    lVar4 = *(longlong *)(this + 0x130);
  }
  local_40 = '\x01';
  if (lVar4 != 0) {
    local_40 = '\x01';
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_68 = lVar4;
  FUN_000b75e0(DAT_02390124,&local_f0,&local_48,&local_68);
  lVar4 = local_38;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x130) == 0) {
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    if (*(longlong **)(this + 0xf8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(this + 0xf8) + 0x998))();
    }
    if (*(longlong **)(this + 0xf0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(this + 0xf0) + 0x998))();
    }
    if (*(int *)(local_38 + 0xc) == 0) {
      if (*(longlong **)(this + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this + 0xf8) + 0x918))();
      }
      if (*(longlong **)(this + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this + 0xf0) + 0x918))();
      }
    }
    else {
      local_98 = '\0';
      local_a0 = 0;
      local_90 = local_38;
      local_80 = 0;
      local_88 = 0;
      if (0 < *(int *)(local_38 + 0xc)) {
        lVar4 = 0;
        do {
          local_a0 = *(longlong *)(*(longlong *)(local_38 + 0x10) + lVar4 * 8);
          lVar3 = local_38;
          pvVar1 = _pthread_getspecific((pthread_key_t)local_38);
          pVar2 = (pthread_key_t)lVar3;
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7980();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f78f0();
          lVar4 = lVar4 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)lVar4);
        } while ((int)lVar4 < *(int *)(local_38 + 0xc));
      }
      FUN_006ddd30();
      if (*(longlong **)(this + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this + 0xf8) + 0x918))();
      }
      if (*(longlong **)(this + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(this + 0xf0) + 0x918))();
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0015a600 (1313 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong this;
  int iVar4;
  longlong local_c0;
  char local_b8;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(longlong *)(this + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0150f380();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(longlong *)(this + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e68b0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c2f0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        cVar2 = FUN_00d23d70();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb5e0();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (*(longlong *)(this + 0x80) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012fa130 (1286 bytes) — math_loop

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong arg1;
  undefined8 *this;
  double dVar7;
  double dVar8;
  ulonglong local_98;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  char local_40;
  longlong local_38;
  
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  plVar2 = (longlong *)FUN_010eca10();
  (**(code **)(*plVar2 + 0x18))();
  FUN_012e8920();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  local_98 = param_1;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    local_98 = param_1;
  }
  FUN_012caf10();
  local_38 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_58._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_98 = 0;
    local_58 = FUN_016cb9d0(0,4);
  }
  if (local_50._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_012f7cb0();
    dVar8 = (double)FUN_012f7d90();
    local_98 = 0;
    local_50 = FUN_016cb9d0(dVar7 + dVar8,4);
  }
  local_70 = '\0';
  local_78 = 0;
  while( true ) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = local_50;
    cVar1 = FUN_01252960(local_50,local_58,&local_78,&local_68);
    pVar4 = (pthread_key_t)uVar5;
    if (cVar1 == '\0') break;
    if ((local_68._4_4_ == 0) || ((local_58._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_68 = local_58;
    }
    if ((local_88._4_4_ == 0) || ((local_50._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_88 = local_50;
    }
    local_48 = local_68;
    if (*(longlong *)(arg1 + 0x60) == 0) {
      lVar6 = 0;
      local_80 = local_68;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_80 = FUN_00e7cd00();
      lVar6 = *(longlong *)(arg1 + 0x60);
    }
    local_48 = local_88;
    local_98 = local_88;
    if (lVar6 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)local_88);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_98 = FUN_00e7cd00();
    }
    uVar5 = local_98;
    if ((((int)(local_80 >> 0x20) != 0) && (uVar5 = local_98 >> 0x20, uVar5 != 0)) &&
       (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
      local_48 = local_68;
      local_80 = local_68;
      if (*(longlong *)(arg1 + 0x60) != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7c860();
        FUN_01656470();
        local_80 = FUN_00e7cd00();
      }
      local_48 = local_80;
      FUN_00e7b820();
      local_98 = local_48;
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_78;
    local_40 = '\0';
    FUN_012502a0(local_98,local_80,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *this = plVar2;
  *(undefined1 *)(this + 1) = 1;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @012fceb0 (1272 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *arg1;
  longlong *this;
  bool bVar9;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  lVar7 = *arg1;
  if (lVar7 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar7 = *arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = true;
      goto LAB_012fcf2e;
    }
  }
  bVar1 = false;
  bVar9 = false;
  lVar7 = 0;
LAB_012fcf2e:
  FUN_00d8ede0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  bVar2 = true;
  lVar6 = local_68;
  if (((lVar7 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) && (local_68 != lVar7)) {
    if (bVar1) {
      FUN_00d50b00();
    }
    lVar6 = lVar7;
    bVar2 = bVar9;
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  lVar8 = lVar7;
  bVar1 = bVar9;
  if (lVar6 == 0) {
LAB_012fd1d4:
    while (((bVar9 = bVar1, lVar7 = lVar8, lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 != '\0') goto LAB_012fd297;
          FUN_00d50b00();
          goto LAB_012fd320;
        }
        goto joined_r0x012fd2f6;
      }
      lVar8 = local_78;
      if (local_70 == '\0') goto LAB_012fd2c0;
      if ((bVar9) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_012fd297:
      local_70 = '\0';
      bVar1 = true;
    }
  }
  else {
    while (((lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 == '\0') {
            FUN_00d50b00();
            goto LAB_012fd150;
          }
          goto LAB_012fd0c7;
        }
joined_r0x012fd125:
        lVar8 = lVar7;
        bVar1 = bVar9;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_78;
LAB_012fd150:
            bVar9 = true;
            goto joined_r0x012fd125;
          }
        }
        else {
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_012fd0c7:
          local_70 = '\0';
          bVar1 = true;
        }
      }
      bVar9 = bVar1;
      lVar7 = lVar8;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(this + 1) = 0;
  if (!bVar9) {
    FUN_00d50b00();
  }
  *this = lVar7;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar2) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return this;
LAB_012fd2c0:
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  bVar1 = true;
  if ((bVar9) && (lVar7 != 0)) {
    FUN_00d50b20();
    lVar7 = local_78;
LAB_012fd320:
    bVar9 = true;
joined_r0x012fd2f6:
    lVar8 = lVar7;
    bVar1 = bVar9;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  goto LAB_012fd1d4;
}




// ==================================================
// @01319320 (1259 bytes) — math_loop

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined7 uVar8;
  longlong *plVar7;
  char unaff_SIL;
  longlong lVar9;
  longlong **pplVar10;
  longlong *plVar11;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  pthread_key_t local_40;
  char local_3c;
  longlong *local_38;
  
  local_40 = param_1;
  local_3c = unaff_SIL;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_68;
  FUN_012e78c0();
  plVar7 = local_68;
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_013193b9:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_013193b9;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((ulonglong)plVar7 >> 8);
  if (((char)local_40 == '\0') || (param_2 != '\0')) {
    if (plVar11 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      plVar1 = local_68;
      plVar7 = (longlong *)CONCAT71(uVar8,local_68 == (longlong *)0x0);
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar1 == (longlong *)0x0) || (local_3c == '\0')) goto LAB_01319626;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c64a0();
    }
LAB_01319624:
    plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  else {
    if (plVar11 == (longlong *)0x0) goto LAB_01319624;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_68;
    plVar7 = (longlong *)CONCAT71(uVar8,local_68 != (longlong *)0x0);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (longlong *)0x0) && (local_3c != '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar6 = &DAT_02607248;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x76) = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      plVar7 = (longlong *)0x0;
      if (puVar6 == (undefined8 *)0x0) goto LAB_01319624;
      FUN_00d50b20();
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
  }
LAB_01319626:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_01319740;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) goto LAB_01319740;
  local_60 = '\0';
  local_68 = (longlong *)0x0;
  local_58 = plVar1;
  local_48 = 0;
  local_50 = 0;
  local_38 = plVar11;
  if (0 < *(int *)((longlong)plVar1 + 0xc)) {
    uVar2 = (char)local_40;
    lVar9 = 0;
    do {
      local_68 = *(longlong **)(plVar1[2] + lVar9 * 8);
      cVar3 = FUN_01319320(uVar2,0);
      plVar7 = (longlong *)((ulonglong)plVar7 & 0xff);
      if (cVar3 == '\0') {
        plVar7 = (longlong *)0x0;
      }
      lVar9 = lVar9 + 1;
      local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
    } while ((int)lVar9 < *(int *)((longlong)plVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  plVar11 = local_38;
LAB_01319740:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return (ulonglong)plVar7 & 0xffffffff;
}




// ==================================================
// @01953330 (1247 bytes) — calculation

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  longlong *this;
  char *pcVar9;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_58;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  cVar4 = (char)param_1;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_50 + 0xc);
  if (local_48[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) goto LAB_01953489;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  lVar2 = *param_2;
  if (lVar2 == local_50) {
    if (((char)param_2[1] != '\0') || (local_50 == 0)) goto LAB_01953475;
    if (local_48[0] == '\0') {
      FUN_00d50b00();
      goto LAB_0195346e;
    }
  }
  else {
    lVar3 = param_2[1];
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_50;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_0195346e:
      local_58 = param_2 + 1;
      *(undefined1 *)local_58 = 1;
LAB_01953475:
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01953489;
    }
    *param_2 = local_50;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
  }
  local_58 = param_2 + 1;
  *(undefined1 *)local_58 = 1;
LAB_01953489:
  if (cVar4 == '\0') {
    FUN_01941c70();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_01390340();
    bVar5 = 1;
    if (cVar4 == '\0') {
      FUN_01941c70();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      pcVar7 = local_38;
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = pcVar7;
      }
      local_38[0] = local_48[0];
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar8 = (pthread_key_t)pcVar7;
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar5 = FUN_0134a7d0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar5 != 0) {
      FUN_01941c70();
      return this;
    }
  }
  lVar2 = *param_2;
  *(undefined1 *)(this + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this = lVar2;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @006d0b50 (1195 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 *this;
  int iVar7;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  local_68 = puVar3;
  (*DAT_02572370)();
  FUN_006cb500();
  if (local_50 != 0) {
    FUN_006cb500();
    if (*(int *)(local_108 + 0xc) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_006cb500();
      local_60 = local_f8;
      FUN_00d23310();
      local_40[0] = local_88[0];
      pcVar4 = local_40;
      if (local_88[0] != '\0') {
        pcVar4 = local_88;
      }
      *pcVar4 = '\0';
      if ((local_88[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      if (local_d0 == 0) {
        cVar2 = '\0';
      }
      else {
        FUN_006cb500();
        local_58 = local_e8;
        FUN_00d23310();
        pcVar6 = local_38;
        pcVar4 = local_88;
        if (local_88[0] == '\0') {
          pcVar4 = pcVar6;
        }
        local_38[0] = local_88[0];
        *pcVar4 = '\0';
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012ccc80();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_100 != '\0') {
      FUN_00d50b20();
    }
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') goto LAB_006d0fea;
  }
  FUN_006cb500();
  if (local_88[0] == '\0') {
    if (local_90 == 0) goto LAB_006d0fea;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_006d0fea;
  local_88[0] = '\0';
  local_70 = 0;
  local_78 = 0;
  if (0 < *(int *)(local_90 + 0xc)) {
    iVar7 = 0;
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      lVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_004f9670();
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if (lVar1 != 0) {
          local_48 = '\0';
          local_50 = lVar1;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      iVar7 = iVar7 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar7);
    } while (iVar7 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d0fea:
  *this = local_68;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01653e10 (1164 bytes) — calculation

{
  longlong lVar1;
  pthread_key_t pVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *arg1;
  longlong this;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01708f80();
  *(undefined8 *)(this + 0x80) = *arg1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0164fef0();
  if (this != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar2 = FUN_01666ed0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  pVar5 = pVar2;
  FUN_012c9ae0(pVar2,1);
  lVar1 = *(longlong *)(this + 0x90);
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_01653f96;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x90);
      *(longlong *)(this + 0x90) = local_38;
    }
    else {
      local_30 = '\0';
LAB_01653f96:
      *(longlong *)(this + 0x90) = lVar4;
    }
    pVar5 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d8ede0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_012c9ae0(pVar2,0);
  lVar1 = *(longlong *)(this + 0x98);
  lVar4 = lVar1;
  if (lVar1 == local_38) goto LAB_01654174;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_01654129;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(this + 0x98);
    *(longlong *)(this + 0x98) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01654129:
    *(longlong *)(this + 0x98) = lVar4;
  }
  pVar2 = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_01654174:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4be0();
  pvVar3 = _pthread_getspecific(pVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_012f83f0();
  if (this != 0) {
    FUN_00d50b20();
  }
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  FUN_01654510();
  *(undefined1 *)(this + 0xa5) = 1;
  return;
}




// ==================================================
// @012d1980 (1130 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *arg1;
  longlong this;
  int local_40;
  
  lVar1 = *(longlong *)(this + 0x170);
  if (lVar1 == 0) {
    lVar1 = *arg1;
    lVar5 = *(longlong *)(this + 0xf8);
    if (lVar5 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0xf8) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d243f0();
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 0x10);
    if ((lVar5 != *arg1) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x50))(), cVar2 == '\0')) {
      pVar9 = (pthread_key_t)lVar5;
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_012dc5a0();
      (**(code **)(*plVar3 + 0x18))();
      lVar1 = *arg1;
      lVar5 = plVar3[2];
      if (lVar5 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar3[2] = lVar1;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d243f0();
      if (*arg1 != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        lVar1 = plVar3[4];
        if (lVar1 != lVar5) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          plVar3[4] = lVar5;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_012d0a00();
      }
      lVar1 = *(longlong *)(*(longlong *)(this + 0x170) + 0x20);
      lVar5 = plVar3[4];
      if ((lVar5 != lVar1) && (lVar5 != 0)) {
        FUN_00cbceb0();
        (**(code **)(*(longlong *)(this + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc2c0();
        if ((longlong *)(this + 0xf0) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(this + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      lVar6 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(3);
      } while (cVar2 == '\0');
      lVar7 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(1);
      } while (cVar2 == '\0');
      if (lVar7 != 0) {
        FUN_012d21a0();
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_40 = -1;
          while( true ) {
            lVar8 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar7 + 0xc) <= local_40) break;
            (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + 8 + lVar8 * 8) + 0x370))();
          }
          FUN_00540a20();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if ((lVar1 != 0) && (lVar5 != lVar1)) {
        FUN_00cbcef0();
        (**(code **)(*(longlong *)(this + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc3f0();
        if ((longlong *)(this + 0xf0) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(this + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01658d80 (1084 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5240();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01658e71:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01658e71;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar5 = &local_40;
  FUN_012e78c0();
  plVar1 = local_40;
  if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01658f37;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_01658f37:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c6b80();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01953cb0 (1082 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong **pplVar9;
  int iVar10;
  longlong this;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  local_34 = 0;
  if (*(longlong *)(this + 0x540) == 0) {
    return 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar2 = local_70;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    return local_34;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar2;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_58;
      iVar11 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar11);
      iVar10 = *(int *)(local_60 + 0xc);
      if (iVar10 <= iVar11) break;
      lVar8 = *(longlong *)(local_60 + 0x10);
      local_80 = *(longlong *)(lVar8 + 8 + lVar6 * 8);
      local_78 = '\0';
      local_70 = local_80;
      FUN_01941c70(lVar8,&local_80);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_012e78c0();
      plVar1 = local_48;
      if ((DAT_0270c820 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
        _DAT_027e77e8 = FUN_0015ef90();
        _DAT_027e77d0 = "MULSSGenerator";
        _DAT_027e77d8 = 0x70;
        _DAT_027e77e0 = FUN_0015ef30;
        _DAT_027e77f0 = 0;
        uRam00000000027e77f8 = 0;
        _DAT_027e7800 = 0;
        uRam00000000027e7808 = 0;
        _DAT_027e7810 = 0;
        uRam00000000027e7818 = 0;
        _DAT_027e7820 = 0;
        uRam00000000027e7828 = 0;
        _DAT_027e7830 = 0;
        uRam00000000027e7838 = 0;
        _DAT_027e7840 = 0;
        uRam00000000027e7848 = 0;
        _DAT_027e7850 = 0;
        uRam00000000027e7858 = 0;
        _DAT_027e7860 = 0;
        uRam00000000027e7868 = 0;
        _DAT_027e7870 = 0;
        uRam00000000027e7878 = 0;
        _DAT_027e7880 = 0;
        uRam00000000027e7888 = 0;
        _DAT_027e7890 = 0;
        uVar12 = ___cxa_guard_release();
      }
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar9 = &local_48;
        uVar12 = extraout_XMM0_Da;
        if (cVar3 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar9 + 1) = 0;
      }
      pVar7 = (pthread_key_t)pplVar9;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_34 = FUN_012c6b70();
        FUN_00d50b20();
        break;
      }
      iVar10 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690(uVar12,local_58._4_4_);
          local_50 = local_50 + iVar10;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_000be170();
    if (iVar11 < iVar10) goto LAB_019540d4;
  }
  local_34 = 0;
LAB_019540d4:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}




// ==================================================
// @00523880 (1072 bytes) — calculation

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong this;
  undefined8 uVar9;
  double dVar10;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00b31a00();
  pVar7 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
  pcVar8 = local_38;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = FUN_00bc47e0();
  uVar9 = DAT_02395720;
  if (cVar1 != '\0') {
    uVar9 = FUN_00bc48b0();
  }
  *(undefined8 *)(this + 0x268) = uVar9;
  uVar9 = FUN_00bc4920();
  *(undefined8 *)(this + 0x270) = uVar9;
  cVar1 = *(char *)(this + 0x370);
  cVar2 = FUN_00bc47f0();
  *(char *)(this + 0x24f) = cVar2;
  if (cVar2 == '\0') {
    local_40 = 0.0;
    cVar3 = '\0';
    dVar10 = 0.0;
    cVar2 = '\0';
    if (cVar1 == '\0') goto LAB_00523968;
LAB_0052397a:
    *(double *)(this + 0x250) = dVar10;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(dVar10);
    FUN_01320140();
    *(undefined1 *)(this + 0x2a0) = 1;
    if (cVar1 == '\0') goto LAB_005239eb;
LAB_005239fe:
    *(double *)(this + 600) = local_40;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00521df0(local_40);
    FUN_013200d0();
    *(undefined1 *)(this + 0x2a0) = 1;
  }
  else {
    dVar10 = (double)FUN_00bc48c0();
    local_40 = (double)FUN_00bc48d0();
    cVar3 = FUN_00bc48e0();
    cVar2 = cVar3;
    if (cVar1 != '\0') goto LAB_0052397a;
LAB_00523968:
    cVar3 = cVar2;
    if ((*(double *)(this + 0x250) != dVar10) ||
       (NAN(*(double *)(this + 0x250)) || NAN(dVar10))) goto LAB_0052397a;
LAB_005239eb:
    if ((*(double *)(this + 600) != local_40) ||
       (NAN(*(double *)(this + 600)) || NAN(local_40))) goto LAB_005239fe;
  }
  if (*(char *)(this + 0x24d) != cVar3) {
    *(char *)(this + 0x24d) = cVar3;
    *(undefined1 *)(this + 0x2a0) = 1;
  }
  cVar2 = FUN_00bc47c0();
  if (cVar2 == '\0') {
    cVar2 = FUN_00bc47b0();
    local_40 = 0.0;
    if (cVar2 != '\0') {
      local_40 = (double)FUN_00bc4790();
    }
  }
  else {
    lVar6 = FUN_00bc4780();
    local_40 = (double)FUN_00b335d0();
    local_40 = (double)lVar6 / local_40;
  }
  if (((*(char *)(this + 0x24e) == '\0') || (cVar2 = FUN_00bc4910(), cVar2 != '\0')) ||
     (cVar2 = FUN_00bc47d0(), cVar2 == '\0')) goto LAB_00523c71;
  if (*(longlong *)(this + 0x308) == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48[0] == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      if (iVar4 == 0) {
        local_40 = *(double *)(this + 0x260);
      }
      FUN_00d50b20();
      if (iVar4 == 0) goto LAB_00523c71;
      goto LAB_00523b13;
    }
    dVar10 = *(double *)(this + 0x260);
  }
  else {
LAB_00523b13:
    FUN_00bc47a0();
    local_40 = (double)FUN_00521df0();
    dVar10 = *(double *)(this + 0x260);
    if (_DAT_02391038 <= (double)((ulonglong)(local_40 - dVar10) & _DAT_023908f0))
    goto LAB_00523c71;
  }
  local_40 = dVar10;
LAB_00523c71:
  *(double *)(this + 0x260) = local_40;
  if (cVar1 != '\0') {
    *(undefined1 *)(this + 0x370) = 0;
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01659300 (1034 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = (pthread_key_t)local_38;
  }
  pplVar6 = &local_48;
  FUN_012e78c0();
  plVar1 = local_48;
  if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_016593ff:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_016593ff;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01659560;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar6 = &local_48;
  FUN_012e78c0();
  plVar1 = local_48;
  if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_016594b9:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_016594b9;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6b80();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01659560:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f7880();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012eb1d0 (1022 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  longlong arg1;
  undefined8 *this;
  int iVar7;
  longlong lVar8;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(arg1 + 0x58) == 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      if (0 < *(int *)(local_70 + 0xc)) {
        iVar7 = 0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_012eb500;
            }
          }
          else if (local_40 != 0) {
LAB_012eb500:
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == arg1) {
              local_38 = '\0';
              FUN_00d235a0();
            }
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_70 + 0xc));
      }
      FUN_0015edf0();
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(arg1 + 0xb0);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar3 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar3) {
            local_38 = '\0';
            FUN_00d235a0();
            local_40 = lVar2;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_001159b0();
    }
  }
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @012cf0c0 (1021 bytes) — math_loop

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *this;
  bool bVar6;
  undefined8 uVar7;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  if (local_40 == 0) {
    DAT_028ac879 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_80 + 0x450))();
    if (cVar1 == '\0') {
      DAT_028ac879 = '\0';
    }
    else {
      uVar7 = FUN_00d6f370();
      lVar5 = DAT_027bedc8;
      if (DAT_027bedc8 != 0) {
        uVar7 = FUN_00d50b00();
      }
      DAT_028ac879 = FUN_00d70f90(uVar7,1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((DAT_028ac879 != '\0') && (iVar2 = FUN_00da6b30(), 2 < iVar2)) &&
     ((DAT_028ac868 == (undefined8 *)0x0 || (DAT_028ac871 == '\0')))) {
    FUN_00e8cb50();
    if (DAT_028ac868 == (undefined8 *)0x0) {
      iVar3 = FUN_00da6b30();
      iVar2 = 0x10;
      if (iVar3 < 0x13) {
        iVar2 = iVar3 + -2;
      }
      if (iVar2 < 2) {
        iVar2 = FUN_00da6b30();
        iVar2 = 2 - (uint)(iVar2 == 1);
      }
      if ((((longlong *)*this != (longlong *)0x0) &&
          (iVar3 = (**(code **)(*(longlong *)*this + 0x378))(), iVar3 != 0)) &&
         (iVar2 = 0x10, iVar3 < 0x10)) {
        iVar2 = iVar3;
      }
      DAT_028ac878 = 0;
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      bVar6 = DAT_028ac868 == (undefined8 *)0x0;
      DAT_028ac868 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028ac868 != (undefined8 *)0x0)) && (DAT_028ac870 == '\0')
         ) {
        DAT_028ac870 = '\x01';
        FUN_00e8cb90();
      }
      FUN_012cf680();
      lVar5 = DAT_028ac848;
      if (DAT_028ac848 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar5 = local_40;
        }
        bVar6 = DAT_028ac848 != 0;
        DAT_028ac848 = lVar5;
        if (bVar6) {
          FUN_00d50b20();
          lVar5 = local_40;
        }
      }
      if ((lVar5 != 0) && (DAT_028ac850 == '\0')) {
        DAT_028ac850 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_40;
      }
      if ((local_38 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02581c90;
      (*DAT_02581ca8)();
      bVar6 = DAT_028ac858 == (undefined8 *)0x0;
      DAT_028ac858 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028ac858 != (undefined8 *)0x0)) && (DAT_028ac860 == '\0')
         ) {
        DAT_028ac860 = '\x01';
        FUN_00e8cb90();
      }
      if (0 < iVar2) {
        do {
          local_50 = 0;
          local_48 = '\0';
          FUN_00da62d0(param_1,&local_50);
          lVar5 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = lVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      DAT_028ac871 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ac871 = '\x01';
      FUN_00e8cb70();
    }
  }
  return;
}




// ==================================================
// @01652cd0 (999 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  longlong this;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  
  if (*(longlong *)(this + 0xa8) == 0) {
    return;
  }
  FUN_01650330();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650330();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_012edae0();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01652ea1;
    }
  }
  else if (local_58 != 0) {
LAB_01652ea1:
    FUN_01275b30();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01650330();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a70();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01650330();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f49a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  lVar1 = *(longlong *)(this + 0x98);
  if (lVar1 != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01658a40();
    }
    FUN_00277f20();
  }
  return;
}




// ==================================================
// @012f7f50 (989 bytes) — calculation

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong this;
  longlong *plVar7;
  longlong *local_40;
  char local_38;
  
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  lVar6 = *(longlong *)(this + 0x58);
  if (lVar6 == 0) goto LAB_012f81c5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar6 = *(longlong *)(this + 0x58);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  plVar7 = *(longlong **)(lVar6 + 0x118);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_012f7ff9:
    pplVar5 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_012f8009;
LAB_012f801c:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f7ff9;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f801c;
LAB_012f8009:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) goto LAB_012f81c5;
  plVar7 = *(longlong **)(this + 0x118);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_012f8094:
    pplVar5 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_012f80a7;
LAB_012f80bd:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f8094;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f80bd;
LAB_012f80a7:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    FUN_012c6a20();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012f81c5:
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + -1;
  return;
}




// ==================================================
// @012ead00 (983 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t in_ECX;
  pthread_key_t pVar8;
  code *pcVar9;
  longlong *arg1;
  undefined8 *this;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  longlong local_40;
  char local_38;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar11 = arg1[0x27];
  if (lVar11 == 0) {
LAB_012eae20:
    pcVar3 = DAT_02572370;
    lVar11 = arg1[0x16];
    if (lVar11 == 0) {
      *(undefined1 *)(this + 1) = 0;
      puVar7 = (undefined8 *)0x0;
      goto LAB_012eb0cc;
    }
    if (*(int *)(lVar11 + 0xc) < 1) {
      bVar2 = false;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      iVar10 = 0;
      puVar7 = (undefined8 *)0x0;
      bVar2 = false;
      pcVar9 = DAT_02572370;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01275560(param_1,param_2);
        if (cVar4 != '\0') {
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &DAT_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          pcVar9 = (code *)0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar11 + 0xc));
    }
    FUN_001159b0();
    if (puVar7 != (undefined8 *)0x0) goto LAB_012eaffd;
    bVar1 = true;
    puVar7 = (undefined8 *)0x0;
    *(undefined1 *)(this + 1) = 0;
    if (bVar2) goto LAB_012eb0cc;
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      lVar11 = arg1[0x27];
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar11 + 0x38) == '\0') goto LAB_012eae20;
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar8 = 0x2572358;
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_015298a0(param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d214d0(uVar13,*(undefined4 *)((longlong)puVar7 + 0xc));
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = true;
LAB_012eaffd:
    uVar12 = *(uint *)((longlong)puVar7 + 0xc);
    if ((int)uVar12 < 1) {
      *(undefined1 *)(this + 1) = 0;
    }
    else {
      lVar11 = (ulonglong)uVar12 + 1;
      do {
        uVar12 = uVar12 - 1;
        pvVar5 = _pthread_getspecific(uVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (param_1 + param_2 < dVar14) {
          FUN_00d23620();
        }
        lVar11 = lVar11 + -1;
      } while (1 < lVar11);
      *(undefined1 *)(this + 1) = 0;
    }
    bVar1 = false;
    if (bVar2) goto LAB_012eb0cc;
  }
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_012eb0cc:
  *this = puVar7;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01954240 (968 bytes) — math_loop

{
  undefined8 uVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    if (0 < *(int *)(local_80 + 0xc)) {
      lVar4 = 0;
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(local_80 + 0x10) + lVar4 * 8);
        cVar2 = FUN_019415b0();
        uVar5 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          local_a0 = 0;
          local_a8 = uVar1;
          FUN_01941ba0(extraout_XMM0_Da,&local_a8);
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e78c0();
          pvVar3 = _pthread_getspecific(in_ECX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_012c6b00(param_1);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar5 = FUN_00d50b20();
          }
        }
        local_90 = 0;
        local_98 = uVar1;
        FUN_01941c70(uVar5,&local_98);
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6b00(param_1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0165cae0 (962 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *this;
  undefined8 *puVar11;
  undefined4 *local_res8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_7c;
  longlong local_78;
  int iStack_5c;
  undefined8 local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar9 = &local_a0;
  if (param_3 != (longlong *)0x0) {
    plVar9 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_7c;
  if (local_res8 != (undefined4 *)0x0) {
    local_90 = local_res8;
  }
  local_7c = 0xffffffff;
  pvVar2 = _pthread_getspecific((pthread_key_t)local_90);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01252670(plVar9,1,puVar11,local_90);
  lVar7 = local_50;
  plVar10 = (longlong *)local_48;
  local_38[0] = local_48[0];
  plVar3 = plVar10;
  if (local_48[0] == '\0') {
    plVar3 = (longlong *)local_38;
  }
  *(undefined1 *)plVar3 = 0;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  plVar3 = (longlong *)local_38;
  if (!(bool)local_40[0]) {
    plVar3 = (longlong *)local_40;
  }
  *(undefined1 *)plVar3 = 0;
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar9 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *this = 0;
    *(undefined1 *)(this + 1) = 0;
    return this;
  }
  lVar4 = FUN_0165be20();
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  iStack_5c = (int)((ulonglong)param_2 >> 0x20);
  if (((iStack_5c == 0) || (cVar1 = FUN_00e7c650(), cVar1 != '\0')) &&
     (*(int *)((longlong)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_78 = lVar7;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar10 = plVar9;
      cVar1 = FUN_01253c10(plVar9,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar1 == '\0') {
LAB_0165cdf8:
        local_38[0] = '\0';
        *param_1 = lVar4;
        *this = local_78;
        *(undefined1 *)(this + 1) = 0;
        lVar7 = local_78;
        goto joined_r0x0165ce1d;
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      lVar6 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar7 = lVar6, lVar5 != 0)) {
        lVar7 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      if (((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) goto LAB_0165cdf8;
      lVar7 = local_50;
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar10);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar4, lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((((iStack_5c != 0) && (*(int *)(lVar7 + 0x4c) != 0)) &&
          (cVar1 = FUN_00e7c000(), cVar1 != '\0')) || (*(int *)((longlong)puVar11 + 4) == 0))
      goto LAB_0165ce21;
      local_78 = local_50;
      lVar4 = *plVar9;
    } while( true );
  }
  *param_1 = lVar4;
  *(undefined1 *)(this + 1) = 0;
  *this = lVar7;
  if (local_40[0] == '\0') {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    *(undefined1 *)(this + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165ce82:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return this;
LAB_0165ce21:
  local_38[0] = '\0';
  *param_1 = *plVar9;
  plVar9 = this + 1;
  *(undefined1 *)(this + 1) = 0;
  *this = local_50;
  if (local_48[0] != '\0') {
    *(undefined1 *)plVar9 = 1;
    plVar9 = (longlong *)local_48;
  }
  *(undefined1 *)plVar9 = 0;
  lVar7 = local_78;
joined_r0x0165ce1d:
  local_78 = lVar7;
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165ce82;
}




// ==================================================
// @0164e420 (951 bytes) — math_loop

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *arg1;
  longlong this;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = *(longlong *)(this + 0xa8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  if (lVar2 != *arg1) {
    lVar6 = *(longlong *)(this + 0x98);
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01658a40();
      }
      FUN_00277f20();
      param_1 = (pthread_key_t)lVar6;
    }
    if (lVar2 != 0) {
      FUN_01849e20();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *arg1;
    lVar4 = *(longlong *)(this + 0xa8);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0xa8) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (lVar2 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    if (*arg1 != 0) {
      FUN_01650500();
      lVar6 = *(longlong *)(this + 0x98);
      if (lVar6 != 0) {
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar4 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_40) break;
          local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01658a70(param_2,1);
        }
        FUN_00277f20();
        param_1 = (pthread_key_t)lVar6;
      }
      cVar3 = FUN_01733c10();
      if (cVar3 != '\0') {
        if (*(longlong *)(this + 0x90) == 0) goto LAB_0164e7e9;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_58 + 0xc);
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 < 2) goto LAB_0164e7e9;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      FUN_016818b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0164e7e9:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0131a710 (944 bytes) — math_loop

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  byte bVar6;
  byte unaff_SIL;
  longlong *plVar7;
  int iVar8;
  ulonglong unaff_R15;
  undefined7 uVar9;
  longlong local_88;
  char local_80;
  longlong *local_48;
  char local_40;
  undefined4 local_38;
  
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_0131a7a1;
    }
  }
  else if (local_88 != 0) {
LAB_0131a7a1:
    if (*(int *)(local_88 + 0xc) < 1) {
      local_38 = 1;
    }
    else {
      local_38 = 1;
      iVar8 = 0;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        uVar9 = (undefined7)(unaff_R15 >> 8);
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a8a0;
          }
LAB_0131a930:
          unaff_R15 = CONCAT71(uVar9,1);
        }
        else {
          if (local_48 == (longlong *)0x0) goto LAB_0131a930;
LAB_0131a8a0:
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          unaff_R15 = CONCAT71(uVar9,1);
          if (cVar2 == '\0') {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126dd90();
            unaff_R15 = 0;
          }
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264180();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_0131a9f0;
          }
LAB_0131aa70:
          bVar1 = true;
LAB_0131aa72:
          if (unaff_SIL == 0) {
            local_38 = 0;
          }
          else {
LAB_0131aa78:
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
          }
          uVar3 = local_38;
          if (!bVar1) goto LAB_0131aacf;
        }
        else {
          if (local_48 == (longlong *)0x0) goto LAB_0131aa70;
LAB_0131a9f0:
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          plVar7 = local_48;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar7 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar7 + 0x370))();
          bVar1 = false;
          if (cVar2 == '\0') goto LAB_0131aa72;
          bVar6 = (byte)(unaff_R15 & 0xffffffff) | unaff_SIL ^ 1;
          param_1 = CONCAT71((int7)((unaff_R15 & 0xffffffff) >> 8),bVar6);
          uVar3 = local_38;
          if ((char)unaff_R15 == '\0') {
            uVar3 = 0;
          }
          if (bVar6 == 0) goto LAB_0131aa78;
LAB_0131aacf:
          local_38 = uVar3;
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    return local_38;
  }
  return 1;
}




// ==================================================
// @0165de10 (928 bytes) — math_loop

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *this;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *local_res8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  int local_84;
  longlong *local_80;
  longlong local_60;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar10 = &local_a0;
  if (param_3 != (longlong *)0x0) {
    plVar10 = param_3;
  }
  puVar11 = &local_98;
  if (param_4 != (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  local_90 = &local_88;
  if (local_res8 != (undefined4 *)0x0) {
    local_90 = local_res8;
  }
  local_88 = 0xffffffff;
  pvVar3 = _pthread_getspecific((pthread_key_t)local_90);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_84 = param_2;
  FUN_01252670(plVar10,1,puVar11,local_90);
  local_60 = local_50;
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40[0] = local_38[0] != '\0';
  pcVar4 = local_38;
  if (!(bool)local_40[0]) {
    pcVar4 = local_40;
  }
  *pcVar4 = '\0';
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    lVar7 = FUN_00e7bdb0();
    *param_1 = lVar7;
    lVar7 = FUN_00e7bdb0();
    *plVar10 = lVar7;
    uVar8 = FUN_00e7bdb0();
    *puVar11 = uVar8;
    *this = 0;
    *(undefined1 *)(this + 1) = 0;
    return this;
  }
  plVar5 = (longlong *)FUN_0165be20();
  iVar1 = local_84;
  if ((0 < local_84) && (*(int *)((longlong)puVar11 + 4) != 0)) {
    local_48[0] = '\0';
    local_50 = 0;
    local_80 = plVar5;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar5 = plVar10;
      cVar2 = FUN_01253c10(plVar10,&local_50,puVar11,local_90);
      lVar7 = local_50;
      if (cVar2 == '\0') {
LAB_0165e0ef:
        local_38[0] = '\0';
        *param_1 = (longlong)local_80;
        *this = local_60;
        *(undefined1 *)(this + 1) = 0;
        if ((local_48[0] != '\0') && (local_38[0] = '\0', local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165e17d;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      lVar9 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar7 = lVar9, lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      lVar9 = local_50;
      if (iVar1 < *(int *)(lVar7 + 0x44)) goto LAB_0165e0ef;
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar5);
      lVar7 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar9 = lVar7, lVar6 != 0)) {
        lVar9 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if ((*(int *)(lVar9 + 0x44) == iVar1) || (*(int *)((longlong)puVar11 + 4) == 0))
      goto LAB_0165e11c;
      local_60 = local_50;
      local_80 = (longlong *)*plVar10;
    } while( true );
  }
  *param_1 = (longlong)plVar5;
  *(undefined1 *)(this + 1) = 0;
  *this = local_60;
  if (local_40[0] == '\0') {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    *(undefined1 *)(this + 1) = 1;
    local_40[0] = '\0';
  }
LAB_0165e190:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return this;
LAB_0165e11c:
  local_38[0] = '\0';
  *param_1 = *plVar10;
  *(undefined1 *)(this + 1) = 0;
  *this = local_50;
  if (local_48[0] == '\0') {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    *(undefined1 *)(this + 1) = 1;
    local_48[0] = '\0';
  }
LAB_0165e17d:
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_0165e190;
}




// ==================================================
// @006db470 (896 bytes) — math_loop

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *arg1;
  longlong *this;
  int iVar6;
  longlong *plVar7;
  longlong *local_68;
  char local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_68 + 0x450))();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    return;
  }
  if (this[0x20] == 0) goto LAB_006db7c2;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar7 = this;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_68 == plVar7) {
      if (((local_38[0] == '\0') && (local_68 != (longlong *)0x0)) && (local_60[0] != '\0'))
      goto LAB_006db557;
    }
    else {
      plVar7 = local_68;
      if (local_60[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_006db557:
        local_38[0] = '\x01';
        pcVar2 = local_60;
      }
      *pcVar2 = '\0';
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar5 = &DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffff68;
      if (cVar1 == '\0') {
        plVar5 = &DAT_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar7 != (longlong *)0x0);
  FUN_00d50b20();
  if (plVar7 == (longlong *)0x0) {
    local_3c = 0;
  }
  else {
    uVar3 = FUN_006cb500();
    local_3c = (undefined4)
               CONCAT71((int7)((ulonglong)uVar3 >> 8),0 < *(int *)((longlong)local_68 + 0xc));
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_006cb500();
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_006db67f;
      }
    }
    else if (local_68 != (longlong *)0x0) {
LAB_006db67f:
      local_60[0] = '\0';
      local_48 = 0;
      local_50 = 0;
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_0078d680();
          if (cVar1 == '\0') {
            local_3c = 0;
            break;
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4aa0();
          iVar6 = iVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
        } while (iVar6 < *(int *)((longlong)local_68 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)this[0x20] + 0x918))();
  (**(code **)(*(longlong *)this[0x20] + 0x998))();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_006db7c2:
  if ((*arg1 != 0) &&
     (((this[0x2b] == 0 || (FUN_0044dc30(), *arg1 != 0)) && (this[0x2c] != 0)))) {
    FUN_0044dc30();
  }
  return;
}




// ==================================================
// @00e7c8b0 (896 bytes) — math_loop

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong arg1;
  uint uVar12;
  ulonglong this;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  
  uVar13 = this >> 0x20;
  if (uVar13 != 0) {
    uVar15 = arg1 >> 0x20;
    uVar14 = (uint)(arg1 >> 0x20);
    if (uVar14 != 0) {
      iVar8 = (int)arg1;
      uVar17 = 0;
      if ((iVar8 == 0) || (iVar4 = (int)this, uVar17 = uVar13, iVar4 == 0)) {
        return uVar17 << 0x20;
      }
      uVar17 = (ulonglong)(uint)-iVar4;
      if (0 < iVar4) {
        uVar17 = this & 0xffffffff;
      }
      uVar16 = (uint)uVar17;
      uVar5 = (ulonglong)(uint)-iVar8;
      if (0 < iVar8) {
        uVar5 = arg1 & 0xffffffff;
      }
      uVar12 = (uint)(this >> 0x20);
      if (uVar16 != (uint)uVar5) {
        bVar6 = 0;
        if (((uVar16 | (uint)uVar5) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar17;
          do {
            bVar6 = bVar6 + 1;
            uVar16 = (uint)uVar5;
            uVar11 = (uint)uVar10;
            uVar5 = (ulonglong)(uVar16 >> 1);
            uVar17 = uVar10 >> 1;
            uVar10 = uVar10 >> 1;
          } while (((uVar11 | uVar16) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          uVar17 = uVar10 >> 1;
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          uVar5 = uVar17 >> 1;
        } while ((uVar17 & 1) == 0);
        iVar7 = (int)uVar10;
        iVar2 = 1;
        if (((iVar7 != 1) && ((int)uVar17 != 1)) && (iVar2 = iVar7, iVar7 != (int)uVar17)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar16 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (ulonglong)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (ulonglong)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar3 = (int)uVar16 >> 1;
                uVar11 = uVar16 & 2;
                uVar16 = uVar3;
              } while (uVar11 == 0);
              uVar10 = (ulonglong)uVar3;
            }
            iVar2 = (int)uVar10;
          } while (iVar2 != (int)uVar17);
        }
        uVar16 = iVar2 << (bVar6 & 0x1f);
      }
      uVar11 = uVar12;
      if (uVar12 != uVar14) {
        bVar6 = 0;
        uVar17 = uVar13;
        uVar5 = uVar15;
        if (((uVar12 | uVar14) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar13;
          do {
            uVar3 = (uint)uVar10;
            uVar11 = (int)uVar3 >> 1;
            bVar6 = bVar6 + 1;
            uVar9 = (uint)uVar5;
            uVar5 = (ulonglong)(uint)((int)uVar9 >> 1);
            uVar10 = (ulonglong)uVar11;
            uVar17 = (ulonglong)uVar11;
          } while (((uVar3 | uVar9) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          iVar2 = (int)uVar10;
          uVar17 = (ulonglong)(uint)(iVar2 >> 1);
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          iVar7 = (int)uVar17;
          uVar5 = (ulonglong)(uint)(iVar7 >> 1);
        } while ((uVar17 & 1) == 0);
        iVar18 = 1;
        if (((iVar2 != 1) && (iVar7 != 1)) && (iVar18 = iVar2, iVar2 != iVar7)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar11 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (ulonglong)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (ulonglong)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar9 = (int)uVar11 >> 1;
                uVar3 = uVar11 & 2;
                uVar11 = uVar9;
              } while (uVar3 == 0);
              uVar10 = (ulonglong)uVar9;
            }
            iVar18 = (int)uVar10;
          } while (iVar18 != (int)uVar17);
        }
        uVar11 = iVar18 << (bVar6 & 0x1f);
      }
      if (1 < (int)uVar16) {
        this = (longlong)((ulonglong)(uint)(iVar4 >> 0x1f) << 0x20 | this & 0xffffffff) /
                    (longlong)(int)uVar16 & 0xffffffff;
      }
      if (1 < (int)uVar11) {
        uVar13 = (longlong)((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar13) /
                 (longlong)(int)uVar11 & 0xffffffff;
      }
      if (1 < (int)uVar16) {
        arg1 = (longlong)((ulonglong)(uint)(iVar8 >> 0x1f) << 0x20 | arg1 & 0xffffffff) /
                    (longlong)(int)uVar16 & 0xffffffff;
      }
      uVar12 = uVar14;
      if (1 < (int)uVar11) {
        uVar12 = (uint)((longlong)((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar15) /
                       (longlong)(int)uVar11);
      }
      uVar11 = (int)arg1 * (int)uVar13;
      iVar8 = (int)(uVar12 * (int)this) % (int)uVar11;
      uVar12 = -uVar11;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar15 = 0;
      uVar12 = iVar8 >> 0x1f & uVar12;
      if (param_2 == '\0') {
        uVar12 = 0;
      }
      uVar14 = uVar14 * (int)uVar13;
      if (uVar14 != 0) {
        uVar12 = uVar12 + iVar8;
        if (uVar12 == 0) {
          uVar13 = 1;
        }
        else {
          uVar11 = -uVar14;
          if (0 < (int)uVar14) {
            uVar11 = uVar14;
          }
          uVar13 = (ulonglong)uVar11;
          uVar11 = -uVar12;
          if (-1 < (int)uVar14) {
            uVar11 = uVar12;
          }
          uVar17 = (ulonglong)uVar11;
          if ((uVar11 & 1) == 0) {
            do {
              uVar11 = (uint)uVar17;
              if ((uVar13 & 1) != 0) goto LAB_00e7cb8b;
              uVar15 = (ulonglong)(uint)((int)uVar11 >> 1);
              uVar13 = uVar13 >> 1;
              uVar5 = uVar17 & 2;
              uVar17 = uVar15;
            } while (uVar5 == 0);
          }
          else {
LAB_00e7cb8b:
            uVar15 = (ulonglong)uVar11;
          }
          iVar8 = (int)uVar15;
          uVar17 = (ulonglong)(uint)-iVar8;
          if (0 < iVar8) {
            uVar17 = uVar15;
          }
          do {
            uVar10 = uVar17;
            uVar17 = uVar10 >> 1;
            uVar5 = uVar13;
          } while ((uVar10 & 1) == 0);
          do {
            uVar17 = uVar5;
            uVar5 = (ulonglong)(uint)((int)uVar17 >> 1);
          } while ((uVar17 & 1) == 0);
          if (((int)uVar10 != 1) && ((int)uVar17 != 1)) {
            while( true ) {
              iVar2 = (int)uVar10;
              iVar4 = (int)uVar17;
              if (iVar2 == iVar4) break;
              uVar14 = iVar2 - iVar4;
              if (uVar14 == 0 || iVar2 < iVar4) {
                uVar5 = (ulonglong)(uint)(iVar4 - iVar2);
                do {
                  uVar17 = (ulonglong)(uint)((int)uVar5 >> 1);
                  uVar1 = uVar5 & 2;
                  uVar5 = uVar17;
                } while (uVar1 == 0);
              }
              else {
                do {
                  uVar11 = (int)uVar14 >> 1;
                  uVar12 = uVar14 & 2;
                  uVar14 = uVar11;
                } while (uVar12 == 0);
                uVar10 = (ulonglong)uVar11;
              }
            }
            if (1 < iVar2) {
              uVar15 = (longlong)iVar8 / (longlong)iVar2 & 0xffffffff;
              uVar13 = (longlong)(int)uVar13 / (longlong)iVar2 & 0xffffffff;
            }
          }
        }
        uVar15 = uVar15 | uVar13 << 0x20;
      }
      return uVar15 & 0xffffffff00000000 | (ulonglong)(uVar16 * (int)uVar15);
    }
  }
  return 0;
}




// ==================================================
// @004f9820 (878 bytes) — math_loop

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_004f98b6;
    }
LAB_004f9a78:
    bVar1 = true;
  }
  else {
    if (local_58 == 0) goto LAB_004f9a78;
LAB_004f98b6:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      lVar5 = *(longlong *)(lVar6 + 0x10);
      local_58 = *(longlong *)(lVar5 + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      pVar4 = (pthread_key_t)lVar5;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_70 = local_88;
        local_68 = '\0';
        FUN_00d235a0();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar6;
    bVar1 = false;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_004f9b8f;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_004f9b8f;
  for (iVar7 = 0; iVar7 < *(int *)(local_58 + 0xc); iVar7 = iVar7 + 1) {
    FUN_004f9820();
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_004f9b8f:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012e5b20 (869 bytes) — calculation

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong this;
  longlong local_40;
  char local_38;
  
  plVar1 = *(longlong **)(this + 0x118);
  if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  lVar3 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = DAT_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(this + 0x118);
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5dc4;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_012e5dc4;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017eca70();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5cf4;
    FUN_00d50b00();
LAB_012e5c88:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc420();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc5a0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      bVar2 = false;
      goto LAB_012e5d7d;
    }
LAB_012e5db4:
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_012e5c88;
LAB_012e5cf4:
    bVar2 = true;
LAB_012e5d7d:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017f5110();
    if (!bVar2) goto LAB_012e5db4;
  }
  FUN_00d50b20();
LAB_012e5dc4:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01652170 (865 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong this;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(int *)(*(longlong *)(this + 0x98) + 0xc) == 0) &&
     (*(longlong *)(this + 0xa8) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    local_80 = local_70;
    local_78 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_78 = '\x01';
    pVar4 = 1;
    FUN_01519670(1,&local_80);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar2 = FUN_01512830();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01650210();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      local_60 = local_50;
      local_58 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      FUN_012879b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @0165b8b0 (860 bytes) — calculation

{
  ulonglong uVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  char *pcVar9;
  longlong lVar10;
  longlong this;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar7 = param_1;
  local_58 = param_1;
  FUN_0123ff10();
  FUN_0123ff30();
  pVar6 = (pthread_key_t)uVar7;
  if (param_1 >> 0x20 == 0) {
    lVar10 = *(longlong *)(this + 0x40);
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar10 = *(longlong *)(this + 0x40);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    pVar6 = (pthread_key_t)uVar7;
    if (*(int *)(*(longlong *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
      FUN_00d23310();
      uVar1 = local_48;
      pVar6 = (pthread_key_t)CONCAT71((int7)(uVar7 >> 8),local_40[0]);
      puVar8 = &local_50;
      if (local_40[0] != '\0') {
        puVar8 = (ulonglong *)local_40;
      }
      local_50 = CONCAT71(local_50._1_7_,local_40[0]);
      *(char *)puVar8 = '\0';
      if ((local_40[0] != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
      if (uVar1 == 0) {
        local_58 = FUN_00e7bdb0();
        goto LAB_0165b999;
      }
    }
    local_58 = FUN_0165be20();
  }
LAB_0165b999:
  lVar10 = *(longlong *)(this + 0x40);
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    lVar10 = *(longlong *)(this + 0x40);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  if (*(int *)(*(longlong *)(lVar10 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    uVar7 = local_48;
    puVar8 = &local_50;
    if (local_40[0] != '\0') {
      puVar8 = (ulonglong *)local_40;
    }
    local_50 = CONCAT71(local_50._1_7_,local_40[0]);
    *(char *)puVar8 = '\0';
    if ((local_40[0] != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (uVar7 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 == 0) goto LAB_0165bb6d;
  }
  local_5c = 0xffffffff;
  local_50 = FUN_0165bfa0(&local_5c,1);
  if (((local_50 >> 0x20 == 0) || (local_58._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
  {
    if (param_3 == '\0') {
      local_58 = local_50;
    }
    else {
      FUN_0165c0f0(0,local_50,0,&local_5c);
      uVar7 = local_48;
      pcVar9 = local_38;
      if (local_40[0] != '\0') {
        pcVar9 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar9 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_48 = local_58;
      FUN_00e7b970();
      FUN_0123ff00();
      FUN_0123fc50();
      uVar1 = local_48;
      if (((local_40[0] == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_0165b1b0(local_58,local_50,1);
      if (uVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (uVar7 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0165bb6d:
  FUN_0123fbe0();
  uVar7 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  uVar1 = local_58;
  uVar5 = FUN_00e7bdb0();
  FUN_0165b1b0(uVar5,uVar1,0);
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012e7900 (856 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong this;
  
  plVar2 = (longlong *)FUN_010f2780();
  (**(code **)(*plVar2 + 0x18))();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d2108;
  *puVar3 = &DAT_025d2108;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  (*DAT_025d2120)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)(puVar3 + 8) = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  pVar5 = 0x25d58b0;
  *puVar3 = &DAT_025d58b0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  (*DAT_025d58c8)();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0a90();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ae0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  if (*(longlong **)(this + 0xb8) != plVar2) {
    FUN_00d64850();
    plVar1 = *(longlong **)(this + 0xb8);
    if (plVar1 != plVar2) {
      FUN_00d50b00();
      *(longlong **)(this + 0xb8) = plVar2;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bd9880 (856 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong this;
  int iVar5;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  
  FUN_01bd8b20();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01bd98cb;
    }
  }
  else if (local_68 != 0) {
LAB_01bd98cb:
    FUN_01ca6970();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_01ca8220();
    lVar1 = DAT_027e5c38;
    if (DAT_027e5c38 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_00d23d70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c38;
    if ((param_2 & (byte)uVar3) == 1) {
      if (DAT_027e5c38 != 0) {
        FUN_00d50b00();
      }
      FUN_01cacbe0();
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)(this + 0x98) == 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f4540();
      }
      else {
        FUN_01bd2e70();
        if (lVar1 != 0) {
          FUN_00d50b00();
          if (0 < *(int *)(lVar1 + 0xc)) {
            iVar5 = 0;
            do {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017f4540();
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar1 + 0xc));
          }
          FUN_01be3b70();
          FUN_00d50b20();
        }
        FUN_01bd7b90();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return uVar3;
  }
  return 0;
}




// ==================================================
// @0088a55a (846 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *arg1;
  longlong this;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_00889ac6();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar4 = iVar2 + iVar1 + iVar3 + iVar4;
  if (*(char *)(this + 0xb1) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(2,0xc);
    iVar2 = FUN_00889ac6();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(10,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6;
  for (lVar18 = *(longlong *)(this + 0x60); lVar18 != *(longlong *)(this + 0x68);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0xb,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4;
  for (lVar18 = *(longlong *)(this + 0x78); lVar18 != *(longlong *)(this + 0x80);
      lVar18 = lVar18 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0x15,10);
  iVar8 = (**(code **)(*arg1 + 0x98))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0x16,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0x17,10);
  iVar14 = (**(code **)(*arg1 + 0x98))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar16 = (**(code **)(*arg1 + 0x40))();
  iVar17 = (**(code **)(*arg1 + 0x28))();
  *(int *)((longlong)arg1 + 0x1c) = *(int *)((longlong)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
         iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17;
}




// ==================================================
// @01659860 (840 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = *(longlong *)(this + 0x90);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650330();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01658d80();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016676f0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01658d80();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01710690(1,1);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012f9cd0 (836 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong this;
  int iVar4;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(this + 0xb0);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_012f9dd0;
          }
        }
        else if (local_40 != 0) {
LAB_012f9dd0:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0129a470();
          if (cVar2 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            FUN_012595a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_012f9f42;
              }
            }
            else {
LAB_012f9f42:
              if ((local_40 != 0) && (local_40 != 0)) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507f00();
                FUN_01508220();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}




// ==================================================
// @012f4d80 (835 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong arg1;
  undefined8 *this;
  bool bVar9;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(arg1 + 0x60);
  if (lVar1 == 0) {
    bVar9 = false;
    lVar8 = *(longlong *)(arg1 + 0x40);
  }
  else {
    FUN_00d50b00();
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a0b0();
    bVar9 = local_88 == arg1;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = *(longlong *)(arg1 + 0x40);
  }
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *(longlong *)(arg1 + 0x40);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar8 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
          if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            lVar6 = *(longlong *)(lVar2 + 0x60);
          }
          else {
            lVar6 = *(longlong *)
                     (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x60);
          }
          if (lVar6 != 0) {
            FUN_00d50b00();
            if (bVar9) {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a0b0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            else {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 == lVar2) {
                local_38 = '\0';
                FUN_00d21140();
                local_40 = lVar2;
              }
            }
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar8 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @006cff00 (813 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  ulonglong unaff_R12;
  longlong local_68;
  char local_60;
  int local_50;
  longlong *local_40;
  char local_38;
  
  FUN_006cb500();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_006cff45;
    }
  }
  else if (local_68 != 0) {
LAB_006cff45:
    local_50 = -1;
    while( true ) {
      local_50 = local_50 + 1;
      unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),local_50 < *(int *)(local_68 + 0xc));
      if (*(int *)(local_68 + 0xc) <= local_50) break;
      pvVar4 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_68 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      plVar1 = local_40;
      if ((DAT_0270c820 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_027e77e8 = FUN_0015ef90();
        _DAT_027e77d0 = "MULSSGenerator";
        _DAT_027e77d8 = 0x70;
        _DAT_027e77e0 = FUN_0015ef30;
        _DAT_027e77f0 = 0;
        uRam00000000027e77f8 = 0;
        _DAT_027e7800 = 0;
        uRam00000000027e7808 = 0;
        _DAT_027e7810 = 0;
        uRam00000000027e7818 = 0;
        _DAT_027e7820 = 0;
        uRam00000000027e7828 = 0;
        _DAT_027e7830 = 0;
        uRam00000000027e7838 = 0;
        _DAT_027e7840 = 0;
        uRam00000000027e7848 = 0;
        _DAT_027e7850 = 0;
        uRam00000000027e7858 = 0;
        _DAT_027e7860 = 0;
        uRam00000000027e7868 = 0;
        _DAT_027e7870 = 0;
        uRam00000000027e7878 = 0;
        _DAT_027e7880 = 0;
        uRam00000000027e7888 = 0;
        _DAT_027e7890 = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_40;
        if (cVar2 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      pVar5 = (pthread_key_t)pplVar6;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_006d0130;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_006d0130:
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_017f2980();
          if (cVar2 != '\0') {
            FUN_00d50b20();
            FUN_00d50b20();
            break;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    goto LAB_006d024e;
  }
  unaff_R12 = 0;
LAB_006d024e:
  return unaff_R12 & 0xffffffff;
}




// ==================================================
// @012e7fb0 (810 bytes) — calculation

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong arg1;
  longlong *this;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  if (*(longlong *)(arg1 + 0x110) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
      FUN_00d50b00();
    }
    else if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
    lVar4 = *(longlong *)(arg1 + 0x110);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *(longlong *)(arg1 + 0x110);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    if ((local_38 == '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_38 = '\0';
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (iVar1 < *(int *)(in_stack_ffffffffffffffc0 + 0xc)) {
      lVar3 = *(longlong *)(*(longlong *)(in_stack_ffffffffffffffc0 + 0x10) + (longlong)iVar1 * 8);
      *(undefined1 *)(this + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this = lVar3;
      *(undefined1 *)(this + 1) = 1;
      FUN_00d50b20();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    in_stack_ffffffffffffffc0 = arg1;
  }
LAB_012e81b4:
  if (*(longlong *)(arg1 + 0x130) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffc0 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        return;
      }
      if (in_stack_ffffffffffffffc0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return;
}




// ==================================================
// @016577d0 (791 bytes) — calculation

{
  void *pvVar1;
  longlong *plVar2;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e89e0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f020();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @012eb7d0 (786 bytes) — calculation

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *this;
  longlong local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012eb8b5;
    FUN_00d50b00();
LAB_012eb860:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_012eb8e2;
      }
    }
    else if (local_40 != 0) {
LAB_012eb8e2:
      lVar5 = local_40;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1b50();
        if (local_40 == 0) goto LAB_012eb9c0;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d19a0();
        if (local_40 == 0) {
LAB_012eb9c0:
          bVar2 = false;
          lVar5 = 0;
        }
        else {
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        if (local_38 == '\0') {
          if (local_40 == 0) goto LAB_012eba78;
          FUN_00d50b00();
        }
        else if (local_40 == 0) {
LAB_012eba78:
          if (bVar2) {
            FUN_00d50b20();
          }
          goto LAB_012eba86;
        }
        FUN_012eb1d0();
        FUN_00d50b20();
        if (bVar2) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_012ebac8;
      }
LAB_012eba86:
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  else {
    if (local_40 != 0) goto LAB_012eb860;
LAB_012eb8b5:
    bVar2 = true;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  if (bVar2) {
    return;
  }
LAB_012ebac8:
  FUN_00d50b20();
  return;
}




// ==================================================
// @012e8440 (785 bytes) — calculation

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *arg1;
  ulonglong *this;
  
  uVar1 = *this;
  uVar3 = this[1];
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b00();
  }
  uVar2 = *arg1;
  uVar4 = arg1[1];
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    lVar8 = *(longlong *)(uVar1 + 0x110);
  }
  else {
    lVar8 = *(longlong *)
             (*(longlong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110);
  }
  if (lVar8 != 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      lVar8 = *(longlong *)(uVar2 + 0x110);
    }
    else {
      lVar8 = *(longlong *)
               (*(longlong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110)
      ;
    }
    if (lVar8 != 0) {
      pvVar7 = _pthread_getspecific(param_1);
      uVar10 = uVar1;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar10 = *(ulonglong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar8 = *(longlong *)(uVar10 + 0x110);
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
        lVar9 = *(longlong *)(uVar2 + 0x110);
      }
      else {
        lVar9 = *(longlong *)
                 (*(longlong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                 0x110);
      }
      if (lVar8 == lVar9) {
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(ulonglong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar2;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(ulonglong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar6 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        uVar10 = 0xffffffff;
        if (iVar6 <= iVar5) {
          uVar10 = (ulonglong)(iVar6 < iVar5);
        }
        goto joined_r0x012e85ce;
      }
    }
  }
  uVar10 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar10 = (ulonglong)(uVar1 != uVar2);
  }
joined_r0x012e85ce:
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b20();
  }
  return uVar10;
}




// ==================================================
// @0165d320 (784 bytes) — calculation

{
  undefined8 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined1 *puVar4;
  double *arg1;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  int local_5c;
  longlong local_58;
  char local_50;
  double local_48;
  longlong local_40;
  char local_38;
  
  local_48 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_48);
  puVar4 = local_68;
  FUN_0165d150(puVar4,uVar1,0,local_60);
  local_40 = local_58;
  pVar3 = (pthread_key_t)puVar4;
  local_38 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0165d393;
    }
    local_40 = 0;
  }
  else {
LAB_0165d393:
    local_38 = '\x01';
    if (local_40 != 0) {
      if ((local_5c != 0) && (dVar5 = (double)FUN_00e7c860(), dVar5 <= local_48)) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_68;
        FUN_01253c10(puVar4,&local_40,local_60,param_2);
        pVar3 = (pthread_key_t)puVar4;
      }
      dVar5 = (double)FUN_00e7c860();
      local_48 = local_48 - dVar5;
      if (arg1 != (double *)0x0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123fff0();
        uVar6 = FUN_00e7c860();
        dVar5 = (double)_fmod(local_48);
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123ffb0();
        dVar7 = (double)FUN_00e7c860();
        *arg1 = (double)(-(ulonglong)(dVar5 < 0.0) &
                              (ulonglong)((double)(uVar6 & _DAT_023908f0) + dVar5) |
                             ~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5) * dVar7;
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_00e7c860();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_0123ffb0();
      dVar7 = (double)FUN_00e7c860();
      local_48 = local_48 * dVar7 + dVar5;
      if (local_38 == '\0') {
        return local_48;
      }
      goto LAB_0165d60e;
    }
  }
  local_38 = '\x01';
  if (arg1 != (double *)0x0) {
    dVar5 = (double)_fmod(local_48);
    *arg1 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                         (ulonglong)(_DAT_023b1e98 + dVar5) & -(ulonglong)(dVar5 < 0.0));
  }
LAB_0165d60e:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}




// ==================================================
// @012ed0d0 (764 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  undefined3 uVar7;
  pthread_key_t pVar6;
  char *pcVar8;
  char unaff_SIL;
  longlong *this;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  if (this[0xb] != 0) {
    if (unaff_SIL == '\0') {
      return;
    }
    *(undefined1 *)(this + 0xd) = 0;
                    /* WARNING: Could not recover jumptable at 0x012ed10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*this + 0x370))();
    return;
  }
  FUN_00d64850();
  *(int *)(this + 0xe) = (int)this[0xe] + 1;
  FUN_00d64910();
  if (unaff_SIL != '\0') {
    FUN_012f5600();
  }
  if ((char)this[0x11] == '\0') {
    return;
  }
  local_38 = '\0';
  lVar3 = FUN_00e8b990();
  uVar7 = (undefined3)((uint)param_1 >> 8);
  bVar5 = true;
  if ((lVar3 != 0) && (FUN_00cb1f10(), local_50 != 0)) {
    local_38 = local_48[0] != '\0';
    if ((bool)local_38) {
      local_48[0] = '\0';
    }
    cVar2 = FUN_00db6490();
    bVar5 = false;
    bVar1 = false;
    if (cVar2 != '\0') goto joined_r0x012ed3c8;
  }
  FUN_00d23310();
  pVar6 = CONCAT31(uVar7,local_48[0]);
  pcVar8 = local_40;
  if (local_48[0] != '\0') {
    pcVar8 = local_48;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = bVar5;
  if (local_40[0] == '\0') {
    if (local_50 == 0) goto joined_r0x012ed3c8;
    FUN_00d50b00();
  }
  else if (local_50 == 0) goto joined_r0x012ed3c8;
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_012ed29a;
    }
LAB_012ed303:
    bVar5 = false;
    local_50 = 0;
  }
  else {
    if (local_50 == 0) goto LAB_012ed303;
LAB_012ed29a:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    if (local_50 == 0) {
      local_50 = 0;
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_50 != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0134c600();
    if (cVar2 == '\0') {
      FUN_00d64850();
      *(undefined1 *)(this + 0x11) = 0;
      FUN_00d64910();
    }
    if (bVar5) {
      FUN_00d50b20();
    }
  }
joined_r0x012ed3c8:
  if ((local_38 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @012f0520 (761 bytes) — math_loop

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *in_RCX;
  longlong *plVar6;
  longlong arg1;
  longlong *this;
  longlong lVar7;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  plVar6 = in_RCX;
  if (*in_RCX == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    puVar1 = (undefined8 *)*in_RCX;
    if (puVar1 == puVar4) {
      if ((char)in_RCX[1] != '\0') {
        FUN_00d50b20();
        goto LAB_012f05c0;
      }
    }
    else {
      *in_RCX = (longlong)puVar4;
      if (((char)in_RCX[1] != '\0') && (puVar1 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(in_RCX + 1) = 1;
  }
LAB_012f05c0:
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_0190a130();
  lVar3 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  FUN_0190a380(param_1,param_2,param_3);
  local_70 = '\0';
  local_78 = lVar3;
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(arg1 + 0xa8);
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar2;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_78 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = *in_RCX;
        local_80 = '\0';
        plVar6 = &local_88;
        FUN_012f0520(param_1,param_2,param_3);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
  }
  *(undefined1 *)(this + 1) = 0;
  lVar2 = *in_RCX;
  if ((char)in_RCX[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this = lVar2;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    *this = lVar2;
    *(undefined1 *)(this + 1) = 1;
    *(undefined1 *)(in_RCX + 1) = 0;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @016553c0 (757 bytes) — calculation

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong this;
  double dVar5;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this + 0x60) == '\0') || (local_48 == 0)) {
    local_38 = (param_1 - *(double *)(this + 0x50)) / *(double *)(this + 0x68) +
               *(double *)(this + 0x40);
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(param_1);
    dVar1 = *(double *)(this + 0x68);
    dVar2 = *(double *)(this + 0x70);
    dVar3 = *(double *)(this + 0x78);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c26c0(dVar2 + (dVar5 - dVar3) / dVar1);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}




// ==================================================
// @01656080 (757 bytes) — calculation

{
  double dVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong this;
  double dVar5;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this + 0x60) == '\0') || (local_48 == 0)) {
    local_38 = (param_1 - *(double *)(this + 0x40)) * *(double *)(this + 0x68) +
               *(double *)(this + 0x50);
  }
  else {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(param_1);
    dVar1 = *(double *)(this + 0x78);
    dVar2 = *(double *)(this + 0x68);
    dVar3 = *(double *)(this + 0x70);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c26c0(dVar1 + (dVar5 - dVar3) * dVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}




// ==================================================
// @006dbc00 (755 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong *local_38;
  
  FUN_006cb500();
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_006dbcfd;
    FUN_00d50b00();
    if (0 < *(int *)((longlong)plVar1 + 0xc)) goto LAB_006dbc5e;
LAB_006dbed6:
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_60 == (longlong *)0x0) {
LAB_006dbcfd:
      plVar6 = (longlong *)0x0;
      goto LAB_006dbef6;
    }
    if (*(int *)((longlong)local_60 + 0xc) < 1) goto LAB_006dbed6;
LAB_006dbc5e:
    FUN_01caeae0();
    FUN_01d66da0();
    lVar8 = DAT_02726d28;
    if (DAT_02726d28 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_60;
    FUN_000175c0();
    plVar6 = local_60;
    FUN_000823a0();
    if (plVar6 == (longlong *)0x0) {
LAB_006dbce2:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_006dbce2;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_006dbed6;
    local_58 = '\0';
    local_60 = plVar6;
    local_38 = plVar6;
    iVar3 = FUN_00d237a0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar6 = (longlong *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == -1);
    if ((iVar3 == -1) && (param_2 != '\0')) {
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar1;
      local_40 = 0;
      local_48 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          plVar6 = *(longlong **)(plVar1[2] + lVar8 * 8);
          local_60 = plVar6;
          pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          iVar3 = *(int *)(local_70 + 0xc);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (iVar3 == 0) {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              param_1 = local_38;
            }
            FUN_01305350();
          }
          lVar8 = lVar8 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_000be170();
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_006dbef6:
  return (ulonglong)plVar6 & 0xffffffff;
}




// ==================================================
// @0165b470 (753 bytes) — math_loop

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *arg1;
  undefined8 *this;
  int iVar7;
  longlong local_48;
  char local_40;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    FUN_0123fbe0(param_1,4);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e7bdb0();
    FUN_0165b0c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_025f68e8;
    puVar2[7] = &DAT_025f6c78;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = puVar2;
    }
    FUN_0165b800();
    pVar6 = (pthread_key_t)param_1;
    lVar4 = *arg1;
    if (lVar4 != 0) {
      for (iVar7 = 0; pVar6 = (pthread_key_t)param_1, iVar7 < *(int *)(lVar4 + 0xc);
          iVar7 = iVar7 + 1) {
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (pthread_key_t)puVar2;
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014ff950();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_014ff960();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = (undefined8 *)FUN_014ff9a0();
        FUN_0165b8b0(param_1,uVar1,0);
      }
      FUN_01660130();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165bd00();
    *this = puVar2;
    *(undefined1 *)(this + 1) = 1;
  }
  return this;
}




// ==================================================
// @012f7880 (725 bytes) — math_loop

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong this;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = *(longlong *)(this + 0xb0);
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
LAB_012f792b:
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      lVar6 = *(longlong *)(lVar2 + 0x10);
      local_58 = *(longlong *)(lVar6 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if (local_70 == '\0') goto LAB_012f79d0;
      if (local_78 != 0) goto LAB_012f7a00;
    }
    FUN_001159b0();
    param_1 = (pthread_key_t)lVar2;
    if (*(longlong *)(this + 0xb0) != 0) {
      FUN_00d50b00();
      bVar1 = false;
      goto LAB_012f7a97;
    }
  }
  bVar1 = true;
LAB_012f7a97:
  FUN_012edae0();
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + -1;
  if (*(longlong *)(this + 0x58) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_012f5460();
    FUN_00d50b20();
  }
  return;
LAB_012f79d0:
  if (local_78 != 0) {
    FUN_00d50b00();
LAB_012f7a00:
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0129a1f0();
    FUN_00d50b20();
  }
  goto LAB_012f792b;
}




// ==================================================
// @01656470 (710 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  undefined8 uVar2;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this + 0x60) == '\0') && (local_48 != 0)) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c26c0(param_1);
    uVar2 = FUN_016553c0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c25f0(uVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = (param_1 - *(double *)(this + 0x78)) / *(double *)(this + 0x68) +
               *(double *)(this + 0x70);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}




// ==================================================
// @01656830 (710 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  undefined8 uVar2;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this + 0x60) == '\0') && (local_48 != 0)) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c26c0(param_1);
    uVar2 = FUN_01656080();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c25f0(uVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = (param_1 - *(double *)(this + 0x70)) * *(double *)(this + 0x68) +
               *(double *)(this + 0x78);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}




// ==================================================
// @012e61a0 (697 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong arg1;
  undefined8 *this;
  int iVar7;
  longlong local_80;
  char local_78;
  int local_50;
  
  lVar1 = *(longlong *)(arg1 + 0xa8);
  if (lVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
LAB_012e62d3:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_50 = -1;
    do {
      lVar2 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) {
        FUN_000be170();
        puVar5 = *(undefined8 **)(arg1 + 0xa8);
        *(undefined1 *)(this + 1) = 0;
        if (puVar5 == (undefined8 *)0x0) goto LAB_012e62d3;
        FUN_00d50b00();
        goto LAB_012e644b;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar2 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      lVar2 = *(longlong *)(lVar2 + 0xa8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
    } while (iVar7 == 0);
    FUN_000be170();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &DAT_02572358;
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(arg1 + 0xa8);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar7 = 0;
        do {
          FUN_00d21140();
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e61a0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
LAB_012e644b:
  *this = puVar5;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @012ea9e0 (677 bytes) — math_loop

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong lVar8;
  longlong *arg1;
  undefined8 *this;
  int iVar9;
  ulonglong uVar10;
  
  uVar10 = ~-(ulonglong)(param_2 < 0.0) & (ulonglong)param_1 |
           (ulonglong)(param_1 + param_2) & -(ulonglong)(param_2 < 0.0);
  if (param_2 < 0.0) {
    param_2 = (double)((ulonglong)param_2 ^ _DAT_023945b0);
  }
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar8 = arg1[0x27];
  if (lVar8 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar8 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar8 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01529c50(uVar10,param_2);
      return this;
    }
  }
  pcVar2 = DAT_02572370;
  lVar8 = arg1[0x16];
  if (lVar8 == 0) {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      iVar9 = 0;
      puVar6 = (undefined8 *)0x0;
      bVar1 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275530(uVar10,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = (code *)0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
    *(undefined1 *)(this + 1) = 0;
    if (bVar1) goto LAB_012eac75;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012eac75;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_012eac75:
  *this = puVar6;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0165a0f0 (659 bytes) — calculation

{
  char cVar1;
  void *pvVar2;
  char unaff_SIL;
  longlong this;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01652840();
  if (*(char *)(this + 0xa5) == '\0') {
    if (unaff_SIL != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0170f810();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164e2c0();
        FUN_01689d90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(this + 0xa3) = 1;
    }
    if (param_2 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0170fee0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164e2c0();
        FUN_01689d90();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(this + 0xa4) = 1;
    }
  }
  return;
}




// ==================================================
// @012f8ad0 (658 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  undefined8 uVar2;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x60) == 0) {
    if (*(longlong *)(this + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_01656080(param_1);
  return uVar2;
}




// ==================================================
// @012f8e60 (658 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  undefined8 uVar2;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x60) == 0) {
    if (*(longlong *)(this + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_016553c0(param_1);
  return uVar2;
}




// ==================================================
// @012ebd30 (643 bytes) — math_loop

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *this;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((char)this[0x28] != '\0') {
    (**(code **)(*this + 0x1a0))();
  }
  lVar4 = this[0x27];
  if (lVar4 == 0) {
LAB_012ebde4:
    lVar4 = this[0x16];
    dVar5 = DAT_023b4830;
    if (lVar4 != 0) {
      dVar6 = DAT_023b4830;
      if (0 < *(int *)(lVar4 + 0xc)) {
        local_48 = DAT_023b4830;
        iVar3 = 0;
        do {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_01259520();
          if (dVar6 <= local_48) {
            dVar6 = local_48;
          }
          iVar3 = iVar3 + 1;
          local_48 = dVar6;
        } while (iVar3 < *(int *)(lVar4 + 0xc));
      }
      dVar5 = (double)FUN_001159b0();
      lVar4 = this[0x15];
      goto joined_r0x012ebf88;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar4 = this[0x27];
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x38) == '\0') goto LAB_012ebde4;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0152a000();
  }
  lVar4 = this[0x15];
  dVar6 = dVar5;
joined_r0x012ebf88:
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar3 = 0;
      local_48 = dVar6;
      do {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012ebd30();
        if (dVar5 <= local_48) {
          dVar5 = local_48;
        }
        iVar3 = iVar3 + 1;
        dVar6 = dVar5;
        local_48 = dVar5;
      } while (iVar3 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170(dVar5);
  }
  return -(ulonglong)(DAT_023b4830 != dVar6) & (ulonglong)dVar6;
}




// ==================================================
// @012ebfe0 (643 bytes) — math_loop

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *this;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((char)this[0x28] != '\0') {
    (**(code **)(*this + 0x1a0))();
  }
  lVar4 = this[0x27];
  if (lVar4 == 0) {
LAB_012ec094:
    lVar4 = this[0x16];
    dVar5 = DAT_023b2568;
    if (lVar4 != 0) {
      dVar6 = DAT_023b2568;
      if (0 < *(int *)(lVar4 + 0xc)) {
        local_48 = DAT_023b2568;
        iVar3 = 0;
        do {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          if (local_48 <= dVar6) {
            dVar6 = local_48;
          }
          iVar3 = iVar3 + 1;
          local_48 = dVar6;
        } while (iVar3 < *(int *)(lVar4 + 0xc));
      }
      dVar5 = (double)FUN_001159b0();
      lVar4 = this[0x15];
      goto joined_r0x012ec238;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar4 = this[0x27];
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x38) == '\0') goto LAB_012ec094;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0152a250();
  }
  lVar4 = this[0x15];
  dVar6 = dVar5;
joined_r0x012ec238:
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar3 = 0;
      local_48 = dVar6;
      do {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012ebfe0();
        if (local_48 <= dVar5) {
          dVar5 = local_48;
        }
        iVar3 = iVar3 + 1;
        dVar6 = dVar5;
        local_48 = dVar5;
      } while (iVar3 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170(dVar5);
  }
  return -(ulonglong)(DAT_023b2568 != dVar6) & (ulonglong)dVar6;
}




// ==================================================
// @01657410 (636 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(this + 0x90);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713990();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_016577d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x98);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017139d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_016577d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01657c90();
  *(undefined1 *)(this + 100) = 1;
  if (*(char *)(this + 0xa5) == '\0') {
    *(undefined2 *)(this + 0xa2) = 0x101;
    *(undefined1 *)(this + 0xa4) = 1;
  }
  return;
}




// ==================================================
// @012ea6f0 (621 bytes) — math_loop

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  pthread_key_t in_ECX;
  code *pcVar7;
  longlong *arg1;
  undefined8 *this;
  int iVar8;
  longlong lVar9;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar9 = arg1[0x27];
  if (lVar9 != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = arg1[0x27];
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar9 + 0x38) != '\0') {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015298a0(param_1,param_2);
      return this;
    }
  }
  pcVar2 = DAT_02572370;
  lVar9 = arg1[0x16];
  if (lVar9 == 0) {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (*(int *)(lVar9 + 0xc) < 1) {
      bVar1 = false;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      iVar8 = 0;
      puVar6 = (undefined8 *)0x0;
      bVar1 = false;
      pcVar7 = DAT_02572370;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01275500(param_1,param_2);
        if (cVar3 != '\0') {
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            (*pcVar2)();
            bVar1 = true;
          }
          pcVar7 = (code *)0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar9 + 0xc));
    }
    FUN_001159b0();
    *(undefined1 *)(this + 1) = 0;
    if (bVar1) goto LAB_012ea952;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_012ea952;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_012ea952:
  *this = puVar6;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01652930 (612 bytes) — calculation

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *arg1;
  longlong this;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  uint local_6c;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined1 local_31;
  
  if (*(longlong *)(this + 0xa8) != 0) {
    local_31 = *(int *)(*(longlong *)(this + 0x98) + 0xc) == 0;
    local_6c = param_2;
    FUN_01650330();
    local_40 = local_c0;
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      param_1 = (pthread_key_t)local_40;
    }
    FUN_01650330();
    local_58 = local_b0;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_50 = local_68;
    local_48 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    uVar1 = local_6c;
    local_48 = '\x01';
    local_90 = *arg1;
    local_88 = '\0';
    local_80 = 0;
    local_78 = '\0';
    FUN_012f0b60(&local_90,&local_50,1,local_6c & 0xff,&local_80);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar1 != '\0') {
      FUN_01651f90();
    }
  }
  return;
}




// ==================================================
// @004f9d80 (593 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *this;
  longlong lVar4;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  FUN_0025e9a0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_004f9fbe;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_004f9fbe;
  if (0 < *(int *)(local_70 + 0xc)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar4 * 8);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == lVar2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = lVar1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_004f9fbe:
  *this = local_70;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0165b1b0 (584 bytes) — calculation

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *arg1;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*arg1 == 0) {
    if (param_1 >> 0x20 == 0) {
      return;
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012502a0(param_1,param_2,0);
    return;
  }
  if (param_2 >> 0x20 == 0) {
    return;
  }
  uVar5 = param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)uVar5;
  FUN_00d4ff40();
  *puVar1 = &DAT_025f6568;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[9] = 0x100000000;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar6 = *arg1;
    lVar8 = puVar1[7];
    puVar7 = puVar1;
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  else {
    lVar6 = *arg1;
    lVar8 = ((undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4])[7];
    puVar7 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar8 == lVar6) goto LAB_0165b33b;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  puVar7[7] = lVar6;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0165b33b:
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar1 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(char *)(puVar1 + 8) = (char)param_3;
  pvVar2 = _pthread_getspecific(param_3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012502a0(param_1,param_2,0);
  FUN_00d50b20();
  return;
}




// ==================================================
// @01bd91b0 (572 bytes) — math_loop

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong this;
  longlong lVar10;
  longlong **pplVar11;
  longlong *local_40;
  char local_38;
  
  FUN_01bd8b20();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01bd9229;
    FUN_00d50b00();
    if (param_2 != '\0') goto LAB_01bd9203;
  }
  else {
    if (local_40 == (longlong *)0x0) {
LAB_01bd9229:
      uVar7 = 0;
      goto LAB_01bd9379;
    }
    if (param_2 == '\0') goto LAB_01bd927e;
LAB_01bd9203:
    iVar4 = FUN_01caea40();
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01bd9251;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01bd9251:
      uVar5 = FUN_01d3b590();
      FUN_00d50b20();
      if ((uVar5 & 2) != 0) {
        iVar1 = *(int *)(*(longlong *)(this + 0x90) + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        if (3 < iVar1) {
          lVar10 = 0;
          do {
            if (*(int *)(*(longlong *)(*(longlong *)(this + 0x90) + 0x10) + lVar10 * 4) ==
                iVar4) {
              if (7 < iVar1) {
                FUN_01bd8f70();
              }
              goto LAB_01bd927e;
            }
            lVar10 = lVar10 + 1;
          } while (iVar6 >> 2 != (int)lVar10);
        }
      }
    }
    FUN_01bd8c50();
  }
LAB_01bd927e:
  pplVar11 = &local_40;
  FUN_01caeb00();
  plVar8 = local_40;
  FUN_000f5df0();
  if (plVar8 == (longlong *)0x0) {
LAB_01bd92ba:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bd92ba;
  }
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    plVar8 = *(longlong **)(this + 0x90);
    iVar6 = (**(code **)(*plVar2 + 0xa88))();
    iVar4 = (int)plVar8[3];
    iVar1 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    uVar7 = 0xffffffff;
    if (3 < iVar4) {
      uVar9 = 0;
      do {
        if (*(int *)(plVar8[2] + uVar9 * 4) == iVar6) {
          uVar7 = uVar9 & 0xffffffff;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (iVar1 >> 2 != (int)uVar9);
    }
    (**(code **)(*plVar2 + 0x918))(uVar7);
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  FUN_00d50b20();
LAB_01bd9379:
  return uVar7 & 0xffffffff;
}




// ==================================================
// @012e57f0 (570 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong this;
  longlong local_48;
  char local_40;
  
  if (*(int *)(this + 0x108) != 0) {
    return;
  }
  if (*(longlong *)(this + 0x58) != 0) {
    return;
  }
  plVar1 = *(longlong **)(this + 0x118);
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  lVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = DAT_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(this + 0x118);
    }
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012e596b;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012e596b;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = *(longlong *)(this + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_017ecb00();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012e596b:
  FUN_00d50b20();
  return;
}




// ==================================================
// @0165a450 (561 bytes) — calculation

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *arg1;
  longlong *this;
  
  lVar6 = *this;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *this;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar6 + 0x50);
  lVar6 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  iVar3 = 1;
  if (*(double *)(lVar6 + 0x50) <= dVar1) {
    lVar6 = *this;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *this;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar1 = *(double *)(lVar6 + 0x50);
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar3 = -1;
    if (dVar1 < *(double *)(lVar6 + 0x50) || dVar1 == *(double *)(lVar6 + 0x50)) {
      lVar6 = *this;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *this;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      dVar1 = *(double *)(lVar6 + 0x50);
      dVar2 = *(double *)(lVar6 + 0x58);
      lVar6 = *arg1;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        lVar6 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      iVar3 = 1;
      if (*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) <= dVar1 + dVar2) {
        lVar6 = *this;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *this;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        dVar1 = *(double *)(lVar6 + 0x50);
        dVar2 = *(double *)(lVar6 + 0x58);
        lVar6 = *arg1;
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          lVar6 = *arg1;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        iVar3 = -(uint)(*(double *)(lVar6 + 0x50) + *(double *)(lVar6 + 0x58) < dVar1 + dVar2);
      }
    }
  }
  return iVar3;
}




// ==================================================
// @01bd8c50 (557 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  char in_DL;
  longlong lVar3;
  int unaff_ESI;
  longlong this;
  longlong lVar4;
  int iVar5;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar4 = *(longlong *)(this + 0x90);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(this + 0x88) + 0x4d8))();
  iVar5 = 1;
  if (*(longlong **)(this + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x88) + 0x4a0))();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0 && 0.0 < param_2) {
      iVar1 = FUN_00e7d780(param_2 / _DAT_0241df1c);
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
    }
  }
  if (in_DL == '\0') {
    FUN_00c8e340();
  }
  iVar1 = *(int *)(local_40 + 0x18);
  lVar4 = (longlong)iVar1;
  iVar2 = iVar1 + 3;
  if (-1 < lVar4) {
    iVar2 = iVar1;
  }
  if (3 < lVar4) {
    iVar2 = iVar2 >> 2;
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(local_40 + 0x10) + lVar3 * 4) == unaff_ESI) goto LAB_01bd8de0;
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  FUN_00c8e340(iVar2,1);
  *(int *)(*(longlong *)(local_40 + 0x10) + lVar4) = unaff_ESI;
LAB_01bd8de0:
  while( true ) {
    iVar1 = *(int *)(local_40 + 0x18);
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= iVar5) break;
    FUN_00e7b4e0();
    FUN_00c921e0();
  }
  FUN_01bd0ba0();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01654a70 (537 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong *arg1;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (*arg1 == local_80) {
    cVar2 = '\x01';
  }
  else if (*arg1 == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_70 == 0) {
      cVar2 = '\0';
    }
    else {
      plVar1 = (longlong *)*arg1;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
  }
  return;
}




// ==================================================
// @0165e460 (518 bytes) — calculation

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 local_58 [12];
  undefined4 local_4c;
  longlong in_stack_ffffffffffffffb8;
  char local_40 [8];
  char local_38 [8];
  
  puVar7 = local_58;
  FUN_0165cae0(puVar7);
  pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar7 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffffb8 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    iVar1 = FUN_00e7cea0();
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 >> 2;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7b970();
    if (param_2 != (undefined8 *)0x0) {
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffa0();
      FUN_00e7bdb0();
      uVar4 = FUN_00e7c8b0();
      *param_2 = uVar4;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_4c = FUN_0123ffa0();
    FUN_00e7c3c0();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_stack_ffffffffffffffb8 =
           *(longlong *)
            (in_stack_ffffffffffffffb8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(in_stack_ffffffffffffffb8 + 0x44);
    iVar2 = FUN_00e7cea0();
    iVar2 = iVar2 + iVar1;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return iVar2;
}




// ==================================================
// @012f8840 (516 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  longlong arg1;
  longlong *this;
  int iVar4;
  longlong lVar5;
  longlong local_58;
  char local_50 [8];
  char local_40;
  char local_38;
  
  lVar1 = *(longlong *)(arg1 + 0xb0);
  if (lVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
    local_40 = '\0';
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = '\0';
      lVar5 = 0;
    }
    else {
      iVar4 = 0;
      lVar5 = 0;
      local_40 = '\0';
      do {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        local_38 = local_50[0];
        param_1 = &stack0xffffffffffffffc8;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = param_1;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          if (lVar5 == 0) {
            lVar5 = local_58;
            if (local_38 != '\0') {
              local_40 = '\x01';
              goto LAB_012f88d0;
            }
            FUN_00d50b00();
            local_40 = '\x01';
          }
          else if (local_58 != lVar5) {
            *(undefined1 *)(this + 1) = 0;
            *this = 0;
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
            FUN_001159b0();
            FUN_00d50b20();
            goto LAB_012f89f0;
          }
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
LAB_012f88d0:
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if ((local_40 != '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
  }
  *this = lVar5;
  *(char *)(this + 1) = local_40;
LAB_012f89f0:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0165d800 (516 bytes) — calculation

{
  undefined8 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined1 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_60 [8];
  ulonglong local_58;
  longlong local_50;
  char local_48;
  double local_40;
  longlong local_38;
  char local_30;
  
  local_40 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_40);
  puVar4 = local_60;
  FUN_0165cae0(puVar4,uVar1,0,&local_58);
  local_38 = local_50;
  pVar3 = (pthread_key_t)puVar4;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      return local_40;
    }
    FUN_00d50b00();
  }
  local_30 = '\x01';
  if (local_38 != 0) {
    local_30 = '\x01';
    if (local_58 >> 0x20 != 0) {
      pVar3 = 0;
      local_50 = FUN_0165cf20(0,0);
      dVar5 = (double)FUN_00e7c860();
      if (dVar5 <= local_40) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_60;
        FUN_01253c10(puVar4,&local_38,&local_58);
        pVar3 = (pthread_key_t)puVar4;
      }
    }
    dVar5 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    dVar7 = (double)FUN_00e7c860();
    local_40 = (local_40 - dVar6) / dVar7 + dVar5;
    if (local_30 == '\0') {
      return local_40;
    }
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return local_40;
}




// ==================================================
// @012e7210 (513 bytes) — math_loop

{
  longlong lVar1;
  void *pvVar2;
  longlong arg1;
  longlong *this;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  
  lVar3 = *(longlong *)(arg1 + 0xb0);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(longlong *)(arg1 + 0xa8) + 0xc) == 0) goto LAB_012e73eb;
  FUN_00243390();
  if (lVar3 == local_78) {
LAB_012e72aa:
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
      goto LAB_012e72aa;
    }
  }
  else {
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(arg1 + 0xa8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d214d0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
LAB_012e73eb:
  *this = lVar3;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0131ba70 (512 bytes) — math_loop

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *arg1;
  longlong this;
  longlong lVar7;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if (this != 0) {
    FUN_00d50b00();
  }
  local_d8 = *arg1;
  local_d0 = 0;
  bVar2 = FUN_013157a0(param_3,&local_d8,1);
  if (this != 0) {
    FUN_00d50b20();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        local_c8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_c0 = 0;
        local_78 = local_c8;
        cVar3 = FUN_01316d80();
        if (cVar3 == '\0') {
          bVar2 = 0;
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
  }
  lVar1 = *(longlong *)(this + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = *arg1;
  local_a0 = 0;
  bVar4 = FUN_01319320(param_4,0);
  local_98 = *arg1;
  local_90 = 0;
  bVar5 = FUN_01319960();
  local_88 = *arg1;
  local_80 = 0;
  bVar6 = FUN_0131a710();
  return bVar6 & bVar5 & bVar4 & bVar2;
}




// ==================================================
// @0015ae00 (511 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *this;
  longlong local_80;
  char local_78;
  longlong local_48;
  char local_40;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0015e7e0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar4 + 0x18))();
  FUN_004f7da0();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    plVar2 = (longlong *)plVar3[0x11];
    plVar1 = plVar3;
  }
  else {
    plVar1 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    plVar2 = (longlong *)plVar1[0x11];
  }
  if (plVar2 != plVar4) {
    FUN_00d50b00();
    plVar1[0x11] = (longlong)plVar4;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar3;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_004a11d0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_0015af5b;
    }
    if (plVar4[0x12] == 0) goto LAB_0015afb2;
    plVar4[0x12] = 0;
LAB_0015af9d:
    FUN_00d50b20();
  }
  else {
    local_40 = '\0';
LAB_0015af5b:
    lVar6 = plVar4[0x12];
    if (lVar6 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      plVar4[0x12] = local_48;
      if (lVar6 != 0) goto LAB_0015af9d;
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_0015afb2:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  return this;
}




// ==================================================
// @0165cf20 (510 bytes) — calculation

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 arg1;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  pVar4 = (pthread_key_t)local_58;
  FUN_0165d150();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 != 0) {
      FUN_00d50b00();
      goto LAB_0165cf72;
    }
  }
  else if (in_stack_ffffffffffffffc0 != 0) {
LAB_0165cf72:
    FUN_00e7b970();
    if (param_2 != (undefined8 *)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      uVar2 = FUN_00e7c8b0();
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_0123ffb0();
      FUN_00e7bac0();
      *param_2 = uVar2;
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      in_stack_ffffffffffffffc0 =
           *(longlong *)
            (in_stack_ffffffffffffffc0 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    FUN_00e7bac0();
    uVar2 = *(undefined8 *)(in_stack_ffffffffffffffc0 + 0x48);
    FUN_00e7b820();
    FUN_00d50b20();
    return uVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e7bdb0();
    uVar2 = FUN_00e7c8b0();
    *param_2 = uVar2;
  }
  return arg1;
}




// ==================================================
// @004faf60 (505 bytes) — math_loop

{
  void *pvVar1;
  int iVar2;
  longlong *this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  if (*this != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4ba0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4ba0();
      local_50 = DAT_02708bf0;
      if (DAT_02708bf0 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      FUN_00ca13a0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_48 == '\0') {
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
      return;
    }
    for (iVar2 = 0; iVar2 < *(int *)(local_50 + 0xc); iVar2 = iVar2 + 1) {
      FUN_004faf60();
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}



