// ===== MURelativeTimeProgressor — Annotated small functions =====
// 7 readable functions

// ==================================================
// @0031d5a0 (2068 bytes) — calculation

{
  int iVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  byte unaff_SIL;
  longlong this;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_c0;
  char local_b8;
  undefined4 local_ac;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  longlong local_78;
  char local_70;
  byte local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_00764730();
  lVar10 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_58 = lVar10;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar2 = FUN_015305d0();
  lVar10 = DAT_026f6fd0;
  lVar9 = local_58;
  if (bVar2 != unaff_SIL) {
    if (DAT_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar10;
    FUN_00e7d6f0();
    uVar7 = 0xaaaaaaaaaaaaaaab;
    uVar11 = FUN_0071a120();
    if (((local_38[0] == '\0') && (local_40 != 0)) &&
       ((uVar11 = FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
      uVar11 = FUN_00d50b20();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_000175c0(uVar11,&local_50);
    lVar10 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_64 = unaff_SIL;
    if (lVar10 != 0) {
      local_38[0] = '\0';
      local_40 = lVar10;
      unaff_SIL = FUN_00c70bc0();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    pVar6 = (pthread_key_t)uVar7;
    if ((lVar10 != 0 & unaff_SIL) == 0) {
      FUN_00757c60();
      pvVar4 = _pthread_getspecific((pthread_key_t)uVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      lVar10 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (pthread_key_t)uVar7;
      if (lVar10 != 0) {
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar1 = *(int *)(local_40 + 0xc);
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)uVar7;
        if (iVar1 != 0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          FUN_00d23310();
          lVar9 = local_40;
          pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_38[0]);
          pcVar8 = &local_a8;
          if (local_38[0] != '\0') {
            pcVar8 = local_38;
          }
          local_a8 = local_38[0];
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if (lVar10 == lVar9) {
            if ((local_a8 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar10 = lVar9;
            if (local_a8 == '\0') {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            else {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(longlong **)(this + 0x18) + 0x498))();
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_64 != 0) {
            FUN_0044c3a0();
            pvVar4 = _pthread_getspecific(pVar6);
            lVar9 = lVar10;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              lVar9 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
            local_60 = lVar9;
            FUN_00757c60();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb450();
            local_78 = local_50;
            local_70 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_70 = '\x01';
            pVar6 = 0;
            FUN_0044c530(0,&local_78,local_ac);
            lVar9 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            FUN_012e8aa0();
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e44d0();
          (**(code **)(**(longlong **)(this + 0x18) + 0x498))();
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_64 != 0) {
      FUN_0078cdb0();
      FUN_013fd5b0();
      cVar3 = FUN_013fd430();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_013fd5b0();
        FUN_013fd790();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01530590();
    FUN_00d403d0();
    lVar10 = DAT_026d88c8;
    if (DAT_026d88c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d40470(&local_c0,&stack0xffffffffffffff68,1,3);
    lVar9 = local_58;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01aa0420 (1245 bytes) — math_loop

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *arg1;
  longlong this;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  uint uVar12;
  undefined4 extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint uVar13;
  undefined4 extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar14;
  undefined4 uVar15;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  uint local_34;
  
  uVar16 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*arg1 == 0) {
    return 0;
  }
  uVar9 = 0;
  uVar3 = FUN_00d8ca50();
  local_a8 = DAT_027d3890;
  local_58 = CONCAT71(local_58._1_7_,uVar3);
  if (*(uint *)(this + 0xc) - 1 < 3) {
    uVar9 = (ulonglong)*(uint *)(this + 0xc);
  }
  if (DAT_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_00d91000(1,&local_a8);
  lVar8 = local_98;
  if (local_98 == 0) {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    if (local_90 == '\0') {
      FUN_00d50b00();
      uVar9 = 0;
      uVar6 = 1;
      if ((local_90 == '\0') || (local_98 == 0)) goto LAB_01aa0511;
      FUN_00d50b20();
    }
    else {
      local_90 = '\0';
    }
    uVar6 = 1;
    uVar9 = 0;
  }
LAB_01aa0511:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)(lVar8 + 0xc);
  uVar13 = (uint)uVar9;
  local_40 = lVar8;
  if (*(int *)(this + 0xc) == 4) {
    if (iVar1 == 3) {
      local_48 = uVar6;
      local_34 = uVar13;
      iVar5 = FUN_00d8d560();
      iVar4 = FUN_00d8d560();
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      iVar5 = -iVar4;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      plVar2 = *(longlong **)(this + 0x10);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x10);
      local_60 = 0;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar8;
      local_58._0_4_ = (float)(**(code **)(*plVar2 + 0x380))();
      local_58._0_4_ = (float)(iVar5 * 0x3c) + (float)iVar1 * DAT_023941f0 + (float)local_58;
      uStack_50 = CONCAT44(in_XMM2_Dd,in_XMM2_Dc);
      uVar9 = (ulonglong)local_34;
      local_58 = CONCAT44(uVar16,(float)local_58);
      if ((local_60 != '\0') && (local_58 = CONCAT44(uVar16,(float)local_58), local_68 != 0)) {
        local_58._4_4_ = uVar16;
        FUN_00d50b20();
      }
    }
    else if (iVar1 == 2) {
      local_34 = uVar13;
      iVar5 = FUN_00d8d560();
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      plVar2 = *(longlong **)(this + 0x10);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 8);
      local_70 = 0;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar8;
      local_58._0_4_ = (float)(**(code **)(*plVar2 + 0x380))();
      local_58._0_4_ = (float)iVar1 * DAT_023941f0 + (float)local_58;
      uStack_50 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
      uVar9 = (ulonglong)local_34;
      local_58 = CONCAT44(uVar15,(float)local_58);
      if ((local_70 != '\0') && (local_58 = CONCAT44(uVar15,(float)local_58), local_78 != 0)) {
        local_58._4_4_ = uVar15;
        FUN_00d50b20();
        local_58 = CONCAT44(local_58._4_4_,(float)local_58);
      }
    }
    else {
      local_58._0_4_ = 0.0;
      local_58._4_4_ = 0;
      uStack_50 = 0;
      local_58 = 0;
      if (iVar1 == 1) {
        plVar2 = *(longlong **)(this + 0x10);
        lVar8 = **(longlong **)(lVar8 + 0x10);
        local_80 = 0;
        local_34 = uVar13;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar8;
        local_58 = (**(code **)(*plVar2 + 0x380))();
        uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        uVar9 = (ulonglong)local_34;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    cVar7 = (char)uVar9;
  }
  else {
    if (iVar1 == 1) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
    }
    else if (iVar1 == 2) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
      FUN_00d8d560();
    }
    else if (iVar1 == 3) {
      local_48 = uVar6;
      local_34 = uVar13;
      FUN_00d8d560();
      FUN_00d8d560();
      FUN_00d8d560();
    }
    else {
      local_48 = uVar6;
      local_34 = uVar13;
      if (0 < iVar1) {
        uVar9 = 0;
        do {
          FUN_00d8d560();
          switch(uVar9 & 0xffffffff) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)*(int *)(local_40 + 0xc));
      }
    }
    dVar11 = (double)FUN_00b383b0(local_40);
    uVar12 = (uint)((ulonglong)dVar11 >> 0x20);
    fVar10 = (float)dVar11;
    uVar13 = extraout_XMM0_Dc_00;
    uVar14 = extraout_XMM0_Dd_00;
    if ((char)local_58 != '\0') {
      fVar10 = (float)((uint)fVar10 ^ _DAT_023945e0);
      uVar12 = uVar12 ^ _UNK_023945e4;
      uVar13 = extraout_XMM0_Dc_00 ^ _UNK_023945e8;
      uVar14 = extraout_XMM0_Dd_00 ^ _UNK_023945ec;
    }
    local_58 = CONCAT44(uVar12,fVar10);
    uStack_50 = CONCAT44(uVar14,uVar13);
    cVar7 = (char)local_34;
  }
  if (cVar7 == '\0') {
    FUN_00d50b20();
  }
  return local_58;
}




// ==================================================
// @01aa2e00 (1056 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *arg1;
  longlong *this;
  float fVar7;
  float fVar8;
  float fVar14;
  undefined8 in_XMM0_Qb;
  undefined1 auVar10 [16];
  float fVar13;
  undefined8 uVar9;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  longlong *local_98;
  char local_90;
  longlong local_38;
  char local_30;
  
  local_a8 = (float)param_2;
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  fStack_a0 = (float)in_XMM1_Qb;
  fStack_9c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fStack_b0 = (float)in_XMM0_Qb;
  fStack_ac = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  lVar1 = this[0x40];
  if (lVar1 == 0) {
    (**(code **)(*this + 0x640))();
    (**(code **)(*local_98 + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d48370();
  (**(code **)(*(longlong *)*arg1 + 0x380))();
  if ((DAT_028b3170 == 0) || (DAT_028b3179 == '\0')) {
    FUN_00e8cb50();
    lVar1 = DAT_027e3cc8;
    if (DAT_028b3170 == 0) {
      if (DAT_027e3cc8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      lVar6 = DAT_028b3170;
      if (DAT_028b3170 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar6 = 0;
          }
          else {
            FUN_00d50b00();
            lVar6 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar6 = local_38;
        }
        bVar4 = DAT_028b3170 != 0;
        DAT_028b3170 = lVar6;
        if (bVar4) {
          FUN_00d50b20();
          lVar6 = local_38;
        }
      }
      if ((lVar6 != 0) && (DAT_028b3178 == '\0')) {
        DAT_028b3178 = '\x01';
        FUN_00e8cb90();
        lVar6 = local_38;
      }
      if ((local_30 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3179 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3179 = '\x01';
      FUN_00e8cb70();
    }
  }
  auVar10._8_4_ = fStack_b0;
  auVar10._0_8_ = param_1;
  auVar10._12_4_ = fStack_ac;
  auVar17._0_4_ = DAT_0239011c * local_a8 + (float)param_1;
  auVar17._4_4_ = (float)((ulonglong)param_1 >> 0x20) + 0.0;
  auVar17._8_4_ = fStack_b0 + 0.0;
  auVar17._12_4_ = fStack_ac + 0.0;
  auVar16._0_4_ = local_a8 * _DAT_02422a60;
  auVar16._4_4_ = fStack_a4 * _UNK_02422a64;
  auVar16._8_4_ = fStack_a0 * _UNK_02422a68;
  auVar16._12_4_ = fStack_9c * _UNK_02422a6c;
  auVar17 = blendps(auVar16,auVar17,0xd);
  auVar10 = blendps(ZEXT416(DAT_02390d00),auVar10,0xe);
  fVar7 = auVar10._0_4_ + auVar17._0_4_;
  fVar13 = auVar10._4_4_ + auVar17._4_4_;
  fVar14 = auVar10._8_4_ + auVar17._8_4_;
  fVar15 = auVar10._12_4_ + auVar17._12_4_;
  uVar9 = FUN_01d526f0();
  lVar1 = DAT_028b3170;
  auVar11._0_4_ = (float)uVar9 * _DAT_0241c4f0 * _DAT_023945d0 + fVar7;
  auVar11._4_4_ = (float)((ulonglong)uVar9 >> 0x20) * _UNK_0241c4f4 * _UNK_023945d4 + fVar13;
  auVar11._8_4_ = (float)extraout_XMM0_Qb * _UNK_0241c4f8 * _UNK_023945d8 + fVar14;
  auVar11._12_4_ =
       (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * _UNK_0241c4fc * _UNK_023945dc + fVar15;
  auVar18._0_4_ = (float)(_DAT_023945e0 & (uint)auVar11._0_4_ | _DAT_023945f0) + auVar11._0_4_;
  auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar11._4_4_ | _UNK_023945f4) + auVar11._4_4_;
  auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar11._8_4_ | _UNK_023945f8) + auVar11._8_4_;
  auVar18._12_4_ = (float)(_UNK_023945ec & (uint)auVar11._12_4_ | _UNK_023945fc) + auVar11._12_4_;
  roundps(auVar11,auVar18,0xb);
  plVar2 = (longlong *)*arg1;
  if (DAT_028b3170 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x400))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  fVar8 = (float)(**(code **)(*this + 0x930))();
  if (0.0 < fVar8) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
    (*DAT_02680418)();
    (**(code **)(*this + 0x930))();
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = fVar15;
    auVar12._4_12_ = auVar3._4_12_;
    auVar12._0_4_ = fVar7 + DAT_02390124;
    FUN_01d39310(auVar12._0_8_);
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0119fa70 (958 bytes) — calculation

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025e1318;
  this[7] = 0;
  if (DAT_027ae7d0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02702338 = FUN_00018c10();
      _DAT_02702320 = "MURelativeTimeProgressor";
      _DAT_02702328 = 0x58;
      _DAT_02702330 = FUN_00323950;
      _DAT_02702340 = 0;
      uRam0000000002702348 = 0;
      _DAT_02702350 = 0;
      uRam0000000002702358 = 0;
      _DAT_02702360 = 0;
      uRam0000000002702368 = 0;
      _DAT_02702370 = 0;
      uRam0000000002702378 = 0;
      _DAT_02702380 = 0;
      uRam0000000002702388 = 0;
      _DAT_02702390 = 0;
      uRam0000000002702398 = 0;
      _DAT_027023a0 = 0;
      uRam00000000027023a8 = 0;
      _DAT_027023b0 = 0;
      uRam00000000027023b8 = 0;
      _DAT_027023c0 = 0;
      uRam00000000027023c8 = 0;
      _DAT_027023d0 = 0;
      _uRam00000000027023d8 = 0;
      _DAT_027023e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027023db == '\0') {
    FUN_0119fe60();
    FUN_00e87980();
  }
  this[8] = 0;
  if (DAT_027ae7d0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02702338 = FUN_00018c10();
      _DAT_02702320 = "MURelativeTimeProgressor";
      _DAT_02702328 = 0x58;
      _DAT_02702330 = FUN_00323950;
      _DAT_02702340 = 0;
      uRam0000000002702348 = 0;
      _DAT_02702350 = 0;
      uRam0000000002702358 = 0;
      _DAT_02702360 = 0;
      uRam0000000002702368 = 0;
      _DAT_02702370 = 0;
      uRam0000000002702378 = 0;
      _DAT_02702380 = 0;
      uRam0000000002702388 = 0;
      _DAT_02702390 = 0;
      uRam0000000002702398 = 0;
      _DAT_027023a0 = 0;
      uRam00000000027023a8 = 0;
      _DAT_027023b0 = 0;
      uRam00000000027023b8 = 0;
      _DAT_027023c0 = 0;
      uRam00000000027023c8 = 0;
      _DAT_027023d0 = 0;
      _uRam00000000027023d8 = 0;
      _DAT_027023e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027023db == '\0') {
    FUN_0119ffd0();
    FUN_00e87980();
  }
  this[9] = 0;
  if (DAT_027ae7d0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02702338 = FUN_00018c10();
      _DAT_02702320 = "MURelativeTimeProgressor";
      _DAT_02702328 = 0x58;
      _DAT_02702330 = FUN_00323950;
      _DAT_02702340 = 0;
      uRam0000000002702348 = 0;
      _DAT_02702350 = 0;
      uRam0000000002702358 = 0;
      _DAT_02702360 = 0;
      uRam0000000002702368 = 0;
      _DAT_02702370 = 0;
      uRam0000000002702378 = 0;
      _DAT_02702380 = 0;
      uRam0000000002702388 = 0;
      _DAT_02702390 = 0;
      uRam0000000002702398 = 0;
      _DAT_027023a0 = 0;
      uRam00000000027023a8 = 0;
      _DAT_027023b0 = 0;
      uRam00000000027023b8 = 0;
      _DAT_027023c0 = 0;
      uRam00000000027023c8 = 0;
      _DAT_027023d0 = 0;
      _uRam00000000027023d8 = 0;
      _DAT_027023e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027023db == '\0') {
    FUN_011a0140();
    FUN_00e87980();
  }
  this[10] = 0;
  if (DAT_027ae7d0 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02702338 = FUN_00018c10();
      _DAT_02702320 = "MURelativeTimeProgressor";
      _DAT_02702328 = 0x58;
      _DAT_02702330 = FUN_00323950;
      _DAT_02702340 = 0;
      uRam0000000002702348 = 0;
      _DAT_02702350 = 0;
      uRam0000000002702358 = 0;
      _DAT_02702360 = 0;
      uRam0000000002702368 = 0;
      _DAT_02702370 = 0;
      uRam0000000002702378 = 0;
      _DAT_02702380 = 0;
      uRam0000000002702388 = 0;
      _DAT_02702390 = 0;
      uRam0000000002702398 = 0;
      _DAT_027023a0 = 0;
      uRam00000000027023a8 = 0;
      _DAT_027023b0 = 0;
      uRam00000000027023b8 = 0;
      _DAT_027023c0 = 0;
      uRam00000000027023c8 = 0;
      _DAT_027023d0 = 0;
      _uRam00000000027023d8 = 0;
      _DAT_027023e0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027023db == '\0') {
    FUN_011a02b0();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01aa1bf0 (914 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *arg1;
  longlong *this;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar13;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  longlong *local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  uVar6 = FUN_01e3f820();
  local_a8 = (float)param_2;
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  fStack_a0 = (float)in_XMM1_Qb;
  fStack_9c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  lVar1 = this[0x40];
  if (lVar1 == 0) {
    (**(code **)(*this + 0x640))();
    (**(code **)(*local_88 + 0x390))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d48370();
  plVar2 = (longlong *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar2 + 0x390))();
  FUN_01cef410();
  local_b8 = (float)uVar6;
  fStack_b4 = (float)((ulonglong)uVar6 >> 0x20);
  if (local_30 == '\0') {
    if (local_38 == 0) goto LAB_01aa1e62;
    FUN_00d50b00();
  }
  else if (local_38 == 0) goto LAB_01aa1e62;
  uVar6 = FUN_01d526f0();
  fVar5 = (float)((ulonglong)uVar6 >> 0x20);
  fVar13 = (float)extraout_XMM0_Qb_00;
  auVar15._8_4_ = fVar13;
  auVar15._0_8_ = uVar6;
  fVar14 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar15._12_4_ = fVar14;
  auVar10._0_4_ = _DAT_02421800 + local_a8;
  auVar10._4_4_ = _UNK_02421804 + fStack_a4;
  auVar10._8_4_ = _UNK_02421808 + fStack_a0;
  auVar10._12_4_ = _UNK_0242180c + fStack_9c;
  auVar16._4_4_ = -(uint)(auVar10._4_4_ < fVar5);
  auVar16._0_4_ = -(uint)(auVar10._0_4_ < (float)uVar6);
  auVar16._8_4_ = -(uint)(auVar10._8_4_ < fVar13);
  auVar16._12_4_ = -(uint)(auVar10._12_4_ < fVar14);
  auVar10 = divps(auVar10,auVar15);
  auVar16 = blendvps(_DAT_023b5570,auVar10,auVar16);
  FUN_01d48370();
  local_98 = auVar16._0_4_;
  fStack_94 = auVar16._4_4_;
  fStack_90 = auVar16._8_4_;
  if (fStack_94 <= local_98) {
    local_98 = fStack_94;
  }
  (**(code **)(*(longlong *)*arg1 + 0x380))();
  fStack_b0 = (float)extraout_XMM0_Qb;
  fStack_ac = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar9 = (local_a8 * _DAT_023945d0 + local_b8) - (float)uVar6 * local_98 * _DAT_023945d0;
  fVar5 = (fStack_a4 * _UNK_023945d4 + fStack_b4) - fVar5 * local_98 * _UNK_023945d4;
  fVar13 = (fStack_a0 * _UNK_023945d8 + fStack_b0) - fVar13 * fStack_90 * _UNK_023945d8;
  fVar14 = (fStack_9c * _UNK_023945dc + fStack_ac) - fVar14 * fStack_90 * _UNK_023945dc;
  auVar7._0_4_ = (float)(_DAT_023945e0 & (uint)fVar9 | _DAT_023945f0) + fVar9;
  auVar7._4_4_ = (float)(_UNK_023945e4 & (uint)fVar5 | _UNK_023945f4) + fVar5;
  auVar7._8_4_ = (float)(_UNK_023945e8 & (uint)fVar13 | _UNK_023945f8) + fVar13;
  auVar7._12_4_ = (float)(_UNK_023945ec & (uint)fVar14 | _UNK_023945fc) + fVar14;
  roundps(auVar7,auVar7,0xb);
  (**(code **)(*(longlong *)*arg1 + 0x400))();
  FUN_01d48390();
  FUN_00d50b20();
LAB_01aa1e62:
  fVar5 = (float)(**(code **)(*this + 0x930))();
  if (0.0 < fVar5) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    (*DAT_02680418)();
    fVar5 = (float)(**(code **)(*this + 0x930))();
    auVar3._8_4_ = fStack_a0;
    auVar3._0_8_ = param_2;
    auVar3._12_4_ = fStack_9c;
    auVar16 = roundss(ZEXT816(0),ZEXT416((uint)((DAT_023b1608 + local_a8) * DAT_0239011c)),9);
    auVar11._4_4_ = fStack_a4;
    auVar11._0_4_ = fStack_a4;
    auVar11._8_4_ = fStack_9c;
    auVar11._12_4_ = fStack_9c;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = fStack_a4 * DAT_0239011c + fStack_b4;
    auVar8._4_12_ = auVar3._4_12_;
    auVar8._0_4_ = local_a8 * DAT_0239011c + local_b8;
    FUN_01d39310(auVar8._0_8_,auVar12._0_8_,auVar16._0_8_,fVar5 * _DAT_0241e850 + DAT_0241e854);
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    FUN_00d50b20();
  }
  FUN_01d48390();
  return;
}




// ==================================================
// @0031ef40 (535 bytes) — calculation

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *this;
  longlong **pplVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  float local_2c;
  
  (**(code **)(*this + 0x438))();
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_0031f06d;
  (**(code **)(*this + 0x438))();
  pplVar7 = &local_40;
  FUN_012d4ed0();
  plVar8 = local_40;
  if ((DAT_027ae7d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_02702338 = FUN_00018c10();
    _DAT_02702320 = "MURelativeTimeProgressor";
    _DAT_02702328 = 0x58;
    param_1 = 0x323950;
    _DAT_02702330 = FUN_00323950;
    _DAT_02702340 = 0;
    uRam0000000002702348 = 0;
    _DAT_02702350 = 0;
    uRam0000000002702358 = 0;
    _DAT_02702360 = 0;
    uRam0000000002702368 = 0;
    _DAT_02702370 = 0;
    uRam0000000002702378 = 0;
    _DAT_02702380 = 0;
    uRam0000000002702388 = 0;
    _DAT_02702390 = 0;
    uRam0000000002702398 = 0;
    _DAT_027023a0 = 0;
    uRam00000000027023a8 = 0;
    _DAT_027023b0 = 0;
    uRam00000000027023b8 = 0;
    _DAT_027023c0 = 0;
    uRam00000000027023c8 = 0;
    _DAT_027023d0 = 0;
    uRam00000000027023d8 = 0;
    _DAT_027023e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_0031efd8:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0031efd8;
  }
  plVar8 = *pplVar7;
  if (plVar8 == (longlong *)0x0) {
    bVar3 = true;
    bVar2 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar3 = false;
    bVar2 = false;
  }
  if ((local_38 != '\0') && (bVar2 = bVar3, local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_0141ccc0();
    local_2c = (float)dVar1;
    if (bVar2) {
      return (ulonglong)(uint)local_2c;
    }
    FUN_00d50b20();
    return (ulonglong)(uint)local_2c;
  }
LAB_0031f06d:
  uVar9 = FUN_00324f30();
  return uVar9;
}




// ==================================================
// @01aa1760 (509 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong **pplVar5;
  longlong *this;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  double local_20;
  
  (**(code **)(*this + 0xf8))();
  plVar1 = local_30;
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_20 = (double)CONCAT44(local_20._4_4_,DAT_02390d00);
  if (plVar1 == (longlong *)0x0) goto LAB_01aa18a5;
  (**(code **)(*this + 0xf8))();
  pplVar5 = &local_30;
  FUN_012d4ed0();
  plVar1 = local_30;
  if ((DAT_027ae7d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02702338 = FUN_00018c10();
    _DAT_02702320 = "MURelativeTimeProgressor";
    _DAT_02702328 = 0x58;
    param_1 = 0x323950;
    _DAT_02702330 = FUN_00323950;
    _DAT_02702340 = 0;
    uRam0000000002702348 = 0;
    _DAT_02702350 = 0;
    uRam0000000002702358 = 0;
    _DAT_02702360 = 0;
    uRam0000000002702368 = 0;
    _DAT_02702370 = 0;
    uRam0000000002702378 = 0;
    _DAT_02702380 = 0;
    uRam0000000002702388 = 0;
    _DAT_02702390 = 0;
    uRam0000000002702398 = 0;
    _DAT_027023a0 = 0;
    uRam00000000027023a8 = 0;
    _DAT_027023b0 = 0;
    uRam00000000027023b8 = 0;
    _DAT_027023c0 = 0;
    uRam00000000027023c8 = 0;
    _DAT_027023d0 = 0;
    uRam00000000027023d8 = 0;
    _DAT_027023e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01aa1801:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01aa1801;
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
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_20 = (double)FUN_0141ccc0();
    FUN_00d50b20();
    local_20 = (double)(ulonglong)(uint)(float)local_20;
  }
LAB_01aa18a5:
  return (ulonglong)local_20 & 0xffffffff;
}



