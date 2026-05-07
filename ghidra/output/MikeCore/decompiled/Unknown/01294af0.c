// Function: FUN_01294af0
// Address: 01294af0
// Size: 5638 bytes
// Class: Unknown


void FUN_01294af0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  int unaff_ESI;
  int iVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  code *pcVar15;
  undefined8 local_198;
  undefined1 local_190;
  undefined *local_188;
  code *local_180;
  double local_178;
  undefined8 local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  int local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  int local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  code *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  local_170 = param_2;
  local_c8 = param_1;
  local_c4 = param_3;
  if (unaff_ESI != 0) {
    local_170 = FUN_00e7bdb0();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_b8 = plVar3;
  if ((longlong *)*unaff_RDI != (longlong *)0x0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_60 = DAT_02572370;
    local_40._4_4_ = 0;
    local_48 = (longlong *)*unaff_RDI;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar10 = -local_40._4_4_;
        }
        else {
          iVar10 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar10 = 0;
        }
        local_40 = CONCAT44(iVar10,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar10 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar10);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar10) break;
      lVar6 = local_48[2];
      plVar3 = *(longlong **)(lVar6 + 8 + lVar4 * 8);
      local_58 = plVar3;
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
      plVar7 = local_58;
      pVar9 = (pthread_key_t)lVar6;
      if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar3 = plVar7, lVar4 != 0)) {
        plVar3 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      lVar4 = plVar3[0x20];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      plVar3 = local_58;
      pvVar5 = _pthread_getspecific(pVar9);
      plVar7 = local_58;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar3 = plVar7, lVar6 != 0)) {
        plVar3 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      if (plVar3[0x1b] == 0) {
LAB_01294d10:
        plVar3 = (longlong *)0x0;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef640();
        plVar3 = local_a8;
        if (local_a0 == '\0') {
          if (local_a8 == (longlong *)0x0) goto LAB_01294d10;
          FUN_00d50b00();
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_140 = '\0';
      local_148 = lVar4;
      uVar13 = FUN_01296ab0();
      plVar7 = local_a8;
      if (local_a0 == '\0') {
        if (((local_a8 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_a0 != '\0')) &&
           (local_a8 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_a0 = '\0';
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        uVar13 = (**(code **)(*plVar7 + 0x18))();
        local_130 = '\0';
        local_120 = '\0';
        local_138 = plVar7;
        local_128 = lVar4;
        uVar13 = FUN_01296b60(uVar13,&local_128);
        if ((local_120 != '\0') && (local_128 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      local_110 = '\0';
      local_118 = plVar3;
      FUN_004a26e0(uVar13,&local_118);
      plVar11 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        bVar1 = false;
      }
      else if (local_a0 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a0 = '\0';
        bVar1 = true;
      }
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02572358;
        uVar13 = (*local_60)();
        local_100 = '\0';
        local_f0 = '\0';
        local_108 = puVar8;
        local_f8 = plVar3;
        FUN_004a2790(uVar13,&local_f8);
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = true;
        if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a8 = local_58;
      local_a0 = '\0';
      FUN_00d21140();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if (local_b8 == (longlong *)0x0) {
      return;
    }
  }
  local_a0 = '\0';
  local_a8 = (longlong *)0x0;
  local_98 = local_b8[2];
  local_90 = 0;
  if (0 < *(int *)(local_98 + 0xc)) {
    local_180 = DAT_02572370;
    local_188 = &DAT_02572358;
    do {
      local_a8 = *(longlong **)(*(longlong *)(local_98 + 0x10) + (longlong)local_90 * 8);
      FUN_01296c10((longlong)local_90,&local_a8);
      plVar3 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01295124;
        }
      }
      else if (local_58 != (longlong *)0x0) {
LAB_01295124:
        local_160 = '\0';
        local_168 = 0;
        local_c0 = plVar3;
        local_158 = plVar3[2];
        local_150 = 0;
        if (0 < *(int *)(local_158 + 0xc)) {
          do {
            lVar4 = (longlong)local_150;
            local_168 = *(longlong *)(*(longlong *)(local_158 + 0x10) + lVar4 * 8);
            FUN_01296ce0(lVar4,&local_168);
            pVar9 = (pthread_key_t)lVar4;
            local_78 = local_58;
            if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = local_188;
            (*local_180)();
            local_b0 = puVar8;
            FUN_01266770();
            plVar3 = local_58;
            if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            FUN_01266b80();
            plVar7 = local_58;
            if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            plVar11 = plVar3;
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar11 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            uVar13 = FUN_012e9900((double)plVar11[0x1d] + DAT_023b1e90,DAT_023b2c70);
            plVar11 = local_88;
            if (local_80 == '\0') {
              if (local_88 != (longlong *)0x0) {
                uVar13 = FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_58 = plVar11;
            local_50 = '\0';
            FUN_00d214d0(uVar13,*(undefined4 *)((longlong)local_b0 + 0xc));
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            plVar11 = plVar7;
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            FUN_012ea6f0((double)plVar11[0x1d] + (double)plVar11[0x1e],DAT_023b2c70);
            plVar11 = local_88;
            if (local_80 == '\0') {
              if (local_88 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_58 = plVar11;
            local_50 = '\0';
            FUN_00d214d0();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (*(int *)((longlong)local_b0 + 0xc) == 0) {
              local_58 = local_78;
              local_50 = '\0';
              FUN_00d214d0();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_178 = 0.0;
            if ((char)local_c8 == '\0') {
              local_e8 = local_b0;
              local_e0 = '\0';
              pVar9 = 0;
              local_178 = (double)FUN_012912a0(0,0,0);
              if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if ((pvVar5 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
              if (plVar3[0x15] == 0) goto LAB_01295559;
LAB_0129558f:
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff70();
              if (plVar3 != local_58) goto LAB_012955d8;
LAB_01295570:
              local_68 = plVar3;
LAB_0129561b:
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_68 == (longlong *)0x0) {
                local_68 = (longlong *)0x0;
              }
              else {
LAB_01295636:
                local_58 = local_68;
                local_50 = '\0';
                FUN_00d21140();
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (*(longlong *)(plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4] + 0xa8) != 0)
              goto LAB_0129558f;
LAB_01295559:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              if (plVar3 == (longlong *)0x0) goto LAB_01295570;
LAB_012955d8:
              local_68 = local_58;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_0129561b;
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (local_68 != (longlong *)0x0) goto LAB_01295636;
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if ((pvVar5 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
              if (plVar7[0x14] == 0) goto LAB_012956ab;
LAB_012956df:
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              if (plVar7 != local_58) goto LAB_01295728;
LAB_012956c2:
              local_70 = plVar7;
LAB_0129576b:
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_70 == (longlong *)0x0) {
                local_70 = (longlong *)0x0;
              }
              else {
LAB_01295786:
                local_58 = local_70;
                local_50 = '\0';
                FUN_00d21140();
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (*(longlong *)(plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4] + 0xa0) != 0)
              goto LAB_012956df;
LAB_012956ab:
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              if (plVar7 == (longlong *)0x0) goto LAB_012956c2;
LAB_01295728:
              local_70 = local_58;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_0129576b;
              }
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (local_70 != (longlong *)0x0) goto LAB_01295786;
            }
            FUN_00c8e710();
            plVar3 = local_58;
            if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            FUN_00c92160();
            local_50 = 0;
            local_58 = (longlong *)0x0;
            local_48 = local_78;
            local_40._0_4_ = -1;
            local_40._4_4_ = 0;
            local_38 = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  local_40._4_4_ = -local_40._4_4_;
                }
                else {
                  local_40._0_4_ = (int)local_40 - local_40._4_4_;
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  local_40._4_4_ = 0;
                }
              }
              lVar4 = (longlong)(int)local_40;
              local_40._0_4_ = (int)local_40 + 1;
              if (*(int *)((longlong)local_48 + 0xc) <= (int)local_40) break;
              lVar6 = local_48[2];
              plVar7 = *(longlong **)(lVar6 + 8 + lVar4 * 8);
              local_58 = plVar7;
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar6);
              plVar11 = local_58;
              pVar9 = (pthread_key_t)lVar6;
              if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar11, lVar4 != 0))
              {
                plVar7 = *(longlong **)
                          ((longlong)plVar11 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8)
                ;
              }
              local_60 = (code *)CONCAT44(local_60._4_4_,*(undefined4 *)((longlong)plVar7 + 0xf8));
              lVar4 = plVar3[3];
              FUN_00c8e340(*(undefined4 *)((longlong)plVar7 + 0xf8),1);
              *(float *)(plVar3[2] + (longlong)(int)lVar4) = local_60._0_4_;
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              plVar7 = local_88;
              if ((((local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar11 = local_58;
              pvVar5 = _pthread_getspecific(pVar9);
              plVar2 = local_58;
              if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0))
              {
                plVar11 = *(longlong **)
                           ((longlong)plVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8)
                ;
              }
              if ((*(double *)((longlong)plVar11 + 0x150) != DAT_0238fee8) ||
                 (NAN(*(double *)((longlong)plVar11 + 0x150)) || NAN(DAT_0238fee8))) {
                FUN_00d64850();
                *(undefined8 *)((longlong)plVar11 + 0x150) = 0x3ff0000000000000;
                FUN_00d64910();
              }
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126dd90();
              plVar11 = local_58;
              if (plVar7 != (longlong *)0x0) {
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar12 = (float)FUN_013de3b0();
                if ((*(float *)((longlong)plVar11 + 0xf8) != fVar12) ||
                   (NAN(*(float *)((longlong)plVar11 + 0xf8)) || NAN(fVar12))) {
                  local_60 = (code *)CONCAT44(local_60._4_4_,fVar12);
                  FUN_00d64850();
                  *(float *)((longlong)plVar11 + 0xf8) = local_60._0_4_;
                  FUN_00d64910();
                }
                plVar11 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar14 = (double)FUN_013de8d0();
                pcVar15 = (code *)(dVar14 + local_178);
                if ((*(double *)((longlong)plVar11 + 0xe8) != (double)pcVar15) ||
                   (NAN(*(double *)((longlong)plVar11 + 0xe8)) || NAN((double)pcVar15))) {
                  local_60 = pcVar15;
                  FUN_00d64850();
                  *(code **)((longlong)plVar11 + 0xe8) = local_60;
                  FUN_00d64910();
                }
                plVar11 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pcVar15 = (code *)FUN_013de9b0();
                if ((*(double *)((longlong)plVar11 + 0xf0) != (double)pcVar15) ||
                   (NAN(*(double *)((longlong)plVar11 + 0xf0)) || NAN((double)pcVar15))) {
                  local_60 = pcVar15;
                  FUN_00d64850();
                  *(code **)((longlong)plVar11 + 0xf0) = local_60;
                  FUN_00d64910();
                }
                plVar11 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pcVar15 = (code *)FUN_013def20();
                if ((*(double *)((longlong)plVar11 + 0xb8) != (double)pcVar15) ||
                   (NAN(*(double *)((longlong)plVar11 + 0xb8)) || NAN((double)pcVar15))) {
                  local_60 = pcVar15;
                  FUN_00d64850();
                  *(code **)((longlong)plVar11 + 0xb8) = local_60;
                  FUN_00d64910();
                }
                plVar11 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pcVar15 = (code *)FUN_013defa0();
                if ((*(double *)((longlong)plVar11 + 0xc0) != (double)pcVar15) ||
                   (NAN(*(double *)((longlong)plVar11 + 0xc0)) || NAN((double)pcVar15))) {
                  local_60 = pcVar15;
                  FUN_00d64850();
                  *(code **)((longlong)plVar11 + 0xc0) = local_60;
                  FUN_00d64910();
                }
                plVar11 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar2 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar11 = plVar2, lVar4 != 0)) {
                  plVar11 = *(longlong **)
                             ((longlong)plVar2 + 0x20 +
                             (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
                }
                if ((*(double *)((longlong)plVar11 + 0x148) != DAT_0238fee8) ||
                   (NAN(*(double *)((longlong)plVar11 + 0x148)) || NAN(DAT_0238fee8))) {
                  FUN_00d64850();
                  *(undefined8 *)((longlong)plVar11 + 0x148) = 0x3ff0000000000000;
                  FUN_00d64910();
                }
              }
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a5f0();
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
            local_50 = '\0';
            local_58 = (longlong *)0x0;
            local_48 = local_78;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar10 = -local_40._4_4_;
                }
                else {
                  iVar10 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar10);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar10 = 0;
                }
                local_40 = CONCAT44(iVar10,(int)local_40);
              }
              lVar4 = (longlong)(int)local_40;
              iVar10 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              if (*(int *)((longlong)local_48 + 0xc) <= iVar10) break;
              local_58 = *(longlong **)(local_48[2] + 8 + lVar4 * 8);
              lVar4 = plVar3[2];
              local_60 = (code *)CONCAT44(local_60._4_4_,
                                          *(undefined4 *)
                                           (lVar4 + ((longlong)iVar10 + (longlong)local_38) * 4));
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar4);
              pVar9 = (pthread_key_t)lVar4;
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              if (local_80 == '\0') {
                if (local_88 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01295fa0;
                }
              }
              else if (local_88 != (longlong *)0x0) {
LAB_01295fa0:
                plVar7 = local_58;
                pvVar5 = _pthread_getspecific(pVar9);
                plVar11 = local_58;
                if ((pvVar5 != (void *)0x0) &&
                   (lVar4 = FUN_00e8b990(), plVar7 = plVar11, lVar4 != 0)) {
                  plVar7 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                if ((*(float *)(plVar7 + 0x1f) != local_60._0_4_) ||
                   (NAN(*(float *)(plVar7 + 0x1f)) || NAN(local_60._0_4_))) {
                  FUN_00d64850();
                  *(float *)(plVar7 + 0x1f) = local_60._0_4_;
                  FUN_00d64910();
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                FUN_00d50b20();
              }
            }
            FUN_001159b0();
            local_198 = 0;
            local_190 = 0;
            FUN_01271d60(&local_198,1);
            plVar7 = local_58;
            if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            FUN_0127e4d0(0);
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((char)local_c4 == '\0') {
              local_d8 = local_78;
              local_d0 = '\0';
              FUN_01287c80();
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_b0 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_150 = local_150 + 1;
          } while (local_150 < *(int *)(local_158 + 0xc));
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      local_90 = local_90 + 1;
    } while (local_90 < *(int *)(local_98 + 0xc));
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


