// ===== MUTool — Annotated small functions =====
// 34 readable functions

// ==================================================
// @01a5a220 (2990 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined7 uVar14;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  void *pvVar13;
  pthread_key_t pVar15;
  uint uVar16;
  int iVar17;
  longlong *this;
  ulonglong uVar18;
  longlong *plVar19;
  longlong local_a8;
  char local_a0;
  ulonglong local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_00d23340();
  local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
  pplVar9 = &local_80;
  if ((char)local_80 == '\0') {
    pplVar9 = &local_50;
  }
  *(undefined1 *)pplVar9 = 0;
  if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_88 == (longlong *)0x0) {
    return;
  }
  local_38 = local_88;
  if ((char)this[6] == '\0') {
    while (*(int *)(this[5] + 0xc) != 0) {
      FUN_00d23340();
      local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a5f2f0();
      if (((char)local_50 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
      pplVar9 = &local_80;
      if ((char)local_80 == '\0') {
        pplVar9 = &local_50;
      }
      *(undefined1 *)pplVar9 = 0;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_88 + 0x478))();
      if ((char)local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    local_58 = 0;
    plVar19 = local_78;
  }
  else {
    (**(code **)(*local_88 + 0xa60))();
    uVar8 = FUN_01a59d50();
    uVar14 = (undefined7)((ulonglong)uVar8 >> 8);
    if (local_88 == (longlong *)0x0) {
      bVar3 = 1;
      local_98 = CONCAT71(uVar14,1) & 0xffffffff;
      plVar12 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
      uVar8 = 0;
    }
    else {
      if ((char)local_80 == '\0') {
        uVar8 = FUN_00d50b00();
        uVar14 = (undefined7)((ulonglong)uVar8 >> 8);
      }
      local_40 = (longlong *)CONCAT71(uVar14,1);
      local_98 = 0;
      bVar3 = 0;
      uVar8 = CONCAT71(uVar14,1);
      plVar12 = local_88;
    }
    uVar16 = *(uint *)(this[5] + 0xc);
    uVar18 = (ulonglong)uVar16;
    if (0 < (int)uVar16) {
      while( true ) {
        local_60 = plVar12;
        uVar16 = uVar16 - 1;
        FUN_01a5ff20();
        local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_80._0_1_ = '\0';
        cVar6 = FUN_00d24090();
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar6 == '\0') ||
           (cVar6 = (**(code **)(*this + 0x440))(), plVar12 = local_60, cVar6 == '\0')) {
          FUN_01a5f2f0();
          plVar12 = local_60;
          (**(code **)(**(longlong **)(*(longlong *)(this[5] + 0x10) + (ulonglong)uVar16 * 8) +
                      0x478))();
          FUN_00d23620();
        }
        else {
          FUN_0198a800();
        }
        if (((char)local_50 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((longlong)uVar18 < 2) break;
        uVar18 = uVar18 - 1;
        plVar12 = local_60;
      }
    }
    (**(code **)(*local_38 + 0xa58))();
    uVar10 = FUN_01a59d50();
    plVar19 = local_78;
    pcVar4 = DAT_026342f8;
    if (local_88 == plVar12) {
      plVar5 = plVar12;
      if ((bool)(bVar3 & local_88 != (longlong *)0x0)) {
        local_58 = CONCAT71((uint7)(uint3)(local_98 >> 8),1);
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
          pcVar4 = DAT_026342f8;
          plVar19 = local_78;
        }
      }
      else {
        local_58 = uVar8;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
          pcVar4 = DAT_026342f8;
          plVar19 = local_78;
        }
      }
    }
    else if ((char)local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      pcVar4 = DAT_026342f8;
      plVar19 = local_78;
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = DAT_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      plVar5 = local_88;
      if (((byte)local_40 & plVar12 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
        pcVar4 = DAT_026342f8;
        plVar19 = local_78;
        plVar5 = local_88;
      }
    }
    local_78 = plVar5;
    DAT_026342f8 = pcVar4;
    if (local_78 != (longlong *)0x0) {
      local_70._4_4_ = 0;
      local_80._0_1_ = '\0';
      local_88 = (longlong *)0x0;
      local_70 = 0xffffffff;
      local_68 = 0;
      bVar1 = false;
      plVar12 = (longlong *)0x0;
      bVar7 = false;
      local_60 = local_78;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar17 = -local_70._4_4_;
          }
          else {
            iVar17 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar17);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar17 = 0;
          }
          local_70 = CONCAT44(iVar17,(int)local_70);
        }
        plVar19 = local_60;
        lVar11 = (longlong)(int)local_70;
        iVar17 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar17);
        local_40 = plVar12;
        if (*(int *)((longlong)local_78 + 0xc) <= iVar17) break;
        local_88 = *(longlong **)(local_78[2] + 8 + lVar11 * 8);
        if (0 < *(int *)(this[5] + 0xc)) {
          lVar11 = 0;
          do {
            FUN_01a5ff20();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 == local_88) {
              if (*(longlong *)(*(longlong *)(this[5] + 0x10) + lVar11 * 8) != 0) {
                FUN_00d50b00();
                FUN_00d50b20();
                plVar12 = local_40;
                goto LAB_01a5a6f0;
              }
              break;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(this[5] + 0xc));
        }
        cVar6 = (**(code **)(*this + 0x440))();
        plVar19 = local_40;
        plVar12 = local_40;
        if (cVar6 != '\0') {
          plVar12 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined2 *)(plVar12 + 0x29) = 0;
          plVar12[0x28] = 0;
          *(undefined8 *)((longlong)plVar12 + 0x14c) = 0;
          *(undefined8 *)((longlong)plVar12 + 0x154) = 0;
          plVar12[0x2b] = 0;
          plVar12[0x2c] = 0;
          pVar15 = 0x26342d0;
          *plVar12 = (longlong)&DAT_026342e0;
          plVar12[2] = (longlong)&DAT_02634c68;
          plVar12[0x27] = (longlong)&DAT_02634ca8;
          plVar12[0x2d] = (longlong)&DAT_02634cd8;
          plVar12[0x2e] = 0;
          plVar12[0x2f] = 0;
          (*pcVar4)();
          if (plVar12 == plVar19) {
            plVar12 = plVar19;
            if (bVar1) {
              FUN_00d50b20();
              bVar2 = bVar1;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (plVar19 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar13 = _pthread_getspecific(pVar15);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          plVar19 = local_50;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 == (longlong *)0x0) {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff00();
            plVar19 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 != (longlong *)0x0) {
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar13 = _pthread_getspecific(pVar15);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              plVar19 = local_50;
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_0198a7b0();
              if (plVar19 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar13 = _pthread_getspecific(pVar15);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            plVar19 = local_50;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_0198a7b0();
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*this + 0x438))();
          FUN_01a5f2f0();
          (**(code **)(*local_38 + 0x450))();
          FUN_0198a800();
          local_48 = '\0';
          local_50 = plVar12;
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar7 = true;
          bVar1 = bVar2;
        }
LAB_01a5a6f0:
      }
      FUN_01a5d060();
      if (bVar7) {
        FUN_00d23340();
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_50;
        }
        local_50 = (longlong *)CONCAT71(local_50._1_7_,(char)local_80);
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 == '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        (**(code **)(*local_88 + 0xb48))();
        FUN_00d50b20();
      }
      goto LAB_01a5ad27;
    }
  }
  local_78 = plVar19;
  plVar12 = (longlong *)0x0;
  bVar1 = false;
  plVar19 = (longlong *)0x0;
LAB_01a5ad27:
  FUN_00d50b20();
  if ((bVar1) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00348560 (2768 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  longlong *arg1;
  longlong *this;
  uint uVar11;
  undefined8 uVar12;
  double dVar13;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  local_100 = *param_2;
  local_f8 = '\0';
  uVar12 = FUN_01948a20(param_1,&local_100);
  lVar1 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (uVar12 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_f0 = *param_2;
    local_e8 = '\0';
    (**(code **)(&UNK_00001850 + *arg1))(uVar12,&local_f0);
    local_48 = local_70;
    if (local_70 == 0) {
      local_48 = lVar1;
    }
    else if (local_68 == '\0') {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = lVar1;
    if ((char)param_1 == '\0') goto LAB_00349048;
  }
  lVar1 = DAT_026e1810;
  if (DAT_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar13 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar13 * DAT_023907c0);
  dVar13 = dVar13 * DAT_023907c0 - _DAT_023907c8;
  pVar8 = 0xaaaaaaab;
  FUN_0071a120();
  if ((((local_68 == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68 != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar13 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_a0 = lVar1;
  local_98 = '\0';
  FUN_000175c0();
  lVar7 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    local_68 = '\0';
    local_70 = lVar7;
    bVar3 = FUN_00c70bc0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar7 != 0 & bVar3) != 0) {
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    lVar1 = local_70;
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_00349048;
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == 0) goto LAB_00349048;
    local_68 = 0;
    local_70 = 0;
    local_60 = lVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar11 = 0;
LAB_003488b9:
      lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar11 * 8);
      pVar8 = uVar11;
      local_70 = lVar7;
      pvVar5 = _pthread_getspecific(uVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_78 = local_a0;
      if ((((local_98 == '\0') && (local_a0 != 0)) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      lVar6 = local_a0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (pthread_key_t)local_78;
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_a8 = local_a0;
        if (local_98 == '\0') {
          if (((local_a0 != 0) && (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_90 = local_a8;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          do {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar10 = -local_88._4_4_;
              }
              else {
                iVar10 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar10);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar10 = 0;
              }
              local_88 = CONCAT44(iVar10,(int)local_88);
            }
            lVar6 = (longlong)(int)local_88;
            iVar10 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar10);
            if (*(int *)(local_90 + 0xc) <= iVar10) goto LAB_00349008;
            lVar9 = *(longlong *)(local_90 + 0x10);
            local_a0 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar6 = local_40;
            if (((local_38 == '\0') && (local_40 != 0)) &&
               ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
              FUN_00d50b20();
            }
            if (lVar6 != lVar7) {
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              lVar2 = local_40;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) goto LAB_00348c2c;
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      goto LAB_00349020;
    }
LAB_00349037:
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_00349048:
  *this = local_48;
  *(undefined1 *)(this + 1) = 1;
  return this;
LAB_00348c2c:
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  local_e0 = local_40;
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
  if (pvVar5 != (void *)0x0) {
    local_e0 = local_40;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar9 = *(longlong *)(local_e0 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      local_e0 = lVar9;
    }
  }
  pVar8 = (pthread_key_t)lVar9;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507970();
  FUN_015084d0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508610();
  FUN_015085a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
LAB_00349008:
  FUN_0015edf0();
  FUN_00d50b20();
LAB_00349020:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  uVar11 = uVar11 + 1;
  local_58 = CONCAT44(local_58._4_4_,uVar11);
  if (*(int *)(lVar1 + 0xc) <= (int)uVar11) goto LAB_00349037;
  goto LAB_003488b9;
}




// ==================================================
// @01a5e160 (2679 bytes) — math_loop

{
  double dVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *arg1;
  longlong this;
  undefined7 uVar17;
  longlong lVar16;
  bool bVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar20;
  undefined4 uVar21;
  double dVar22;
  float fStack_114;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_38;
  
  if (*param_2 == 0) {
    uVar15 = 0;
    goto LAB_01a5e36a;
  }
  uVar19 = FUN_01a58dc0();
  local_80 = local_68;
  if (local_68 == (longlong *)0x0) {
    bVar2 = true;
    bVar18 = false;
    local_80 = (longlong *)0x0;
LAB_01a5e2e9:
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar7 = FUN_01a58d30(uVar19,&local_b8);
    uVar15 = (ulonglong)uVar7;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar18) goto LAB_01a5e36a;
  }
  else {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_80))();
    if (cVar5 != '\0') {
      iVar6 = FUN_01d3a5a0();
      bVar18 = true;
      if (iVar6 == 1) {
        iVar6 = FUN_01d3b630();
        if (iVar6 == 1) {
          (**(code **)("/usr/lib/libobjc.A.dylib" + *local_80 + 0x18))();
          plVar9 = local_80;
          FUN_01d3abf0();
          local_a8 = FUN_01e466c0();
          (**(code **)(*plVar9 + 0xe30))();
          local_70 = local_68;
          if (local_68 == (longlong *)0x0) {
            local_74 = 1;
            local_88 = 0;
          }
          else {
            plVar9 = local_68;
            if (local_60 == '\0') {
              uVar8 = FUN_00d50b00();
              if ((local_60 == '\0') || (local_68 == (longlong *)0x0)) {
                local_74 = 0;
                local_88 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                goto LAB_01a5e394;
              }
              plVar9 = (longlong *)FUN_00d50b20();
            }
            local_88 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
            local_74 = 0;
          }
LAB_01a5e394:
          iVar6 = FUN_01d3b620();
          if (iVar6 == 2) {
            if (*(longlong *)(this + 0x38) == 0) {
              uVar8 = 0;
              plVar14 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              FUN_00d50b20();
              lVar16 = *(longlong *)(this + 0x38);
              if (lVar16 != 0) {
                FUN_00d50b00();
              }
              FUN_00d74120();
              plVar14 = local_68;
              if (local_68 == (longlong *)0x0) {
                plVar14 = (longlong *)0x0;
                uVar8 = 0;
              }
              else {
                uVar17 = (undefined7)((ulonglong)this >> 8);
                if (local_60 == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar17,1);
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                  uVar8 = CONCAT71(uVar17,1);
                }
              }
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_70 == (longlong *)0x0) {
              local_38._0_1_ = '\0';
              plVar9 = (longlong *)0x0;
            }
            else {
              local_60 = '\0';
              local_68 = (longlong *)0x0;
              local_58 = local_70;
              local_48 = 0;
              local_50 = 0;
              local_a8 = uVar8;
              if (*(int *)((longlong)local_70 + 0xc) < 1) {
                local_38 = 0;
                plVar9 = (longlong *)0x0;
              }
              else {
                lVar16 = 0;
                local_38 = 0;
                plVar13 = (longlong *)0x0;
                do {
                  pVar12 = (pthread_key_t)local_38;
                  local_38 = local_38 & 0xffffffff;
                  local_68 = *(longlong **)(local_70[2] + lVar16 * 8);
                  pvVar11 = _pthread_getspecific(pVar12);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_012708c0();
                  plVar9 = local_98;
                  uVar17 = (undefined7)((ulonglong)uVar8 >> 8);
                  cVar5 = (char)local_38;
                  if (local_98 == plVar13) {
                    plVar9 = plVar13;
                    if ((cVar5 == '\0') && (local_98 != (longlong *)0x0)) {
                      local_38 = CONCAT71(uVar17,1);
                      if (local_90 != '\0') goto LAB_01a5e987;
                      local_38 = CONCAT71(uVar17,1);
                      FUN_00d50b00();
                    }
joined_r0x01a5e960:
                    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_90 == '\0') {
                      if (local_98 != (longlong *)0x0) {
                        uVar8 = FUN_00d50b00();
                      }
                      local_38 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                      if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto joined_r0x01a5e960;
                    }
                    local_38 = CONCAT71(uVar17,1);
                    if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
LAB_01a5e987:
                  lVar4 = DAT_027bf050;
                  if ((plVar9 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
                    plVar13 = plVar9;
                    if (DAT_027bf050 != 0) {
                      FUN_00d50b00();
                    }
                    pVar12 = (pthread_key_t)plVar13;
                    cVar5 = (**(code **)(*plVar14 + 0x50))();
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                    lVar4 = DAT_027e1e80;
                    if (cVar5 == '\0') {
                      if (DAT_027e1e80 != 0) {
                        FUN_00d50b00();
                      }
                      cVar5 = (**(code **)(*plVar14 + 0x50))();
                      if (lVar4 != 0) {
                        FUN_00d50b20();
                      }
                      lVar4 = DAT_027bf048;
                      if (cVar5 == '\0') {
                        if (DAT_027bf048 != 0) {
                          FUN_00d50b00();
                        }
                        cVar5 = (**(code **)(*plVar14 + 0x50))();
                        if (lVar4 != 0) {
                          FUN_00d50b20();
                        }
                        if (cVar5 != '\0') {
                          pvVar11 = _pthread_getspecific(pVar12);
                          if (pvVar11 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_012dfbc0();
                        }
                      }
                      else {
                        pvVar11 = _pthread_getspecific(pVar12);
                        if (pvVar11 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012df8d0();
                      }
                    }
                    else {
                      pvVar11 = _pthread_getspecific(pVar12);
                      if (pvVar11 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012dfc10();
                    }
                  }
                  lVar16 = lVar16 + 1;
                  local_50 = CONCAT44(local_50._4_4_,(int)lVar16);
                  plVar13 = plVar9;
                } while ((int)lVar16 < *(int *)((longlong)local_70 + 0xc));
              }
              FUN_001159b0();
              uVar8 = local_a8;
            }
            if (((char)uVar8 != '\0') && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar9 = (longlong *)0x0;
            local_38._0_1_ = '\0';
            uVar8 = local_a8;
LAB_01a5e430:
            uVar3 = uVar8;
            (**(code **)(*local_80 + 0x658))();
            plVar14 = local_68;
            plVar13 = (longlong *)*arg1;
            if (plVar13 != local_68) {
              lVar16 = arg1[1];
              if (local_60 != '\0') {
                *arg1 = (longlong)local_68;
                if (((char)lVar16 != '\0') && (plVar13 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a5e481;
              }
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (longlong)plVar14;
              if (((char)lVar16 != '\0') && (plVar13 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a5e4c3:
              *(undefined1 *)(arg1 + 1) = 1;
              if (*arg1 == 0) goto LAB_01a5e76d;
LAB_01a5e4d4:
              uVar7 = FUN_01d3a5a0();
              plVar14 = (longlong *)(ulonglong)uVar7;
              if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (uVar7 == 6) goto LAB_01a5e781;
              iVar6 = FUN_01d3a5a0();
              uVar8 = uVar3;
              if (iVar6 == 5) {
                FUN_01d3abf0();
                local_a8 = FUN_01e466c0();
                uVar8 = local_a8;
                if (local_70 != (longlong *)0x0) {
                  local_60 = '\0';
                  local_68 = (longlong *)0x0;
                  local_58 = local_70;
                  local_50 = 0xffffffff;
                  local_48 = 0;
                  fStack_114 = (float)((ulonglong)uVar3 >> 0x20);
                  fVar20 = (fStack_114 - (float)((ulonglong)local_a8 >> 0x20)) / DAT_023908e0;
                  local_50._4_4_ = 0;
                  while( true ) {
                    if (local_50._4_4_ != 0) {
                      if (local_50._4_4_ < 1) {
                        iVar6 = -local_50._4_4_;
                      }
                      else {
                        iVar6 = (int)local_50 - local_50._4_4_;
                        local_50 = CONCAT44(local_50._4_4_,iVar6);
                        FUN_00d23690();
                        local_48 = local_48 + local_50._4_4_;
                        iVar6 = 0;
                      }
                      local_50 = CONCAT44(iVar6,(int)local_50);
                    }
                    lVar16 = (longlong)(int)local_50;
                    iVar6 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,iVar6);
                    if (*(int *)((longlong)local_58 + 0xc) <= iVar6) break;
                    local_68 = *(longlong **)(local_58[2] + 8 + lVar16 * 8);
                    pvVar11 = _pthread_getspecific((pthread_key_t)local_58[2]);
                    if (pvVar11 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012708c0();
                    plVar13 = local_98;
                    if (local_98 == plVar9) {
                      plVar13 = plVar9;
                      cVar5 = (char)local_38;
                      if (((char)local_38 == '\0') && (local_98 != (longlong *)0x0)) {
                        local_38._0_1_ = '\x01';
                        if (local_90 != '\0') goto LAB_01a5e6f6;
                        FUN_00d50b00();
                        cVar5 = '\x01';
                      }
LAB_01a5e6d4:
                      local_38._0_1_ = cVar5;
                      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_90 == '\0') {
                        if (local_98 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        cVar5 = '\x01';
                        if (((char)local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01a5e6d4;
                      }
                      cVar5 = '\x01';
                      bVar18 = (char)local_38 != '\0';
                      local_38._0_1_ = cVar5;
                      if ((bVar18) && (plVar9 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_01a5e6f6:
                    if (plVar13 != (longlong *)0x0) {
                      if (*(longlong *)(this + 0x38) == 0) {
                        uVar19 = 0;
                        uVar21 = 0;
                      }
                      else {
                        pvVar11 = _pthread_getspecific((pthread_key_t)plVar13);
                        plVar9 = plVar13;
                        if ((pvVar11 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                          plVar9 = (longlong *)
                                   plVar13[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                        }
                        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x218))();
                        uVar19 = (undefined4)*puVar10;
                        uVar21 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                      }
                      dVar1 = (double)CONCAT44(uVar21,uVar19) + (double)fVar20;
                      dVar22 = DAT_0238fee8;
                      if (dVar1 <= DAT_0238fee8) {
                        dVar22 = dVar1;
                      }
                      uVar19 = 0;
                      if (0.0 <= dVar22) {
                        uVar19 = SUB84(dVar22,0);
                      }
                      FUN_01a5e030(uVar19);
                    }
                    plVar9 = plVar13;
                  }
                  FUN_001159b0();
                  uVar8 = local_a8;
                }
              }
              goto LAB_01a5e430;
            }
            if (((char)arg1[1] == '\0') && (local_68 != (longlong *)0x0)) {
              if (local_60 == '\0') {
                FUN_00d50b00();
                goto LAB_01a5e4c3;
              }
LAB_01a5e481:
              *(undefined1 *)(arg1 + 1) = 1;
              local_60 = '\0';
            }
            if (*arg1 != 0) goto LAB_01a5e4d4;
LAB_01a5e76d:
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a5e781:
            FUN_0199eb40();
          }
          if (((char)local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_74 == '\0' && local_70 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar2 = false;
          uVar15 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
          goto LAB_01a5e35c;
        }
        bVar2 = false;
        bVar18 = true;
        uVar19 = extraout_XMM0_Da_00;
      }
      else {
        bVar2 = false;
        uVar19 = extraout_XMM0_Da;
      }
      goto LAB_01a5e2e9;
    }
    bVar2 = false;
    uVar15 = 0;
  }
LAB_01a5e35c:
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_01a5e36a:
  return uVar15 & 0xffffffff;
}




// ==================================================
// @01a5b5e0 (2371 bytes) — math_loop

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *this;
  int iVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong local_100;
  char local_f8;
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
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined4 local_40;
  char local_31;
  
  local_78 = 0;
  bVar2 = false;
  plVar6 = (longlong *)0x0;
  lVar9 = 0;
  cVar4 = '\0';
  local_40 = param_1;
  do {
    FUN_01e1f270();
    iVar8 = *(int *)((longlong)local_58 + 0xc);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar8 <= local_78) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      local_31 = cVar4;
      goto LAB_01a5bc22;
    }
    FUN_01e1f270();
    lVar1 = *(longlong *)(local_58[2] + local_78 * 8);
    if (lVar9 == lVar1) {
      lVar1 = lVar9;
      local_31 = cVar4;
      if ((cVar4 == '\0') && (lVar9 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      local_48 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_31 = '\x01';
      lVar1 = local_48;
      if ((cVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        lVar1 = local_48;
      }
    }
    local_48 = lVar1;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = local_48;
    if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
      uVar11 = FUN_01e26150();
      lVar9 = DAT_026f6e60;
      if (DAT_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_100 = lVar9;
      local_f8 = '\x01';
      FUN_000175c0(uVar11,&local_100);
      FUN_00d4efa0();
      FUN_00c7e7b0();
      local_f0 = *param_2;
      local_e8 = '\0';
      cVar4 = (**(code **)(*local_58 + 0x50))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01e20210();
        FUN_01e1f2a0();
        uVar11 = FUN_01e26150();
        local_e0 = DAT_026f6e60;
        if (DAT_026f6e60 != 0) {
          uVar11 = FUN_00d50b00();
        }
        local_d8 = '\x01';
        pplVar10 = &local_58;
        FUN_000175c0(uVar11,&local_e0);
        plVar7 = local_58;
        if ((DAT_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026f8f48 = FUN_00d4fe50();
          _DAT_026f8f30 = "MUTool";
          _DAT_026f8f38 = 0x38;
          _DAT_026f8f40 = FUN_00274e70;
          _DAT_026f8f50 = 0;
          uRam00000000026f8f58 = 0;
          _DAT_026f8f60 = 0;
          _DAT_026f8fd8 = 0;
          uRam00000000026f8fe0 = 0;
          _DAT_026f8fe8 = 0;
          DAT_026f8fea = 1;
          _DAT_026f8f68 = 0;
          uRam00000000026f8f70 = 0;
          _DAT_026f8f78 = 0;
          uRam00000000026f8f80 = 0;
          _DAT_026f8f88 = 0;
          uRam00000000026f8f90 = 0;
          _DAT_026f8f98 = 0;
          uRam00000000026f8fa0 = 0;
          _DAT_026f8fa8 = 0;
          uRam00000000026f8fb0 = 0;
          _DAT_026f8fb8 = 0;
          uRam00000000026f8fc0 = 0;
          _DAT_026f8fc8 = 0;
          uRam00000000026f8fd0 = 0;
          DAT_026f8ff3 = 0;
          _DAT_026f8feb = 0;
          ___cxa_guard_release();
        }
        if (plVar7 == (longlong *)0x0) {
          pplVar10 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar7 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') {
            pplVar10 = &DAT_02802688;
          }
        }
        *(undefined1 *)(this + 1) = 0;
        plVar7 = *pplVar10;
        if (*(char *)(pplVar10 + 1) == '\0') {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *this = (longlong)plVar7;
          *(undefined1 *)(this + 1) = 1;
          lVar9 = local_48;
        }
        else {
          *this = (longlong)plVar7;
          *(undefined1 *)(this + 1) = 1;
          *(undefined1 *)(pplVar10 + 1) = 0;
          lVar9 = local_48;
        }
        local_48 = lVar9;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
LAB_01a5bc22:
        if ((bVar2) && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_31 != '\0') && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        return this;
      }
      for (iVar8 = 0; iVar5 = FUN_01e26080(), lVar9 = local_48, iVar8 < iVar5; iVar8 = iVar8 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar8);
        plVar7 = local_58;
        if (local_58 == plVar6) {
          plVar7 = plVar6;
          bVar3 = bVar2;
          if ((bVar2) || (local_58 == (longlong *)0x0)) goto joined_r0x01a5b909;
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a5b8f5;
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar6 = plVar7;
LAB_01a5b8f5:
            plVar7 = plVar6;
            bVar3 = true;
          }
joined_r0x01a5b909:
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar3 = true;
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar3;
        plVar6 = plVar7;
        if (((char)local_40 == '\0') || (cVar4 = FUN_01e26480(), cVar4 != '\0')) {
          uVar11 = FUN_01e26150();
          lVar9 = DAT_026f6e60;
          if (DAT_026f6e60 != 0) {
            uVar11 = FUN_00d50b00();
          }
          local_d0 = lVar9;
          local_c8 = '\x01';
          FUN_000175c0(uVar11,&local_d0);
          FUN_00d4efa0();
          FUN_00c7e7b0();
          local_c0 = *param_2;
          local_b8 = '\0';
          cVar4 = (**(code **)(*local_58 + 0x50))();
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_01e20210();
            FUN_01e1f2a0();
            uVar11 = FUN_01e26150();
            local_b0 = DAT_026f6e60;
            if (DAT_026f6e60 != 0) {
              uVar11 = FUN_00d50b00();
            }
            local_a8 = '\x01';
            pplVar10 = &local_58;
            FUN_000175c0(uVar11,&local_b0);
            plVar7 = local_58;
            if ((DAT_0272ffd0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
              _DAT_026f8f48 = FUN_00d4fe50();
              _DAT_026f8f30 = "MUTool";
              _DAT_026f8f38 = 0x38;
              _DAT_026f8f40 = FUN_00274e70;
              _DAT_026f8f50 = 0;
              uRam00000000026f8f58 = 0;
              _DAT_026f8f60 = 0;
              _DAT_026f8fd8 = 0;
              uRam00000000026f8fe0 = 0;
              _DAT_026f8fe8 = 0;
              DAT_026f8fea = 1;
              _DAT_026f8f68 = 0;
              uRam00000000026f8f70 = 0;
              _DAT_026f8f78 = 0;
              uRam00000000026f8f80 = 0;
              _DAT_026f8f88 = 0;
              uRam00000000026f8f90 = 0;
              _DAT_026f8f98 = 0;
              uRam00000000026f8fa0 = 0;
              _DAT_026f8fa8 = 0;
              uRam00000000026f8fb0 = 0;
              _DAT_026f8fb8 = 0;
              uRam00000000026f8fc0 = 0;
              _DAT_026f8fc8 = 0;
              uRam00000000026f8fd0 = 0;
              DAT_026f8ff3 = 0;
              _DAT_026f8feb = 0;
              ___cxa_guard_release();
            }
            if (plVar7 == (longlong *)0x0) {
              pplVar10 = &DAT_02802688;
              *(undefined1 *)(this + 1) = 0;
              plVar7 = DAT_02802688;
              if (DAT_02802690 == '\0') goto LAB_01a5bbbe;
LAB_01a5bb89:
              *this = (longlong)plVar7;
              *(undefined1 *)(this + 1) = 1;
              *(undefined1 *)(pplVar10 + 1) = 0;
              lVar9 = local_48;
            }
            else {
              (**(code **)(*plVar7 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar10 = &DAT_02802688;
              }
              *(undefined1 *)(this + 1) = 0;
              plVar7 = *pplVar10;
              if (*(char *)(pplVar10 + 1) != '\0') goto LAB_01a5bb89;
LAB_01a5bbbe:
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *this = (longlong)plVar7;
              *(undefined1 *)(this + 1) = 1;
              lVar9 = local_48;
            }
            local_48 = lVar9;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01a5bc22;
          }
        }
      }
    }
    local_78 = local_78 + 1;
    cVar4 = local_31;
  } while( true );
}




// ==================================================
// @01a62e90 (2351 bytes) — calculation

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  longlong *arg1;
  longlong *this;
  float fVar10;
  float extraout_XMM0_Db;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar12 [16];
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar15 [16];
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Dd_02;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Dd_03;
  undefined1 auVar21 [16];
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Dd_04;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar24 [16];
  float extraout_XMM0_Db_07;
  float extraout_XMM0_Db_08;
  undefined8 extraout_XMM0_Qb_02;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar25 [16];
  float extraout_XMM0_Db_09;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_03;
  float fVar33;
  undefined1 in_XMM1 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  float local_cc;
  float local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float local_98;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_5c;
  longlong *local_58;
  char local_50;
  float local_44;
  
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b620(), iVar8 == 2)) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*this + 0xaf8))();
    cVar6 = FUN_00d05410();
    if (cVar6 != '\0') {
      FUN_00d403d0();
      lVar5 = DAT_027e1370;
      if (DAT_027e1370 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_100 = 0;
      local_f8 = '\0';
      FUN_00d40470(&local_100,&stack0xffffffffffffff58,1,3);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar8 = FUN_01d3a5a0();
    if (iVar8 == 1) {
      FUN_01d3abf0();
      FUN_01e466c0();
      fVar10 = (float)(**(code **)(*this + 0xb50))();
      uVar11 = (**(code **)(*this + 0xaf8))();
      fVar33 = in_XMM1._0_4_;
      if (in_XMM1._4_4_ < fVar33 + fVar33) {
        insertps(in_XMM1,ZEXT416((uint)(DAT_0239426c * fVar33)),0x10);
      }
      auVar32._8_4_ = (int)extraout_XMM0_Qb;
      auVar32._0_8_ = uVar11;
      auVar32._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      bVar7 = FUN_00d05410();
      uVar11 = (**(code **)(*this + 0xaf8))();
      auVar38._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar38._0_8_ = uVar11;
      auVar12._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar38._12_4_ = auVar12._12_4_;
      fVar33 = (float)((ulonglong)uVar11 >> 0x20);
      if (bVar7 == 0) {
        fVar35 = auVar32._0_4_;
        fVar34 = auVar32._4_4_;
        if (fVar35 + fVar35 <= fVar34) {
          auVar29._4_4_ = fVar33;
          auVar29._0_4_ = fVar33;
          auVar29._8_4_ = auVar12._12_4_;
          auVar29._12_4_ = auVar12._12_4_;
          auVar28._4_12_ = auVar29._4_12_;
          auVar28._0_4_ = fVar33 + (fVar34 - fVar35);
          auVar12 = insertps(auVar38,auVar28,0x10);
          auVar39 = auVar12._4_12_;
        }
        else {
          auVar28 = ZEXT416((uint)(DAT_0239426c * fVar35));
          auVar2._4_4_ = fVar33;
          auVar2._0_4_ = fVar33 + (fVar34 - DAT_0239426c * fVar35);
          auVar2._8_4_ = auVar12._12_4_;
          auVar2._12_4_ = auVar12._12_4_;
          auVar12 = insertps(auVar38,auVar2,0x10);
          auVar39 = auVar12._4_12_;
          insertps(auVar32,auVar28,0x10);
        }
        auVar3._4_8_ = auVar28._8_8_;
        auVar3._0_4_ = auVar39._0_4_;
        auVar30._0_8_ = auVar3._0_8_ << 0x20;
        auVar30._8_4_ = auVar39._4_4_;
        auVar30._12_4_ = auVar39._8_4_;
        cVar6 = FUN_00d05410();
        if (cVar6 == '\0') {
          local_f0 = *arg1;
          local_e8 = '\0';
          FUN_01d924f0();
          if (local_e8 == '\0') {
            return;
          }
          if (local_f0 == 0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        (**(code **)(*this + 0xaf8))();
        fVar33 = auVar30._4_4_ + extraout_XMM0_Db_03;
        fVar35 = auVar30._12_4_ + extraout_XMM0_Dd_02;
        auVar19._4_4_ = fVar33;
        auVar19._0_4_ = fVar33;
        auVar19._8_4_ = fVar35;
        auVar19._12_4_ = fVar35;
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = fVar33 + DAT_02390d00 + DAT_02390124;
        auVar12 = roundss(auVar20,auVar20,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*this + 0xaf8))();
        auVar21._4_4_ = extraout_XMM0_Db_04;
        auVar21._0_4_ = extraout_XMM0_Db_04;
        auVar21._8_4_ = extraout_XMM0_Dd_03;
        auVar21._12_4_ = extraout_XMM0_Dd_03;
        auVar12 = roundss(auVar21,auVar21,9);
        local_5c = auVar12._0_4_;
        auVar32 = ZEXT416((uint)(fVar10 + local_5c));
        auVar12 = roundss(ZEXT816(0),auVar32,9);
        (**(code **)(*this + 0xb00))();
        fVar10 = auVar32._4_4_ + extraout_XMM0_Db_05;
        fVar33 = auVar32._12_4_ + extraout_XMM0_Dd_04;
        auVar22._4_4_ = fVar10;
        auVar22._0_4_ = fVar10;
        auVar22._8_4_ = fVar33;
        auVar22._12_4_ = fVar33;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = fVar10 + DAT_02390d00 + DAT_02390124;
        auVar32 = roundss(auVar23,auVar23,9);
        local_84 = auVar32._0_4_;
        local_88 = local_44;
        if (auVar12._0_4_ <= local_44) {
          local_88 = auVar12._0_4_;
        }
        (**(code **)(*this + 0xb00))();
        auVar24._4_4_ = extraout_XMM0_Db_06;
        auVar24._0_4_ = extraout_XMM0_Db_06;
        auVar24._8_4_ = extraout_XMM0_Dd_05;
        auVar24._12_4_ = extraout_XMM0_Dd_05;
        auVar31 = roundss(ZEXT816(0),auVar24,9);
        local_98 = auVar31._0_4_;
        fVar10 = local_84 - local_98;
      }
      else {
        auVar12._4_4_ = fVar33;
        auVar12._0_4_ = fVar33;
        auVar12._8_4_ = auVar12._12_4_;
        auVar12 = roundss(auVar12,auVar12,9);
        local_44 = auVar12._0_4_;
        (**(code **)(*this + 0xaf8))();
        fVar33 = auVar32._4_4_ + extraout_XMM0_Db_00;
        fVar35 = auVar32._12_4_ + extraout_XMM0_Dd;
        auVar13._4_4_ = fVar33;
        auVar13._0_4_ = fVar33;
        auVar13._8_4_ = fVar35;
        auVar13._12_4_ = fVar35;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = fVar33 + DAT_02390d00 + DAT_02390124;
        auVar12 = roundss(auVar14,auVar14,9);
        local_5c = auVar12._0_4_;
        (**(code **)(*this + 0xb00))();
        auVar15._4_4_ = extraout_XMM0_Db_01;
        auVar15._0_4_ = extraout_XMM0_Db_01;
        auVar15._8_4_ = extraout_XMM0_Dd_00;
        auVar15._12_4_ = extraout_XMM0_Dd_00;
        auVar12 = roundss(auVar15,auVar15,9);
        local_88 = auVar12._0_4_;
        auVar12 = roundss(ZEXT416((uint)(local_5c - fVar10)),ZEXT416((uint)(local_5c - fVar10)),9);
        local_84 = local_44;
        if (local_44 <= auVar12._0_4_) {
          local_84 = auVar12._0_4_;
        }
        fVar33 = 0.0;
        fVar35 = 0.0;
        fVar34 = 0.0;
        fVar10 = local_84;
        (**(code **)(*this + 0xb00))();
        auVar16._4_4_ = extraout_XMM0_Db_02;
        auVar16._0_4_ = extraout_XMM0_Db_02;
        auVar16._8_4_ = extraout_XMM0_Dd_01;
        auVar16._12_4_ = extraout_XMM0_Dd_01;
        auVar12 = roundss(auVar16,auVar16,9);
        local_98 = auVar12._0_4_;
        uVar11 = (**(code **)(*this + 0xb00))();
        auVar31._0_4_ = fVar10 + (float)uVar11;
        auVar31._4_4_ = fVar33 + (float)((ulonglong)uVar11 >> 0x20);
        auVar31._8_4_ = fVar35 + (float)extraout_XMM0_Qb_01;
        auVar31._12_4_ = fVar34 + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
        auVar17._4_4_ = auVar31._4_4_;
        auVar17._0_4_ = auVar31._4_4_;
        auVar17._8_4_ = auVar31._12_4_;
        auVar17._12_4_ = auVar31._12_4_;
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = auVar31._4_4_ + DAT_02390d00;
        auVar12 = roundss(auVar18,auVar18,9);
        fVar10 = auVar12._0_4_ - local_98;
      }
      FUN_01a18460();
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      uVar11 = (**(code **)(*local_58 + 0xa98))();
      local_128 = (float)uVar11;
      fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
      fStack_120 = (float)extraout_XMM0_Qb_02;
      fStack_11c = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      FUN_01e3f820();
      _local_b8 = auVar31;
      local_cc = (float)(**(code **)(*local_58 + 0xbc8))();
      local_c8 = (float)(**(code **)(*local_58 + 0xbe0))();
      local_138 = fStack_124 + local_128;
      fStack_134 = fStack_124 + fStack_124;
      fStack_130 = fStack_11c + fStack_120;
      fStack_12c = fStack_11c + fStack_11c;
      local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
      local_b8._4_4_ = fStack_134;
      fStack_b0 = fStack_130;
      fStack_ac = fStack_12c;
      local_c0 = local_5c - local_98;
      local_bc = (fVar10 - local_5c) + local_98;
      local_c4 = (uint)(bVar7 ^ 1);
LAB_01a633e0:
      (**(code **)(*this + 0x658))();
      plVar1 = (longlong *)*arg1;
      if (plVar1 == local_58) {
        if (((char)arg1[1] == '\0') && (local_58 != (longlong *)0x0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01a6347c;
          }
          goto LAB_01a63433;
        }
LAB_01a6343d:
        if (*arg1 == 0) goto LAB_01a63761;
LAB_01a6348f:
        iVar8 = FUN_01d3a5a0();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01a63775;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          FUN_01d3abf0();
          FUN_01e466c0();
          local_7c = (local_44 - extraout_XMM0_Db) + extraout_XMM0_Db_07;
          auVar12 = ZEXT416((uint)local_7c);
          if (local_88 <= local_7c) {
            local_78 = 0.0;
            if (local_84 < local_7c) {
              local_78 = local_7c - local_84;
              auVar12 = ZEXT416((uint)local_78);
              local_7c = local_84;
              goto LAB_01a6352f;
            }
            pcVar9 = *(code **)(*this + 0xb00);
            if (bVar7 == 0) goto LAB_01a635dc;
LAB_01a63548:
            (*pcVar9)();
            if (extraout_XMM0_Db_07 < extraout_XMM0_Db_08) {
              if ((local_78 != DAT_0239424c) || (NAN(local_78) || NAN(DAT_0239424c))) {
                auVar12 = roundss(ZEXT816(0),ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
                fVar35 = auVar12._0_4_ + local_138;
                fVar33 = local_c8;
                if (fVar35 <= local_c8) {
                  fVar33 = fVar35;
                }
                (**(code **)(*local_58 + 0xbf0))();
                auVar25 = ZEXT416((uint)(fVar33 - local_128));
                fVar33 = fVar33 - (fVar33 - local_128);
LAB_01a63656:
                auVar32 = insertps(ZEXT416((uint)fVar33),auVar25,0x10);
                auVar12 = auVar32;
                FUN_01e436c0();
                fStack_74 = auVar32._4_4_;
                fVar33 = auVar12._4_4_;
                auVar26._4_4_ = fVar33;
                auVar26._0_4_ = fVar33;
                auVar26._8_4_ = auVar12._12_4_;
                auVar26._12_4_ = auVar12._12_4_;
                auVar27._4_12_ = auVar26._4_12_;
                auVar27._0_4_ = fVar33 / fStack_74;
                (**(code **)(*local_58 + 0xc08))(auVar27._0_8_);
                (**(code **)(*local_58 + 0xaa0))();
                goto LAB_01a633e0;
              }
            }
            local_98 = local_5c - local_7c;
            fVar35 = extraout_XMM0_Db_07;
            fVar34 = extraout_XMM0_Db_07;
            uVar36 = extraout_XMM0_Dd_06;
            fVar33 = local_bc;
          }
          else {
            local_78 = local_88 - local_7c;
            local_7c = local_88;
LAB_01a6352f:
            pcVar9 = *(code **)(*this + 0xb00);
            if (bVar7 != 0) goto LAB_01a63548;
LAB_01a635dc:
            (*pcVar9)();
            if (extraout_XMM0_Db_09 + auVar12._4_4_ + DAT_02390d00 < extraout_XMM0_Db_07) {
              if ((local_78 == DAT_0239424c) && (!NAN(local_78) && !NAN(DAT_0239424c)))
              goto LAB_01a636c1;
              auVar12 = roundss(ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),
                                ZEXT416((uint)(local_78 * (float)local_b8._0_4_)),9);
              fVar35 = local_128 - auVar12._0_4_;
              fVar33 = local_cc;
              if (local_cc <= fVar35) {
                fVar33 = fVar35;
              }
              (**(code **)(*local_58 + 0xbd8))();
              auVar4._4_4_ = fStack_134;
              auVar4._0_4_ = local_138;
              auVar4._8_4_ = fStack_130;
              auVar4._12_4_ = fStack_12c;
              auVar25._4_12_ = auVar4._4_12_;
              auVar25._0_4_ = local_138 - fVar33;
              goto LAB_01a63656;
            }
LAB_01a636c1:
            local_98 = local_7c - local_5c;
            fVar34 = 0.0;
            uVar36 = 0;
            fVar35 = local_c0;
            fVar33 = local_c0;
          }
          uVar37 = uVar36;
          uVar11 = (**(code **)(*local_58 + 0xa98))();
          local_128 = (float)uVar11;
          fStack_124 = (float)((ulonglong)uVar11 >> 0x20);
          fStack_120 = (float)extraout_XMM0_Qb_03;
          fStack_11c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          FUN_01e3f820();
          local_b8._4_4_ = fVar34;
          local_b8._0_4_ = fVar35;
          fStack_b0 = (float)uVar36;
          fStack_ac = (float)uVar37;
          (**(code **)(*local_58 + 0xc70))(local_98 / fVar10,fVar33 / fVar10);
          local_138 = fStack_124 + local_128;
          fStack_134 = fStack_124 + fStack_124;
          fStack_130 = fStack_11c + fStack_120;
          fStack_12c = fStack_11c + fStack_11c;
          local_b8._0_4_ = (local_138 - local_128) / (float)local_b8._4_4_;
          local_b8._4_4_ = fStack_134;
          fStack_b0 = fStack_130;
          fStack_ac = fStack_12c;
        }
        goto LAB_01a633e0;
      }
      lVar5 = arg1[1];
      if (local_50 != '\0') {
        *arg1 = (longlong)local_58;
        if (((char)lVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a63433:
        *(undefined1 *)(arg1 + 1) = 1;
        local_50 = '\0';
        goto LAB_01a6343d;
      }
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (longlong)local_58;
      if (((char)lVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a6347c:
      *(undefined1 *)(arg1 + 1) = 1;
      if (*arg1 != 0) goto LAB_01a6348f;
LAB_01a63761:
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a63775:
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = *arg1;
      local_d8 = '\0';
      FUN_01d924f0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01a67a50 (2277 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  void *pvVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  pthread_key_t pVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *arg1;
  undefined8 *this;
  longlong *plVar15;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_78;
  char local_70;
  ulonglong local_68;
  char local_60;
  longlong *local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_40;
  char local_38 [8];
  
  FUN_01a66e80();
  plVar15 = local_78;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(param_2,0,&local_a0,&local_98);
  plVar5 = local_58;
  puVar12 = &local_50;
  local_68._0_1_ = (char)local_50;
  puVar8 = &local_68;
  if ((char)local_50 != '\0') {
    puVar8 = puVar12;
  }
  *(undefined1 *)puVar8 = 0;
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (pthread_key_t)puVar12;
  if (((char)local_68 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  local_58 = param_2;
  FUN_00e7b970();
  local_d0 = local_58;
  local_58 = local_98;
  FUN_00e7b970();
  local_c8 = local_58;
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  if (local_d0._4_4_ != 0) {
    cVar6 = FUN_00e7c650();
    if (cVar6 != '\0') {
      iVar4 = local_c8._4_4_;
      goto joined_r0x01a67bdd;
    }
LAB_01a67c5f:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    goto LAB_01a68317;
  }
  iVar4 = (int)((ulonglong)local_c8 >> 0x20);
joined_r0x01a67bdd:
  if (iVar4 != 0) {
    local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01a67c5f;
  }
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_e0 = local_a0;
  local_d8 = local_98;
  FUN_01a66e80();
  plVar15 = local_58;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_e0;
  uVar9 = FUN_01253c10(puVar13,&local_78,&local_d8,0);
  pVar11 = (pthread_key_t)puVar13;
  if (((char)local_50 != '\0') && (plVar15 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_78 == (longlong *)0x0) {
    uVar9 = FUN_00d51d20();
    plVar14 = local_58;
    cVar6 = local_70;
    plVar15 = local_78;
    if (local_78 == local_58) {
      if ((local_70 != '\0') || (local_58 == (longlong *)0x0)) goto LAB_01a67d35;
      if ((char)local_50 == '\0') {
        uVar9 = FUN_00d50b00();
        goto LAB_01a67d31;
      }
LAB_01a67cfe:
      local_70 = '\x01';
    }
    else {
      if ((char)local_50 != '\0') {
        local_78 = local_58;
        if ((local_70 != '\0') && (plVar15 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        goto LAB_01a67cfe;
      }
      if (local_58 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_78 = plVar14;
      if ((cVar6 != '\0') && (plVar15 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_01a67d31:
      local_70 = '\x01';
LAB_01a67d35:
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (local_78 != (longlong *)0x0) goto LAB_01a67d56;
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
LAB_01a67d56:
    if ((char)arg1[0x36] == '\0') {
      local_40 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      FUN_00d50b00();
      plVar15 = plVar5;
    }
    else {
      FUN_01715620();
      pVar11 = 2;
      local_50 = 0x400000002;
      local_58 = (longlong *)&DAT_02636b10;
      local_48 = 7;
      FUN_017163f0(0x400000002,&local_58);
      plVar15 = (longlong *)CONCAT71(local_68._1_7_,(char)local_68);
      if ((((local_60 == '\0') && (plVar15 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      local_90 = plVar15;
      FUN_00d51d20();
      plVar15 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01715d40();
      local_c0 = plVar15;
      local_b8 = '\0';
      cVar6 = (**(code **)(*plVar5 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar14 = local_90;
      if (cVar6 == '\0') {
        local_b0 = local_90;
        local_a8 = '\0';
        uVar9 = (**(code **)(*plVar5 + 0x50))();
        cVar6 = (char)uVar9;
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        plVar14 = local_90;
        uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
        if (cVar6 == '\0') {
          if (local_90 == (longlong *)0x0) {
            local_40 = 0;
            plVar1 = (longlong *)0x0;
          }
          else {
            local_40 = CONCAT71(uVar10,1);
            FUN_00d50b00();
            plVar1 = plVar14;
          }
          goto joined_r0x01a682ad;
        }
        if (plVar15 != (longlong *)0x0) {
          local_40 = CONCAT71(uVar10,1);
          FUN_00d50b00();
          goto LAB_01a67fa1;
        }
        plVar15 = (longlong *)0x0;
        local_40 = 0;
      }
      else {
        FUN_01715620();
        pVar11 = 2;
        local_50 = 0x300000002;
        local_58 = (longlong *)&DAT_02636b10;
        local_48 = 6;
        FUN_017163f0(0x300000002,&local_58);
        plVar1 = (longlong *)CONCAT71(local_68._1_7_,(char)local_68);
        if (plVar1 == (longlong *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = CONCAT71(local_68._1_7_,1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01a682ad:
        bVar3 = plVar15 != (longlong *)0x0;
        plVar15 = plVar1;
        if (bVar3) {
LAB_01a67fa1:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*arg1 + 0xa48))();
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar14 = param_2;
    local_58 = plVar5;
    FUN_012502a0(param_2,local_a0,(char)arg1[0x36]);
    pVar11 = (pthread_key_t)plVar14;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_58 = plVar15;
    FUN_012502a0(local_98,param_2,(char)arg1[0x36]);
    pVar11 = (pthread_key_t)local_98;
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xa50))();
    if ((char)arg1[0x40] == '\0') {
      *(undefined1 *)(this + 1) = 0;
      if (((char)local_40 == '\0') && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      *this = plVar15;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      FUN_01a68710();
      FUN_01a68710();
      FUN_01a66e80();
      lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(param_2,0,0,0);
      plVar5 = local_58;
      puVar12 = &local_50;
      if ((char)local_50 == '\0') {
        puVar12 = (ulonglong *)local_38;
      }
      local_38[0] = (char)local_50;
      *(undefined1 *)puVar12 = 0;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == plVar5) {
        plVar14 = plVar15;
        if (((char)local_40 == '\0') && (plVar15 != (longlong *)0x0)) {
          cVar6 = '\x01';
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          cVar6 = (char)local_40;
          if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
            cVar6 = (char)local_40;
          }
        }
      }
      else {
        plVar14 = plVar5;
        if (local_38[0] == '\0') {
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_60 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
      if ((cVar6 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a68317:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01a65460 (2139 bytes) — logic_branch

{
  int iVar1;
  
  if (DAT_028b2c48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2c10 = FUN_0026cb20();
      _DAT_028b2c08 = "handleAnalyzeChords";
      _DAT_028b2c18 = 0;
      _DAT_028b2c20 = &DAT_027e2758;
      _DAT_028b2c28 = FUN_01a74170;
      _DAT_028b2c30 = 0xb49;
      _DAT_028b2c38 = 0;
      uRam00000000028b2c40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2c90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2c58 = FUN_0026cb20();
      _DAT_028b2c50 = "handleSetAlternateChord";
      _DAT_028b2c60 = 0;
      _DAT_028b2c68 = &DAT_027e2758;
      _DAT_028b2c70 = FUN_01a74170;
      _DAT_028b2c78 = 0xb51;
      _DAT_028b2c80 = 0;
      uRam00000000028b2c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2cd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2ca0 = FUN_0026cb20();
      _DAT_028b2c98 = "handleToggleDetectsSlashChords";
      _DAT_028b2ca8 = 0;
      _DAT_028b2cb0 = &DAT_027e2758;
      _DAT_028b2cb8 = FUN_01a74170;
      _DAT_028b2cc0 = 0xb59;
      _DAT_028b2cc8 = 0;
      uRam00000000028b2cd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2d20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2ce8 = FUN_0026cb20();
      _DAT_028b2ce0 = "handleToggleDetectsChordExtensions";
      _DAT_028b2cf0 = 0;
      _DAT_028b2cf8 = &DAT_027e2758;
      _DAT_028b2d00 = FUN_01a74170;
      _DAT_028b2d08 = 0xb61;
      _DAT_028b2d10 = 0;
      uRam00000000028b2d18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2d68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2d30 = FUN_0026cb20();
      _DAT_028b2d28 = "handleToggleLessThirds";
      _DAT_028b2d38 = 0;
      _DAT_028b2d40 = &DAT_027e2758;
      _DAT_028b2d48 = FUN_01a74170;
      _DAT_028b2d50 = 0xb69;
      _DAT_028b2d58 = 0;
      uRam00000000028b2d60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2db0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2d78 = FUN_0026cb20();
      _DAT_028b2d70 = "handleToggleAutoanalyzesSplitsAndJoins";
      _DAT_028b2d80 = 0;
      _DAT_028b2d88 = &DAT_027e2758;
      _DAT_028b2d90 = FUN_01a74170;
      _DAT_028b2d98 = 0xb71;
      _DAT_028b2da0 = 0;
      uRam00000000028b2da8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2df8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2dc0 = FUN_0026cb20();
      _DAT_028b2db8 = "handleTogglePreviewsChords";
      _DAT_028b2dc8 = 0;
      _DAT_028b2dd0 = &DAT_027e2758;
      _DAT_028b2dd8 = FUN_01a74170;
      _DAT_028b2de0 = 0xb79;
      _DAT_028b2de8 = 0;
      uRam00000000028b2df0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2e40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2e08 = FUN_0026cb20();
      _DAT_028b2e00 = "handleShowChordAnalyzerParameterSetEditor";
      _DAT_028b2e10 = 0;
      _DAT_028b2e18 = &DAT_027e2758;
      _DAT_028b2e20 = FUN_01a74170;
      _DAT_028b2e28 = 0xb81;
      _DAT_028b2e30 = 0;
      uRam00000000028b2e38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2e88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2e50 = FUN_0026cb20();
      _DAT_028b2e48 = "handleSelectDown";
      _DAT_028b2e58 = 0;
      _DAT_028b2e60 = &DAT_027e2758;
      _DAT_028b2e68 = FUN_01a74170;
      _DAT_028b2e70 = 0xb19;
      _DAT_028b2e78 = 0;
      uRam00000000028b2e80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2ed0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2e98 = FUN_0026cb20();
      _DAT_028b2e90 = "handleSelectUp";
      _DAT_028b2ea0 = 0;
      _DAT_028b2ea8 = &DAT_027e2758;
      _DAT_028b2eb0 = FUN_01a74170;
      _DAT_028b2eb8 = 0xb21;
      _DAT_028b2ec0 = 0;
      uRam00000000028b2ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2f18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2ee0 = FUN_0026cb20();
      _DAT_028b2ed8 = "handleMoveUp";
      _DAT_028b2ee8 = 0;
      _DAT_028b2ef0 = &DAT_027e2758;
      _DAT_028b2ef8 = FUN_01a74170;
      _DAT_028b2f00 = 0xb29;
      _DAT_028b2f08 = 0;
      uRam00000000028b2f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2f28 = FUN_0026cb20();
      _DAT_028b2f20 = "handleMoveDown";
      _DAT_028b2f30 = 0;
      _DAT_028b2f38 = &DAT_027e2758;
      _DAT_028b2f40 = FUN_01a74170;
      _DAT_028b2f48 = 0xb31;
      _DAT_028b2f50 = 0;
      uRam00000000028b2f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2f70 = FUN_0026cb20();
      _DAT_028b2f68 = "handleMoveUpFine";
      _DAT_028b2f78 = 0;
      _DAT_028b2f80 = &DAT_027e2758;
      _DAT_028b2f88 = FUN_01a74170;
      _DAT_028b2f90 = 0xb39;
      _DAT_028b2f98 = 0;
      uRam00000000028b2fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b2ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b2fb8 = FUN_0026cb20();
      _DAT_028b2fb0 = "handleMoveDownFine";
      _DAT_028b2fc0 = 0;
      _DAT_028b2fc8 = &DAT_027e2758;
      _DAT_028b2fd0 = FUN_01a74170;
      _DAT_028b2fd8 = 0xb41;
      _DAT_028b2fe0 = 0;
      uRam00000000028b2fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @00234400 (1879 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_94;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  char local_38;
  
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_a0 = plVar7;
  (**(code **)(*plVar7 + 0x18))();
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (longlong)&DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_02572358;
  (*pcVar3)();
  local_a8 = plVar7;
  FUN_01e1f270();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002344d3;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_002344d3:
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_80 = plVar7;
    local_58 = plVar7;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    while( true ) {
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          local_48 = local_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
      lVar9 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      local_38 = '\0';
      local_40 = local_68;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      for (iVar6 = 0; iVar5 = FUN_01e26080(), iVar6 < iVar5; iVar6 = iVar6 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar6);
        plVar7 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = plVar7;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00274dd0();
    FUN_00d50b20();
    if (plVar8 == (longlong *)0x0) {
      bVar2 = true;
      bVar1 = true;
      plVar7 = local_a8;
      goto joined_r0x00234b04;
    }
  }
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_50 = -1;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar8;
  while( true ) {
    if (iStack_4c != 0) {
      if (iStack_4c < 1) {
        iStack_4c = -iStack_4c;
      }
      else {
        local_50 = local_50 - iStack_4c;
        FUN_00d23690();
        local_48 = local_48 + iStack_4c;
        iStack_4c = 0;
      }
    }
    lVar9 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
    local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
    FUN_01e26150();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      uVar11 = FUN_01e26150();
      lVar9 = DAT_026f6e60;
      if (DAT_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_f8 = lVar9;
      local_f0 = '\x01';
      FUN_000175c0(uVar11,&local_f8);
      plVar7 = local_40;
      if ((DAT_0272ffd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026f8f48 = FUN_00d4fe50();
        _DAT_026f8f30 = "MUTool";
        _DAT_026f8f38 = 0x38;
        _DAT_026f8f40 = FUN_00274e70;
        _DAT_026f8f50 = 0;
        uRam00000000026f8f58 = 0;
        _DAT_026f8f60 = 0;
        _DAT_026f8fd8 = 0;
        uRam00000000026f8fe0 = 0;
        _DAT_026f8fe8 = 0;
        DAT_026f8fea = 1;
        _DAT_026f8f68 = 0;
        uRam00000000026f8f70 = 0;
        _DAT_026f8f78 = 0;
        uRam00000000026f8f80 = 0;
        _DAT_026f8f88 = 0;
        uRam00000000026f8f90 = 0;
        _DAT_026f8f98 = 0;
        uRam00000000026f8fa0 = 0;
        _DAT_026f8fa8 = 0;
        uRam00000000026f8fb0 = 0;
        _DAT_026f8fb8 = 0;
        uRam00000000026f8fc0 = 0;
        _DAT_026f8fc8 = 0;
        uRam00000000026f8fd0 = 0;
        DAT_026f8ff3 = 0;
        _DAT_026f8feb = 0;
        ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar4 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      if (plVar8 == (longlong *)0x0) {
        uVar11 = (undefined4)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        plVar8 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar10 + 1) = 0;
        }
        uVar11 = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        local_94 = uVar11;
        FUN_00d4efa0();
        FUN_00c82bb0();
        local_80 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar9 = DAT_026f6e68;
        if (DAT_026f6e68 != 0) {
          FUN_00d50b00();
        }
        local_e8 = lVar9;
        local_e0 = '\x01';
        local_d8 = local_80;
        local_d0 = '\0';
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d31230(&local_c8,&local_d8);
        plVar7 = local_40;
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = plVar7;
        FUN_01e260d0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 == (longlong *)0x0) {
          local_b8 = 0;
          local_b0 = '\0';
          FUN_01e25f80();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274dd0();
  bVar2 = false;
  bVar1 = false;
  plVar7 = local_a8;
joined_r0x00234b04:
  local_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    iStack_4c = 0;
    local_48 = 0;
    local_58 = plVar7;
    for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((longlong)plVar7 + 0xc);
        lVar9 = lVar9 + 1) {
      local_68 = *(longlong **)(plVar7[2] + lVar9 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a5f2f0 (1878 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *arg1;
  longlong this;
  bool bVar6;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
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
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x170) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(this + 0x168);
    local_98 = 0;
    (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = '\x01';
    local_a0 = plVar1;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_88 = '\x01';
      local_90 = plVar1;
      FUN_00e8b9a0();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        (**(code **)(*local_90 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = plVar1;
      FUN_00e8b9a0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) goto LAB_01a5f6fd;
    }
    local_68 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = plVar1;
    FUN_00cbb340();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
  }
LAB_01a5f6fd:
  lVar2 = *arg1;
  lVar3 = *(longlong *)(this + 0x170);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x170) = lVar2;
    bVar6 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar6) {
      FUN_00d50b20();
      lVar3 = *(longlong *)(this + 0x170);
    }
  }
  if (lVar3 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(this + 0x168);
    local_58 = 0;
    (**(code **)(*(longlong *)(this + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    pVar5 = 0x20;
    local_60 = plVar1;
    FUN_00e8b850(0x20,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_48 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    pVar5 = 0x20;
    local_50 = plVar1;
    FUN_00e8b850(0x20,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_b0 = plVar1;
    FUN_00e8b850(0x20,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01a5ffc0 (1758 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong this;
  longlong *plVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong *local_b8;
  char local_b0;
  undefined1 local_78 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  local_78._8_8_ = 0;
  local_78._0_8_ = DAT_023dccdc;
  FUN_01989f80();
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff70();
  if (local_40 != (longlong *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01264170();
    plVar8 = *(longlong **)(this + 0x170);
    dVar14 = 0.0;
    if ((plVar8 != (longlong *)0x0) && (*(longlong *)(this + 0x178) != 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        plVar8 = *(longlong **)(this + 0x170);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
      dVar14 = *pdVar7;
    }
    uVar13 = (**(code **)(*plVar9 + 0x938))(dVar11 + dVar12 * dVar14 * DAT_02394dd0);
    FUN_00d74120();
    lVar6 = DAT_027e1e80;
    if (DAT_027e1e80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d74120();
      lVar2 = DAT_027bf050;
      if (DAT_027bf050 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_b8 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar13;
    local_78 = blendps(local_78,auVar16,1);
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01264170();
      local_58 = SUB84(dVar11,0);
      uStack_54 = (undefined4)((ulonglong)dVar11 >> 0x20);
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01264170();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar14 < dVar11) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_01264170();
        local_58 = (undefined4)uVar13;
        uStack_54 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01259520();
      plVar8 = *(longlong **)(this + 0x170);
      dVar11 = 0.0;
      if ((plVar8 != (longlong *)0x0) && (*(longlong *)(this + 0x178) != 0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar8 = *(longlong **)(this + 0x170);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
        dVar11 = *pdVar7;
      }
      auVar15._0_8_ =
           (**(code **)(*plVar9 + 0x938))
                     (dVar14 + (double)CONCAT44(uStack_54,local_58) * dVar11 * DAT_02394dd0);
      auVar15._8_8_ = extraout_XMM0_Qb_00;
      local_78 = blendps(local_78,auVar15,1);
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    uVar10 = FUN_0198a7d0();
    FUN_00d74120();
    lVar6 = DAT_027bf050;
    if (DAT_027bf050 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16 = insertps(local_78,uVar10,0x10);
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b70();
      auVar17._0_8_ = FUN_0198a7d0();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
      insertps(auVar16,auVar17,0x10);
    }
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a608f0 (1758 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong this;
  longlong *plVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong *local_b8;
  char local_b0;
  undefined1 local_78 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  local_78._8_8_ = 0;
  local_78._0_8_ = DAT_023dccdc;
  FUN_01989f80();
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  if (local_40 != (longlong *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_0125a280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01264170();
    plVar8 = *(longlong **)(this + 0x170);
    dVar14 = 0.0;
    if ((plVar8 != (longlong *)0x0) && (*(longlong *)(this + 0x178) != 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        plVar8 = *(longlong **)(this + 0x170);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
      dVar14 = *pdVar7;
    }
    uVar13 = (**(code **)(*plVar9 + 0x938))(dVar11 + dVar12 * dVar14 * DAT_023942d0);
    FUN_00d74120();
    lVar6 = DAT_027e1e80;
    if (DAT_027e1e80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d74120();
      lVar2 = DAT_027bf050;
      if (DAT_027bf050 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_b8 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar13;
    local_78 = blendps(local_78,auVar16,1);
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01264170();
      local_58 = SUB84(dVar11,0);
      uStack_54 = (undefined4)((ulonglong)dVar11 >> 0x20);
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01264170();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar14 < dVar11) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_01264170();
        local_58 = (undefined4)uVar13;
        uStack_54 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_0125a280();
      plVar8 = *(longlong **)(this + 0x170);
      dVar11 = 0.0;
      if ((plVar8 != (longlong *)0x0) && (*(longlong *)(this + 0x178) != 0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar8 = *(longlong **)(this + 0x170);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
        dVar11 = *pdVar7;
      }
      auVar15._0_8_ =
           (**(code **)(*plVar9 + 0x938))
                     (dVar14 + (double)CONCAT44(uStack_54,local_58) * dVar11 * DAT_023942d0);
      auVar15._8_8_ = extraout_XMM0_Qb_00;
      local_78 = blendps(local_78,auVar15,1);
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    uVar10 = FUN_0198a7d0();
    FUN_00d74120();
    lVar6 = DAT_027bf050;
    if (DAT_027bf050 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar16 = insertps(local_78,uVar10,0x10);
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b70();
      auVar17._0_8_ = FUN_0198a7d0();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
      insertps(auVar16,auVar17,0x10);
    }
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a648b0 (1450 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *arg1;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar12;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  char local_70;
  undefined4 local_64;
  longlong *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01a58dc0();
  local_38 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_50 = 1;
    local_38 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_50 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01a64927;
      FUN_00d50b20();
    }
    local_50 = 0;
  }
LAB_01a64927:
  (**(code **)(*local_38 + 0x7b0))();
  local_60 = local_48;
  plVar7 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_54 = 1;
    local_60 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01a64986;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01a64986:
  local_58 = 0;
  FUN_01cf74c0();
  bVar8 = true;
  local_64 = 0;
  local_90 = 0;
  local_88._0_4_ = 0.0;
  local_88._4_4_ = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (*arg1 == 0) {
    local_4c = 0;
LAB_01a64a70:
    do {
      do {
        (**(code **)(*local_38 + 0x658))();
        plVar3 = local_48;
        plVar1 = (longlong *)*arg1;
        if (plVar1 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != (longlong *)0x0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_01a64b1c;
            }
            goto LAB_01a64ad3;
          }
LAB_01a64add:
          fVar12 = param_2;
          if (*arg1 != 0) goto LAB_01a64b2f;
LAB_01a64c68:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64c7c:
          local_a0 = *arg1;
          local_98 = '\0';
          FUN_0199eb40();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01a64cb8;
        }
        lVar2 = arg1[1];
        if (local_40 != '\0') {
          *arg1 = (longlong)local_48;
          if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a64ad3:
          *(undefined1 *)(arg1 + 1) = 1;
          local_40 = '\0';
          goto LAB_01a64add;
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (longlong)plVar3;
        if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a64b1c:
        *(undefined1 *)(arg1 + 1) = 1;
        fVar12 = param_2;
        if (*arg1 == 0) goto LAB_01a64c68;
LAB_01a64b2f:
        iVar4 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar4 == 6) goto LAB_01a64c7c;
        iVar4 = FUN_01d3a5a0();
        if (iVar4 == 5) {
          param_2 = fVar12;
          if (!bVar8) {
            fVar9 = (float)FUN_01e436c0();
            FUN_01d3abf0();
            fVar10 = (float)FUN_01e466c0();
            param_2 = (float)local_88;
            if ((((fVar9 <= (float)local_88) &&
                 (param_2 = fVar9 + fVar12, (float)local_88 <= param_2)) && (fVar9 <= fVar10)) &&
               (fVar10 <= param_2)) {
              param_2 = (float)local_90;
              (**(code **)(*local_38 + 0xc60))(fVar10 - (float)local_88,param_2,local_64);
            }
          }
          FUN_01d3abf0();
          uVar6 = FUN_01e466c0();
          uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          bVar8 = false;
          local_88 = uVar6;
          if ((local_4c & 1) == 0) {
            local_90 = (**(code **)(*local_38 + 0x930))((int)uVar6);
            plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
            local_4c = (uint)plVar7;
            bVar8 = false;
            local_64 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
          }
          goto LAB_01a64a70;
        }
        iVar4 = FUN_01d3a5a0();
        bVar8 = false;
        param_2 = fVar12;
      } while (iVar4 != 4);
      iVar4 = FUN_01d3b590();
      bVar8 = false;
      param_2 = fVar12;
    } while (iVar4 == local_58);
    FUN_01cf74c0();
    uVar5 = FUN_01d3b590();
    plVar7 = local_38;
    if ((uVar5 & 8) == 0) {
      local_70 = 0;
      lVar2 = local_38[0x83];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      uVar11 = (**(code **)(*plVar7 + 0xed8))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      local_b0 = 0;
      local_a8 = '\0';
      (**(code **)(*(longlong *)plVar7[0x83] + 0x380))(uVar11,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 1) {
      iVar4 = FUN_01d3b630();
      if (iVar4 == 1) {
        if (*arg1 != 0) {
          iVar4 = FUN_01d3b620();
          plVar1 = local_38;
          if (iVar4 == 2) {
            FUN_01a58dc0();
            (**(code **)(*local_48 + 0xcc0))();
            local_88 = CONCAT44(local_88._4_4_,(float)local_88);
            if ((local_40 != '\0') &&
               (local_88 = CONCAT44(local_88._4_4_,(float)local_88), local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a64cc6;
          }
          if (*arg1 != 0) {
            FUN_01d3abf0();
            local_88 = FUN_01e466c0();
            uStack_80 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
            local_90 = (**(code **)(*plVar1 + 0x930))();
            uVar6 = (**(code **)(*local_38 + 0xc00))(local_88._4_4_);
            local_4c = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            local_64 = extraout_XMM0_Da;
            if (*arg1 == 0) {
              bVar8 = false;
              local_58 = 0;
            }
            else {
              local_58 = FUN_01d3b590();
              bVar8 = false;
            }
            goto LAB_01a64a70;
          }
        }
        local_4c = 0;
        local_58 = 0;
        goto LAB_01a64a70;
      }
    }
LAB_01a64cb8:
    FUN_01cf74c0();
  }
LAB_01a64cc6:
  if ((char)local_54 == '\0' && local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  return 1;
}




// ==================================================
// @01a639d0 (1344 bytes) — math_loop

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  uint uVar8;
  longlong *plVar9;
  undefined8 *arg1;
  longlong *this;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 in_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  undefined8 in_XMM1_Qb;
  undefined8 uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong local_a0;
  char local_98;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  ulonglong uVar7;
  
  local_c8 = (float)param_1;
  fStack_c4 = (float)((ulonglong)param_1 >> 0x20);
  fStack_c0 = (float)in_XMM0_Qb;
  fStack_bc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  uVar18 = param_2;
  uVar22 = in_XMM1_Qb;
  uVar13 = (**(code **)(*this + 0x640))();
  plVar9 = local_48;
  local_a0 = DAT_027e1c10;
  fVar20 = (float)((ulonglong)uVar18 >> 0x20);
  uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
  if (DAT_027e1c10 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar9 + 0x3b0))(uVar13,&local_a0);
  local_80 = local_70;
  local_78 = 0;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_78 = '\x01';
  FUN_01d488d0();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  FUN_01a18460();
  local_38 = local_70;
  plVar9 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
      (FUN_00d50b00(), plVar9 = local_38, local_68 != '\0')) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  fVar21 = fVar20;
  local_8c = (float)(**(code **)(*plVar9 + 0xbd0))();
  local_88 = (float)(**(code **)(*plVar9 + 3000))();
  (**(code **)(*this + 0xb00))();
  (**(code **)(*local_38 + 0x988))();
  plVar9 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01a63f2e;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01a63f2e;
  local_68 = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar9;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((longlong)plVar9 + 0xc)) {
    auVar2._8_4_ = fStack_c0;
    auVar2._0_8_ = param_1;
    auVar2._12_4_ = fStack_bc;
    local_d8 = (float)param_2;
    fStack_d4 = (float)((ulonglong)param_2 >> 0x20);
    fStack_d0 = (float)in_XMM1_Qb;
    fStack_cc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
    fVar11 = fStack_d4 + fStack_c4 + DAT_02390d00;
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    roundss(auVar14,auVar2,9);
    auVar15._4_4_ = fStack_d4 + fStack_c4;
    auVar15._0_4_ = local_d8 + local_c8;
    auVar15._8_4_ = fStack_d0 + fStack_c0;
    auVar15._12_4_ = fStack_cc + fStack_bc;
    auVar15 = roundss(ZEXT816(0),auVar15,9);
    local_84 = DAT_023908ec;
    if (auVar15._0_4_ <= DAT_023908ec) {
      local_84 = auVar15._0_4_;
    }
    uVar7 = 0;
    do {
      local_70 = *(longlong **)(plVar9[2] + uVar7 * 8);
      pVar6 = (pthread_key_t)uVar7;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar3 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = *(uint *)((longlong)plVar3 + 0xc);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          do {
            lVar1 = *(longlong *)(plVar3[2] + uVar10 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0126cd60();
            if (cVar4 == '\0') {
              pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_01263cf0();
              if (cVar4 == '\0') {
                pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar12 = (float)FUN_0125a2c0();
                if (!NAN(fVar12)) {
                  fVar12 = (fVar20 - (fVar12 - local_8c) * local_88) * (fVar21 / fVar20);
                  auVar16._0_4_ = (uint)fVar12 & _DAT_023945e0;
                  auVar16._4_4_ = (uint)fVar20 & _UNK_023945e4;
                  auVar16._8_4_ = uVar23 & _UNK_023945e8;
                  auVar16._12_4_ = uVar23 & _UNK_023945ec;
                  auVar17._4_12_ = SUB1612(auVar16 | _DAT_023945f0,4);
                  auVar17._0_4_ = SUB164(auVar16 | _DAT_023945f0,0) + fVar12;
                  auVar19._0_12_ = ZEXT812(0);
                  auVar19._12_4_ = 0;
                  auVar15 = roundss(auVar19,auVar17,0xb);
                  fVar12 = auVar15._0_4_ + DAT_02390d30;
                  if ((fStack_c4 <= fVar12) && (fVar12 <= fVar11)) {
                    (**(code **)(*(longlong *)*arg1 + 0x3e0))();
                  }
                }
              }
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
        FUN_00d50b20();
      }
      uVar8 = pVar6 + 1;
      uVar7 = (ulonglong)uVar8;
      local_58 = CONCAT44(local_58._4_4_,uVar8);
    } while ((int)uVar8 < *(int *)((longlong)plVar9 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  if (local_38 == (longlong *)0x0) {
    return;
  }
LAB_01a63f2e:
  FUN_00d50b20();
  return;
}




// ==================================================
// @00346c20 (1230 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *this;
  longlong **pplVar9;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  (**(code **)(*this + 0xe10))();
  plVar8 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
    return 0;
  }
  if (*(int *)((longlong)plVar8 + 0xc) < 1) {
LAB_00346d02:
    uVar4 = 0;
    goto LAB_003470ed;
  }
  (**(code **)(&UNK_00001668 + *this))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_00346d02;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_00346d02;
  local_68 = plVar1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01326de0();
  if (iVar3 == 4) {
LAB_00346d9b:
    local_60 = plVar8;
    pplVar9 = &local_58;
    (**(code **)(*this + 0xd48))();
    plVar8 = local_58;
    FUN_00083c20();
    if (plVar8 == (longlong *)0x0) {
LAB_00346dde:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00346dde;
    }
    plVar8 = local_60;
    local_70 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (longlong *)0x0) goto LAB_00346e6f;
    local_58 = (longlong *)FUN_01a90540();
    local_80 = CONCAT44(local_80._4_4_,4);
    FUN_00e7c2a0();
    plVar1 = local_58;
    local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((ulonglong)plVar1 >> 0x20 == 0) {
      uVar4 = 0;
LAB_00346e97:
      if (param_2 != '\0') {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar8;
        local_40 = 0xffffffff;
        local_38 = 0;
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
          lVar7 = (longlong)(int)local_40;
          iVar3 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar3) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar7 = local_90;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_80 = lVar7;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        plVar8 = local_48;
        FUN_001159b0();
        pvVar5 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_a0 = 0;
        local_98 = '\0';
        FUN_01385600(&local_a0,plVar1);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar4 = FUN_00e7c650();
      uVar4 = uVar4 ^ 1;
      if ((char)uVar4 == '\0') goto LAB_00346e97;
    }
    FUN_00d50b20();
    uVar4 = uVar4 ^ 1;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 2) goto LAB_00346d9b;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if (iVar3 == 1) goto LAB_00346d9b;
LAB_00346e6f:
    uVar4 = 0;
  }
  FUN_00d50b20();
LAB_003470ed:
  FUN_00d50b20();
  return uVar4;
}




// ==================================================
// @01a65cf0 (1221 bytes) — calculation

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *this;
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
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_01b68670();
  *(undefined1 *)(this + 0x36) = 0;
  FUN_00d6f370();
  lVar1 = DAT_027e2650;
  if (DAT_027e2650 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(undefined1 *)(this + 0x40) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  lVar1 = DAT_027e2658;
  if (DAT_027e2658 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(undefined1 *)((longlong)this + 0x201) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027e3bc0;
  if (DAT_027e3bc0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027e2660;
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_00d6f370();
  local_40 = local_80;
  local_38 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_38 = '\x01';
  FUN_00d41430(&local_40,&local_b0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_a0 = DAT_027e1360;
  if (DAT_027e1360 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar3 = FUN_00d70700();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d6f370();
    local_90 = DAT_027e1360;
    if (DAT_027e1360 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    cVar3 = FUN_00d70f90();
    if (*(char *)((longlong)this + 0x202) != cVar3) {
      *(char *)((longlong)this + 0x202) = cVar3;
      (**(code **)(*this + 0x620))();
      if (this[0x37] != 0) {
        this[0x37] = 0;
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00347340 (1208 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *arg1;
  longlong *this;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
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
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = this[0xa7];
  local_c0 = *param_2;
  if (local_d0 == local_c0) {
    return;
  }
  if (local_d0 != *arg1) {
    return;
  }
  local_c8 = '\0';
  local_b8 = '\0';
  FUN_01950bb0(local_d0,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_019f0ee0();
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01e26150();
  local_b0 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_110;
  uVar7 = FUN_000175c0(uVar7,&local_b0);
  plVar4 = local_110;
  if ((DAT_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
    _DAT_026f8f48 = FUN_00d4fe50();
    _DAT_026f8f30 = "MUTool";
    _DAT_026f8f38 = 0x38;
    _DAT_026f8f40 = FUN_00274e70;
    _DAT_026f8f50 = 0;
    uRam00000000026f8f58 = 0;
    _DAT_026f8f60 = 0;
    _DAT_026f8fd8 = 0;
    uRam00000000026f8fe0 = 0;
    _DAT_026f8fe8 = 0;
    DAT_026f8fea = 1;
    _DAT_026f8f68 = 0;
    uRam00000000026f8f70 = 0;
    _DAT_026f8f78 = 0;
    uRam00000000026f8f80 = 0;
    _DAT_026f8f88 = 0;
    uRam00000000026f8f90 = 0;
    _DAT_026f8f98 = 0;
    uRam00000000026f8fa0 = 0;
    _DAT_026f8fa8 = 0;
    uRam00000000026f8fb0 = 0;
    _DAT_026f8fb8 = 0;
    uRam00000000026f8fc0 = 0;
    _DAT_026f8fc8 = 0;
    uRam00000000026f8fd0 = 0;
    DAT_026f8ff3 = 0;
    _DAT_026f8feb = 0;
    uVar7 = ___cxa_guard_release();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_003474cf;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_003474cf:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  (**(code **)(*this + 0xec8))(uVar7,0);
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar7 = (**(code **)(*plVar4 + 0x18))();
  lVar1 = DAT_026f6de8;
  local_a0 = *param_2;
  local_98 = '\0';
  if (DAT_026f6de8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40[0] = '\0';
  FUN_00ca0840(uVar7,&local_48);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = DAT_026f6d80;
  if (DAT_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d50b00();
  local_78 = '\0';
  local_80 = plVar4;
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,3,3);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a61e30 (1147 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong *arg1;
  longlong this;
  longlong lVar8;
  byte bVar9;
  char cVar10;
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
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  lVar8 = local_58;
  pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
  pcVar6 = local_38;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_60 = FUN_00e8b990();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01a62243;
  FUN_0006e1c0();
  local_68 = FUN_00e86210();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar8 = DAT_027e3ba0;
  if (DAT_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar2 = local_58;
  if (local_58 == 0) {
    bVar9 = 1;
    local_3c = 0;
  }
  else {
    if (local_50[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      bVar9 = 0;
      if ((local_50[0] == '\0') || (bVar9 = 0, local_58 == 0)) goto LAB_01a61f96;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_50[0] = '\0';
    }
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    bVar9 = 0;
  }
LAB_01a61f96:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)(this + 0x1f8);
  local_80 = 0;
  local_48 = lVar2;
  (**(code **)(*(longlong *)(this + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_88 = plVar1;
  FUN_00cbadd0(&local_d8,&local_e8);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = DAT_026d83e0;
  if (DAT_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar8;
  local_c0 = '\x01';
  FUN_00c841b0();
  lVar8 = local_48;
  lVar2 = local_58;
  if (local_48 == local_58) {
    uVar7 = local_3c;
    if ((bool)(bVar9 & local_48 != 0)) {
      if (local_50[0] != '\0') goto LAB_01a620e4;
      FUN_00d50b00();
      uVar7 = 1;
    }
LAB_01a62138:
    cVar10 = (char)uVar7;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      lVar8 = lVar2;
      uVar7 = 1;
      if (((byte)local_3c & local_48 != 0) == 1) {
        local_48 = lVar2;
        FUN_00d50b20();
      }
      goto LAB_01a62138;
    }
    lVar8 = local_58;
    if (((byte)local_3c & local_48 != 0) == 1) {
      local_48 = local_58;
      FUN_00d50b20();
    }
LAB_01a620e4:
    local_50[0] = '\0';
    cVar10 = '\x01';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_70 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a0 = '\0';
  local_a8 = lVar8;
  local_78 = plVar1;
  FUN_00cbadd0(&local_a8,&local_b8);
  lVar2 = local_68;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    (**(code **)(*local_78 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a62243:
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01a18830();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00235240 (1113 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong this;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(this + 0x90) == (longlong *)0x0) {
LAB_002353ce:
    if (*(longlong **)(this + 0xc0) == (longlong *)0x0) {
      return;
    }
    cVar3 = (**(code **)(**(longlong **)(this + 0xc0) + 0x398))();
    local_70 = param_1;
    if (DAT_02805cda != cVar3) {
LAB_002353f7:
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_48 + 0x450))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        plVar1 = *(longlong **)(this + 0x90);
        (**(code **)(&UNK_00001550 + *plVar1))();
        plVar6 = local_48;
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == (longlong *)0x0) {
          plVar6 = *(longlong **)(this + 0x90);
LAB_00235487:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00235487;
        (**(code **)(*plVar6 + 0x970))();
        FUN_01d982e0();
        lVar2 = CONCAT71(uStack_57,local_58);
        if ((local_50 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          plVar1 = *(longlong **)(this + 0x90);
          (**(code **)(&UNK_00001550 + *plVar1))();
          plVar6 = local_48;
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 == (longlong *)0x0) {
            plVar6 = *(longlong **)(this + 0x90);
LAB_0023554b:
            FUN_00d50b00();
          }
          else if (local_38[0] == '\0') goto LAB_0023554b;
          (**(code **)(*plVar6 + 0x970))();
          FUN_01d982e0();
          (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x620))();
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_002353ce;
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(longlong *)CONCAT71(uStack_57,local_58) + 0x20))();
    plVar1 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(longlong *)CONCAT71(uStack_57,local_58) + 0x20))();
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(this + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(longlong *)CONCAT71(uStack_57,local_58) + 0x20))();
    local_70 = (**(code **)(*local_48 + 0x68))();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (DAT_02805cda != cVar3) goto LAB_002353f7;
  }
  if (((cVar3 != '\0') && (DAT_02805cda != cVar3)) && (*(char *)(this + 0x150) != '\0')) {
    *(undefined1 *)(this + 0x150) = 0;
    FUN_0021e5f0();
  }
  plVar1 = *(longlong **)(this + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar5 = &local_58;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_58 = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar6 = *(longlong **)(this + 0x90);
  }
  else {
    plVar6 = local_48;
    if (local_58 != '\0') goto LAB_0023563b;
  }
  FUN_00d50b00();
LAB_0023563b:
  (**(code **)(*plVar6 + 0xf00))(local_70);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(longlong **)(this + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x98) + 0x928))(local_70);
  }
  if (cVar3 != '\0') {
    FUN_0021eea0(0);
  }
  DAT_02805cda = cVar3;
  return;
}




// ==================================================
// @01a62610 (1104 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong this;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  longlong local_d0;
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
  longlong *local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48 [12];
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_01a18a00();
  FUN_00d23310();
  lVar1 = local_50;
  pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return;
  }
  local_58 = lVar3;
  FUN_0006e1c0();
  local_60 = FUN_00e86210();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e3ba0;
  if (DAT_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar8 = 1;
    local_3c = 0;
  }
  else {
    if (local_48[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      bVar8 = 0;
      if ((local_48[0] == '\0') || (bVar8 = 0, local_50 == 0)) goto LAB_01a627a7;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_48[0] = '\0';
    }
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    bVar8 = 0;
  }
LAB_01a627a7:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_78 = 0;
  plVar7 = (longlong *)(this + 0x1f8);
  (**(code **)(*(longlong *)(this + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_c0 = lVar3;
  local_b8 = '\0';
  local_80 = plVar7;
  FUN_00cbad30(&local_c0,&local_d0,0xa0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = DAT_026d83e0;
  if (DAT_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_00c841b0();
  lVar1 = local_50;
  bVar9 = (byte)local_3c;
  if (lVar3 == local_50) {
    if ((bool)(bVar8 & lVar3 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a628fd;
      bVar9 = 1;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48[0] != '\0') {
      bVar10 = lVar3 != 0;
      lVar3 = local_50;
      if ((bVar9 & bVar10) == 1) {
        FUN_00d50b20();
      }
LAB_01a628fd:
      local_48[0] = '\0';
      bVar9 = 1;
      goto LAB_01a62964;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar10 = lVar3 != 0;
    bVar9 = 1;
    lVar3 = lVar1;
    if (((byte)local_3c & bVar10) == 1) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01a62964:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  local_88 = '\0';
  local_90 = lVar3;
  local_70 = plVar7;
  FUN_00cbad30(&local_90,&local_a0,0xa0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if ((bVar9 != 0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @00347e50 (949 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  pthread_key_t pVar3;
  void *pvVar4;
  undefined8 *this;
  longlong *plVar5;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_40;
  if (*param_2 == 0) {
    FUN_012ca6e0(param_1,0);
    pVar3 = (pthread_key_t)param_1;
    if (local_40 != (longlong *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar3 = FUN_012e57e0();
    FUN_012c9e50(pVar3,0);
    if (local_40 != (longlong *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  bVar1 = false;
  plVar5 = (longlong *)0x0;
LAB_00347f30:
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012cb3e0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_012e89e0();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(this + 1) = 0;
  if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *this = plVar5;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @00236500 (844 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong this;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(this + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(this + 0x90);
LAB_00236580:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00236580;
    (**(code **)(&UNK_00001570 + *plVar4))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(this + 0x90);
LAB_0023660a:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023660a;
    (**(code **)(&UNK_00001578 + *plVar4))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026f6df8;
    if (DAT_026f6df8 != 0) {
      FUN_00d50b00();
    }
    FUN_00236990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(this + 0x90);
LAB_002366c0:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_002366c0;
    (**(code **)(*plVar4 + 0x620))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(this + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(this + 0x90);
LAB_0023673b:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023673b;
    (**(code **)(*plVar4 + 0xa48))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(longlong **)(this + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    plVar4 = *(longlong **)(this + 0x90);
  }
  else {
    plVar4 = local_48;
    if (local_38[0] != '\0') goto LAB_002367fe;
  }
  FUN_00d50b00();
LAB_002367fe:
  (**(code **)(&UNK_00001570 + *plVar4))();
  FUN_01d66ab0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ==================================================
// @01a675b0 (812 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong arg1;
  longlong *this;
  longlong lVar8;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(arg1 + 0x1f8) == 0) {
    bVar1 = false;
    lVar8 = 0;
  }
  else if (param_1 >> 0x20 == 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)param_1;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(0,1,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = param_1;
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    pVar5 = (pthread_key_t)uVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar8 = local_58;
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (bVar1 = bVar2, local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0171b9c0();
  local_78 = *param_2;
  local_70 = '\0';
  local_60 = '\0';
  local_68 = lVar8;
  FUN_0171c6b0(&local_68,&local_78);
  lVar3 = local_58;
  *(undefined1 *)(this + 1) = 0;
  if (local_50[0] == '\0') {
    if (local_58 == 0) {
      *this = 0;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this = lVar3;
      *(undefined1 *)(this + 1) = 1;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this = local_58;
    *(undefined1 *)(this + 1) = 1;
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a59d50 (781 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *pcVar7;
  longlong *arg1;
  undefined8 *this;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_48;
  FUN_00d23340();
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_48 == (longlong *)0x0) {
    *this = puVar5;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    (**(code **)(*local_48 + 0x9b8))(param_1,param_2);
    if (local_48 == (longlong *)0x0) {
      *this = puVar5;
      *(undefined1 *)(this + 1) = 1;
    }
    else {
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((longlong)local_48 + 0xc) < 1) {
        bVar1 = false;
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar8 = 0;
        bVar1 = false;
        plVar9 = (longlong *)0x0;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar3);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_48 == plVar9) {
            plVar10 = plVar9;
            bVar2 = bVar1;
            if ((bVar1) || (local_48 == (longlong *)0x0)) goto joined_r0x01a59f59;
            bVar2 = true;
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01a59f45;
            }
          }
          else {
            plVar10 = local_48;
            if (local_40[0] == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar9 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar9 = local_48;
LAB_01a59f45:
                plVar10 = plVar9;
                bVar2 = true;
              }
joined_r0x01a59f59:
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar2 = true;
              if ((bVar1) && (plVar9 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          bVar1 = bVar2;
          if ((plVar10 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*arg1 + 0x430))(), cVar4 != '\0')) {
            local_40[0] = '\0';
            FUN_00d21140();
            local_48 = plVar10;
            if ((local_40[0] != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar10;
        } while (lVar8 < *(int *)((longlong)plVar3 + 0xc));
      }
      *this = puVar5;
      *(undefined1 *)(this + 1) = 1;
      if ((bVar1) && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01a66610 (696 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  longlong *this;
  bool bVar3;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar1 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_38 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (cVar2 = FUN_0171c180(), cVar2 == '\0')) {
    FUN_00d3ecc0();
    lVar1 = DAT_027e3bc0;
    if (DAT_027e3bc0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (cVar2 == '\0') {
      bVar3 = false;
    }
    else {
      FUN_00d3ecf0();
      (**(code **)(*local_98 + 0x7b8))();
      (**(code **)(*this + 0x7b8))();
      bVar3 = local_a8 == local_b8;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d6f370();
      lVar1 = DAT_027e1360;
      if (DAT_027e1360 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d70f90(param_1,0);
      if (*(char *)((longlong)this + 0x202) != cVar2) {
        *(char *)((longlong)this + 0x202) = cVar2;
        (**(code **)(*this + 0x620))();
        if (this[0x37] != 0) {
          this[0x37] = 0;
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*this + 0x620))();
    if (this[0x37] != 0) {
      this[0x37] = 0;
      FUN_00d50b20();
    }
  }
  FUN_01b68a30();
  return;
}




// ==================================================
// @002358e0 (694 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *arg1;
  longlong this;
  longlong *local_38;
  char local_30;
  
  *(longlong *)(this + 0xd8) = *arg1;
  if (*(longlong *)(this + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(this + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00235db0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_019f0f30();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00236020();
    lVar1 = *(longlong *)(this + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar2 = *(longlong **)(lVar1 + 0x408);
    if (plVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (longlong *)0x0) {
          *(undefined8 *)(lVar1 + 0x408) = 0;
        }
        else {
          FUN_00d50b00();
          plVar2 = *(longlong **)(lVar1 + 0x408);
          *(longlong **)(lVar1 + 0x408) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(longlong **)(lVar1 + 0x408) = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(this + 0x90);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x968))(0);
    FUN_00d50b20();
    lVar1 = *(longlong *)(this + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_019f0ee0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00234400();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_38 + 0x450))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar1 = *(longlong *)(this + 0x90);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01e42250();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @01a61310 (602 bytes) — calculation

{
  undefined8 *arg1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  longlong local_38;
  char local_30;
  
  FUN_01cfcdc0(DAT_02390124,DAT_0239011c,DAT_02394288,DAT_0239011c);
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
  FUN_01d48b40(DAT_023908d8);
  uVar1 = FUN_01a5ffc0();
  uVar2 = FUN_01a608f0();
  uVar3 = FUN_01e437f0(uVar1);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar4 = FUN_01e437f0(uVar2);
  fVar7 = (float)uVar4;
  fVar5 = (fVar7 - (float)uVar3) * DAT_02390118 + fVar7;
  uVar1 = extraout_XMM0_Dd;
  uVar2 = extraout_XMM0_Dc;
  (**(code **)(*(longlong *)*arg1 + 0x4e0))();
  (**(code **)(*(longlong *)*arg1 + 0x4f8))
            (fVar5,uVar6,fVar5,(int)((ulonglong)uVar4 >> 0x20),uVar6,uVar1,fVar7,uVar2);
  (**(code **)(*(longlong *)*arg1 + 0x520))();
  FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
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
  FUN_01d48b40(DAT_02390124);
  (**(code **)(*(longlong *)*arg1 + 0x520))();
  return;
}




// ==================================================
// @01a66aa0 (592 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *arg1;
  longlong this;
  undefined8 uVar4;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(this + 0x1f8) == 0) || (*arg1 != *(longlong *)(this + 0x1f8))) {
    FUN_01788770();
    FUN_017879e0();
    lVar1 = *arg1;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e2670;
    if (lVar1 == local_50) {
      if (DAT_027e2670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      uVar4 = FUN_01e1ea80(DAT_02391030,&stack0xffffffffffffffa0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      if (this != 0) {
        uVar4 = FUN_00d50b20();
      }
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_01a66e80();
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar4 = FUN_01b6d800();
    if (local_40 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_01b68d40(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a5cd20 (562 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *arg1;
  longlong this;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  uVar5 = FUN_01e26150();
  local_60 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_58 = '\x01';
  pplVar4 = &local_80;
  uVar5 = FUN_000175c0(uVar5,&local_60);
  plVar1 = local_80;
  if ((DAT_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar5 = extraout_XMM0_Da_00, iVar3 != 0)) {
    _DAT_026f8f48 = FUN_00d4fe50();
    _DAT_026f8f30 = "MUTool";
    _DAT_026f8f38 = 0x38;
    _DAT_026f8f40 = FUN_00274e70;
    _DAT_026f8f50 = 0;
    uRam00000000026f8f58 = 0;
    _DAT_026f8f60 = 0;
    _DAT_026f8fd8 = 0;
    uRam00000000026f8fe0 = 0;
    _DAT_026f8fe8 = 0;
    DAT_026f8fea = 1;
    _DAT_026f8f68 = 0;
    uRam00000000026f8f70 = 0;
    _DAT_026f8f78 = 0;
    uRam00000000026f8f80 = 0;
    _DAT_026f8f88 = 0;
    uRam00000000026f8f90 = 0;
    _DAT_026f8f98 = 0;
    uRam00000000026f8fa0 = 0;
    _DAT_026f8fa8 = 0;
    uRam00000000026f8fb0 = 0;
    _DAT_026f8fb8 = 0;
    uRam00000000026f8fc0 = 0;
    _DAT_026f8fc8 = 0;
    uRam00000000026f8fd0 = 0;
    DAT_026f8ff3 = 0;
    _DAT_026f8feb = 0;
    uVar5 = ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_01a5cdb4;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_01a5cdb4:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    if (this != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_50 = *arg1;
    local_48 = '\0';
    (**(code **)(*plVar1 + 0x480))(uVar5,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a5d400 (561 bytes) — calculation

{
  char *pcVar1;
  longlong local_b8;
  char local_b0 [8];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01d70da0();
  FUN_01d701d0();
  local_88 = DAT_027e2260;
  if (DAT_027e2260 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d64eb0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d70010();
  FUN_017281b0();
  FUN_00d23310();
  pcVar1 = local_38;
  if (local_b0[0] != '\0') {
    pcVar1 = local_b0;
  }
  local_38[0] = local_b0[0];
  *pcVar1 = '\0';
  if ((local_b0[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 1;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_58 = local_b8;
  local_50 = '\x01';
  FUN_00d8cb40();
  local_48 = local_78;
  local_40 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = '\x01';
  FUN_01d64eb0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d6ed40();
  FUN_01d6ed40();
  return;
}




// ==================================================
// @01a67240 (557 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong arg1;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(arg1 + 0x202) != '\0') {
    uVar4 = param_1;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    pVar3 = (pthread_key_t)uVar4;
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_1,0,0,0);
    lVar1 = local_48;
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_0171b9c0();
      local_88 = *param_2;
      local_80 = '\0';
      local_78 = lVar1;
      local_70 = '\0';
      FUN_01720f20(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_0171b9c0();
  local_68 = *param_2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_01721000(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a5c3e0 (545 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *this;
  longlong lVar5;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_01e1f170();
  if (iVar3 == -1) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    iVar3 = FUN_01e1f180();
    if (iVar3 == -1) {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar4 = FUN_01e1f170();
      FUN_01e1f230(param_1,uVar4);
      uVar4 = FUN_01e1f180();
      FUN_01e26090(param_1,uVar4);
      lVar5 = local_40;
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e26150();
    local_60 = DAT_026f6e60;
    if (DAT_026f6e60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_000175c0(param_1,&local_60);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((bVar1) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01a597e0 (507 bytes) — calculation

{
  char cVar1;
  void *pvVar2;
  longlong *arg1;
  longlong *this;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  local_38 = *arg1;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*this + 0x428))();
  if (cVar1 != '\0') {
    *(undefined1 *)(this + 6) = 1;
    (**(code **)(*(longlong *)*arg1 + 0xa00))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_50 = 0;
    (**(code **)(this[2] + 0x10))();
    FUN_00d50b00();
    local_50 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    local_58 = this + 2;
    FUN_0006e1c0();
    FUN_00e86210();
    local_78 = DAT_027e1390;
    if (DAT_027e1390 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00c841b0();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_40 = '\x01';
    FUN_00cbad30(&local_48,&local_88,0x20);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this + 0x458))();
  return;
}




// ==================================================
// @01a5dca0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b2be8 == 0) || (DAT_028b2bf1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e2288;
    if (DAT_028b2be8 == 0) {
      if (DAT_027e2288 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b2be8;
      if (DAT_028b2be8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b2be8 != 0;
        DAT_028b2be8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b2bf0 == '\0')) {
        DAT_028b2bf0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2bf1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2bf1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2be8 == 0) {
      lVar3 = 0;
      goto LAB_01a5de59;
    }
  }
  lVar3 = DAT_028b2be8;
  FUN_00d50b00();
LAB_01a5de59:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a64570 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b2bf8 == 0) || (DAT_028b2c01 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ebc08;
    if (DAT_028b2bf8 == 0) {
      if (DAT_027ebc08 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b2bf8;
      if (DAT_028b2bf8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b2bf8 != 0;
        DAT_028b2bf8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b2c00 == '\0')) {
        DAT_028b2c00 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2c01 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2bf8 == 0) {
      lVar3 = 0;
      goto LAB_01a64729;
    }
  }
  lVar3 = DAT_028b2bf8;
  FUN_00d50b00();
LAB_01a64729:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



