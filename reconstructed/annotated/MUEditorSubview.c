// ===== MUEditorSubview — Annotated small functions =====
// 16 readable functions

// ==================================================
// @019365c0 (2753 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  void *pvVar9;
  undefined7 uVar11;
  undefined8 uVar10;
  pthread_key_t pVar12;
  longlong lVar13;
  double dVar14;
  longlong *this;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong local_d8;
  char local_d0;
  ulonglong local_90;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  double local_40;
  longlong *local_38;
  
  plVar3 = local_80;
  FUN_019af4c0();
  if (this[0xa7] == 0) {
    if (*(int *)(this[0xab] + 0xc) == 0) {
      return;
    }
    do {
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_019562f0();
      if (((char)local_58 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x478))();
      if ((char)local_58 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    } while (*(int *)(this[0xab] + 0xc) != 0);
    return;
  }
  local_38 = (longlong *)(**(code **)(*this + 0xa60))();
  local_40 = param_2;
  dVar16 = (double)(**(code **)(&UNK_000016a8 + *this))();
  dVar14 = local_40;
  (**(code **)(&UNK_000016d0 + *this))((double)local_38 - dVar16);
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = *(uint *)(this[0xab] + 0xc);
  local_90 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) {
    local_40 = 0.0;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_38 = (longlong *)0x0;
    local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
    while( true ) {
      plVar2 = local_80;
      uVar15 = uVar15 - 1;
      FUN_01956980();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        iVar5 = -1;
      }
      else {
        local_78[0] = '\0';
        iVar5 = FUN_00d23d20();
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(&DAT_00001770 + *this))();
      plVar6 = local_38;
      if (cVar4 == '\x01' && iVar5 != -1) {
        local_40 = (double)((ulonglong)local_48 & 0xffffffff);
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(this[0xab] + 0x10) + (ulonglong)uVar15 * 8);
        if (local_38 == plVar1) {
          if (((char)local_48 == '\0') && (local_38 != (longlong *)0x0)) {
            local_40 = (double)CONCAT71((int7)((ulonglong)local_38 >> 8),1);
            local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
            FUN_00d50b00();
          }
          else {
            local_40 = (double)((ulonglong)local_48 & 0xffffffff);
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            plVar6 = (longlong *)FUN_00d50b00();
          }
          local_40 = (double)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
          plVar6 = plVar1;
          if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
            local_38 = plVar1;
            FUN_00d50b20();
          }
        }
        FUN_019562f0();
        (**(code **)(*plVar6 + 0x478))();
        local_78[0] = '\0';
        FUN_00d23f50();
        local_80 = plVar6;
        if ((local_78[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (iVar5 != -1) {
        FUN_00d23620();
      }
      if (((char)local_58 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((longlong)local_90 < 2) break;
      local_90 = local_90 - 1;
      local_48 = (double)CONCAT44(local_48._4_4_,SUB84(local_40,0));
      local_38 = plVar6;
    }
  }
  local_38 = plVar6;
  dVar16 = (double)(**(code **)(*this + 0xa58))();
  FUN_019363e0();
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (double)(**(code **)(&UNK_000016a8 + *this))();
  dVar17 = (double)(**(code **)(&UNK_000016a8 + *this))();
  if (plVar3 != (longlong *)0x0) {
    local_48 = dVar16 - local_48;
    local_78[0] = '\0';
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = plVar3;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          iVar5 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar5) break;
      lVar13 = local_70[2];
      plVar2 = *(longlong **)(lVar13 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar12 = (pthread_key_t)lVar13;
      plVar6 = plVar2;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x378))();
      plVar6 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        pvVar9 = _pthread_getspecific(pVar12);
        plVar6 = plVar2;
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar6 + 0x378))();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar6 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar18 = (double)FUN_014bb4b0();
          if (local_48 <= dVar18) {
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_014bb3e0();
            if (dVar18 <= (dVar16 - dVar17) + dVar14) {
              local_50 = '\0';
              local_58 = plVar2;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  plVar2 = plVar3;
  dVar14 = local_40;
  plVar6 = local_38;
  if (plVar3 != local_80) {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_80;
    dVar14 = local_40;
    plVar6 = local_38;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
      dVar14 = local_40;
      plVar6 = local_38;
    }
  }
  local_40 = dVar14;
  local_38 = plVar6;
  if (plVar2 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    local_78[0] = '\0';
    local_60 = 0;
    local_68 = 0;
    local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    local_70 = plVar2;
    if (*(int *)((longlong)plVar2 + 0xc) < 1) {
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
    }
    else {
      iVar5 = 0;
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
      do {
        dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
        cVar4 = (**(code **)(&DAT_00001770 + *this))();
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000016d8 + *this))();
          local_38 = local_58;
          cVar4 = SUB81(dVar14,0);
          uVar11 = (undefined7)((ulonglong)local_58 >> 8);
          if (local_58 == plVar6) {
            local_40 = dVar14;
            plVar3 = plVar6;
            if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
              local_40 = (double)CONCAT71(uVar11,1);
              if (local_50 != '\0') goto LAB_01936f36;
              local_40 = (double)CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
LAB_01936f22:
            local_38 = plVar3;
            plVar3 = local_38;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
          else {
            if (local_50 == '\0') {
              uVar10 = 0;
              if (local_58 != (longlong *)0x0) {
                uVar10 = FUN_00d50b00();
              }
              local_40 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              plVar3 = local_38;
              if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar3 = local_38;
              }
              goto LAB_01936f22;
            }
            local_40 = (double)CONCAT71(uVar11,1);
            plVar3 = local_38;
            if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
LAB_01936f36:
          local_38 = plVar3;
          (**(code **)(*this + 0x450))();
          local_58 = local_38;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = FUN_019562f0();
          local_48 = (double)CONCAT44(local_48._4_4_,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1)
                                     );
          plVar6 = local_38;
          dVar14 = local_40;
        }
        iVar5 = iVar5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      } while (iVar5 < *(int *)((longlong)plVar2 + 0xc));
    }
    local_40 = dVar14;
    local_38 = plVar6;
    FUN_0131c810();
    uVar15 = (uint)local_48;
  }
  for (iVar5 = *(int *)(this[0xab] + 0xc); plVar3 = local_38, 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_0198a800();
  }
  if ((uVar15 & 1) != 0) {
    (**(code **)(*this + 0xb48))();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40._0_1_ != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019ae3f0 (1268 bytes) — math_loop

{
  undefined1 auVar1 [16];
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  float *pfVar6;
  longlong lVar7;
  double *in_RDX;
  char *pcVar8;
  longlong *arg1;
  longlong *this;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  longlong local_a0;
  char local_98 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  fVar21 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_2;
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    pfVar6 = param_1;
    FUN_00d23310();
    lVar7 = CONCAT71((int7)((ulonglong)pfVar6 >> 8),local_98[0]);
    pcVar8 = local_38;
    if (local_98[0] != '\0') {
      pcVar8 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar8 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 == 0) {
      local_a0 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_01259520();
    fVar11 = (float)(**(code **)(*this + 0xc38))();
    local_3c = (float)(**(code **)(*this + 0xc38))();
    FUN_01e436c0();
    FUN_01e436c0();
    lVar4 = *arg1;
    if (*(int *)(lVar4 + 0xc) < 2) {
      auVar22 = ZEXT416((uint)local_3c);
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      lVar9 = 1;
      local_40 = fVar11;
      do {
        pVar5 = (pthread_key_t)lVar7;
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar9 * 8);
        if (local_a0 == lVar7) {
          if ((!bVar2) && (local_a0 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_a0 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            local_a0 = lVar7;
          }
          else {
            bVar2 = true;
            local_a0 = lVar7;
          }
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_0125a280();
        if (dVar14 < dVar12) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_0125a280();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (dVar13 < dVar14) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_01259520();
        }
        uVar15 = (**(code **)(*this + 0xc38))();
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        fVar11 = (float)uVar15;
        auVar22._8_4_ = extraout_XMM0_Dc;
        auVar22._0_8_ = uVar15;
        auVar22._12_4_ = extraout_XMM0_Dd;
        if (fVar11 <= local_3c) {
          auVar22._0_4_ = local_3c;
        }
        if (local_40 <= fVar11) {
          fVar11 = local_40;
        }
        lVar9 = lVar9 + 1;
        lVar4 = *arg1;
        lVar7 = (longlong)*(int *)(lVar4 + 0xc);
        local_3c = auVar22._0_4_;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        local_40 = fVar11;
      } while (lVar9 < lVar7);
    }
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar22 = insertps(auVar22,auVar1,0x10);
    fVar11 = auVar22._0_4_ + _DAT_0241b5d0;
    fVar23 = auVar22._4_4_ + _UNK_0241b5d4;
    fVar20 = fVar11 - fVar23;
    while (fVar20 < (fVar21 / DAT_0241b640) * DAT_0239394c) {
      fVar11 = fVar11 + _DAT_0241b5e0;
      fVar23 = fVar23 + _UNK_0241b5e4;
      fVar20 = fVar11 - fVar23;
    }
    if (in_RDX != (double *)0x0) {
      dVar12 = dVar12 + DAT_0241b680;
      dVar13 = dVar13 + DAT_02390108;
      dVar14 = ((double)(fVar19 / DAT_02390d38) - (dVar13 - dVar12)) * DAT_023942d0;
      uVar10 = -(ulonglong)(dVar13 - dVar12 < (double)(fVar19 / DAT_02390d38));
      dVar12 = (double)(~uVar10 & (ulonglong)dVar12 | (ulonglong)(dVar12 - dVar14) & uVar10);
      *in_RDX = dVar12;
      in_RDX[1] = (double)(~uVar10 & (ulonglong)dVar13 | (ulonglong)(dVar14 + dVar13) & uVar10) -
                  dVar12;
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar23;
      param_1[1] = fVar20;
    }
    if ((bVar2) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @019a40d0 (1170 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  ulonglong *arg1;
  longlong *this;
  longlong lVar12;
  longlong local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  ulonglong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  longlong local_38;
  
  plVar1 = (longlong *)*arg1;
  plVar8 = (longlong *)this[0x3d];
  if (plVar1 == plVar8) {
    return;
  }
  if (plVar1 != (longlong *)0x0) {
    local_78 = 0;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = plVar8;
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    plVar8 = (longlong *)(ulonglong)uVar3;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  if (this[0x9e] != 0) {
    this[0x9e] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x990))();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this + 0x38))();
  FUN_00d216c0();
  if (*arg1 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar8 = &local_b0;
    local_58 = *arg1;
    iVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar4 = -iVar11;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)(local_58 + 0xc) <= iVar11) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
      iVar11 = iVar4;
      if (local_68 != 0) {
        local_a8 = '\0';
        local_b0 = local_68;
        FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = local_50._4_4_;
      }
    }
    FUN_000be170();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this + 0x30))();
  (**(code **)(*this + 0x970))();
  lVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_019a42e5;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
LAB_019a42b9:
    local_70 = lVar7;
    uVar5 = FUN_0197c2b0();
    lVar7 = local_68;
    if (local_68 == 0) {
      local_40 = 0;
      local_38 = 0;
joined_r0x019a4302:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = lVar7 != 0;
      if (local_38 != 0) {
        uVar9 = (ulonglong)plVar1 & 0xffffff00;
        goto LAB_019a433d;
      }
      local_38 = 0;
      uVar9 = (ulonglong)plVar1 & 0xffffff00;
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_38 = lVar7;
        goto joined_r0x019a4302;
      }
      uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      bVar2 = true;
      local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_38 = local_68;
LAB_019a433d:
      local_a0 = *arg1;
      local_98 = '\0';
      FUN_01a17f30();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = FUN_0197c480();
    lVar12 = local_68;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    uVar10 = (undefined7)(uVar9 >> 8);
    if (local_68 == local_38) {
      if (lVar7 == 0) {
        if (local_68 == 0) {
          uVar9 = local_40 & 0xffffffff;
        }
        else {
          lVar12 = local_38;
          if (local_60 != '\0') goto joined_r0x019a43d0;
          uVar9 = CONCAT71(uVar10,1);
          local_40 = 0;
          FUN_00d50b00();
        }
      }
      else {
        uVar9 = local_40 & 0xffffffff;
      }
LAB_019a4463:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        bVar2 = false;
        local_40 = uVar9 & 0xffffffff;
        goto LAB_019a44ce;
      }
      local_40 = uVar9 & 0xffffffff;
      lVar12 = local_38;
    }
    else {
      if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if ((bool)(bVar2 & local_38 != 0)) {
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          local_38 = lVar12;
          FUN_00d50b20();
          uVar9 = CONCAT71(uVar10,1);
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          local_38 = lVar12;
        }
        goto LAB_019a4463;
      }
      if ((bool)(bVar2 & local_38 != 0)) {
        local_40 = CONCAT71(uVar6,1);
        local_38 = local_68;
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
joined_r0x019a43d0:
      local_40 = CONCAT71(uVar6,1);
      if (lVar12 == 0) {
        bVar2 = false;
        goto LAB_019a44ce;
      }
    }
    local_90 = *arg1;
    local_88 = '\0';
    FUN_01a17f30();
    bVar2 = false;
    if ((local_88 != '\0') && (bVar2 = false, local_90 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    if (local_68 != 0) goto LAB_019a42b9;
LAB_019a42e5:
    bVar2 = true;
    local_40 = 0;
LAB_019a44ce:
    lVar12 = 0;
  }
  (**(code **)(*this + 0x998))();
  (**(code **)(*this + 0xa00))();
  lVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *this + 0x40))();
  }
  (**(code **)(&DAT_00001620 + *this))();
  (**(code **)(*this + 0x540))();
  (**(code **)(*this + 0xa48))();
  if (((char)local_40 != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019ad9b0 (1065 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char in_DL;
  longlong *arg1;
  longlong *this;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar10;
  float local_88;
  longlong local_68;
  char local_60 [8];
  double local_58;
  undefined8 uStack_50;
  double local_40;
  char local_38 [8];
  
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    FUN_01e436c0();
    dVar10 = param_2;
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_60[0];
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_01259520();
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = *arg1;
    if (*(int *)(lVar5 + 0xc) < 2) {
      bVar2 = false;
      lVar8 = 0;
    }
    else {
      lVar7 = 1;
      lVar8 = 0;
      bVar2 = false;
      do {
        pVar6 = (pthread_key_t)param_1;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar2) && (lVar8 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar8 = lVar5;
          }
          else {
            bVar2 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        dVar10 = local_58;
        if (dVar9 < local_58) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0125a280();
          uStack_50 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01259520();
        if (local_40 < dVar9) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_01259520();
        }
        lVar7 = lVar7 + 1;
        lVar5 = *arg1;
        param_1 = (longlong)*(int *)(lVar5 + 0xc);
      } while (lVar7 < param_1);
    }
    if (in_DL != '\0') {
      local_88 = SUB84(param_2,0);
      dVar9 = (double)(local_88 / DAT_0241b640) * DAT_023908b8;
      local_58 = (double)(~-(ulonglong)(local_58 < DAT_0238fee8) & (ulonglong)local_58);
      local_40 = local_40 + DAT_0238fee8;
      dVar10 = local_40 - local_58;
      uStack_50 = 0;
      if (dVar9 < dVar10) {
        local_40 = dVar9 + local_58;
      }
    }
    (**(code **)(*this + 0x540))();
    (**(code **)(*this + 0xa48))();
    if (local_58 < local_40) {
      plVar1 = (longlong *)this[0x27];
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x3f0))(SUB84(local_58,0),local_40 - local_58,dVar10);
    }
    (**(code **)(*this + 0x540))();
    (**(code **)(*this + 0xa48))();
    if (local_58 < local_40) {
      FUN_00e7b500(SUB84(local_58,0),local_40 - local_58);
      (**(code **)(*this + 0xa78))();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @019a4cd0 (995 bytes) — calculation

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *arg1;
  longlong *this;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*this;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019a4d20:
    this = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019a4d20;
  }
  plVar1 = (longlong *)*this;
  plVar2 = (longlong *)*arg1;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_019a4d66;
  }
  arg1 = &DAT_02802688;
LAB_019a4d66:
  plVar2 = (longlong *)*arg1;
  uVar5 = 0;
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_01989fa0();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar5 = FUN_01989fa0();
  }
  if (uVar4 == uVar5) {
    (**(code **)(*plVar1 + 0x928))();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x928))();
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = uVar4;
    if ((local_50 != 0) && (local_50 != 0)) {
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar5 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = uVar4 & 0xff;
      uVar5 = uVar5 & 0xff;
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = 0xffffffff;
  if ((int)uVar5 <= (int)uVar4) {
    uVar8 = (ulonglong)((int)uVar5 < (int)uVar4);
  }
  return uVar8;
}




// ==================================================
// @019a5c40 (884 bytes) — math_loop

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong arg1;
  undefined8 *this;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *this = puVar5;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    lVar6 = *(longlong *)(arg1 + 0x38);
    uVar1 = *(uint *)(lVar6 + 0xc);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      local_38 = (longlong *)0x0;
      bVar2 = false;
      do {
        plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = plVar9;
        local_40 = '\0';
        if ((DAT_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_027142d8 = FUN_0006d940();
          _DAT_027142c0 = "MUEditorSubview";
          _DAT_027142c8 = 0x168;
          _DAT_027142d0 = FUN_0034d130;
          _DAT_027142e0 = 0;
          uRam00000000027142e8 = 0;
          _DAT_027142f0 = 0;
          _DAT_02714368 = 0;
          uRam0000000002714370 = 0;
          _DAT_02714378 = 0;
          DAT_0271437a = 1;
          _DAT_027142f8 = 0;
          uRam0000000002714300 = 0;
          _DAT_02714308 = 0;
          uRam0000000002714310 = 0;
          _DAT_02714318 = 0;
          uRam0000000002714320 = 0;
          _DAT_02714328 = 0;
          uRam0000000002714330 = 0;
          _DAT_02714338 = 0;
          uRam0000000002714340 = 0;
          _DAT_02714348 = 0;
          uRam0000000002714350 = 0;
          _DAT_02714358 = 0;
          uRam0000000002714360 = 0;
          DAT_02714383 = 0;
          _DAT_0271437b = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        plVar9 = *pplVar7;
        if (plVar9 == local_38) {
          if ((!bVar2) && (plVar9 != (longlong *)0x0)) {
            plVar9 = local_38;
            if (*(char *)(pplVar7 + 1) != '\0') goto LAB_019a5d64;
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar9;
              bVar2 = true;
              goto LAB_019a5db0;
            }
          }
          else {
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019a5d64:
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          local_38 = plVar9;
          bVar2 = true;
        }
LAB_019a5db0:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_38;
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x928))();
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_48 = local_68;
          local_40 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_48 = plVar9;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((ulonglong)uVar1 - 1 == lVar8) goto LAB_019a5f90;
        lVar6 = *(longlong *)(arg1 + 0x38);
        lVar8 = lVar8 + 1;
      } while( true );
    }
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5f90:
    *this = puVar5;
    *(undefined1 *)(this + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return this;
}




// ==================================================
// @019a68b0 (819 bytes) — math_loop

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong arg1;
  undefined8 *this;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong **pplVar10;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  ulonglong local_48;
  uint local_3c;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar9) {
    local_48 = (ulonglong)uVar9;
    local_50 = 0;
    plVar7 = (longlong *)0x0;
    do {
      local_3c = uVar9 - 1;
      plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
      local_60 = plVar8;
      local_58 = '\0';
      uVar5 = 0;
      if ((DAT_02702df0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        _DAT_027142d8 = FUN_0006d940();
        _DAT_027142c0 = "MUEditorSubview";
        _DAT_027142c8 = 0x168;
        _DAT_027142d0 = FUN_0034d130;
        _DAT_027142e0 = 0;
        uRam00000000027142e8 = 0;
        _DAT_027142f0 = 0;
        _DAT_02714368 = 0;
        uRam0000000002714370 = 0;
        _DAT_02714378 = 0;
        DAT_0271437a = 1;
        _DAT_027142f8 = 0;
        uRam0000000002714300 = 0;
        _DAT_02714308 = 0;
        uRam0000000002714310 = 0;
        _DAT_02714318 = 0;
        uRam0000000002714320 = 0;
        _DAT_02714328 = 0;
        uRam0000000002714330 = 0;
        _DAT_02714338 = 0;
        uRam0000000002714340 = 0;
        _DAT_02714348 = 0;
        uRam0000000002714350 = 0;
        _DAT_02714358 = 0;
        uRam0000000002714360 = 0;
        DAT_02714383 = 0;
        _DAT_0271437b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar10 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      cVar2 = (char)local_50;
      if (plVar8 == plVar7) {
        if ((cVar2 == '\0') && (plVar8 != (longlong *)0x0)) {
          uVar5 = local_50;
          plVar8 = plVar7;
          if (*(char *)(pplVar10 + 1) != '\0') goto LAB_019a69c7;
          local_38 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
          FUN_00d50b00();
          uVar6 = local_48;
          uVar9 = local_3c;
        }
        else {
          local_38 = local_50;
          uVar6 = local_48;
          plVar8 = plVar7;
          uVar9 = local_3c;
        }
      }
      else if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        uVar9 = local_3c;
        uVar6 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a69c7:
        *(undefined1 *)(pplVar10 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        uVar6 = local_48;
        uVar9 = local_3c;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar8 + 0x960))(param_1), cVar2 != '\0')) {
        local_58 = '\0';
        local_60 = plVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((longlong)uVar6 < 2) goto LAB_019a6b8d;
      local_48 = uVar6 - 1;
      lVar4 = *(longlong *)(arg1 + 0x38);
      local_50 = local_38;
      plVar7 = plVar8;
    } while( true );
  }
  cVar2 = '\0';
  plVar8 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
joined_r0x019a6bba:
  if (iVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    FUN_00d50b20();
  }
  else {
    *this = puVar3;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((cVar2 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return this;
LAB_019a6b8d:
  cVar2 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
  goto joined_r0x019a6bba;
}




// ==================================================
// @019a5880 (739 bytes) — math_loop

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong arg1;
  undefined8 *this;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(arg1 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar1 < 1) {
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5b3f:
    *this = puVar6;
    *(undefined1 *)(this + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return this;
  }
  lVar11 = 0;
  plVar9 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar10 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
    local_40 = plVar10;
    local_38 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    plVar10 = *pplVar8;
    if (plVar10 == plVar9) {
      if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
        plVar10 = plVar9;
        if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a5983;
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar10;
          bVar2 = true;
          goto LAB_019a59d0;
        }
      }
      else {
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019a5983:
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      plVar9 = plVar10;
      bVar2 = true;
    }
LAB_019a59d0:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x928))();
      plVar3 = local_40;
      plVar10 = (longlong *)*param_2;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        local_38 = '\0';
        local_40 = plVar9;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((ulonglong)uVar1 - 1 == lVar11) goto LAB_019a5b3f;
    lVar7 = *(longlong *)(arg1 + 0x38);
    lVar11 = lVar11 + 1;
  } while( true );
}




// ==================================================
// @019a7930 (714 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  longlong arg1;
  undefined8 *this;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  ulonglong local_40;
  uint local_34;
  
  lVar4 = *(longlong *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < 1) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  local_48 = (ulonglong)uVar9;
  local_40 = 0;
  plVar8 = (longlong *)0x0;
  do {
    local_34 = uVar9 - 1;
    plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
    local_58 = plVar1;
    local_50 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_58;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar5;
    uVar11 = (undefined7)((ulonglong)plVar1 >> 8);
    if (plVar7 == plVar8) {
      if (((char)local_40 == '\0') && (plVar7 != (longlong *)0x0)) {
        plVar7 = plVar8;
        if (*(char *)(pplVar5 + 1) != '\0') goto LAB_019a7a14;
        uVar10 = CONCAT71(uVar11,1);
        FUN_00d50b00();
        uVar6 = local_48;
        uVar9 = local_34;
      }
      else {
        uVar10 = local_40 & 0xffffffff;
        uVar6 = local_48;
        plVar7 = plVar8;
        uVar9 = local_34;
      }
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = local_34;
      uVar6 = local_48;
      uVar10 = CONCAT71(uVar11,1);
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a7a14:
      *(undefined1 *)(pplVar5 + 1) = 0;
      uVar10 = CONCAT71(uVar11,1);
      uVar6 = local_48;
      uVar9 = local_34;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x960))(param_1), cVar2 != '\0')) {
      *(undefined1 *)(this + 1) = 0;
      if ((char)uVar10 == '\0') {
        FUN_00d50b00();
      }
      *this = plVar7;
      *(undefined1 *)(this + 1) = 1;
      return;
    }
    if ((longlong)uVar6 < 2) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      if ((char)uVar10 == '\0') {
        return;
      }
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_48 = uVar6 - 1;
    lVar4 = *(longlong *)(arg1 + 0x38);
    local_40 = uVar10 & 0xffffffff;
    plVar8 = plVar7;
  } while( true );
}




// ==================================================
// @019a6f50 (657 bytes) — math_loop

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong arg1;
  undefined8 *this;
  longlong *plVar9;
  char cVar10;
  longlong **pplVar11;
  ulonglong local_68;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(arg1 + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  local_68 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    plVar9 = (longlong *)0x0;
    local_40 = 0;
    local_48 = puVar4;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7 * 8);
      local_50 = '\0';
      local_58 = plVar2;
      uVar6 = FUN_0082d880();
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar11 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      puVar4 = local_48;
      plVar8 = *pplVar11;
      if (plVar8 == plVar9) {
        plVar3 = plVar9;
        local_38 = local_40;
        if (((char)local_40 == '\0') && (plVar8 != (longlong *)0x0)) {
          plVar8 = plVar9;
          if (*(char *)(pplVar11 + 1) != '\0') goto LAB_019a7055;
          local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00d50b00();
        }
      }
      else if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        puVar4 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_019a7055:
        *(undefined1 *)(pplVar11 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        puVar4 = local_48;
      }
      plVar9 = plVar3;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x928))();
        plVar8 = local_58;
        plVar2 = (longlong *)*param_2;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == plVar2) {
          local_50 = '\0';
          local_58 = plVar9;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_68 < 2) goto LAB_019a718f;
      local_68 = local_68 - 1;
      lVar5 = *(longlong *)(arg1 + 0x38);
      local_40 = local_38;
    } while( true );
  }
  cVar10 = '\0';
  plVar9 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
joined_r0x019a71b2:
  if (iVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    FUN_00d50b20();
  }
  else {
    *this = puVar4;
    *(undefined1 *)(this + 1) = 1;
  }
  if ((cVar10 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return this;
LAB_019a718f:
  cVar10 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  goto joined_r0x019a71b2;
}




// ==================================================
// @019a7590 (638 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong arg1;
  undefined8 *this;
  longlong **pplVar8;
  ulonglong local_80;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  local_50 = puVar3;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(arg1 + 0x38);
  uVar6 = *(uint *)(lVar4 + 0xc);
  local_80 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    do {
      uVar6 = uVar6 - 1;
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar6 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar5 = FUN_0082d880();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 == local_38) {
        if (((char)local_48 == '\0') && (plVar7 != (longlong *)0x0)) {
          plVar7 = local_38;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a7696;
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          FUN_00d50b00();
          plVar7 = local_38;
        }
        else {
          local_40 = local_48;
          plVar7 = local_38;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar7 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a7696:
        *(undefined1 *)(pplVar8 + 1) = 0;
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      local_38 = plVar7;
      if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = local_40;
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar1 = local_38;
        FUN_01e437f0(param_1);
        cVar2 = (**(code **)(*plVar1 + 0x920))();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_80 < 2) goto LAB_019a77ce;
      local_80 = local_80 - 1;
      lVar4 = *(longlong *)(arg1 + 0x38);
      local_48 = uVar5;
    } while( true );
  }
  uVar5 = 0;
  local_38 = (longlong *)0x0;
LAB_019a77ce:
  puVar3 = local_50;
  if (*(int *)((longlong)local_50 + 0xc) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this = puVar3;
  *(undefined1 *)(this + 1) = 1;
  if (((char)uVar5 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this;
}




// ==================================================
// @019ad3e0 (633 bytes) — math_loop

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *arg1;
  longlong this;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong *plVar11;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  lVar5 = *(longlong *)(this + 0x38);
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar8 = 0;
  plVar11 = (longlong *)0x0;
  local_38 = 0;
  do {
    plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
    local_48 = plVar2;
    local_40 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_48;
      if (cVar3 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar6;
    uVar10 = (undefined7)((ulonglong)plVar2 >> 8);
    if (plVar7 == plVar11) {
      if (((char)local_38 == '\0') && (plVar7 != (longlong *)0x0)) {
        plVar7 = plVar11;
        if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019ad4b4;
        uVar9 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
      else {
        uVar9 = local_38 & 0xffffffff;
      }
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar9 = CONCAT71(uVar10,1);
        if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = plVar7;
          goto LAB_019ad500;
        }
      }
      else {
        if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019ad4b4:
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      uVar9 = CONCAT71(uVar10,1);
      plVar11 = plVar7;
    }
LAB_019ad500:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x928))();
      plVar7 = local_48;
      plVar2 = (longlong *)*arg1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == plVar2) {
        (**(code **)(*plVar11 + 0x620))();
      }
    }
    if ((ulonglong)uVar1 - 1 == lVar8) {
      if ((char)uVar9 == '\0') {
        return;
      }
      if (plVar11 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar5 = *(longlong *)(this + 0x38);
    lVar8 = lVar8 + 1;
    local_38 = uVar9 & 0xffffffff;
  } while( true );
}




// ==================================================
// @019aeb20 (592 bytes) — calculation

{
  char cVar1;
  undefined8 uVar2;
  longlong *arg1;
  longlong *this;
  longlong lVar3;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  if (*arg1 == 0) {
    if (*(char *)((longlong)this + 0x35c) == '\0') {
      return;
    }
    (**(code **)(*this + 0xce0))(DAT_023b3490,this + 0x6e);
    *(undefined1 *)((longlong)this + 0x35c) = 0;
    return;
  }
  uVar2 = (**(code **)(*this + 0xe20))();
  lVar3 = local_48;
  local_58 = local_48;
  uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aebc5;
    }
LAB_019aec25:
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    if (local_48 == 0) goto LAB_019aec25;
LAB_019aebc5:
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (*arg1 != 0) {
        local_40 = '\0';
        local_48 = *arg1;
        cVar1 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_58;
        if (cVar1 == '\0') goto LAB_019aec29;
      }
      uVar4 = CONCAT71(uVar5,1);
      local_38 = 0;
      local_50 = 0;
      FUN_00d50b00();
      goto LAB_019aec97;
    }
LAB_019aec29:
    local_38 = 0;
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_0039e8b0();
  lVar3 = local_48;
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    uVar4 = CONCAT71(uVar5,1);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
    uVar4 = CONCAT71(uVar5,1);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_019aec97:
  local_50 = uVar4 & 0xffffffff;
  if (*(char *)((longlong)this + 0x35c) == '\0') {
    *(undefined1 *)((longlong)this + 0x35c) = 1;
    lVar6 = (**(code **)(*this + 0xa50))();
    this[0x6c] = lVar6;
    this[0x6d] = param_2;
    lVar6 = (**(code **)(*this + 0xa98))();
    this[0x6e] = lVar6;
  }
  local_60 = '\0';
  local_68 = lVar3;
  (**(code **)(*this + 0xca8))(local_80,local_90);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0xce0))(DAT_023b3490,local_80);
  if ((char)local_38 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019ae080 (562 bytes) — math_loop

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char in_DL;
  longlong *arg1;
  longlong *this;
  longlong lVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 in_XMM1_Dd;
  undefined1 local_48 [24];
  undefined8 uVar8;
  
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  lVar4 = *arg1;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      local_48._0_8_ = 0;
    }
    else {
      lVar5 = 0;
      local_48._0_16_ = ZEXT816(0);
      auVar9._0_4_ = 0.0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        fVar6 = (float)(**(code **)(*this + 0xc38))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        fVar1 = fVar6;
        if (lVar5 == 0) {
          local_48._0_16_ = ZEXT416((uint)fVar6);
        }
        else {
          if (auVar9._0_4_ <= fVar6) {
            fVar1 = auVar9._0_4_;
          }
          if ((float)local_48._0_4_ < fVar6) {
            local_48._0_16_ = ZEXT416((uint)fVar6);
          }
        }
        in_XMM1_Dd = 0;
        fVar6 = 0.0;
        lVar5 = lVar5 + 1;
        lVar4 = *arg1;
        auVar9._0_4_ = fVar1;
      } while (lVar5 < *(int *)(lVar4 + 0xc));
      auVar9 = insertps(local_48._0_16_,fVar1,0x10);
      local_48._0_8_ = auVar9._0_8_;
    }
    FUN_01e436c0();
    if (DAT_023908ec <= fVar6) {
      dVar7 = (double)(**(code **)(*this + 0x928))();
      if (in_DL == '\0') {
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = in_XMM1_Dd;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar11._4_12_ = auVar3._4_12_;
        auVar11._0_4_ =
             fVar6 / (((float)local_48._0_4_ + _DAT_0241b5b0) -
                     ((float)local_48._4_4_ + _UNK_0241b5b4));
        uVar8 = auVar11._0_8_;
      }
      else {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar6;
        auVar2._8_4_ = in_XMM1_Dd;
        auVar2._12_4_ = in_XMM1_Dd;
        do {
          local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5b0;
          local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5b4;
          auVar10._4_12_ = auVar2._4_12_;
          auVar10._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
          uVar8 = auVar10._0_8_;
        } while ((float)dVar7 < auVar10._0_4_ * DAT_0241b644);
        auVar9._0_4_ = auVar10._0_4_;
        if (in_DL != '\0') {
          while (DAT_023908e0 * auVar9._0_4_ < DAT_02390d28) {
            local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5c0;
            local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5c4;
            auVar9._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
            auVar9._4_12_ = auVar10._4_12_;
            uVar8 = auVar9._0_8_;
          }
        }
      }
      (**(code **)(*this + 0xc08))(uVar8);
      (**(code **)(*this + 0x540))();
      (**(code **)(*this + 0xa48))();
      FUN_00e7b4f0();
      (**(code **)(*this + 0xaa0))();
    }
  }
  return;
}




// ==================================================
// @019a72b0 (543 bytes) — math_loop

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong arg1;
  undefined8 *this;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  
  lVar6 = *(longlong *)(arg1 + 0x38);
  if (*(int *)(lVar6 + 0xc) < 1) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  uVar7 = (ulonglong)(*(int *)(lVar6 + 0xc) - 1);
  local_40 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + uVar7 * 8);
    local_70 = '\0';
    local_78 = plVar1;
    FUN_0082d880();
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar5 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar8 = *pplVar9;
    if (plVar8 == local_40) {
      plVar3 = local_40;
      bVar4 = bVar2;
      if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
        plVar8 = local_40;
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019a738a;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar3 = plVar8;
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a738a:
      *(undefined1 *)(pplVar9 + 1) = 0;
      plVar3 = plVar8;
      bVar4 = true;
    }
    bVar2 = bVar4;
    local_40 = plVar3;
    if ((local_70 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01e437f0(param_1);
      cVar5 = (**(code **)(*local_40 + 0x920))();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(undefined1 *)(this + 1) = 0;
        if (!bVar2) {
          FUN_00d50b00();
        }
        *this = local_40;
        *(undefined1 *)(this + 1) = 1;
        return this;
      }
    }
    if ((longlong)uVar7 < 1) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      if (!bVar2) {
        return this;
      }
      if (local_40 == (longlong *)0x0) {
        return this;
      }
      FUN_00d50b20();
      return this;
    }
    uVar7 = uVar7 - 1;
    lVar6 = *(longlong *)(arg1 + 0x38);
  } while( true );
}




// ==================================================
// @005b9d10 (520 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1a0;
  
  if ((DAT_02702df0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0271437b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0059c6c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



