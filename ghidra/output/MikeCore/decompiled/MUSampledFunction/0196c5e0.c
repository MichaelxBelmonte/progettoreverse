// Function: FUN_0196c5e0
// Address: 0196c5e0
// Size: 2955 bytes
// Class: MUSampledFunction


void FUN_0196c5e0(pthread_key_t param_1)

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
  float *unaff_RSI;
  longlong unaff_RDI;
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
  local_b0 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI);
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
  local_d0 = local_d0 - *unaff_RSI;
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01964590();
  fVar19 = (float)FUN_0198a7d0();
  local_cc = (fVar19 + *(float *)(unaff_RDI + 0x1bc) * DAT_0241b660) - unaff_RSI[1];
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
    local_54 = DAT_02390d00 + unaff_RSI[2];
    local_90 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((local_54 < 0.0) || (local_54 < unaff_RSI[2] + DAT_023b1608)) goto LAB_0196cae6;
    local_7c = (uint)uVar17;
    do {
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI + local_54);
      lVar10 = *(longlong *)(unaff_RDI + 0x178);
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
          local_9c = unaff_RSI[2];
          bVar18 = true;
          goto LAB_0196cafe;
        }
        break;
      }
      pfVar8 = unaff_RSI;
    } while (unaff_RSI[2] + DAT_023b1608 <= local_54);
    local_90 = CONCAT71((int7)((ulonglong)pfVar8 >> 8),1);
    uVar15 = 0;
    uVar17 = (ulonglong)local_7c;
    local_9c = unaff_RSI[2];
    if (pcVar14 == (code *)0x0) {
      bVar18 = true;
      goto LAB_0196cafe;
    }
  }
  else {
    fVar19 = 0.0;
    do {
      pfVar8 = unaff_RSI;
      if (unaff_RSI[2] <= fVar19) goto LAB_0196c9a1;
      FUN_01989f80();
      local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI + fVar19);
      lVar10 = *(longlong *)(unaff_RDI + 0x178);
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
    local_9c = unaff_RSI[2];
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
        if (unaff_RSI[2] <= fVar19) {
          FUN_01989f80();
          local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI + fVar19);
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
          local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI + fVar19);
          if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = (double)(float)(local_78 - local_b0);
          pcVar16 = *(code **)(unaff_RDI + 0x178);
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
        local_78 = (double)(**(code **)(*(longlong *)local_40 + 0x930))(*unaff_RSI + fVar19);
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
        FUN_01d38ba0(local_d0 + fVar19,(fVar20 - unaff_RSI[1]) - local_cc);
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


