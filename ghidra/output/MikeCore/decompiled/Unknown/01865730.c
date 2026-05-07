// Function: FUN_01865730
// Address: 01865730
// Size: 3762 bytes
// Class: Unknown


void FUN_01865730(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined4 unaff_ESI;
  longlong lVar18;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  longlong *plVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined8 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  char local_59;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_1b8 = *unaff_RDI;
  if (local_1b8 == 0) {
    return;
  }
  local_68 = (longlong *)CONCAT44(local_68._4_4_,unaff_ESI);
  local_1b0 = '\0';
  local_a0 = param_1;
  uVar21 = FUN_018da170();
  plVar19 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (uVar21 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    uVar21 = FUN_00d50b20();
  }
  plVar17 = DAT_027df900;
  uVar8 = *(uint *)(plVar19 + 3);
  local_b4 = (undefined4)param_3;
  local_b8 = param_2;
  if ((uVar8 & 0xfffffffc) == 4) {
    if (DAT_027df900 != (longlong *)0x0) {
      uVar21 = FUN_00d50b00();
      uVar8 = *(uint *)(plVar19 + 3);
    }
    uVar15 = CONCAT71((int7)((ulonglong)param_3 >> 8),plVar17 != (longlong *)0x0) & 0xffffffff;
  }
  else {
    uVar15 = 0;
    plVar17 = (longlong *)0x0;
  }
  plVar3 = DAT_027d6a38;
  uVar14 = uVar8 + 3;
  if (-1 < (int)uVar8) {
    uVar14 = uVar8;
  }
  local_38 = plVar17;
  if ((uVar8 & 0xfffffffc) == 8) {
    lVar16 = 0;
    do {
      if (*(int *)(plVar19[2] + lVar16 * 4) == 0) {
        lVar16 = 0;
        goto LAB_01865860;
      }
      lVar16 = lVar16 + 1;
    } while ((int)uVar14 >> 2 != (int)lVar16);
  }
  goto LAB_018658d6;
  while (lVar16 = lVar16 + 1, (int)uVar14 >> 2 != (int)lVar16) {
LAB_01865920:
    if (*(int *)(plVar19[2] + lVar16 * 4) == 10) {
      if (DAT_027d6a40 != (longlong *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      cVar4 = (char)uVar15;
      if (local_38 == plVar17) {
        uVar14 = (uint)uVar15 & 0xff;
        uVar8 = 1;
        if (plVar17 == (longlong *)0x0) {
          uVar8 = uVar14;
        }
        if ((cVar4 == '\0') || (uVar8 = uVar14, plVar17 == (longlong *)0x0)) {
          uVar15 = (ulonglong)uVar8;
        }
        else {
          uVar21 = FUN_00d50b20();
        }
      }
      else {
        uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        if ((cVar4 == '\0') || (local_38 == (longlong *)0x0)) {
          local_38 = plVar17;
        }
        else {
          uVar21 = FUN_00d50b20();
          local_38 = plVar17;
        }
      }
      break;
    }
  }
  goto LAB_01865996;
LAB_0186634a:
  iVar12 = iVar12 + 5;
  iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
  if ((((iVar12 == -1) || (fVar2 = *(float *)(lVar16 + (longlong)iVar12 * 4), fVar2 <= fVar1)) ||
      (fVar2 <= DAT_02421228)) ||
     (uVar15 = (ulonglong)
               (byte)((char)(iVar12 + 0xdU) + ((byte)((iVar12 + 0xdU & 0xff) / 3) & 0xfc) * -3),
     fVar2 <= *(float *)(lVar16 + uVar15 * 4) * DAT_0239011c)) goto LAB_018663fa;
  iVar11 = *(int *)(puVar13 + 3);
  FUN_00c8e340(uVar15,1);
  iVar9 = (iVar12 - iVar9) + 0xc;
  iVar9 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
  goto LAB_0186651e;
  while (lVar16 = lVar16 + 1, (int)uVar14 >> 2 != (int)lVar16) {
LAB_01865860:
    if (*(int *)(plVar19[2] + lVar16 * 4) == 2) {
      if (DAT_027d6a38 != (longlong *)0x0) {
        uVar21 = FUN_00d50b00();
      }
      cVar4 = (char)uVar15;
      if (local_38 == plVar3) {
        uVar14 = (uint)uVar15 & 0xff;
        uVar8 = 1;
        if (plVar3 == (longlong *)0x0) {
          uVar8 = uVar14;
        }
        if ((cVar4 == '\0') || (uVar8 = uVar14, plVar3 == (longlong *)0x0)) {
          uVar15 = (ulonglong)uVar8;
        }
        else {
          uVar21 = FUN_00d50b20();
        }
      }
      else {
        uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        if ((cVar4 == '\0') || (local_38 == (longlong *)0x0)) {
          local_38 = plVar3;
        }
        else {
          uVar21 = FUN_00d50b20();
          local_38 = plVar3;
        }
      }
      break;
    }
  }
LAB_018658d6:
  plVar17 = DAT_027d6a40;
  uVar8 = *(uint *)(plVar19 + 3);
  uVar14 = uVar8 + 3;
  if (-1 < (int)uVar8) {
    uVar14 = uVar8;
  }
  if ((uVar8 & 0xfffffffc) == 8) {
    lVar16 = 0;
    do {
      if (*(int *)(plVar19[2] + lVar16 * 4) == 0) {
        lVar16 = 0;
        goto LAB_01865920;
      }
      lVar16 = lVar16 + 1;
    } while ((int)uVar14 >> 2 != (int)lVar16);
  }
LAB_01865996:
  local_1a8 = *unaff_RDI;
  local_1a0 = '\0';
  FUN_018d88f0(uVar21,0);
  plVar17 = local_38;
  local_70 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 == (longlong *)0x0) && (plVar17 == (longlong *)0x0)) {
    plVar17 = (longlong *)0x0;
    goto LAB_018665a2;
  }
  if (plVar17 == (longlong *)0x0) {
    FUN_018d8750();
    plVar17 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
      uVar8 = (uint)uVar15;
    }
    else {
      uVar8 = (uint)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
      if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar15 = (ulonglong)uVar8;
  }
  local_198 = *unaff_RDI;
  local_190 = '\0';
  local_180 = '\0';
  local_188 = local_198;
  local_38 = plVar17;
  FUN_018da170();
  local_98 = local_b0;
  local_90 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a8 = '\0';
  }
  local_90 = '\x01';
  FUN_018ded80();
  plVar17 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  local_88 = plVar17;
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  plVar17 = DAT_02781708;
  if (DAT_02781708 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_178 = plVar17;
  local_170 = '\x01';
  cVar4 = (**(code **)(*local_38 + 0x50))();
  lVar16 = DAT_02781898;
  bVar20 = true;
  if (cVar4 == '\0') {
    if (DAT_02781898 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar16;
    local_160 = '\x01';
    cVar4 = (**(code **)(*local_38 + 0x50))();
    lVar16 = DAT_02781890;
    bVar20 = true;
    if (cVar4 == '\0') {
      if (DAT_02781890 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar16;
      local_150 = '\x01';
      cVar4 = (**(code **)(*local_38 + 0x50))();
      plVar17 = DAT_027d6a38;
      bVar20 = true;
      if (cVar4 == '\0') {
        if (DAT_027d6a38 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_148 = plVar17;
        local_140 = '\x01';
        cVar4 = (**(code **)(*local_38 + 0x50))();
        plVar17 = DAT_027d6a40;
        bVar20 = true;
        if (cVar4 == '\0') {
          if (DAT_027d6a40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_138 = plVar17;
          local_130 = '\x01';
          cVar4 = (**(code **)(*local_38 + 0x50))();
          plVar17 = DAT_027df900;
          bVar20 = true;
          if (cVar4 == '\0') {
            if (DAT_027df900 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_128 = plVar17;
            local_120 = '\x01';
            cVar4 = (**(code **)(*local_38 + 0x50))();
            bVar20 = true;
            if (cVar4 == '\0') {
              bVar20 = *(int *)((longlong)local_88 + 0xc) != 0;
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar17 = DAT_02781708;
  if (bVar20) {
    local_40 = plVar19;
    local_48 = uVar15;
    if (DAT_02781708 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_58 = plVar17;
    local_50 = '\0';
    bVar5 = FUN_00d23d70();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar17 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar17 = DAT_027d6a38;
    if (DAT_027d6a38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_118 = plVar17;
    local_110 = '\x01';
    cVar4 = (**(code **)(*local_38 + 0x50))();
    plVar3 = DAT_027d6a40;
    uVar15 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
    if (cVar4 == '\0') {
      if (DAT_027d6a40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_108 = plVar3;
      local_100 = '\x01';
      uVar8 = (**(code **)(*local_38 + 0x50))();
      uVar15 = (ulonglong)uVar8;
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar17 = DAT_02781708;
    iVar9 = (int)plVar19[3];
    iVar11 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    if (3 < iVar9) {
      lVar16 = 0;
      do {
        if (*(int *)(plVar19[2] + lVar16 * 4) == 6) {
          local_74 = 0;
          goto joined_r0x01865f32;
        }
        lVar16 = lVar16 + 1;
      } while (iVar11 >> 2 != (int)lVar16);
    }
    local_74 = (undefined4)CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 | bVar5);
joined_r0x01865f32:
    if (DAT_02781708 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_f8 = plVar17;
    local_f0 = '\x01';
    cVar4 = (**(code **)(*local_38 + 0x50))();
    lVar16 = DAT_02781898;
    cVar6 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_02781898 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar16;
      local_e0 = '\x01';
      cVar4 = (**(code **)(*local_38 + 0x50))();
      lVar16 = DAT_02781890;
      cVar6 = '\x01';
      if (cVar4 == '\0') {
        if (DAT_02781890 != 0) {
          FUN_00d50b00();
        }
        local_d8 = lVar16;
        local_d0 = '\x01';
        cVar4 = (**(code **)(*local_38 + 0x50))();
        plVar19 = DAT_027816f8;
        cVar6 = '\x01';
        if (cVar4 == '\0') {
          if (DAT_027816f8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_58 = plVar19;
          local_50 = '\0';
          local_80 = plVar19;
          cVar4 = FUN_00d23d70();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar19 = DAT_027df950;
          cVar6 = '\x01';
          if (cVar4 == '\0') {
            if (DAT_027df950 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_58 = plVar19;
            local_50 = '\0';
            cVar6 = FUN_00d23d70();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if (local_80 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    local_59 = cVar6;
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar19 = DAT_027df900;
    if (DAT_027df900 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_c8 = plVar19;
    local_c0 = '\x01';
    uVar7 = (**(code **)(*local_38 + 0x50))();
    uVar21 = local_b8;
    local_80 = (longlong *)CONCAT71(local_80._1_7_,uVar7);
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar9 = FUN_01715480();
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_1c8 = *local_a0;
    local_1c0 = 0;
    FUN_0185df90(1,uVar21,&local_1c8);
    uVar21 = local_74;
    local_68 = local_58;
    if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    iVar11 = iVar9 + 4 >> 0x1f;
    iVar10 = (((uint)((iVar9 + 4) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar9 + 4;
    iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
    iVar11 = iVar9 + 3 >> 0x1f;
    iVar11 = (((uint)((iVar9 + 3) / 6 + iVar11) >> 1) - iVar11) * -0xc + iVar9 + 3;
    iVar11 = (iVar11 >> 0x1f & 0xcU) + iVar11;
    if ((char)uVar21 != '\0' || (char)local_80 != '\0') {
      iVar12 = iVar9 + 7 >> 0x1f;
      iVar12 = (((uint)((iVar9 + 7) / 6 + iVar12) >> 1) - iVar12) * -0xc + iVar9 + 7;
      iVar12 = (iVar12 >> 0x1f & 0xcU) + iVar12;
      lVar16 = local_68[2];
      fVar1 = *(float *)(lVar16 + (longlong)iVar12 * 4);
      if ((fVar1 <= DAT_02421228) ||
         (bVar5 = (char)iVar12 + 0xb,
         fVar1 <= *(float *)(lVar16 + (ulonglong)(byte)(bVar5 + (bVar5 / 3 & 0xfc) * -3) * 4) *
                  DAT_0239011c)) {
        uVar8 = *(uint *)(local_40 + 3);
        uVar14 = uVar8 + 3;
        if (-1 < (int)uVar8) {
          uVar14 = uVar8;
        }
        if ((uVar8 & 0xfffffffc) == 8) {
          lVar18 = 0;
          do {
            iVar12 = iVar11;
            if (*(int *)(local_40[2] + lVar18 * 4) == 3) goto LAB_0186634a;
            lVar18 = lVar18 + 1;
          } while ((int)uVar14 >> 2 != (int)lVar18);
          lVar18 = 0;
          do {
            iVar12 = iVar10;
            if (*(int *)(local_40[2] + lVar18 * 4) == 4) goto LAB_0186634a;
            lVar18 = lVar18 + 1;
          } while ((int)uVar14 >> 2 != (int)lVar18);
        }
      }
      else {
        local_a0 = (undefined8 *)(longlong)*(int *)(puVar13 + 3);
        FUN_00c8e340(local_a0,1);
        *(undefined4 *)(puVar13[2] + (longlong)local_a0) = 7;
      }
    }
LAB_018663fa:
    if (((char)local_80 != '\0' || local_59 != '\0') && ((char)local_b4 == '\0')) {
      iVar12 = iVar9 + 5 >> 0x1f;
      iVar9 = iVar9 + (((uint)((iVar9 + 5) / 6 + iVar12) >> 1) - iVar12) * -0xc + 5;
      iVar9 = (iVar9 >> 0x1f & 0xcU) + iVar9;
      lVar16 = local_68[2];
      fVar1 = *(float *)(lVar16 + (longlong)iVar10 * 4);
      fVar2 = *(float *)(lVar16 + (longlong)iVar11 * 4);
      if ((fVar1 <= DAT_02421228) ||
         ((fVar1 <= DAT_02394298 * fVar2 ||
          (fVar1 <= *(float *)(lVar16 + (longlong)iVar9 * 4) * DAT_02394298)))) {
        if ((fVar2 <= DAT_02421228) ||
           ((fVar2 <= fVar1 * DAT_02394298 ||
            (fVar2 <= *(float *)(lVar16 + (longlong)iVar9 * 4) * DAT_02394298)))) goto LAB_01866529;
        iVar11 = *(int *)(puVar13 + 3);
        iVar9 = 3;
        FUN_00c8e340(lVar16,1);
      }
      else {
        iVar9 = (int)local_40[3];
        iVar11 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar11 = iVar9;
        }
        if (3 < iVar9) {
          lVar16 = 0;
          do {
            if (*(int *)(local_40[2] + lVar16 * 4) == 6) goto LAB_01866529;
            lVar16 = lVar16 + 1;
          } while (iVar11 >> 2 != (int)lVar16);
        }
        iVar11 = *(int *)(puVar13 + 3);
        iVar9 = 4;
        FUN_00c8e340(fVar2,1);
      }
LAB_0186651e:
      *(int *)(puVar13[2] + (longlong)iVar11) = iVar9;
    }
LAB_01866529:
    plVar19 = local_40;
    uVar15 = local_48;
    if (3 < *(int *)(puVar13 + 3)) {
      lVar16 = 0;
      do {
        FUN_0171a310();
        lVar16 = lVar16 + 1;
        iVar9 = *(int *)(puVar13 + 3);
        iVar11 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar11 = iVar9;
        }
      } while (lVar16 < iVar11 >> 2);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar17 = local_38;
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar17 = local_38;
  }
  local_38 = plVar17;
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_018665a2:
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar15 != '\0') && (plVar17 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


