// Function: FUN_018ec910
// Address: 018ec910
// Size: 6499 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x018ede38) */
/* WARNING: Removing unreachable block (ram,0x018edd50) */
/* WARNING: Removing unreachable block (ram,0x018edd5c) */
/* WARNING: Removing unreachable block (ram,0x018edd84) */
/* WARNING: Removing unreachable block (ram,0x018edd90) */
/* WARNING: Removing unreachable block (ram,0x018ee28c) */
/* WARNING: Removing unreachable block (ram,0x018ee298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018ec910(pthread_key_t param_1,int param_2,int param_3,longlong *param_4)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 uVar11;
  pthread_key_t pVar12;
  pthread_key_t pVar13;
  longlong **pplVar14;
  longlong lVar15;
  undefined7 uVar18;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar19;
  int iVar20;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  longlong *local_res8;
  longlong *local_178;
  char local_170;
  longlong local_100;
  char local_f8;
  code *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  pthread_key_t local_cc;
  int local_c8;
  longlong *local_b0;
  char local_a8;
  longlong *local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (DAT_028b06a0 == '\x01') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_cc = param_1;
  local_c8 = param_2;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_02572358;
  (*pcVar1)();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_02572358;
  (*pcVar1)();
  local_e8 = plVar7;
  local_40 = plVar5;
  if (unaff_RSI[5] == 0) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_00e8fc40();
    local_38 = (longlong *)0x0;
    local_48 = 0;
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    local_38 = (longlong *)0x0;
    local_48 = 0;
    (*pcVar1)();
    lVar10 = unaff_RSI[5];
    unaff_RSI[5] = (longlong)puVar8;
    if (lVar10 != 0) {
      local_38 = (longlong *)0x0;
      local_48 = 0;
      FUN_00d50b20();
    }
    lVar10 = unaff_RSI[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c4750();
    local_38 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      local_68[0] = '\0';
      local_70 = (longlong *)0x0;
      local_60 = local_38;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar19 = -local_58._4_4_;
          }
          else {
            iVar19 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar19);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar19 = 0;
          }
          local_58 = CONCAT44(iVar19,(int)local_58);
        }
        lVar10 = (longlong)(int)local_58;
        iVar19 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar19);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
        lVar15 = local_60[2];
        local_70 = *(longlong **)(lVar15 + 8 + lVar10 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
        pVar12 = (pthread_key_t)lVar15;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a20();
        pvVar9 = _pthread_getspecific(pVar12);
        plVar5 = local_b0;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar5 = (longlong *)local_b0[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        lVar10 = DAT_027d8ea0;
        if (DAT_027d8ea0 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar5 + 0x1f8))();
        plVar5 = local_80;
        if ((DAT_026fd0c0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        pplVar14 = (longlong **)&DAT_02802688;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar14 = &local_80;
          if (cVar3 == '\0') {
            pplVar14 = (longlong **)&DAT_02802688;
          }
        }
        plVar5 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar14 + 1) = 0;
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d99300();
          lVar10 = DAT_027dfeb8;
          if (DAT_027dfeb8 != 0) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d90eb0();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_80 = local_70;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      plVar5 = local_60;
      FUN_018c80e0();
      param_1 = (pthread_key_t)plVar5;
      FUN_00d50b20();
    }
  }
  plVar5 = DAT_027dfec0;
  if (param_3 == 3) {
    if (DAT_027dfec0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_70 = plVar5;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_90 = (longlong *)*param_4;
  if (local_90 == (longlong *)0x0) {
    lVar10 = unaff_RSI[2];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018c4750();
    local_90 = local_70;
    if (local_70 == (longlong *)0x0) {
      local_48 = 0;
    }
    else if (local_68[0] == '\0') {
      uVar11 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
      local_48 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((char)param_4[1] == '\0') {
    local_48 = 0;
  }
  else {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    uVar11 = FUN_00d50b00();
    local_48 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  }
  if (local_cc != 0) {
    local_f0 = DAT_025683d8;
    puVar8 = (undefined8 *)0x0;
    local_38 = (longlong *)0x0;
    pVar12 = local_cc;
    do {
      if (local_90 != (longlong *)0x0) {
        local_68[0] = '\0';
        local_70 = (longlong *)0x0;
        local_60 = local_90;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar19 = -local_58._4_4_;
            }
            else {
              iVar19 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar19);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar19 = 0;
            }
            local_58 = CONCAT44(iVar19,(int)local_58);
          }
          lVar10 = (longlong)(int)local_58;
          iVar19 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar19);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
          lVar15 = local_60[2];
          local_70 = *(longlong **)(lVar15 + 8 + lVar10 * 8);
          pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
          pVar13 = (pthread_key_t)lVar15;
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar19 = FUN_018939c0();
          if (iVar19 == local_c8) {
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar4 = FUN_01893a00();
            if (pVar4 == pVar12) {
              pvVar9 = _pthread_getspecific(pVar13);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01893a50();
              bVar21 = true;
              if (local_80 == (longlong *)0x0) {
                pvVar9 = _pthread_getspecific(pVar13);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_018939d0();
                bVar21 = local_b0 != (longlong *)0x0;
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (bVar21) {
                local_80 = local_70;
                local_78 = '\0';
                FUN_00d21140();
                if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        FUN_018c80e0();
      }
      if (*(int *)((longlong)plVar6 + 0xc) != 0) break;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_025683c0;
        (*local_f0)();
        FUN_00c92170();
        uVar11 = FUN_00c92160();
        local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        switch(pVar12) {
        case 1:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 2;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 4;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        case 2:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 1;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 4;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        default:
          goto switchD_018ed304_caseD_3;
        case 4:
          iVar19 = *(int *)(puVar8 + 3);
          uVar22 = FUN_00c8e340(&switchD_018ed304::switchdataD_018eec48,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 1;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340(uVar22,1);
          *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 2;
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          break;
        case 5:
          iVar19 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
        }
        *(undefined4 *)(puVar8[2] + (longlong)iVar19) = 3;
      }
switchD_018ed304_caseD_3:
      if (*(int *)(puVar8 + 3) + 3U < 7) break;
      pVar12 = *(pthread_key_t *)puVar8[2];
      FUN_00e7b4e0();
      FUN_00c921e0();
    } while (pVar12 != 0);
    if (((char)local_38 != '\0') && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(int *)((longlong)plVar6 + 0xc) == 0) && (local_90 != (longlong *)0x0)) {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_60 = local_90;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar19 = -local_58._4_4_;
        }
        else {
          iVar19 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar19);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar19 = 0;
        }
        local_58 = CONCAT44(iVar19,(int)local_58);
      }
      lVar10 = (longlong)(int)local_58;
      iVar19 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar19);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
      lVar15 = local_60[2];
      local_70 = *(longlong **)(lVar15 + 8 + lVar10 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
      pVar12 = (pthread_key_t)lVar15;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar19 = FUN_018939c0();
      if (iVar19 == local_c8) {
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a50();
        bVar21 = true;
        if (local_80 == (longlong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018939d0();
          bVar21 = local_b0 != (longlong *)0x0;
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar21) {
          local_80 = local_70;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_018c80e0();
  }
  pcVar1 = DAT_025683d8;
  if (param_3 == 0) {
    local_38 = (longlong *)0x0;
    plVar5 = (longlong *)0x0;
    iVar19 = *(int *)((longlong)local_40 + 0xc);
    plVar7 = local_40;
  }
  else {
    plVar5 = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    local_f0 = (code *)0x0;
    local_88 = (undefined8 *)0x0;
    iVar19 = param_3;
    do {
      if (plVar6 != (longlong *)0x0) {
        local_68[0] = '\0';
        local_70 = (longlong *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        local_60 = plVar6;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar20 = -local_58._4_4_;
            }
            else {
              iVar20 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar20);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar20 = 0;
            }
            local_58 = CONCAT44(iVar20,(int)local_58);
          }
          lVar10 = (longlong)(int)local_58;
          iVar20 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar20);
          if (*(int *)((longlong)local_60 + 0xc) <= iVar20) break;
          plVar7 = *(longlong **)(local_60[2] + 8 + lVar10 * 8);
          local_70 = plVar7;
          pvVar9 = _pthread_getspecific((pthread_key_t)local_60[2]);
          plVar17 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar7 = plVar17, lVar10 != 0)) {
            plVar7 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          iVar20 = FUN_01893a10();
          plVar17 = local_70;
          if (iVar20 == iVar19) {
            uVar18 = (undefined7)((ulonglong)plVar7 >> 8);
            if (local_70 == plVar5) {
              plVar17 = plVar5;
              if (((char)local_38 == '\0') && (local_70 != (longlong *)0x0)) {
                if (local_68[0] != '\0') goto LAB_018ed7de;
                uVar16 = CONCAT71(uVar18,1);
                FUN_00d50b00();
              }
              else {
                uVar16 = (ulonglong)local_38 & 0xffffffff;
              }
            }
            else if (local_68[0] == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              uVar16 = CONCAT71(uVar18,1);
              if (((char)local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (((char)local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_018ed7de:
              local_68[0] = '\0';
              uVar16 = CONCAT71(uVar18,1);
            }
            plVar5 = plVar17;
            local_80 = local_70;
            local_78 = '\0';
            FUN_00d21140();
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_38 = (longlong *)(uVar16 & 0xffffffff);
          }
        }
        FUN_018c80e0();
      }
      if (*(int *)((longlong)local_40 + 0xc) != 0) break;
      if (local_88 == (undefined8 *)0x0) {
        local_88 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_88 = &DAT_025683c0;
        (*pcVar1)();
        FUN_00c92170();
        uVar11 = FUN_00c92160();
        local_f0 = (code *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        if (iVar19 == 3) {
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(undefined4 *)(local_88[2] + (longlong)iVar19) = 2;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 1;
          FUN_00c8e340();
        }
        else if (iVar19 == 2) {
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(undefined4 *)(local_88[2] + (longlong)iVar19) = 3;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 1;
          FUN_00c8e340();
        }
        else {
          if (iVar19 != 1) goto LAB_018ed9b8;
          iVar19 = *(int *)(local_88 + 3);
          FUN_00c8e340(extraout_XMM0_Da,1);
          *(undefined4 *)(local_88[2] + (longlong)iVar19) = 2;
          iVar19 = *(int *)(local_88 + 3);
          uVar22 = 3;
          FUN_00c8e340();
        }
        *(undefined4 *)(local_88[2] + (longlong)iVar19) = uVar22;
      }
LAB_018ed9b8:
      if (*(int *)(local_88 + 3) + 3U < 7) break;
      iVar19 = *(int *)local_88[2];
      FUN_00e7b4e0();
      FUN_00c921e0();
    } while (iVar19 != 0);
    plVar7 = local_40;
    if (((char)local_f0 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    iVar19 = *(int *)((longlong)plVar7 + 0xc);
  }
  plVar17 = plVar5;
  if ((1 < iVar19) && (*local_res8 != 0)) {
    FUN_00d242c0();
    plVar7 = local_40;
    FUN_00d23340();
    plVar17 = local_70;
    pplVar14 = &local_80;
    if (local_68[0] != '\0') {
      pplVar14 = (longlong **)local_68;
    }
    local_80 = (longlong *)CONCAT71(local_80._1_7_,local_68[0]);
    *(char *)pplVar14 = '\0';
    if ((local_68[0] != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar18 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (plVar17 == plVar5) {
      if (((char)local_38 == '\0') && (plVar17 != (longlong *)0x0)) {
        uVar16 = CONCAT71(uVar18,1);
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_80 == '\0') || (plVar17 == (longlong *)0x0)) {
        uVar16 = (ulonglong)local_38 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        uVar16 = (ulonglong)local_38 & 0xffffffff;
      }
    }
    else if ((char)local_80 == '\0') {
      if (plVar17 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar16 = CONCAT71(uVar18,1);
      if (((char)local_38 == '\0') || (plVar5 == (longlong *)0x0)) goto LAB_018edb14;
      FUN_00d50b20();
      plVar5 = plVar17;
    }
    else {
      uVar16 = CONCAT71(uVar18,1);
      if (((char)local_38 == '\0') || (plVar5 == (longlong *)0x0)) {
LAB_018edb14:
        uVar16 = CONCAT71(uVar18,1);
        plVar5 = plVar17;
      }
      else {
        FUN_00d50b20();
        plVar5 = plVar17;
      }
    }
    local_88 = (undefined8 *)uVar16;
    if (*(int *)((longlong)local_e8 + 0xc) != 0) {
      local_88 = (undefined8 *)(uVar16 & 0xffffffff);
      local_68[0] = '\0';
      local_70 = (longlong *)0x0;
      local_60 = local_e8;
      local_58 = 0xffffffff;
      local_50 = 0;
      while( true ) {
        lVar10 = (longlong)(int)local_58;
        iVar19 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar19);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar19) break;
        lVar15 = local_60[2];
        local_70 = *(longlong **)(lVar15 + 8 + lVar10 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
        pVar12 = (pthread_key_t)lVar15;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01893a20();
        if (local_80 == (longlong *)0x0) {
          bVar21 = true;
        }
        else {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01893a20();
          plVar17 = local_e0;
          pvVar9 = _pthread_getspecific(pVar12);
          plVar2 = local_e0;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar17 = plVar2, lVar10 != 0)) {
            plVar17 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar17 + 0x88))();
          plVar17 = (longlong *)*local_res8;
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            plVar17 = (longlong *)*local_res8;
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              plVar17 = (longlong *)plVar17[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar17 + 0x88))();
          bVar21 = local_b0 != local_178;
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar21) {
          FUN_00018280();
          if (plVar7 == (longlong *)0x0) goto LAB_018edfbe;
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          local_60 = plVar7;
          local_58 = 0xffffffff;
          local_50 = 0;
          goto LAB_018ede62;
        }
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar19 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar19 = 0;
          }
          local_58 = CONCAT44(iVar19,(int)local_58);
        }
      }
      FUN_00018280();
    }
LAB_018edfbe:
    local_38 = (longlong *)((ulonglong)local_88 & 0xffffffff);
    plVar17 = plVar5;
  }
  if (plVar17 == (longlong *)0x0) goto LAB_018ee0cc;
LAB_018edfd9:
  bVar21 = false;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  cVar3 = (char)local_38;
  goto joined_r0x018ee2ec;
LAB_018ede62:
  lVar10 = (longlong)(int)local_58;
  iVar19 = (int)local_58 + 1;
  local_58 = CONCAT44(local_58._4_4_,iVar19);
  if (iVar19 < *(int *)((longlong)local_60 + 0xc)) {
    lVar15 = local_60[2];
    local_70 = *(longlong **)(lVar15 + 8 + lVar10 * 8);
    pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
    pVar12 = (pthread_key_t)lVar15;
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_01893a20();
    if (local_80 == (longlong *)0x0) {
      bVar21 = true;
    }
    else {
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893a20();
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_018bf900();
      bVar21 = *(int *)((longlong)local_b0 + 0xc) == 0;
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    plVar17 = local_70;
    if (bVar21) {
      local_88._0_1_ = (char)uVar16;
      if (local_70 == plVar5) {
        if (((char)local_88 != '\0') || (local_70 == (longlong *)0x0)) {
          local_38 = (longlong *)(uVar16 & 0xffffffff);
          plVar17 = plVar5;
          goto LAB_018ee0ba;
        }
        plVar17 = plVar5;
        if (local_68[0] == '\0') {
          local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          FUN_00d50b00();
          goto LAB_018ee0ba;
        }
      }
      else {
        if (local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            uVar11 = FUN_00d50b00();
          }
          local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          if (((char)local_88 != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_018ee0ba;
        }
        if (((char)local_88 != '\0') && (plVar5 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      local_68[0] = '\0';
      local_38 = (longlong *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      goto LAB_018ee0ba;
    }
    if (local_58._4_4_ != 0) {
      if (local_58._4_4_ < 1) {
        iVar19 = -local_58._4_4_;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
        FUN_00d23690();
        local_50 = local_50 + local_58._4_4_;
        iVar19 = 0;
      }
      local_58 = CONCAT44(iVar19,(int)local_58);
    }
    goto LAB_018ede62;
  }
  local_38 = (longlong *)(uVar16 & 0xffffffff);
  plVar17 = plVar5;
LAB_018ee0ba:
  FUN_018c80e0();
  if (plVar17 != (longlong *)0x0) goto LAB_018edfd9;
LAB_018ee0cc:
  FUN_00d23310();
  plVar17 = local_70;
  pplVar14 = &local_80;
  if (local_68[0] != '\0') {
    pplVar14 = (longlong **)local_68;
  }
  local_80 = (longlong *)CONCAT71(local_80._1_7_,local_68[0]);
  *(char *)pplVar14 = '\0';
  if ((local_68[0] != '\0') && (plVar17 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)0x0;
    cVar3 = (char)local_38;
  }
  else {
    cVar3 = '\x01';
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
    }
  }
  if (plVar17 == (longlong *)0x0) {
    bVar21 = true;
    if (*param_4 != 0) {
      lVar10 = unaff_RSI[5];
      if (*(int *)(lVar10 + 0xc) != 0) {
        local_f8 = 0;
        FUN_00d50b00();
        local_f8 = '\x01';
        local_100 = lVar10;
        (**(code **)(*unaff_RSI + 0x3c0))(local_cc,local_c8,param_3,&local_100);
        plVar7 = local_40;
        bVar21 = true;
        if ((local_f8 != '\0') && (bVar21 = true, local_100 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_018ee16e;
      }
      plVar17 = (longlong *)0x0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar7 = local_40;
      goto joined_r0x018ee2ec;
    }
    plVar17 = (longlong *)0x0;
  }
  else {
    bVar21 = false;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x018ee2ec:
  if ((cVar3 == '\0') && (!bVar21)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar17;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  cVar3 = '\0';
LAB_018ee16e:
  if (local_e8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0' && !bVar21) {
    FUN_00d50b20();
  }
  uVar11 = local_48;
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar11 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


