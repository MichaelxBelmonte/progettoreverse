// ===== MUSampledFunction — Annotated small functions =====
// 32 readable functions

// ==================================================
// @0196c5e0 (2955 bytes) — math_loop

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  code *pcVar7;
  undefined7 uVar13;
  float *pfVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar14;
  ulonglong uVar15;
  float *arg1;
  longlong this;
  code *pcVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  longlong local_110;
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8;
  code *local_f0;
  undefined1 local_e8;
  undefined *local_e0;
  code *local_d8;
  float local_d0;
  float local_cc;
  double local_c8;
  code *local_c0;
  uint local_b4;
  double local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_7c;
  double local_78;
  code *local_60;
  float local_54;
  code *local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_38 == '\0') {
    if (local_40 == (code *)0x0) {
      return;
    }
    local_c0 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_40;
    if (local_40 == (code *)0x0) {
      return;
    }
  }
  FUN_01989f80();
  local_b0 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1);
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  pcVar14 = local_40;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a280();
  local_d0 = (float)(**(code **)(*(longlong *)pcVar14 + 0x938))();
  local_d0 = local_d0 - *arg1;
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01964590();
  fVar19 = (float)FUN_0198a7d0();
  local_cc = (fVar19 + *(float *)(this + 0x1bc) * DAT_0241b660) - arg1[1];
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  local_50 = local_40;
  if ((((local_38 == '\0') && (local_40 != (code *)0x0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  pcVar14 = local_40;
  local_60 = local_40;
  pcVar7 = local_40;
  if (((local_38 == '\0') && (local_40 != (code *)0x0)) &&
     ((pcVar7 = (code *)FUN_00d50b00(), local_38 != '\0' && (local_40 != (code *)0x0)))) {
    pcVar7 = (code *)FUN_00d50b20();
  }
  uVar13 = (undefined7)((ulonglong)pcVar7 >> 8);
  local_90 = CONCAT71(uVar13,1);
  if (local_50 == (code *)0x0) {
    uVar17 = 0;
    local_a8 = CONCAT71(uVar13,1);
    local_88 = CONCAT71(uVar13,1);
joined_r0x0196c98f:
    if (pcVar14 == (code *)0x0) goto LAB_0196cae6;
LAB_0196c9ba:
    local_54 = DAT_02390d00 + arg1[2];
    local_90 = CONCAT71((int7)((ulonglong)arg1 >> 8),1);
    if ((local_54 < 0.0) || (local_54 < arg1[2] + DAT_023b1608)) goto LAB_0196cae6;
    local_7c = (uint)uVar17;
    do {
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1 + local_54);
      lVar10 = *(longlong *)(this + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_f8 = 1;
      local_100 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      local_54 = local_54 + DAT_02390d00;
      bVar3 = DAT_0239424c <= local_54 & bVar4;
      if (bVar3 != 1) {
        pfVar8 = (float *)CONCAT71((int7)((ulonglong)uVar9 >> 8),bVar3);
        if (bVar4 == 0) {
          FUN_00d50b20();
          uVar17 = (ulonglong)local_7c;
          uVar15 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_60 = (code *)0x0;
          local_90 = 0;
          local_9c = arg1[2];
          bVar18 = true;
          goto LAB_0196cafe;
        }
        break;
      }
      pfVar8 = arg1;
    } while (arg1[2] + DAT_023b1608 <= local_54);
    local_90 = CONCAT71((int7)((ulonglong)pfVar8 >> 8),1);
    uVar15 = 0;
    uVar17 = (ulonglong)local_7c;
    local_9c = arg1[2];
    if (pcVar14 == (code *)0x0) {
      bVar18 = true;
      goto LAB_0196cafe;
    }
  }
  else {
    fVar19 = 0.0;
    do {
      pfVar8 = arg1;
      if (arg1[2] <= fVar19) goto LAB_0196c9a1;
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1 + fVar19);
      lVar10 = *(longlong *)(this + 0x178);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_108 = 1;
      local_110 = lVar10;
      uVar9 = FUN_0196da90(SUB84(local_78 - local_b0,0),&local_41);
      bVar4 = (byte)uVar9;
      if (lVar10 != 0) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      fVar19 = fVar19 + DAT_02390124;
      pfVar8 = (float *)CONCAT71((int7)((ulonglong)uVar9 >> 8),fVar19 < DAT_02390d34);
    } while ((bVar4 & fVar19 < DAT_02390d34) != 0);
    if (bVar4 == 0) {
      FUN_00d50b20();
      uVar17 = CONCAT71((int7)((ulonglong)&local_110 >> 8),1);
      local_50 = (code *)0x0;
      local_a8 = 0;
      local_88 = 0;
      goto joined_r0x0196c98f;
    }
LAB_0196c9a1:
    uVar13 = (undefined7)((ulonglong)pfVar8 >> 8);
    local_a8 = CONCAT71(uVar13,1);
    uVar17 = 0;
    local_88 = CONCAT71(uVar13,1);
    if (pcVar14 != (code *)0x0) goto LAB_0196c9ba;
LAB_0196cae6:
    uVar15 = 0;
    local_9c = arg1[2];
    bVar18 = true;
    if (pcVar14 == (code *)0x0) goto LAB_0196cafe;
  }
  bVar18 = pcVar14 == (code *)0x0;
  uVar15 = 0;
  local_9c = local_9c + DAT_02390d34;
LAB_0196cafe:
  bVar4 = !bVar18 & (byte)local_90;
  fVar19 = 0.0;
  if (local_50 != (code *)0x0) {
    fVar19 = DAT_023b1608;
  }
  if (fVar19 < local_9c) {
    local_7c = (uint)uVar17;
    local_b4 = (uint)uVar15;
    bVar3 = local_50 != (code *)0x0 & (byte)local_a8;
    local_d8 = DAT_02680418;
    pcVar11 = (code *)0x0;
    local_e0 = &DAT_02680400;
    uVar9 = 0;
    local_98 = 0;
    pcVar14 = DAT_02680418;
    pcVar7 = (code *)0x0;
    do {
      cVar5 = (char)uVar9;
      if (0.0 <= fVar19) {
        if (arg1[2] <= fVar19) {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1 + fVar19);
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c8 = (double)FUN_01264170();
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)((local_78 - local_b0) - local_c8);
          if (pcVar7 == local_60) {
            pcVar16 = local_60;
            if ((((byte)local_90 != '\0') && (pcVar16 = local_60, cVar5 == '\0')) &&
               (pcVar16 = local_60, local_60 != (code *)0x0)) {
              FUN_00d50b00();
              pcVar16 = local_60;
              uVar9 = 1;
            }
          }
          else {
            if (bVar4 != 0) {
              FUN_00d50b00();
            }
            pcVar16 = local_60;
            uVar9 = local_90;
            if ((cVar5 != '\0') && (pcVar16 = local_60, uVar9 = local_90, pcVar7 != (code *)0x0)) {
              FUN_00d50b20();
              pcVar16 = local_60;
              uVar9 = local_90;
            }
          }
        }
        else {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1 + fVar19);
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)(local_78 - local_b0);
          pcVar16 = *(code **)(this + 0x178);
          if (pcVar7 == pcVar16) {
            pcVar16 = pcVar7;
            if ((cVar5 == '\0') && (pcVar7 != (code *)0x0)) {
              FUN_00d50b00();
              uVar9 = 1;
            }
          }
          else {
            if (pcVar16 != (code *)0x0) {
              FUN_00d50b00();
            }
            uVar9 = 1;
            if ((cVar5 != '\0') && (pcVar7 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        FUN_01989f80();
        local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*arg1 + fVar19);
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar14);
        if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pcVar14 = local_50;
        }
        local_c8 = (double)FUN_01264170();
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_78 = (local_78 - local_b0) + local_c8;
        pcVar16 = local_50;
        if (pcVar7 == local_50) {
          if ((((byte)local_a8 != '\0') && (cVar5 == '\0')) && (local_50 != (code *)0x0)) {
            FUN_00d50b00();
            uVar9 = 1;
          }
        }
        else {
          if (bVar3 != 0) {
            FUN_00d50b00();
          }
          uVar9 = local_88;
          if ((cVar5 != '\0') && (pcVar7 != (code *)0x0)) {
            FUN_00d50b20();
            uVar9 = local_88;
          }
        }
      }
      local_e8 = 0;
      local_f0 = pcVar16;
      cVar5 = FUN_0196da90(SUB84(local_78,0),&local_41);
      if (cVar5 == '\0') {
        if (pcVar11 != (code *)0x0) {
          FUN_01d38ea0();
          iVar1 = *(int *)(local_40 + 0x18);
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
          if (0x37 < iVar1) {
            local_38 = '\0';
            local_40 = pcVar11;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((char)local_98 != '\0') {
            FUN_00d50b20();
          }
          local_98 = 0;
        }
        pcVar11 = (code *)0x0;
      }
      else if (local_41 == '\0') {
        if (pcVar11 == (code *)0x0) {
          pcVar11 = (code *)FUN_00e8fc40();
          FUN_00d4ff40();
          *(undefined **)pcVar11 = local_e0;
          *(undefined4 *)(pcVar11 + 0xc) = 0;
          *(longlong *)(pcVar11 + 0x30) = 0;
          *(longlong *)(pcVar11 + 0x38) = 0;
          *(undefined8 *)(pcVar11 + 0x39) = 0;
          *(undefined8 *)(pcVar11 + 0x41) = 0;
          (*local_d8)();
          uVar12 = FUN_01d38cd0(DAT_02421228);
          local_98 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        }
        fVar20 = (float)FUN_0198a7d0(local_a0);
        FUN_01d38ba0(local_d0 + fVar19,(fVar20 - arg1[1]) - local_cc);
      }
      fVar19 = fVar19 + DAT_02390124;
      pcVar7 = pcVar16;
    } while (fVar19 < local_9c);
    if (pcVar11 == (code *)0x0) {
      bVar2 = true;
      bVar18 = true;
    }
    else {
      FUN_01d38ea0();
      iVar1 = *(int *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (0x37 < iVar1) {
        local_38 = '\0';
        local_40 = pcVar11;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = false;
      bVar18 = false;
    }
    if (((char)uVar9 != '\0') && (bVar18 = bVar2, pcVar16 != (code *)0x0)) {
      FUN_00d50b20();
    }
    uVar15 = (ulonglong)local_b4;
    uVar17 = (ulonglong)local_7c;
    if ((char)local_98 != '\0' && !bVar18) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar15 == '\0' && local_60 != (code *)0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar17 == '\0' && local_50 != (code *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @013710d0 (2920 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014d1b50();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_014bc070();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_014bc070();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      if (local_40 == 0) {
        bVar9 = false;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        bVar9 = local_60 == local_40;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (bVar9) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc360();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc2e0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc3d0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        uVar7 = *(uint *)(local_40 + 0xc);
        lVar6 = local_40;
        if (0 < (int)uVar7) {
          lVar8 = (ulonglong)uVar7 + 1;
          do {
            uVar7 = uVar7 - 1;
            pVar4 = uVar7;
            pvVar2 = _pthread_getspecific(uVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012708c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar6 = local_40;
            if (local_40 != 0) {
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012708c0();
              pvVar2 = _pthread_getspecific(pVar4);
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(longlong *)
                         (local_40 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012dffb0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + -1;
          } while (1 < lVar8);
        }
        uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        FUN_00d50b20();
      }
      else {
        uVar5 = 0;
        if (local_40 != 0) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc360();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc2e0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc3d0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013ddf50();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfcb0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = *(uint *)(local_40 + 0xc);
          lVar6 = local_40;
          if (0 < (int)uVar7) {
            lVar8 = (ulonglong)uVar7 + 1;
            do {
              uVar7 = uVar7 - 1;
              pVar4 = uVar7;
              pvVar2 = _pthread_getspecific(uVar7);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar2 = _pthread_getspecific(pVar4);
              lVar6 = local_60;
              if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                lVar6 = *(longlong *)
                         (local_60 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
              }
              FUN_012e5ae0();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_0132a0a0();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + -1;
            } while (1 < lVar8);
          }
          uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          FUN_00d50b20();
        }
      }
      goto LAB_013712ab;
    }
  }
  uVar5 = 0;
LAB_013712ab:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ==================================================
// @013157a0 (2866 bytes) — math_loop

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *this;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined4 local_c4;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  char local_a0;
  ulonglong local_80;
  char local_78;
  int local_68;
  byte local_54;
  longlong local_40;
  char local_38;
  
  uVar11 = local_80;
  uVar10 = param_1;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  pvVar7 = _pthread_getspecific((pthread_key_t)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  iVar2 = *(int *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)uVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_0131607e;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_0131607e:
    uVar13 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    uVar11 = uVar10;
    goto LAB_01316081;
  }
  local_78 = '\0';
  local_80 = 0;
  local_b8 = uVar11;
  local_68 = -1;
  local_c4 = param_3;
  uVar12 = 0xffffff01;
LAB_01315958:
  while( true ) {
    uVar6 = uVar12;
    lVar14 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(uVar11 + 0xc) <= local_68) break;
    lVar8 = *(longlong *)(uVar11 + 0x10);
    local_80 = *(ulonglong *)(lVar8 + 8 + lVar14 * 8);
    pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
    pVar9 = (pthread_key_t)lVar8;
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar12 = uVar6;
    if (local_40 == 0) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2d0();
    }
    else {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d280();
      local_38 = '\0';
      cVar5 = FUN_00d23d70();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01315bc6;
      if (local_40 != 0) goto LAB_0131604c;
    }
  }
  FUN_001159b0();
  FUN_00d50b20();
  uVar13 = (ulonglong)uVar6;
  param_3 = local_c4;
LAB_01316081:
  pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_80 + 0xc);
  if (local_78 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return uVar13;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return uVar13;
    }
    uVar12 = (uint)uVar13;
    if (0 < *(int *)(local_80 + 0xc)) {
      local_b8 = CONCAT44(local_b8._4_4_,param_3) & 0xffffffff000000ff;
      lVar14 = 0;
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(local_80 + 0x10) + lVar14 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        lVar8 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar14 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_100 = 0;
        uVar11 = (ulonglong)((pthread_key_t)param_1 & 0xff);
        local_108 = uVar3;
        cVar5 = FUN_013157a0(uVar11,&local_108,local_b8 & 0xffffffff,param_4,lVar8,1);
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 & 0xff;
        if (cVar5 == '\0') {
          uVar13 = 0;
        }
        uVar12 = (uint)uVar13;
        lVar14 = lVar14 + 1;
      } while ((int)lVar14 < *(int *)(local_80 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
    uVar13 = (ulonglong)uVar12;
  }
  return uVar13;
LAB_01315bc6:
  uVar12 = 0;
  if (local_40 == 0) goto LAB_01315958;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 == 0) {
    uVar6 = 0;
    goto LAB_0131604c;
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    pVar9 = (pthread_key_t)local_40;
  }
  FUN_0150fe10();
  local_b0 = local_40;
  local_54 = (byte)param_1;
  if (local_40 == 0) {
    lVar14 = *this;
    if (lVar14 == 0) {
      uVar6 = 0;
      goto LAB_0131604c;
    }
LAB_01315d45:
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      lVar14 = *this;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x40);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
joined_r0x01315f26:
    if (local_54 == 0) goto LAB_01316026;
    pvVar7 = _pthread_getspecific(pVar9);
    if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
      pVar9 = (pthread_key_t)local_40;
    }
    local_e8 = local_40;
    local_e0 = '\0';
    FUN_0150d560();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_d8 = local_40;
    local_d0 = '\0';
    FUN_0150d3a0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar14 = *this;
    if (lVar14 != 0) {
      if (local_b0 == 0) goto LAB_01315d45;
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        lVar14 = *this;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar14 = *(longlong *)(lVar14 + 0x40);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (pthread_key_t)lVar14;
      }
      FUN_015058d0();
      local_c0 = local_40;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_f0 = 1;
      bVar4 = FUN_01315610();
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      local_54 = local_54 & bVar4;
      goto joined_r0x01315f26;
    }
LAB_01316026:
    uVar6 = 0;
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_0131604c:
  local_38 = '\0';
  FUN_00d50b20();
  uVar12 = uVar6;
  goto LAB_01315958;
}




// ==================================================
// @01316d80 (2635 bytes) — math_loop

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar10;
  byte bVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong **pplVar14;
  int iVar15;
  byte unaff_SIL;
  undefined8 extraout_XMM0_Qa;
  double dVar16;
  double dVar17;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar18;
  longlong in_stack_ffffffffffffff58;
  char in_stack_ffffffffffffff60;
  undefined1 uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  byte local_74;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_31;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_0124c6e0();
  if (in_stack_ffffffffffffff60 == '\0') {
    if (in_stack_ffffffffffffff58 != 0) {
      lVar9 = in_stack_ffffffffffffff58;
      uVar18 = FUN_00d50b00();
      if ((in_stack_ffffffffffffff60 != '\0') && (lVar9 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_01316e24;
    }
  }
  else {
    uVar18 = extraout_XMM0_Qa;
    if (in_stack_ffffffffffffff58 != 0) {
LAB_01316e24:
      uVar19 = 0;
      uVar8 = 0;
      uVar21 = 0xffffffff;
      iVar22 = 0;
      local_74 = unaff_SIL ^ 1;
      local_31 = 1;
      iVar15 = 0;
      while( true ) {
        if (iVar15 != 0) {
          if (iVar15 < 1) {
            iVar15 = -iVar15;
          }
          else {
            uVar21 = (ulonglong)(uint)((int)uVar21 - iVar15);
            FUN_00d23690(uVar18,iVar15,param_3,param_4,uVar8,uVar19,in_stack_ffffffffffffff58,uVar21
                         ,iVar22);
            iVar22 = iVar22 + iVar15;
            iVar15 = 0;
          }
          uVar21 = CONCAT44(iVar15,(int)uVar21);
        }
        iVar20 = (int)uVar21;
        iVar15 = iVar20 + 1;
        uVar21 = CONCAT44((int)(uVar21 >> 0x20),iVar15);
        if (*(int *)(in_stack_ffffffffffffff58 + 0xc) <= iVar15) break;
        lVar9 = *(longlong *)(in_stack_ffffffffffffff58 + 0x10);
        uVar8 = *(undefined8 *)(lVar9 + 8 + (longlong)iVar20 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar12 = (pthread_key_t)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01327a50();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01316f68;
          }
        }
        else if (local_60 != 0) {
LAB_01316f68:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (longlong)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            lVar13 = *(longlong *)(local_50 + 0x10);
            local_60 = *(longlong *)(lVar13 + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
            pVar12 = (pthread_key_t)lVar13;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            plVar2 = local_70;
            if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfdd0();
            plVar3 = local_70;
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_013170a2;
              }
            }
            else {
LAB_013170a2:
              if ((plVar2 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar16 = (double)FUN_013dd200();
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_013dd200();
                if (dVar16 <= dVar17) {
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                }
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_001150f0();
          pVar12 = (pthread_key_t)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01328c30();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01317278;
          }
        }
        else if (local_60 != 0) {
LAB_01317278:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (longlong)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc240();
            plVar2 = local_70;
            if ((DAT_027c01a0 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
              _DAT_027af248 = FUN_001016a0();
              _DAT_027af230 = "MUSampledFunction";
              _DAT_027af238 = 0x58;
              _DAT_027af240 = FUN_00101650;
              _DAT_027af250 = 0;
              uRam00000000027af258 = 0;
              _DAT_027af260 = 0;
              uRam00000000027af268 = 0;
              _DAT_027af270 = 0;
              uRam00000000027af278 = 0;
              _DAT_027af280 = 0;
              uRam00000000027af288 = 0;
              _DAT_027af290 = 0;
              uRam00000000027af298 = 0;
              _DAT_027af2a0 = 0;
              uRam00000000027af2a8 = 0;
              _DAT_027af2b0 = 0;
              uRam00000000027af2b8 = 0;
              _DAT_027af2c0 = 0;
              uRam00000000027af2c8 = 0;
              _DAT_027af2d0 = 0;
              uRam00000000027af2d8 = 0;
              _DAT_027af2e0 = 0;
              uRam00000000027af2e8 = 0;
              _DAT_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar14 = (longlong **)&DAT_02802688;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar14 = &local_70;
              if (cVar5 == '\0') {
                pplVar14 = (longlong **)&DAT_02802688;
              }
            }
            plVar2 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar2 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar14 + 1) = 0;
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              pvVar7 = _pthread_getspecific((pthread_key_t)pplVar14);
              if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                lVar9 = plVar2[9];
                if (lVar9 == 0) goto LAB_013173ec;
LAB_013173fc:
                uVar1 = *(uint *)(lVar9 + 0x18);
                pplVar14 = (longlong **)(ulonglong)uVar1;
                uVar6 = uVar1 + 3;
                if (-1 < (int)uVar1) {
                  uVar6 = uVar1;
                }
                iVar15 = (int)uVar6 >> 2;
              }
              else {
                lVar9 = *(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x48);
                if (lVar9 != 0) goto LAB_013173fc;
LAB_013173ec:
                iVar15 = 0;
              }
              uVar4 = local_31;
              if (iVar15 < 1) {
                uVar4 = 0;
              }
              bVar11 = 0 < iVar15 | local_74;
              if (bVar11 == 0) {
                pvVar7 = _pthread_getspecific
                                   ((pthread_key_t)CONCAT71((int7)((ulonglong)pplVar14 >> 8),bVar11)
                                   );
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00c8e690();
                plVar2 = local_70;
                if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
                    (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00c92170();
                FUN_00c92160();
                ___bzero();
                FUN_013eb890();
                uVar4 = local_31;
                if (plVar2 != (longlong *)0x0) {
                  FUN_00d50b20();
                  uVar4 = local_31;
                }
              }
              local_31 = uVar4;
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_0131c810();
          pVar12 = (pthread_key_t)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar15 = FUN_01326de0();
        uVar18 = extraout_XMM0_Qa_00;
        if (iVar15 == 3) {
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_0134a7d0();
          uVar18 = extraout_XMM0_Qa_01;
          if (cVar5 == '\0') {
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01328c30();
            lVar9 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_013176c2;
              }
            }
            else if (local_60 != 0) {
LAB_013176c2:
              local_58 = '\0';
              local_60 = 0;
              local_50 = lVar9;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar9 = (longlong)(int)local_48;
                iVar15 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                if (*(int *)(local_50 + 0xc) <= iVar15) break;
                lVar13 = *(longlong *)(local_50 + 0x10);
                local_60 = *(longlong *)(lVar13 + 8 + lVar9 * 8);
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc000();
                plVar2 = local_70;
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar4 = local_31;
                if (plVar2 == (longlong *)0x0) {
                  uVar4 = 0;
                }
                bVar11 = plVar2 != (longlong *)0x0 | local_74;
                if (bVar11 == 0) {
                  pvVar7 = _pthread_getspecific
                                     ((pthread_key_t)CONCAT71((int7)((ulonglong)lVar13 >> 8),bVar11)
                                     );
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0134a780();
                }
                else {
                  local_31 = uVar4;
                }
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar15 = -local_48._4_4_;
                  }
                  else {
                    iVar15 = (int)local_48 - local_48._4_4_;
                    local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20);
                    local_48 = CONCAT44(local_48._4_4_,iVar15);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar15 = 0;
                  }
                  local_48 = CONCAT44(iVar15,(int)local_48);
                }
              }
              FUN_0131c8b0();
              uVar18 = FUN_00d50b20();
            }
          }
        }
        iVar15 = (int)(uVar21 >> 0x20);
      }
      FUN_00115190();
      uVar8 = FUN_00d50b20();
      uVar10 = (undefined7)((ulonglong)uVar8 >> 8);
      goto LAB_0131781d;
    }
  }
  uVar10 = (undefined7)((ulonglong)uVar8 >> 8);
  local_31 = 1;
LAB_0131781d:
  return CONCAT71(uVar10,local_31) & 0xffffffffffffff01;
}




// ==================================================
// @01318610 (2543 bytes) — math_loop

{
  uint3 uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  int unaff_EDI;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined7 uVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_90;
  int local_84;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  longlong *local_38;
  
  local_84 = unaff_EDI;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  plVar10 = local_70;
  pVar11 = (pthread_key_t)param_1;
  uVar1 = (uint3)((uint)param_2 >> 8);
  bVar2 = (byte)param_2;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01318829;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_013186b3:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    plVar8 = local_70;
    if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0')
        ) && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    local_38 = local_70;
    local_90 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (longlong *)0x0) {
        local_90 = (longlong *)0x0;
        local_38 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        local_38 = local_90;
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar13 = (ulonglong)CONCAT31(uVar1,plVar8 != (longlong *)0x0);
    if ((plVar8 == (longlong *)0x0) && ((bVar2 ^ 1) == 0)) {
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(plVar8 + 8) = 0;
      plVar8[7] = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      pVar11 = 0x25d2108;
      *plVar8 = (longlong)&DAT_025d2108;
      *(undefined4 *)(plVar8 + 0xc) = 0;
      plVar8[0xd] = 0;
      (*DAT_025d2120)();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      plVar14 = plVar8;
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        plVar14 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      if (local_38 == (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2270();
        uVar15 = (undefined7)((ulonglong)plVar14 >> 8);
      }
      else {
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2240();
        local_70 = local_38;
        local_68 = '\0';
        uVar4 = FUN_00d23d20();
        uVar17 = extraout_XMM0_Da;
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        FUN_011f23a0(uVar17,uVar4);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = (undefined7)((ulonglong)plVar10 >> 8);
      }
      uVar13 = CONCAT71(uVar15,1);
    }
    FUN_004fbac0();
    if (local_38 == (longlong *)0x0) {
LAB_01318b8d:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*local_38 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01318b8d;
      pplVar9 = &local_90;
    }
    uVar5 = (uint)uVar13 & 0xff;
    if (*pplVar9 == (longlong *)0x0) {
      uVar5 = 0;
    }
    if (*pplVar9 == (longlong *)0x0 && (bVar2 ^ 1) == 0) {
      if (local_38 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(0);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f24e0();
      }
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(plVar10 + 8) = 0;
      plVar10[7] = 0;
      plVar10[9] = 0;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      pVar11 = 0x25d58b0;
      *plVar10 = (longlong)&DAT_025d58b0;
      *(undefined4 *)(plVar10 + 0xc) = 0;
      (*DAT_025d58c8)();
      if (plVar10 == local_38) {
        FUN_00d50b20();
      }
      else {
        bVar16 = local_38 != (longlong *)0x0;
        local_90 = plVar10;
        local_38 = plVar10;
        if (bVar16) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        pVar11 = (pthread_key_t)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = (pthread_key_t)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2240();
      local_68 = '\0';
      local_70 = plVar8;
      iVar6 = FUN_00d23d20();
      uVar17 = extraout_XMM0_Da_00;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      FUN_011f23a0(uVar17,iVar6 + 1);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (ulonglong)uVar5;
    }
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    pVar11 = 0;
    FUN_00d50b20();
  }
  else {
    if (local_70 != (longlong *)0x0) goto LAB_013186b3;
LAB_01318829:
    if (bVar2 == 0) {
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      uVar13 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7900();
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      uVar13 = CONCAT71((uint7)uVar1,1);
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_012e6160();
  plVar10 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01318fe6;
    uVar17 = FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01318fe6;
  local_68 = 0;
  local_70 = (longlong *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 0;
  if (0 < *(int *)((longlong)plVar10 + 0xc)) {
    local_84 = local_84 + 1;
    lVar12 = 0;
    do {
      local_70 = *(longlong **)(plVar10[2] + lVar12 * 8);
      cVar3 = FUN_01318610(uVar17,bVar2);
      uVar13 = uVar13 & 0xff;
      if (cVar3 == '\0') {
        uVar13 = 0;
      }
      lVar12 = lVar12 + 1;
      local_58 = (int)lVar12;
      uVar17 = extraout_XMM0_Da_01;
    } while (local_58 < *(int *)((longlong)plVar10 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01318fe6:
  return uVar13 & 0xffffff01;
}




// ==================================================
// @0126d090 (2534 bytes) — calculation

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong this;
  float fVar11;
  double dVar12;
  double dVar13;
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
  double local_78;
  double local_70;
  longlong local_60;
  char local_58;
  float local_48;
  float local_44;
  longlong local_38;
  
  local_78 = *(double *)(this + 0xf0);
  local_44 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
  plVar4 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pVar9 = (pthread_key_t)param_1;
  if (*(longlong *)(this + 0xa8) == 0) {
LAB_0126d22e:
    bVar3 = false;
LAB_0126d234:
    local_70 = 0.0;
    local_38 = 0;
    local_48 = local_44;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    pVar9 = (pthread_key_t)param_1;
    if (dVar12 <= 0.0) goto LAB_0126d22e;
    if (*(longlong *)(this + 0xa8) == 0) {
      local_58 = '\0';
      local_60 = 0;
LAB_0126d6a7:
      local_38 = 0;
      bVar3 = false;
      if (local_58 != '\0') {
        local_38 = 0;
        bVar3 = false;
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
LAB_0126d6c7:
      pVar9 = (pthread_key_t)param_1;
      if (local_38 != 0) goto LAB_0126d6d2;
      goto LAB_0126d234;
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    local_38 = local_60;
    param_1 = local_60;
    if (local_60 == 0) goto LAB_0126d6a7;
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      goto LAB_0126d6c7;
    }
    bVar3 = true;
LAB_0126d6d2:
    local_70 = 0.0;
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    lVar8 = local_38;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar8 = *(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      param_1 = local_38;
    }
    local_48 = (float)_exp2f(*(float *)(lVar8 + 0x13c) * DAT_023941f4);
    fVar11 = (float)_exp2f(DAT_023941f4 * *(float *)(this + 0x13c));
    pVar9 = (pthread_key_t)param_1;
    if ((local_48 != fVar11) || (NAN(local_48) || NAN(fVar11))) {
      pvVar5 = _pthread_getspecific(pVar9);
      lVar8 = local_38;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar8 = *(longlong *)(local_38 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        param_1 = local_38;
      }
      pVar9 = (pthread_key_t)param_1;
      dVar12 = *(double *)(this + 0xf0);
      if (*(double *)(lVar8 + 0xf0) <= *(double *)(this + 0xf0)) {
        dVar12 = *(double *)(lVar8 + 0xf0);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_012dfea0();
      dVar12 = dVar12 * dVar13 * DAT_023942d0;
      local_70 = dVar12 + 0.0;
      fVar11 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
      local_48 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_48 - fVar11) + (double)fVar11
                        );
    }
  }
  if (*(longlong *)(this + 0xa0) == 0) {
LAB_0126d31d:
    bVar2 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_012dfea0();
    if (dVar12 <= 0.0) goto LAB_0126d31d;
    if (*(longlong *)(this + 0xa0) != 0) {
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      if (local_60 == 0) goto LAB_0126d7af;
      lVar8 = local_60;
      if (local_58 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        goto LAB_0126d7cc;
      }
      bVar2 = true;
LAB_0126d7d5:
      pvVar5 = _pthread_getspecific(pVar9);
      lVar6 = lVar8;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        lVar6 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      local_44 = (float)_exp2f(*(float *)(lVar6 + 0x13c) * DAT_023941f4);
      fVar11 = (float)_exp2f(DAT_023941f4 * *(float *)(this + 0x13c));
      if ((local_44 != fVar11) || (NAN(local_44) || NAN(fVar11))) {
        pvVar5 = _pthread_getspecific(pVar9);
        lVar6 = lVar8;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        dVar12 = *(double *)(this + 0xf0);
        if (*(double *)(lVar6 + 0xf0) <= *(double *)(this + 0xf0)) {
          dVar12 = *(double *)(lVar6 + 0xf0);
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_012dfea0();
        dVar12 = dVar12 * dVar13 * DAT_023942d0;
        local_78 = local_78 - dVar12;
        fVar11 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
        local_44 = (float)((dVar12 / (dVar12 + dVar12)) * (double)(local_44 - fVar11) +
                          (double)fVar11);
      }
      goto LAB_0126d326;
    }
    local_58 = '\0';
    local_60 = 0;
LAB_0126d7af:
    lVar8 = 0;
    bVar2 = false;
    if (local_58 != '\0') {
      bVar2 = false;
      lVar8 = 0;
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0126d7cc:
    if (lVar8 != 0) goto LAB_0126d7d5;
  }
  lVar8 = 0;
LAB_0126d326:
  if ((local_70 != 0.0) || (NAN(local_70))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(0,(double)local_48);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
    (**(code **)(*plVar10 + 0x410))(local_70,(double)fVar11);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar11 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
    (**(code **)(*plVar10 + 0x410))(0,(double)fVar11);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  plVar10 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar11 = (float)_exp2f(*(float *)(this + 0x13c) * DAT_023941f4);
  (**(code **)(*plVar10 + 0x410))(local_78,(double)fVar11);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != *(double *)(this + 0xf0)) ||
     (NAN(local_78) || NAN(*(double *)(this + 0xf0)))) {
    pvVar5 = _pthread_getspecific(pVar9);
    plVar10 = plVar4;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar10 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar10 + 0x410))(*(undefined8 *)(this + 0xf0),(double)local_44);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb720();
  plVar10 = (longlong *)(this + 400);
  FUN_00d64850();
  plVar1 = (longlong *)*plVar10;
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    *plVar10 = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_00cb00c0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0126de80 (2095 bytes) — math_loop

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_78;
  double local_68;
  longlong local_58;
  char local_50;
  double local_48;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eca90();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d6f370();
  lVar4 = DAT_027bebe0;
  if (DAT_027bebe0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00d70d40(0);
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_58 + 0xc);
  if (0 < (int)uVar1) {
    dVar6 = (double)(~-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6 |
                    DAT_023908d0 & -(ulonglong)(dVar6 == 0.0));
    lVar3 = (ulonglong)(uVar1 - 1) << 3;
    lVar5 = 0;
    lVar4 = lVar3;
    do {
      dVar7 = DAT_0238fee8;
      if ((lVar5 != 0) && (lVar3 != lVar5)) {
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        dVar7 = DAT_0238fee8 / ((dVar7 - dVar8) / (dVar9 - dVar10));
      }
      if (lVar5 == 0) {
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830(DAT_0240cfe0);
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880(dVar7 * DAT_0240cfe0);
      }
      else {
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_78 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + DAT_0238fee8);
        local_68 = dVar7 * local_78;
        if (local_78 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e333;
        }
        else {
          local_68 = (local_68 * dVar9) / local_78;
          local_78 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e333:
            local_78 = (local_78 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c830((ulonglong)local_78 ^ _DAT_023945b0);
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c880((ulonglong)local_68 ^ _DAT_023945b0);
      }
      if (lVar3 == lVar5) {
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(DAT_0240cfe8);
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(dVar7 * DAT_0240cfe8);
      }
      else {
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013faf20();
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        dVar8 = dVar8 - dVar9;
        dVar10 = dVar10 - dVar11;
        dVar9 = dVar6 * dVar8;
        local_48 = (SQRT(dVar10 * dVar10 + dVar8 * dVar8) * dVar6) /
                   SQRT(dVar7 * dVar7 + DAT_0238fee8);
        local_68 = dVar7 * local_48;
        if (local_48 <= dVar9) {
          if (dVar10 * dVar6 < local_68) goto LAB_0126e663;
        }
        else {
          local_68 = (local_68 * dVar9) / local_48;
          local_48 = dVar9;
          if (dVar10 * dVar6 < local_68) {
LAB_0126e663:
            local_48 = (local_48 * dVar10 * dVar6) / local_68;
            local_68 = dVar10 * dVar6;
          }
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c8d0(local_48);
        pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0142c920(local_68);
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01971280 (2029 bytes) — math_loop

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined8 *arg1;
  longlong this;
  longlong *plVar9;
  float extraout_XMM0_Db;
  double dVar10;
  double dVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float local_58;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar16 = (float)param_2;
  FUN_01976670();
  FUN_01d48370();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*arg1 + 0x3b0))();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*arg1;
  FUN_01d39800();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar9 + 0x3a8))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfcdc0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(this + 0x178);
  if (lVar5 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar5 = *(longlong *)(this + 0x178);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    if (*(longlong *)(lVar5 + 0x168) != 0) {
      FUN_01989f80();
      dVar10 = (double)(**(code **)(*local_40 + 0x930))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar7 = &DAT_02680400;
      *puVar4 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
      pcVar1 = DAT_02680418;
      (*DAT_02680418)();
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + DAT_02390124) {
        lVar5 = *(longlong *)(this + 0x178);
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        if (pvVar2 != (void *)0x0) {
          lVar5 = *(longlong *)(this + 0x178);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
          }
        }
        plVar9 = *(longlong **)(lVar5 + 0x168);
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        if (pvVar2 != (void *)0x0) {
          plVar9 = *(longlong **)(lVar5 + 0x168);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(this + 0x10c) + local_58);
        auVar13._0_8_ = (double)(**(code **)(*plVar9 + 0x380))(dVar11 - dVar10);
        auVar13._8_8_ = extraout_XMM0_Qb;
        auVar12._4_12_ = auVar13._4_12_;
        auVar12._0_4_ = (float)auVar13._0_8_ * fVar17;
        auVar13 = roundss(auVar12,auVar12,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)*arg1 + 0x3a8))();
      fVar16 = 0.0;
      FUN_01cfcdc0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(this + 0x178);
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
      if (pvVar2 != (void *)0x0) {
        lVar5 = *(longlong *)(this + 0x178);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      plVar9 = *(longlong **)(lVar5 + 0x188);
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
      (*pcVar1)();
      if (puVar4 == puVar6) {
        FUN_00d50b20();
        puVar6 = puVar4;
      }
      else if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      for (local_58 = 0.0; FUN_01e3f820(), local_58 < fVar16; local_58 = local_58 + DAT_02390124) {
        pvVar2 = _pthread_getspecific((pthread_key_t)puVar7);
        plVar8 = plVar9;
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar8 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        FUN_01989f80();
        dVar11 = (double)(**(code **)(*local_40 + 0x930))(*(float *)(this + 0x10c) + local_58);
        auVar14._0_8_ = (double)(**(code **)(*plVar8 + 0x380))(dVar11 - dVar10);
        auVar14._8_8_ = extraout_XMM0_Qb_00;
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = (float)auVar14._0_8_ * fVar17 * DAT_0239011c;
        auVar13 = roundss(auVar15,auVar15,9);
        fVar16 = (extraout_XMM0_Db + fVar17) - auVar13._0_4_;
        FUN_01d38ba0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)*arg1 + 0x3a8))();
      FUN_01d48390();
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @0125dfc0 (1551 bytes) — calculation

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong this;
  longlong local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(this + 200) == 0) goto LAB_0125e5b3;
  FUN_00d50b00();
  FUN_00d50b20();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d820();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = *(longlong *)(this + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0125e401;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_0125e401:
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_014ed790();
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
      (**(code **)(*plVar5 + 0x3a8))();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed790();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      plVar5 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pVar4 = (pthread_key_t)param_1;
      (**(code **)(*plVar5 + 0x3a0))();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de3b0();
    }
    FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_0125e5b3:
  FUN_00d50b20();
  return;
}




// ==================================================
// @0126bf30 (1520 bytes) — math_loop

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong this;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong local_a8;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_40 == (longlong *)0x0) {
    bVar15 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar15 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar15) {
    FUN_0125e7c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar15 = true;
      local_48 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar15 = false;
    }
    else {
      local_38 = '\0';
      bVar15 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      uVar7 = FUN_00e7d850(SUB84(*(double *)(this + 0xf0) * DAT_0240f0f0,0));
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(puVar9 + 7) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
      *(undefined2 *)(puVar9 + 8) = 0;
      plVar12 = (longlong *)&DAT_025dc9e8;
      *puVar9 = &DAT_025dc9e8;
      puVar9[9] = 0;
      puVar9[10] = 0;
      (*DAT_025dca00)();
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb950(SUB84(DAT_0240f0f0,0));
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      pVar11 = (pthread_key_t)plVar12;
      if (0 < (int)uVar7) {
        uVar14 = 0;
        do {
          dVar6 = (double)(int)uVar14 / DAT_0240f0f0;
          plVar13 = *(longlong **)(this + 0xd0);
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(longlong **)(this + 0xd0);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          uVar1 = uVar14 + 1;
          uVar3 = (**(code **)(*plVar13 + 0x3b8))(SUB84((double)(int)uVar1 / DAT_0240f0f0,0));
          uVar16 = SUB84(dVar6,0);
          local_a8 = uVar3;
          if (uVar14 == 0) {
            plVar13 = *(longlong **)(this + 0xd0);
            pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
            if (pvVar8 != (void *)0x0) {
              plVar13 = *(longlong **)(this + 0xd0);
              lVar10 = FUN_00e8b990();
              if (lVar10 != 0) {
                plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
            }
            uVar17 = (**(code **)(*plVar13 + 0x3b8))(uVar16);
            local_a8 = (ulonglong)uVar17;
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          plVar13 = local_48;
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar12 = local_48;
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar4 = (double)(**(code **)(*plVar13 + 0x3a8))((int)local_a8,uVar3);
          plVar13 = *(longlong **)(this + 0x188);
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar12);
          if (pvVar8 != (void *)0x0) {
            plVar13 = *(longlong **)(this + 0x188);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          dVar5 = (double)(**(code **)(*plVar13 + 0x380))(uVar16);
          dVar6 = (double)FUN_0126c880(SUB84(dVar4 * dVar5,0),dVar6);
          pVar11 = (pthread_key_t)plVar12;
          *(float *)(local_40[2] + uVar14 * 4) = (float)dVar6;
          uVar14 = uVar1;
        } while (uVar1 != uVar7);
      }
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      puVar2 = *(undefined8 **)(this + 0x78);
      if (puVar2 != puVar9) {
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        *(undefined8 **)(this + 0x78) = puVar9;
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar15) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @014bfad0 (1439 bytes) — math_loop

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  void *pvVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong *this;
  uint uVar41;
  float fVar42;
  float fVar43;
  longlong local_48;
  char local_40;
  
  if ((this[9] != 0) && (this[8] != 0)) {
    pvVar32 = _pthread_getspecific(param_1);
    if (pvVar32 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar30 = *(int *)(local_48 + 0x18);
    iVar36 = iVar30 + 3;
    if (-1 < iVar30) {
      iVar36 = iVar30;
    }
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (3 < iVar30) {
      lVar34 = this[8];
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        lVar34 = this[8];
        lVar33 = FUN_00e8b990();
        if (lVar33 != 0) {
          lVar34 = *(longlong *)(lVar34 + 0x20 + (ulonglong)(*(uint *)(lVar33 + 0x154) & 1) * 8);
        }
      }
      dVar4 = *(double *)(lVar34 + 0x50);
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar38 = *(ulonglong *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar40 = *(ulonglong *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      uVar41 = iVar36 >> 2;
      iVar30 = FUN_00e7d850(dVar4);
      uVar31 = FUN_00e7d850(dVar4 + dVar4);
      if ((int)uVar41 < (int)uVar31) {
        uVar31 = uVar41;
      }
      uVar37 = (ulonglong)uVar31;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      fVar28 = _UNK_0240f0dc;
      fVar27 = _UNK_0240f0d8;
      fVar43 = _UNK_0240f0d4;
      fVar42 = _DAT_0240f0d0;
      if ((int)uVar31 < 1) {
        uVar38 = 0;
      }
      else {
        uVar5 = *(ulonglong *)(local_48 + 0x10);
        if (uVar31 < 8) {
          uVar35 = 0;
LAB_014bfced:
          uVar39 = ~uVar35;
          if ((uVar31 & 1) != 0) {
            fVar42 = *(float *)(uVar40 + uVar35 * 4);
            *(float *)(uVar5 + uVar35 * 4) =
                 (float)(~-(uint)(fVar42 < DAT_023b4df0) & (uint)fVar42) *
                 *(float *)(uVar38 + uVar35 * 4);
            uVar35 = uVar35 | 1;
          }
          fVar42 = DAT_023b4df0;
          if (uVar39 + uVar37 != 0) {
            do {
              fVar43 = *(float *)(uVar40 + uVar35 * 4);
              *(float *)(uVar5 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + uVar35 * 4);
              fVar43 = *(float *)(uVar40 + 4 + uVar35 * 4);
              *(float *)(uVar5 + 4 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + 4 + uVar35 * 4);
              uVar35 = uVar35 + 2;
            } while (uVar37 != uVar35);
          }
        }
        else {
          uVar39 = uVar5 + uVar37 * 4;
          uVar35 = 0;
          if ((uVar5 < uVar40 + uVar37 * 4 && uVar40 < uVar39) ||
             (uVar5 < uVar38 + uVar37 * 4 && uVar38 < uVar39)) goto LAB_014bfced;
          uVar35 = (ulonglong)(uVar31 & 0xfffffff8);
          uVar39 = (uVar35 - 8 >> 3) + 1;
          if (uVar35 - 8 == 0) {
            lVar34 = 0;
          }
          else {
            lVar33 = -(uVar39 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              pfVar1 = (float *)(uVar40 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              pfVar1 = (float *)(uVar40 + 0x20 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x30 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + 0x20 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x30 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + 0x20 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x30 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              lVar34 = lVar34 + 0x10;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar39 & 1) != 0) {
            pfVar1 = (float *)(uVar40 + lVar34 * 4);
            fVar42 = pfVar1[1];
            fVar43 = pfVar1[2];
            fVar27 = pfVar1[3];
            pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
            fVar28 = *pfVar2;
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            bVar7 = _UNK_0240f0d4 <= fVar42;
            bVar9 = _UNK_0240f0d8 <= fVar43;
            bVar11 = _UNK_0240f0dc <= fVar27;
            bVar6 = _DAT_0240f0d0 <= fVar28;
            bVar8 = _UNK_0240f0d4 <= fVar13;
            bVar10 = _UNK_0240f0d8 <= fVar14;
            bVar12 = _UNK_0240f0dc <= fVar15;
            pfVar2 = (float *)(uVar38 + lVar34 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
            fVar19 = *pfVar3;
            fVar20 = pfVar3[1];
            fVar21 = pfVar3[2];
            fVar22 = pfVar3[3];
            pfVar3 = (float *)(uVar5 + lVar34 * 4);
            *pfVar3 = *pfVar2 * (float)(-(uint)(_DAT_0240f0d0 <= *pfVar1) & (uint)*pfVar1);
            pfVar3[1] = fVar16 * (float)(-(uint)bVar7 & (uint)fVar42);
            pfVar3[2] = fVar17 * (float)(-(uint)bVar9 & (uint)fVar43);
            pfVar3[3] = fVar18 * (float)(-(uint)bVar11 & (uint)fVar27);
            pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
            *pfVar1 = fVar19 * (float)(-(uint)bVar6 & (uint)fVar28);
            pfVar1[1] = fVar20 * (float)(-(uint)bVar8 & (uint)fVar13);
            pfVar1[2] = fVar21 * (float)(-(uint)bVar10 & (uint)fVar14);
            pfVar1[3] = fVar22 * (float)(-(uint)bVar12 & (uint)fVar15);
          }
          if (uVar35 != uVar37) goto LAB_014bfced;
        }
        lVar34 = *(longlong *)(local_48 + 0x10);
        if (uVar37 - 1 < 7) {
          fVar42 = 0.0;
          uVar38 = 0;
        }
        else {
          fVar42 = 0.0;
          uVar38 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4) + *(float *)(lVar34 + 4 + uVar38 * 4)
                     + *(float *)(lVar34 + 8 + uVar38 * 4) + *(float *)(lVar34 + 0xc + uVar38 * 4) +
                     *(float *)(lVar34 + 0x10 + uVar38 * 4) + *(float *)(lVar34 + 0x14 + uVar38 * 4)
                     + *(float *)(lVar34 + 0x18 + uVar38 * 4) +
                     *(float *)(lVar34 + 0x1c + uVar38 * 4);
            uVar38 = uVar38 + 8;
          } while ((uVar31 & 0xfffffff8) != uVar38);
        }
        if ((ulonglong)(uVar31 & 7) != 0) {
          uVar40 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4 + uVar40 * 4);
            uVar40 = uVar40 + 1;
          } while ((uVar31 & 7) != uVar40);
        }
        fVar43 = 0.0;
        uVar38 = 0;
        do {
          fVar43 = fVar43 + *(float *)(*(longlong *)(local_48 + 0x10) + uVar38 * 4);
          if (fVar42 * DAT_0239011c <= fVar43) goto LAB_014bffd5;
          uVar38 = uVar38 + 1;
        } while (uVar37 != uVar38);
        uVar38 = 0;
      }
LAB_014bffd5:
      lVar34 = (**(code **)(*this + 0x388))();
      iVar36 = (int)uVar38;
      if (iVar30 < (int)uVar38) {
        iVar36 = iVar30;
      }
      lVar34 = FUN_00e7da10((float)lVar34 * ((float)iVar36 / (float)(int)uVar41));
      lVar33 = (**(code **)(*this + 0x388))();
      if (lVar33 <= lVar34) {
        lVar34 = (**(code **)(*this + 0x388))();
        lVar34 = lVar34 + -1;
      }
      cVar29 = (**(code **)(*this + 0x3c0))();
      if ((cVar29 == '\0') && (lVar34 < this[0x1d])) {
        lVar34 = this[0x1d];
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bfd7c;
    }
  }
  lVar34 = 0;
LAB_014bfd7c:
  if (this[0x1c] != lVar34) {
    FUN_00d64850();
    this[0x1c] = lVar34;
    FUN_00d64910();
  }
  return;
}




// ==================================================
// @01267400 (1430 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  ulonglong uVar2;
  double dVar3;
  double local_68;
  double local_58;
  longlong local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(undefined8 *)(this + 0x118) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this + 0x128) == DAT_0238fee8) &&
       (!NAN(*(double *)(this + 0x128)) && !NAN(DAT_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(undefined8 *)(this + 0x128) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this + 0xe8);
  dVar3 = *(double *)(this + 0xf0);
  if (param_1 <= *(double *)(this + 0xf0)) {
    dVar3 = param_1;
  }
  local_58 = (double)(~-(ulonglong)(0.0 < dVar3) & (ulonglong)DAT_023908c8 |
                     (ulonglong)dVar3 & -(ulonglong)(0.0 < dVar3));
  dVar3 = (double)FUN_012671f0();
  if (NAN(local_58)) {
    local_58 = DAT_023908c8;
    goto LAB_012678b2;
  }
  if (dVar3 < local_58) {
    uVar2 = -(ulonglong)(local_58 < *(double *)(this + 0xf0));
    local_68 = (double)(~uVar2 & (ulonglong)DAT_023908c8 | uVar2 & (ulonglong)local_58);
    if (NAN(local_68)) {
      local_68 = DAT_023908c8;
    }
    else {
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267509;
        }
      }
      else if (local_40 != 0) {
LAB_01267509:
        local_68 = (double)FUN_012685b0(local_68);
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de8d0();
        FUN_00d50b20();
        local_68 = local_68 + dVar3;
      }
      if ((*(double *)(this + 0x120) == local_68) &&
         (!NAN(*(double *)(this + 0x120)) && !NAN(local_68))) goto LAB_012675bb;
    }
    FUN_00d64850();
    *(double *)(this + 0x120) = local_68;
    FUN_00d64910();
  }
LAB_012675bb:
  FUN_01268710();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_012675ec;
    }
  }
  else if (local_40 != 0) {
LAB_012675ec:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267631;
      }
    }
    else if (local_40 != 0) {
LAB_01267631:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_012676a7;
        }
      }
      else if (local_40 != 0) {
LAB_012676a7:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0126782a;
    }
  }
  else if (local_40 != 0) {
LAB_0126782a:
    local_58 = (double)FUN_012685b0(local_58);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar3 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar3;
  }
  if ((*(double *)(this + 0x118) == local_58) &&
     (!NAN(*(double *)(this + 0x118)) && !NAN(local_58))) {
    return;
  }
LAB_012678b2:
  FUN_00d64850();
  *(double *)(this + 0x118) = local_58;
  FUN_00d64910();
  return;
}




// ==================================================
// @0196da90 (1316 bytes) — calculation

{
  double dVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  longlong *plVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong *arg1;
  float *this;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  longlong *local_68;
  double local_60;
  longlong *local_58;
  char local_50;
  int iVar10;
  
  bVar17 = false;
  bVar16 = false;
  local_68 = (longlong *)0x0;
  bVar15 = false;
  *param_2 = '\0';
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_58 == (longlong *)0x0) {
    *this = 0.0;
    plVar14 = (longlong *)0x0;
    plVar11 = local_68;
    goto LAB_0196deb5;
  }
  bVar15 = local_50 != '\0';
  local_68 = local_58;
  if (bVar15) {
    local_50 = '\0';
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264180();
  if (local_58 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    local_60 = param_1;
  }
  else {
    bVar16 = local_50 != '\0';
    if (bVar16) {
      local_50 = '\0';
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    local_60 = (double)(**(code **)(*plVar11 + 0x388))((float)param_1);
    plVar14 = local_58;
  }
  if ((DAT_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027af248 = FUN_001016a0();
    _DAT_027af230 = "MUSampledFunction";
    _DAT_027af238 = 0x58;
    in_ECX = 0x101650;
    _DAT_027af240 = FUN_00101650;
    _DAT_027af250 = 0;
    uRam00000000027af258 = 0;
    _DAT_027af260 = 0;
    uRam00000000027af268 = 0;
    _DAT_027af270 = 0;
    uRam00000000027af278 = 0;
    _DAT_027af280 = 0;
    uRam00000000027af288 = 0;
    _DAT_027af290 = 0;
    uRam00000000027af298 = 0;
    _DAT_027af2a0 = 0;
    uRam00000000027af2a8 = 0;
    _DAT_027af2b0 = 0;
    uRam00000000027af2b8 = 0;
    _DAT_027af2c0 = 0;
    uRam00000000027af2c8 = 0;
    _DAT_027af2d0 = 0;
    uRam00000000027af2d8 = 0;
    _DAT_027af2e0 = 0;
    uRam00000000027af2e8 = 0;
    _DAT_027af2f0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*local_58 + 0x360))();
  cVar3 = FUN_00e85ea0();
  if (cVar3 == '\0') {
    plVar11 = DAT_02802688;
    if (DAT_02802688 == (longlong *)0x0) goto LAB_0196dd31;
LAB_0196dc84:
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    dVar1 = (double)plVar7[10];
    pvVar5 = _pthread_getspecific(in_ECX);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (int)(dVar1 * local_60) + 1;
    if (plVar11[9] == 0) {
      pVar9 = 0;
      in_ECX = 0;
      if (iVar4 < 0) goto LAB_0196dd31;
    }
    else {
      iVar2 = *(int *)(plVar11[9] + 0x18);
      iVar10 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar10 = iVar2;
      }
      pVar9 = iVar10 >> 2;
      in_ECX = pVar9;
      if (iVar4 < (int)pVar9) goto LAB_0196dd31;
    }
    *this = 0.0;
    *param_2 = '\x01';
LAB_0196dddd:
    lVar6 = *arg1;
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      lVar6 = *arg1;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    FUN_0125ec90();
    uVar13 = (undefined7)((ulonglong)lVar6 >> 8);
    if (local_58 == (longlong *)0x0) {
      uVar12 = CONCAT71(uVar13,1);
      plVar11 = (longlong *)0x0;
      goto joined_r0x0196de4b;
    }
    bVar17 = local_50 != '\0';
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    plVar11 = local_58;
    if (DAT_023b4df0 <= fVar18) {
      uVar12 = CONCAT71(uVar13,1);
      goto joined_r0x0196de4b;
    }
  }
  else {
    plVar11 = local_58;
    if (local_58 != (longlong *)0x0) goto LAB_0196dc84;
LAB_0196dd31:
    pVar9 = in_ECX;
    if (*param_2 != '\0') goto LAB_0196dddd;
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    *this = fVar18;
    plVar11 = (longlong *)0x0;
    if ((!NAN(fVar18)) && ((fVar18 != 0.0 || (NAN(fVar18))))) {
      if ((fVar18 != DAT_02394274) || (NAN(fVar18) || NAN(DAT_02394274))) goto LAB_0196dddd;
    }
  }
LAB_0196deb5:
  uVar12 = 0;
  local_58 = local_68;
joined_r0x0196de4b:
  if ((bVar15) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar16) && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar17) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}




// ==================================================
// @0126b620 (1315 bytes) — math_loop

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong this;
  bool bVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  longlong local_b8;
  char local_b0;
  undefined8 local_a0;
  longlong local_80;
  char local_78;
  double local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  double local_48;
  longlong *local_40;
  
  FUN_0125e7c0();
  if (local_68 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    bVar6 = local_80 != 0;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    FUN_0125e7c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ddeb0();
    local_40 = local_68;
    if (local_68 == (longlong *)0x0) {
      bVar6 = true;
      local_40 = (longlong *)0x0;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      plVar3 = (longlong *)FUN_000bea40();
      (**(code **)(*plVar3 + 0x18))();
      local_70 = 0.0;
      local_a0 = 0;
      do {
        if ((local_70 != DAT_02390448) || (dVar8 = local_70, NAN(local_70) || NAN(DAT_02390448))) {
          dVar9 = local_70 + DAT_024113c8;
          dVar8 = *(double *)(this + 0xf0);
          if (*(double *)(this + 0xf0) < dVar9) goto LAB_0126b891;
          plVar5 = *(longlong **)(this + 0xd0);
          pvVar2 = _pthread_getspecific((pthread_key_t)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(longlong **)(this + 0xd0);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          uVar7 = (**(code **)(*plVar5 + 0x3b8))(dVar9);
          pvVar2 = _pthread_getspecific((pthread_key_t)local_68);
          plVar5 = local_40;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            local_68 = local_40;
            plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          local_48 = (double)(**(code **)(*plVar5 + 0x3a8))(local_a0,uVar7);
          plVar5 = *(longlong **)(this + 0x188);
          pvVar2 = _pthread_getspecific((pthread_key_t)local_68);
          if (pvVar2 != (void *)0x0) {
            plVar5 = *(longlong **)(this + 0x188);
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          dVar8 = (double)(**(code **)(*plVar5 + 0x380))(local_70);
          local_48 = local_48 * dVar8;
          local_a0 = uVar7;
        }
        else {
LAB_0126b891:
          local_70 = dVar8;
          local_48 = 0.0;
        }
        pvVar2 = _pthread_getspecific((pthread_key_t)local_68);
        plVar5 = plVar3;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar5 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x418))(local_70,local_48);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        local_70 = local_70 + DAT_024113c8;
      } while (local_70 < *(double *)(this + 0xf0));
      pvVar2 = _pthread_getspecific((pthread_key_t)local_68);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
      plVar5 = (longlong *)(this + 0x168);
      FUN_00d64850();
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != plVar3) {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *plVar5 = (longlong)plVar3;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        FUN_00e8b990();
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb00c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01317d70 (1287 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  void *pvVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  char unaff_SIL;
  longlong *this;
  longlong *plVar11;
  longlong local_f8;
  char local_f0;
  longlong local_98;
  char local_90;
  longlong local_60;
  char local_58;
  int local_48;
  
  if (*this != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_002aa7d0();
    if ((local_f0 == '\0') && (local_f8 != 0)) {
      FUN_00d50b00();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_f8 != 0) {
      if (0 < *(int *)(local_f8 + 0xc)) {
        uVar7 = 0;
        do {
          lVar2 = local_60;
          plVar1 = *(longlong **)(*(longlong *)(local_f8 + 0x10) + (ulonglong)uVar7 * 8);
          uVar8 = uVar7;
          if (unaff_SIL == '\0') {
            pvVar5 = _pthread_getspecific(uVar7);
            plVar11 = plVar1;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar11 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar11 + 0x3d8))();
            if (cVar3 != '\0') goto LAB_01317f44;
            if (param_2 != 0) {
              pvVar5 = _pthread_getspecific(uVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012cb5e0();
            }
          }
          else {
LAB_01317f44:
            pvVar5 = _pthread_getspecific(uVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            FUN_01318520();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            if (local_98 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              local_58 = '\0';
              local_60 = 0;
              local_48 = -1;
              while( true ) {
                lVar6 = (longlong)local_48;
                local_48 = local_48 + 1;
                if (*(int *)(lVar2 + 0xc) <= local_48) break;
                lVar10 = *(longlong *)(lVar2 + 0x10);
                local_60 = *(longlong *)(lVar10 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
                pVar9 = (pthread_key_t)lVar10;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                bVar4 = (**(code **)(*plVar11 + 1000))();
                if ((bVar4 & param_2) == 1) {
                  pvVar5 = _pthread_getspecific(pVar9);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124c8f0();
                }
              }
              FUN_00115190();
              FUN_00d50b20();
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(local_f8 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  return 1;
}




// ==================================================
// @01268710 (1247 bytes) — math_loop

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong arg1;
  longlong *this;
  longlong lVar11;
  longlong lVar12;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(arg1 + 0x100) == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (pthread_key_t)local_40;
    }
    FUN_013e5de0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(longlong *)(arg1 + 0xa8) == 0) {
LAB_01268986:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          do {
            lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (pthread_key_t)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(lVar9 + 0xf0);
            dVar3 = *(double *)(arg1 + 0xe8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)((dVar1 + dVar2) - dVar3) & _DAT_023908f0) < _DAT_02391038) {
              *(undefined1 *)(this + 1) = 0;
              local_40 = lVar7;
              if (bVar4) {
                *this = lVar7;
                *(undefined1 *)(this + 1) = 1;
                bVar4 = false;
              }
              else {
                if (lVar7 != 0) {
                  FUN_00d50b00();
                }
                *this = lVar7;
                *(undefined1 *)(this + 1) = 1;
                bVar4 = false;
              }
              goto LAB_01268b86;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(undefined1 *)(this + 1) = 0;
        *this = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        lVar7 = arg1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (pthread_key_t)lVar7;
        FUN_012dff70();
        if (local_40 == 0) goto LAB_01268986;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *this = local_40;
        *(undefined1 *)(this + 1) = 1;
        bVar4 = false;
      }
LAB_01268b86:
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01268ba5;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
LAB_01268ba5:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01267c40 (1128 bytes) — calculation

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong this;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  longlong local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(undefined8 *)(this + 0x120) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this + 0x130) == DAT_0238fee8) &&
       (!NAN(*(double *)(this + 0x130)) && !NAN(DAT_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(undefined8 *)(this + 0x130) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this + 0xe8);
  dVar4 = 0.0;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  uVar2 = -(ulonglong)(dVar4 < *(double *)(this + 0xf0));
  dVar4 = (double)(~uVar2 & (ulonglong)DAT_023908c8 | (ulonglong)dVar4 & uVar2);
  dVar3 = (double)FUN_01267080();
  dVar5 = dVar3;
  if (dVar3 <= dVar4) {
    dVar5 = dVar4;
  }
  local_58 = (double)(~-(ulonglong)(!NAN(dVar3) && !NAN(dVar3)) & (ulonglong)dVar4 |
                     (~-(ulonglong)(!NAN(dVar4) && !NAN(dVar4)) & (ulonglong)dVar4 |
                     (ulonglong)dVar5 & -(ulonglong)(!NAN(dVar4) && !NAN(dVar4))) &
                     -(ulonglong)(!NAN(dVar3) && !NAN(dVar3)));
  if (NAN(local_58)) {
    local_58 = DAT_023908c8;
    goto LAB_01267fdd;
  }
  FUN_01274c40(_DAT_02391038);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01267d19;
    }
  }
  else if (local_40 != 0) {
LAB_01267d19:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267d5e;
      }
    }
    else if (local_40 != 0) {
LAB_01267d5e:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267dd4;
        }
      }
      else if (local_40 != 0) {
LAB_01267dd4:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01267f57;
    }
  }
  else if (local_40 != 0) {
LAB_01267f57:
    local_58 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar4;
  }
  if ((*(double *)(this + 0x120) == local_58) &&
     (!NAN(*(double *)(this + 0x120)) && !NAN(local_58))) {
    return;
  }
LAB_01267fdd:
  FUN_00d64850();
  *(double *)(this + 0x120) = local_58;
  FUN_00d64910();
  return;
}




// ==================================================
// @014bf4a0 (1089 bytes) — math_loop

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  pthread_key_t pVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong this;
  longlong local_40;
  char local_38;
  
  lVar12 = *(longlong *)(this + 0x88);
  if (lVar12 == 0) {
    return;
  }
  if (*(longlong *)(this + 0x48) == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *(longlong *)(this + 0x48);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar5 = *(int *)(local_40 + 0x18);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar5 < 4) {
LAB_014bf8a0:
    if (local_40 == 0) goto LAB_014bf8ae;
  }
  else {
    fVar3 = **(float **)(local_40 + 0x10);
    if (fVar3 < DAT_023b4df0) {
      if (DAT_023b4df0 <= fVar3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          if ((ulonglong)(uint)(iVar8 >> 2) - 1 == uVar17) goto LAB_014bf8a0;
          lVar11 = uVar17 + 1;
          uVar17 = uVar17 + 1;
        } while ((*(float **)(local_40 + 0x10))[lVar11] < DAT_023b4df0);
      }
      uVar16 = (uint)uVar17;
      uVar17 = uVar17 & 0xffffffff;
      uVar4 = *(undefined4 *)(*(longlong *)(local_40 + 0x10) + uVar17 * 4);
      FUN_00c8e4f0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (uVar16 != 0) {
        lVar11 = *(longlong *)(local_40 + 0x10);
        if (uVar16 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar17 - (uVar16 & 7);
          uVar15 = 0;
          do {
            puVar2 = (undefined4 *)(lVar11 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            puVar2 = (undefined4 *)(lVar11 + 0x10 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            uVar15 = uVar15 + 8;
          } while (uVar14 != uVar15);
          if ((ulonglong)(uVar16 & 7) == 0) goto LAB_014bf72e;
        }
        do {
          *(undefined4 *)(lVar11 + uVar14 * 4) = uVar4;
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
LAB_014bf72e:
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(puVar10 + 7) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
      *(undefined2 *)(puVar10 + 8) = 0;
      pVar13 = 0x25dc9e8;
      *puVar10 = &DAT_025dc9e8;
      puVar10[9] = 0;
      puVar10[10] = 0;
      (*DAT_025dca00)();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      FUN_013eb950((int)*(undefined8 *)(lVar12 + 0x50));
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      puVar1 = (undefined8 *)(this + 0x88);
      if ((undefined8 *)*puVar1 != puVar10) {
        FUN_00d64850();
        puVar7 = (undefined8 *)*puVar1;
        if (puVar7 != puVar10) {
          FUN_00d50b00();
          *puVar1 = puVar10;
          if (puVar7 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bf8a0;
    }
  }
  FUN_00d50b20();
LAB_014bf8ae:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0126c880 (1084 bytes) — calculation

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong this;
  float fVar5;
  double dVar6;
  double dVar7;
  longlong local_60;
  char local_58;
  double local_50;
  double local_38;
  
  fVar1 = *(float *)(this + 0x138);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return param_1;
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return param_1;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return param_1;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_013dee00();
  fVar5 = DAT_02390d00;
  if (DAT_02390d00 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar5 = (fVar5 + DAT_02390124) * DAT_0239109c + DAT_02391090;
  local_38 = param_1;
  if ((cVar2 == '\0') && (cVar2 = FUN_01263cf0(), cVar2 == '\0')) {
    dVar6 = *(double *)(this + 0xf0) + DAT_0241b6a8;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013dee60();
    if (cVar2 == '\0') {
      local_50 = DAT_0240cfd8;
LAB_0126cad9:
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_013deec0();
      if (cVar2 == '\0') {
        dVar6 = dVar6 + DAT_0241b6a8;
      }
      else {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar4 = FUN_013ded90();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013de950();
        dVar6 = (double)FUN_01264500(dVar6 * (double)lVar4);
        if (dVar6 < param_2) {
          if (0.0 <= fVar1) goto LAB_0126c990;
          local_38 = (double)fVar5;
          if (param_2 < dVar6 + DAT_0241b6a8) {
            local_38 = local_38 +
                       (((dVar6 + DAT_0241b6a8) - param_2) / DAT_0241b6a8) *
                       (DAT_0238fee8 - local_38);
          }
          goto LAB_0126c982;
        }
      }
      if (fVar1 <= 0.0) goto LAB_0126c990;
      fVar5 = DAT_02390124;
      if (fVar1 <= DAT_02390124) {
        fVar5 = fVar1;
      }
      local_38 = (double)(DAT_02390124 - fVar5);
      if (DAT_0241b6a8 + param_2 <= dVar6) {
        if (DAT_0241b6b0 + param_2 < local_50) {
          local_38 = local_38 +
                     (((local_50 + DAT_0241b6a8) - param_2) / DAT_0241b6a8) *
                     (DAT_0238fee8 - local_38);
        }
        goto LAB_0126c982;
      }
      dVar7 = DAT_0238fee8 - local_38;
      local_50 = dVar6 + DAT_0241b6b0;
    }
    else {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013ded30();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
      local_50 = (double)FUN_01264500(dVar7 * (double)lVar4);
      if (local_50 <= param_2) goto LAB_0126cad9;
      if (0.0 <= fVar1) goto LAB_0126c990;
      local_38 = (double)fVar5;
      local_50 = local_50 + DAT_0241b6b0;
      if (param_2 <= local_50) goto LAB_0126c982;
      dVar7 = DAT_0238fee8 - local_38;
    }
    local_38 = local_38 + ((param_2 - local_50) / DAT_0241b6a8) * dVar7;
  }
  else {
    if (0.0 <= fVar1) goto LAB_0126c990;
    local_38 = (double)fVar5;
  }
LAB_0126c982:
  local_38 = param_1 * local_38;
LAB_0126c990:
  FUN_00d50b20();
  return local_38;
}




// ==================================================
// @0196d600 (934 bytes) — calculation

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong this;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  if ((*(longlong *)(this + 0x178) != 0) &&
     (DAT_02390124 < *(float *)(this + 0x114) || DAT_02390124 == *(float *)(this + 0x114))
     ) {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126bcd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      if (local_30 == 0) {
        cVar6 = '\0';
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_0124c5d0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined8 *)((longlong)puVar9 + 0x29) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(undefined8 **)(this + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(undefined8 **)(this + 0x1d8) = puVar9;
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(longlong *)(this + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((longlong *)(this + 0x170) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(this + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar7 = FUN_01968c50();
        *(undefined1 *)(*(longlong *)(this + 0x1d8) + 0x38) = uVar7;
        if (*(longlong *)(this + 0x1e0) == 0) {
          return;
        }
        *(undefined8 *)(this + 0x1e0) = 0;
      }
      else {
        dVar4 = (double)FUN_00e7d6f0();
        if (dVar4 - *(double *)(this + 0x1e8) <= DAT_023942d0) {
          return;
        }
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined8 *)((longlong)puVar9 + 0x29) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(undefined8 **)(this + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(undefined8 **)(this + 0x1d8) = puVar9;
          if (puVar1 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(longlong *)(this + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((longlong *)(this + 0x170) != (longlong *)0x0) {
          (**(code **)(*(longlong *)(this + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar5 = FUN_00e7d6f0();
        *(undefined8 *)(this + 0x1e8) = uVar5;
        lVar2 = *(longlong *)(this + 0x1d8);
        lVar3 = *(longlong *)(this + 0x1e0);
        if (lVar3 == lVar2) {
          return;
        }
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(this + 0x1e0) = lVar2;
        if (lVar3 == 0) {
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @013168e0 (889 bytes) — calculation

{
  uint uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  byte unaff_SIL;
  undefined8 unaff_R12;
  undefined7 uVar5;
  ulonglong uVar4;
  bool bVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  uVar5 = (undefined7)((ulonglong)unaff_R12 >> 8);
  if (local_40 == 0) {
    bVar6 = true;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    bVar6 = local_70 == 0;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = CONCAT71(uVar5,bVar6) ^ 1;
  if (((char)uVar4 == '\0') && ((unaff_SIL ^ 1) == 0)) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cac0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = CONCAT71(uVar5,1);
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar3 = 0;
  uVar1 = (uint)uVar4 & 0xff;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  if (local_40 == 0 && (unaff_SIL ^ 1) == 0) {
    pvVar2 = _pthread_getspecific(0);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150cb90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar4 = (ulonglong)uVar1;
  }
  return uVar4 & 0xffffffff;
}




// ==================================================
// @01266770 (816 bytes) — math_loop

{
  double *pdVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  pthread_key_t pVar9;
  longlong *arg1;
  longlong *this;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  double local_68;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_68 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_68 = *(double *)
                (*(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00d23310();
  uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (undefined4)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 1;
    lVar10 = 0;
    uVar11 = 0;
    do {
      pVar9 = (pthread_key_t)param_1;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)uVar11 == '\0') && (lVar10 != 0)) {
          uVar11 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar11 == '\0') || (lVar10 == 0)) {
          uVar11 = 1;
          lVar10 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar11 = 1;
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*(double *)(lVar10 + 0xe8) <= local_68 && local_68 != *(double *)(lVar10 + 0xe8))
        goto LAB_012669a6;
      }
      else {
        pdVar1 = (double *)
                 (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                 0xe8);
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*pdVar1 <= local_68 && local_68 != *pdVar1) {
LAB_012669a6:
          pvVar5 = _pthread_getspecific(pVar9);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            local_68 = *(double *)(lVar10 + 0xe8);
            lVar2 = lVar10;
          }
          else {
            lVar2 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            local_68 = *(double *)(lVar2 + 0xe8);
          }
          if (local_48 == lVar10) {
            lVar6 = local_48;
            uVar3 = local_3c;
            if ((((char)uVar11 != '\0') && ((char)local_3c == '\0')) && (lVar10 != 0)) {
              local_3c = (undefined4)CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
              FUN_00d50b00();
              lVar6 = local_48;
              uVar3 = local_3c;
            }
          }
          else {
            if (((char)uVar11 != '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar6 = lVar10;
            uVar3 = uVar11;
            if (((char)local_3c != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      local_3c = uVar3;
      local_48 = lVar6;
      lVar12 = lVar12 + 1;
      lVar6 = *arg1;
      param_1 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar12 < param_1);
  }
  lVar6 = local_48;
  *(undefined1 *)(this + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this = lVar6;
  *(undefined1 *)(this + 1) = 1;
  if (((char)uVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01964590 (813 bytes) — calculation

{
  void *pvVar1;
  longlong lVar2;
  longlong this;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  float fVar6;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  float local_48;
  float local_44;
  longlong *local_40;
  char local_38;
  float local_2c;
  
  FUN_01989f80();
  local_2c = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  plVar3 = local_40;
  lVar2 = *(longlong *)(this + 0x178);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_44 = (float)(**(code **)(*plVar3 + 0xc38))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2c == 0.0) && (!NAN(local_2c))) {
    if ((*(float *)(this + 0x1d0) == DAT_02390124) &&
       (!NAN(*(float *)(this + 0x1d0)) && !NAN(DAT_02390124))) {
      local_2c = *(float *)(this + 0x1d0);
      fVar6 = local_44;
      if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
        return local_44;
      }
      goto LAB_01964847;
    }
  }
  uVar5 = FUN_01989f80();
  local_50 = 0;
  local_58 = *(longlong *)(this + 0x178);
  if (local_58 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_50 = '\x01';
  FUN_019d4fe0(uVar5,&local_58);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    fVar6 = local_2c * local_44 + (DAT_02390124 - local_2c) * local_44;
    local_2c = *(float *)(this + 0x1d0);
    if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
      return fVar6;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    plVar4 = plVar3;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar4 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(param_1);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar3 + 0x3a8))(local_44);
    local_48 = (float)(**(code **)(*plVar4 + 0x3a0))();
    FUN_00d50b20();
    fVar6 = local_48 * local_2c + (DAT_02390124 - local_2c) * local_44;
    local_2c = *(float *)(this + 0x1d0);
    if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
      return fVar6;
    }
  }
LAB_01964847:
  FUN_01989f80(fVar6);
  local_48 = (float)(**(code **)(*local_40 + 0xcd8))();
  local_2c = (float)_powf(local_2c,DAT_02391090);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_2c * (local_44 - local_48) + local_48;
}




// ==================================================
// @01266b80 (807 bytes) — math_loop

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar9;
  longlong *arg1;
  longlong *this;
  undefined4 uVar10;
  longlong lVar11;
  double dVar12;
  double local_68;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  lVar6 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    lVar6 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  local_68 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d23310();
  uVar8 = (undefined7)((ulonglong)uVar5 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (undefined4)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = 1;
    lVar4 = 0;
    uVar10 = 0;
    do {
      pVar9 = (pthread_key_t)param_1;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8);
      if (lVar4 == lVar6) {
        if (((char)uVar10 == '\0') && (lVar4 != 0)) {
          uVar10 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar10 == '\0') || (lVar4 == 0)) {
          uVar10 = 1;
          lVar4 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar10 = 1;
          lVar4 = lVar6;
        }
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar12 = *(double *)(lVar4 + 0xe8) + *(double *)(lVar4 + 0xf0);
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar12 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      lVar6 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar12) {
        pvVar3 = _pthread_getspecific(pVar9);
        lVar7 = lVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar7 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        local_68 = *(double *)(lVar7 + 0xe8) + *(double *)(lVar7 + 0xf0);
        if (local_48 == lVar4) {
          lVar6 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar10 != '\0') && ((char)local_3c == '\0')) && (lVar4 != 0)) {
            local_3c = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            FUN_00d50b00();
            lVar6 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar10 != '\0') && (lVar4 != 0)) {
            FUN_00d50b00();
          }
          lVar6 = lVar4;
          uVar1 = uVar10;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar6;
      lVar11 = lVar11 + 1;
      lVar6 = *arg1;
      param_1 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar11 < param_1);
  }
  lVar6 = local_48;
  *(undefined1 *)(this + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this = lVar6;
  *(undefined1 *)(this + 1) = 1;
  if (((char)uVar10 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @012682a0 (696 bytes) — calculation

{
  void *pvVar1;
  longlong this;
  double dVar2;
  double dVar3;
  longlong local_48;
  char local_40;
  double local_38;
  double local_28;
  
  local_28 = (double)FUN_01267080();
  dVar2 = (double)FUN_012671f0();
  dVar3 = DAT_023908c8;
  if (NAN(local_28)) {
joined_r0x0126854d:
    if (local_28 <= 0.0) goto LAB_01268331;
LAB_01268317:
    dVar3 = *(double *)(this + 0xf0);
    if (*(double *)(this + 0xf0) < local_28) goto LAB_01268331;
    local_38 = 0.0;
    if (0.0 <= dVar2) goto LAB_0126834c;
LAB_0126835a:
    dVar2 = local_28;
    if (local_28 <= local_38) {
      dVar2 = local_38;
    }
    local_38 = (double)(~-(ulonglong)(!NAN(local_28) && !NAN(local_28)) & (ulonglong)local_38 |
                       (ulonglong)dVar2 & -(ulonglong)(!NAN(local_28) && !NAN(local_28)));
  }
  else {
    if (dVar2 < local_28) {
      local_28 = (local_28 + dVar2) * DAT_023942d0;
      dVar2 = local_28;
      goto joined_r0x0126854d;
    }
    if (0.0 < local_28) goto LAB_01268317;
LAB_01268331:
    local_38 = 0.0;
    local_28 = dVar3;
    if (dVar2 < 0.0) goto LAB_0126835a;
LAB_0126834c:
    local_38 = dVar2;
    if (!NAN(local_38)) goto LAB_0126835a;
  }
  if (*(double *)(this + 0xf0) <= local_38) {
    local_38 = DAT_023908c8;
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012684aa;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012684aa;
  if (!NAN(local_28)) {
    local_28 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_28 = local_28 + dVar2;
  }
  if (!NAN(local_38)) {
    local_38 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_38 = local_38 + dVar2;
  }
  FUN_00d50b20();
LAB_012684aa:
  if ((*(double *)(this + 0x118) != local_28) ||
     (NAN(*(double *)(this + 0x118)) || NAN(local_28))) {
    FUN_00d64850();
    *(double *)(this + 0x118) = local_28;
    FUN_00d64910();
  }
  if ((*(double *)(this + 0x120) != local_38) ||
     (NAN(*(double *)(this + 0x120)) || NAN(local_38))) {
    FUN_00d64850();
    *(double *)(this + 0x120) = local_38;
    FUN_00d64910();
  }
  return;
}




// ==================================================
// @01969e40 (672 bytes) — calculation

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *arg1;
  undefined8 *this;
  bool bVar6;
  
  if ((DAT_028b0e58 == (undefined8 *)0x0) || (DAT_028b0e61 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e58 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_026792c0;
      puVar5[5] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028b0e58 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028b0e58 != (undefined8 *)0x0;
        DAT_028b0e58 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0e60 == '\0') {
        DAT_028b0e60 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfcc50(DAT_0239011c,0,0);
      DAT_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0e68 == (undefined8 *)0x0) || (DAT_028b0e71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e68 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_026792c0;
      puVar5[5] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028b0e68 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028b0e68 != (undefined8 *)0x0;
        DAT_028b0e68 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0e70 == '\0') {
        DAT_028b0e70 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfc880(DAT_0239011c);
      DAT_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = arg1[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*arg1 + 0x9d8))();
  if (cVar4 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = *(char *)((longlong)arg1 + 0x1c4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      *(undefined1 *)(this + 1) = 0;
      puVar5 = DAT_028b0e58;
      goto joined_r0x0196a0be;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  puVar5 = DAT_028b0e68;
joined_r0x0196a0be:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this = puVar5;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @014c0100 (652 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  char unaff_SIL;
  longlong *this;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  char local_4c;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  plVar7 = param_1;
  local_50 = param_2;
  local_4c = unaff_SIL;
  (**(code **)(*this + 0x378))();
  lVar5 = local_40;
  pVar6 = (pthread_key_t)plVar7;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    (**(code **)(*this + 0x378))();
    lVar2 = local_40;
    lVar5 = *param_1;
    if (lVar5 == local_40) {
      if (((char)param_1[1] != '\0') || (local_40 == 0)) goto LAB_014c01e9;
      local_48 = param_1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_014c01e2;
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar1 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar2;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_014c01e2:
        *(undefined1 *)local_48 = 1;
LAB_014c01e9:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014c01fd;
      }
      *param_1 = local_40;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_48 = 1;
  }
LAB_014c01fd:
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01334f30();
  if (cVar3 == '\0') {
    return;
  }
  local_60 = *param_1;
  local_58 = '\0';
  local_80 = 0;
  local_78 = 0;
  FUN_014c03f0(&local_60,&local_68,&local_80);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_4c != '\0') {
    lVar5 = (**(code **)(*this + 0x388))();
    if (lVar5 < local_70) {
      if (this[0x1d] != 0x7fffffffffffffff) {
        FUN_00d64850();
        this[0x1d] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
      if (this[0x1e] == 0x7fffffffffffffff) goto LAB_014c0332;
      FUN_00d64850();
      this[0x1e] = 0x7fffffffffffffff;
    }
    else {
      if (this[0x1d] == local_70) goto LAB_014c0332;
      FUN_00d64850();
      this[0x1d] = local_70;
    }
    FUN_00d64910();
  }
LAB_014c0332:
  if ((((char)local_50 != '\0') && (cVar3 = (**(code **)(*this + 0x3c0))(), cVar3 == '\0')) &&
     (this[0x1e] != local_68)) {
    FUN_00d64850();
    this[0x1e] = local_68;
    FUN_00d64910();
  }
  return;
}




// ==================================================
// @014bf230 (595 bytes) — math_loop

{
  int iVar1;
  longlong in_RCX;
  longlong lVar2;
  int unaff_ESI;
  int unaff_EDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = DAT_023b26e8;
  if (unaff_EDI < unaff_ESI) {
    fVar8 = 0.0;
    fVar3 = 0.0;
    lVar2 = (longlong)unaff_EDI;
    do {
      fVar5 = *(float *)(param_3 + lVar2 * 4);
      fVar4 = 0.0;
      if (DAT_023b4df0 <= fVar5) {
        fVar5 = (float)_powf(fVar5,DAT_02394298);
        fVar4 = (float)_powf(*(undefined4 *)(in_RCX + lVar2 * 4),DAT_0239426c);
        fVar4 = fVar4 * fVar5;
      }
      fVar5 = DAT_02411280;
      if (DAT_02411280 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * DAT_02394204);
      fVar8 = fVar8 + fVar4 * DAT_02394208 * fVar5;
      fVar3 = fVar3 + fVar5;
      lVar2 = lVar2 + 1;
    } while (unaff_ESI != lVar2);
    iVar1 = 0;
    fVar5 = DAT_023908e0 + fVar8 / fVar3;
    fVar3 = fVar8 / fVar3;
    do {
      fVar8 = fVar3;
      if ((float)((uint)(fVar5 - fVar8) & _DAT_02390140) <= DAT_02390124) {
        return fVar8;
      }
      fVar9 = 0.0;
      fVar4 = 0.0;
      lVar2 = (longlong)unaff_EDI;
      do {
        fVar3 = *(float *)(param_3 + lVar2 * 4);
        fVar6 = (float)_logf(((float)param_1 / *(float *)(param_2 + lVar2 * 4)) * DAT_02394204);
        fVar6 = fVar6 * DAT_02394208;
        fVar7 = (float)((uint)(fVar8 - fVar6) & _DAT_02390140) / DAT_0241eeb0 + DAT_02390124;
        fVar5 = 0.0;
        if (DAT_023b4df0 <= fVar3) {
          fVar11 = DAT_023b4df0;
          if (DAT_023b4df0 <= fVar3) {
            fVar11 = fVar3;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar7) {
            fVar10 = fVar7;
          }
          fVar3 = (float)((uint)fVar3 & _DAT_02390140);
          fVar5 = (float)_powf(*(undefined4 *)(in_RCX + lVar2 * 4),DAT_0239426c);
          fVar5 = fVar5 * fVar11 * fVar11 * fVar3 * fVar10;
        }
        fVar3 = DAT_02411280;
        if (DAT_02411280 <= fVar5) {
          fVar3 = fVar5;
        }
        fVar9 = fVar9 + fVar6 * fVar3;
        fVar4 = fVar4 + fVar3;
        lVar2 = lVar2 + 1;
      } while (unaff_ESI != lVar2);
      iVar1 = iVar1 + 1;
      fVar5 = fVar8;
      fVar3 = fVar9 / fVar4;
    } while (iVar1 != 0x16);
    fVar3 = (fVar8 + fVar9 / fVar4) * DAT_0239011c;
  }
  return fVar3;
}




// ==================================================
// @0125ec90 (585 bytes) — calculation

{
  void *pvVar1;
  longlong arg1;
  undefined8 *this;
  bool bVar2;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(arg1 + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if (local_38 == 0) {
      bVar2 = false;
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      bVar2 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc0d0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == '\0') {
        return;
      }
      if (local_48 == 0) {
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
// @012664b0 (556 bytes) — math_loop

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  longlong *this;
  longlong lVar12;
  double dVar13;
  longlong local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
  pcVar10 = local_38;
  if (local_50[0] != '\0') {
    pcVar10 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar10 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  lVar6 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    lVar6 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
  }
  local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(*this + 0xc);
  if ((int)uVar1 < 2) {
    return local_40;
  }
  lVar9 = (ulonglong)uVar1 - 2;
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  lVar6 = *(longlong *)(*(longlong *)(*this + 0x10) + 8);
  lVar5 = lVar9;
  if (lVar6 != 0) goto LAB_012665af;
  do {
    lVar6 = lVar11;
    if ((!bVar3) && (lVar11 != 0)) {
      FUN_00d50b00();
      bVar3 = true;
    }
    while( true ) {
      bVar2 = bVar3;
      lVar11 = lVar6;
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar13 = *(double *)(lVar11 + 0xe8) + *(double *)(lVar11 + 0xf0);
      }
      else {
        lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar13 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (local_40 < dVar13) {
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
        lVar6 = lVar11;
        if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (lVar9 == lVar12) {
        if (!bVar2) {
          return local_40;
        }
        if (lVar11 == 0) {
          return local_40;
        }
        FUN_00d50b20();
        return local_40;
      }
      lVar12 = lVar12 + 1;
      lVar6 = *(longlong *)(*(longlong *)(*this + 0x10) + 8 + lVar12 * 8);
      bVar3 = bVar2;
      if (lVar11 == lVar6) break;
LAB_012665af:
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}




// ==================================================
// @01266200 (543 bytes) — math_loop

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *this;
  longlong lVar13;
  longlong local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
  pcVar11 = local_38;
  if (local_50[0] != '\0') {
    pcVar11 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar11 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_40 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_40 = *(double *)
                (*(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = *(uint *)(*this + 0xc);
  if ((int)uVar2 < 2) {
    return local_40;
  }
  lVar9 = (ulonglong)uVar2 - 2;
  lVar13 = 0;
  lVar12 = 0;
  bVar4 = false;
  bVar3 = false;
  lVar6 = *(longlong *)(*(longlong *)(*this + 0x10) + 8);
  lVar10 = lVar9;
  if (lVar6 != 0) goto LAB_0126630f;
  do {
    lVar6 = lVar12;
    if ((!bVar4) && (lVar12 != 0)) {
      FUN_00d50b00();
      bVar4 = true;
    }
LAB_01266370:
    bVar3 = bVar4;
    lVar12 = lVar6;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      if (*(double *)(lVar12 + 0xe8) <= local_40 && local_40 != *(double *)(lVar12 + 0xe8))
      goto LAB_012663c2;
    }
    else {
      pdVar1 = (double *)
               (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0xe8)
      ;
      if (*pdVar1 <= local_40 && local_40 != *pdVar1) {
LAB_012663c2:
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
        lVar6 = lVar12;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8);
      }
    }
    if (lVar9 == lVar13) {
      if (!bVar3) {
        return local_40;
      }
      if (lVar12 == 0) {
        return local_40;
      }
      FUN_00d50b20();
      return local_40;
    }
    lVar13 = lVar13 + 1;
    lVar6 = *(longlong *)(*(longlong *)(*this + 0x10) + 8 + lVar13 * 8);
    bVar4 = bVar3;
  } while (lVar12 == lVar6);
LAB_0126630f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  bVar4 = true;
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01266370;
}




// ==================================================
// @0126bcd0 (525 bytes) — calculation

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *arg1;
  longlong *this;
  longlong local_40;
  char local_38;
  
  if ((*(char *)((longlong)arg1 + 0x181) != '\0') && (arg1[0xf] == 0)) {
    (**(code **)(*arg1 + 0x1a0))();
  }
  plVar7 = (longlong *)arg1[0xf];
  if ((DAT_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027af248 = FUN_001016a0();
    _DAT_027af230 = "MUSampledFunction";
    _DAT_027af238 = 0x58;
    _DAT_027af240 = FUN_00101650;
    _DAT_027af250 = 0;
    uRam00000000027af258 = 0;
    _DAT_027af260 = 0;
    uRam00000000027af268 = 0;
    _DAT_027af270 = 0;
    uRam00000000027af278 = 0;
    _DAT_027af280 = 0;
    uRam00000000027af288 = 0;
    _DAT_027af290 = 0;
    uRam00000000027af298 = 0;
    _DAT_027af2a0 = 0;
    uRam00000000027af2a8 = 0;
    _DAT_027af2b0 = 0;
    uRam00000000027af2b8 = 0;
    _DAT_027af2c0 = 0;
    uRam00000000027af2c8 = 0;
    _DAT_027af2d0 = 0;
    uRam00000000027af2d8 = 0;
    _DAT_027af2e0 = 0;
    uRam00000000027af2e8 = 0;
    _DAT_027af2f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_0126bd40:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar7 = arg1 + 0xf;
    if (cVar3 == '\0') goto LAB_0126bd40;
  }
  lVar2 = *plVar7;
  if (lVar2 == 0) goto LAB_0126bde2;
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific((pthread_key_t)plVar7);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    if ((*(double *)(lVar2 + 0x50) == DAT_0238fee8) &&
       (!NAN(*(double *)(lVar2 + 0x50)) && !NAN(DAT_0238fee8))) goto LAB_0126bdb1;
  }
  else {
    dVar1 = *(double *)
             (*(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50);
    if ((dVar1 == DAT_0238fee8) && (!NAN(dVar1) && !NAN(DAT_0238fee8))) {
LAB_0126bdb1:
      FUN_00da5ad0();
      cVar3 = *(char *)(local_40 + 0x18);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        *(undefined1 *)(this + 1) = 0;
        *this = 0;
        FUN_00d50b20();
        return;
      }
      FUN_0126bf30();
    }
  }
  FUN_00d50b20();
LAB_0126bde2:
  *(undefined1 *)(this + 1) = 0;
  lVar2 = arg1[0xf];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this = lVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}



