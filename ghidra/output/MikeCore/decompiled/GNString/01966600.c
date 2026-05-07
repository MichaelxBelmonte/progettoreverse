// Function: FUN_01966600
// Address: 01966600
// Size: 5893 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x019670a7) */
/* WARNING: Removing unreachable block (ram,0x019670b0) */

void FUN_01966600(undefined4 param_1,undefined4 param_2)

{
  pthread_key_t pVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong *local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  undefined4 local_178 [2];
  undefined4 uStack_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_114;
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
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong *local_88;
  char local_80;
  double local_78;
  float local_6c;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  lVar13 = unaff_RDI[0x3b];
  local_178[0] = param_1;
  uStack_170 = param_2;
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  local_160 = 0;
  lVar8 = unaff_RDI[0x2f];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_168 = lVar8;
  cVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
  if (cVar4 == '\0') {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)((longlong)unaff_RDI + 0x1c4) ^ 1;
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*unaff_RDI + 0x9c8))();
  pVar10 = (pthread_key_t)bVar11;
  bVar12 = 0;
  if (cVar4 == '\0') {
    bVar12 = bVar11;
  }
  if ((lVar13 == 0) && (lVar8 = unaff_RDI[0x3c], lVar8 != 0)) {
    pVar10 = (uint)bVar11;
    FUN_00d50b00();
    lVar13 = lVar8;
  }
  cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0126cd60();
    if (cVar4 == '\0') {
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0126f420();
      if (cVar4 == '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_60 + 0x3a8))();
        local_f8 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_f8 = '\x01';
        local_100 = local_40;
        FUN_01d488d0();
        if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01968ab0();
        uVar5 = FUN_01968c50();
        local_1e8 = *unaff_RSI;
        local_1e0 = '\0';
        FUN_01a07890(&local_1e8,uVar5,local_178);
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01968ab0();
        uVar5 = FUN_01968c50();
        local_1d8 = *unaff_RSI;
        local_1d0 = '\0';
        FUN_019689c0(&local_1d8,uVar5,local_178,bVar12);
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x928))();
        if (local_40 == (longlong *)0x0) {
          local_6c = 0.0;
        }
        else {
          (**(code **)(*unaff_RDI + 0x928))();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_6c = (float)FUN_0126cd70();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        uVar15 = (**(code **)(&UNK_00001418 + *local_40))();
        local_78 = (double)CONCAT44(local_78._4_4_,uVar15);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar15 = 0;
        uVar17 = 0;
        uVar18 = 0;
        fVar16 = local_6c * DAT_0241b63c + DAT_0239011c;
        local_6c = 0.0;
        if (0.0 <= fVar16) {
          local_6c = fVar16;
        }
        if ((local_78._0_4_ != DAT_02390124) || (NAN(local_78._0_4_) || NAN(DAT_02390124))) {
          FUN_01989f80();
          cVar4 = FUN_019f7810();
          local_114 = DAT_02390124;
          if (cVar4 == '\0') {
            local_114 = 0.0;
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x4d8))();
          local_128 = (double)CONCAT44(uVar15,fVar16);
          local_78 = (double)((ulonglong)local_78 & 0xffffffff00000000);
          uStack_120 = uVar17;
          uStack_11c = uVar18;
          if (cVar4 != '\0') {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_019670b5;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_019670b5:
              pvVar7 = _pthread_getspecific(pVar10);
              pVar1 = (pthread_key_t)local_40;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pVar10 = pVar1;
              }
              cVar4 = FUN_013dee00();
              if (cVar4 == '\0') {
                pvVar7 = _pthread_getspecific(pVar10);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar10 = pVar1;
                }
                cVar4 = FUN_013dee60();
                local_78 = (double)((ulonglong)local_78 & 0xffffffff00000000);
                if (cVar4 != '\0') {
                  pvVar7 = _pthread_getspecific(pVar10);
                  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar10 = pVar1;
                  }
                  lVar8 = FUN_013ded30();
                  pvVar7 = _pthread_getspecific(pVar10);
                  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pVar10 = pVar1;
                  }
                  local_78 = (double)FUN_013de950();
                  FUN_01989f80();
                  local_90 = local_40;
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_78 = (double)FUN_01264500(SUB84(local_78 * (double)lVar8,0));
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar3 = (double)FUN_0125a280();
                  uVar15 = (**(code **)(*local_90 + 0x938))(SUB84(local_78 + dVar3,0));
                  local_78 = (double)CONCAT44(local_78._4_4_,uVar15);
                  FUN_01989f80();
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a280();
                  uVar15 = (**(code **)(*local_60 + 0x938))();
                  local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar15);
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ - local_90._0_4_);
                }
                pvVar7 = _pthread_getspecific(pVar10);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  pVar10 = pVar1;
                }
                cVar4 = FUN_013deec0();
                if (cVar4 != '\0') {
                  pvVar7 = _pthread_getspecific(pVar10);
                  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    pVar10 = pVar1;
                  }
                  lVar8 = FUN_013ded90();
                  pvVar7 = _pthread_getspecific(pVar10);
                  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    pVar10 = pVar1;
                  }
                  local_128 = (double)FUN_013de950();
                  FUN_01989f80();
                  local_90 = local_40;
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_128 = (double)FUN_01264500(SUB84(local_128 * (double)lVar8,0));
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar3 = (double)FUN_0125a280();
                  local_128 = (double)(**(code **)(*local_90 + 0x938))(SUB84(local_128 + dVar3,0));
                  uStack_120 = extraout_XMM0_Dc;
                  uStack_11c = extraout_XMM0_Dd;
                  FUN_01989f80();
                  pvVar7 = _pthread_getspecific(pVar10);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125a280();
                  uVar15 = (**(code **)(*local_60 + 0x938))();
                  local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar15);
                  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_128 = (double)CONCAT44(local_128._4_4_,(float)local_128 - local_90._0_4_);
                }
              }
              else {
                local_78 = (double)CONCAT44(local_78._4_4_,(float)local_128);
              }
              FUN_00d50b20();
            }
          }
          FUN_01989f80();
          uVar15 = (**(code **)(&UNK_00001418 + *local_40))();
          *(undefined4 *)(lVar13 + 0x34) = uVar15;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          *(float *)(lVar13 + 0x30) = local_6c;
          lVar13 = FUN_01968ab0();
          FUN_01968c50();
          local_1c8 = *unaff_RSI;
          local_1c0 = '\0';
          (**(code **)(*unaff_RDI + 0x998))();
          local_a8 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_a8 = '\x01';
          local_b0 = local_40;
          pVar10 = (pthread_key_t)&local_1c8;
          FUN_01969140(local_78._0_4_,(float)local_128,local_114,bVar12);
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          if (local_40 == (longlong *)0x0) {
LAB_019678e4:
            FUN_01989f80();
            iVar6 = (**(code **)(&UNK_00001570 + *local_88))();
            if (iVar6 == 0) {
              cVar4 = '\0';
            }
            else {
              FUN_01989f80();
              (**(code **)(&UNK_00001568 + *local_218))();
              plVar2 = local_c0;
              (**(code **)(*unaff_RDI + 0x928))();
              local_a0 = local_188;
              local_98 = 0;
              if (local_180 == '\0') {
                if (local_188 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_180 = '\0';
              }
              local_98 = '\x01';
              cVar4 = (**(code **)(*plVar2 + 0x300))();
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_40 != (longlong *)0x0) goto LAB_01967a2b;
          }
          else {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126ef70();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0124c5d0();
            if (cVar4 == '\0') goto LAB_019678e4;
            cVar4 = '\0';
LAB_01967a2b:
            if ((local_58 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            if ((char)unaff_RDI[0x3e] != '\0') {
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e7c0();
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013de560();
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar16 = (float)FUN_014bc150();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (DAT_02390124 < fVar16) {
                fVar16 = (float)_log10f();
                fVar16 = fVar16 + DAT_02390124;
              }
              FUN_01968ab0();
              local_198 = *unaff_RSI;
              local_190 = '\0';
              FUN_01969230(fVar16,&local_198,2);
              if ((local_190 != '\0') && (local_198 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_01989f80();
            iVar6 = (**(code **)(&UNK_00001570 + *local_40))();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar6 == 2) {
              FUN_01968ab0();
              local_1b8 = *unaff_RSI;
              local_1b0 = '\0';
              FUN_01969230((int)unaff_RDI[0x38],&local_1b8,1);
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01968ab0();
              local_1a8 = *unaff_RSI;
              local_1a0 = '\0';
              FUN_01969230(DAT_02390124,&local_1a8,0);
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          goto LAB_0196721c;
        }
        cVar4 = FUN_01968c50();
        if (cVar4 == '\0') {
          FUN_01969020(local_6c,bVar12);
          local_d8 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_d8 = '\x01';
          local_e0 = local_40;
          FUN_01d488d0();
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01968f00(local_6c,bVar12);
          local_e8 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e8 = '\x01';
          local_f0 = local_40;
          FUN_01d488d0();
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar2 = (longlong *)*unaff_RSI;
        FUN_01e3f820();
        (**(code **)(*plVar2 + 0x3b0))();
        FUN_01989f80();
        (**(code **)(&UNK_00001568 + *local_60))();
        (**(code **)(*unaff_RDI + 0x928))();
        local_d0 = local_88;
        local_c8 = 0;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_c8 = '\x01';
        cVar4 = (**(code **)(*local_40 + 0x300))();
        if (cVar4 == '\0') {
          bVar14 = false;
        }
        else {
          FUN_01989f80();
          iVar6 = (**(code **)(&UNK_00001570 + *local_c0))();
          bVar14 = iVar6 != 0;
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar14) {
          FUN_01d48b40(DAT_02390d34);
          FUN_01968f00(0,bVar12);
          local_150 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_150 = '\x01';
          local_158 = local_40;
          FUN_01d488d0();
          if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01d48b40(DAT_02390124);
          cVar4 = FUN_01968c50();
          if (cVar4 == '\0') {
            FUN_01969020(0,bVar12);
            local_130 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_130 = '\x01';
            local_138 = local_40;
            FUN_01d488d0();
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01968f00(0,bVar12);
            local_140 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_140 = '\x01';
            local_148 = local_40;
            FUN_01d488d0();
            if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        plVar2 = (longlong *)*unaff_RSI;
        FUN_01e3f820();
        (**(code **)(*plVar2 + 0x3b8))();
      }
    }
    else {
      FUN_01968ab0();
      uVar5 = FUN_01968c50();
      local_1f8 = *unaff_RSI;
      local_1f0 = '\0';
      FUN_019689c0(&local_1f8,uVar5,local_178,bVar12);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cfc6a0(DAT_0239011c);
    local_108 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_108 = '\x01';
    local_110 = local_40;
    FUN_01d488d0();
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01968ab0();
    uVar5 = FUN_01968c50();
    local_208 = *unaff_RSI;
    local_200 = '\0';
    FUN_019689c0(&local_208,uVar5,local_178,bVar12);
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar13 == 0) {
    return;
  }
LAB_0196721c:
  FUN_00d50b20();
  return;
}


