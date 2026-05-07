// Function: FUN_01b07460
// Address: 01b07460
// Size: 4255 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b07e07) */
/* WARNING: Removing unreachable block (ram,0x01b07e10) */
/* WARNING: Removing unreachable block (ram,0x01b07c30) */
/* WARNING: Removing unreachable block (ram,0x01b07c39) */
/* WARNING: Removing unreachable block (ram,0x01b07577) */
/* WARNING: Removing unreachable block (ram,0x01b07580) */
/* WARNING: Removing unreachable block (ram,0x01b07a1b) */
/* WARNING: Removing unreachable block (ram,0x01b07a20) */
/* WARNING: Removing unreachable block (ram,0x01b07d75) */
/* WARNING: Removing unreachable block (ram,0x01b07d7e) */
/* WARNING: Removing unreachable block (ram,0x01b0818e) */
/* WARNING: Removing unreachable block (ram,0x01b08193) */

void FUN_01b07460(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  int unaff_ESI;
  longlong unaff_RDI;
  char cVar12;
  longlong lVar13;
  uint uVar15;
  undefined8 unaff_R15;
  undefined7 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar18;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  float local_d0;
  float local_cc;
  longlong *local_c8;
  char local_c0;
  undefined8 local_b8;
  float local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_80;
  char local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  undefined8 uVar14;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    bVar2 = false;
    plVar11 = (longlong *)0x0;
    cVar12 = '\0';
    local_58 = (longlong *)0x0;
    local_68 = '\0';
    local_50 = (longlong *)0x0;
    local_60 = '\0';
    local_48 = (longlong *)0x0;
    bVar4 = false;
    goto LAB_01b084dd;
  }
  FUN_01a1d6e0();
  (**(code **)(*local_a0 + 0xe70))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    plVar11 = (longlong *)0x0;
    local_b8 = 0;
  }
  else {
    uVar16 = (undefined7)((ulonglong)unaff_R15 >> 8);
    plVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      local_b8 = CONCAT71(uVar16,1);
    }
    else {
      local_38 = '\0';
      local_b8 = CONCAT71(uVar16,1);
      bVar3 = false;
    }
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = plVar11;
  if (unaff_ESI == -1000000) {
LAB_01b07b42:
    bVar4 = false;
    local_48 = (longlong *)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_0174a9c0();
    uVar15 = *(uint *)((longlong)plVar11 + 0xc);
    if ((int)uVar15 < 1) goto LAB_01b07b42;
    lVar13 = (ulonglong)uVar15 + 1;
    local_48 = (longlong *)0x0;
    bVar4 = false;
    uVar17 = extraout_XMM0_Da;
    do {
      uVar15 = uVar15 - 1;
      plVar11 = (longlong *)(ulonglong)uVar15;
      lVar1 = *(longlong *)(local_a8[2] + (longlong)plVar11 * 8);
      if (lVar1 != 0) {
        uVar17 = FUN_00d50b00();
      }
      if (local_48 != (longlong *)0x0) {
        if (bVar4) {
          bVar4 = false;
          uVar17 = FUN_00d50b20();
        }
        else {
          bVar4 = false;
        }
      }
      if (*(longlong *)(unaff_RDI + 0x2a8) == 0) {
LAB_01b07780:
        local_48 = (longlong *)0x0;
LAB_01b0778a:
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (pthread_key_t)plVar11;
        if (local_40 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(pVar9);
          if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
            plVar11 = local_40;
          }
          pVar9 = (pthread_key_t)plVar11;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*plVar10 + 0x3a8))();
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
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_198 = '\0';
        local_1a0 = lVar1;
        uVar17 = FUN_007a2fc0(uVar17,&local_1a0);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) goto LAB_01b07780;
        local_188 = '\0';
        local_190 = lVar1;
        uVar17 = FUN_007a2fc0(uVar17,&local_190);
        local_48 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          plVar11 = local_40;
        }
        else if (local_38 == '\0') {
          plVar11 = local_40;
          uVar17 = FUN_00d50b00();
          bVar4 = true;
        }
        else {
          local_38 = '\0';
          bVar4 = true;
          plVar11 = local_40;
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        lVar8 = DAT_027e3b98;
        if (local_48 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          goto LAB_01b0778a;
        }
        if (DAT_027e3b98 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_180 = lVar8;
        local_178 = '\x01';
        uVar17 = FUN_000175c0(uVar17,&local_180);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        lVar8 = DAT_027e3b98;
        pVar9 = (pthread_key_t)plVar11;
        if (local_40 == (longlong *)0x0) goto LAB_01b0778a;
        if (DAT_027e3b98 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_170 = lVar8;
        local_168 = '\x01';
        FUN_000175c0(uVar17,&local_170);
        FUN_00d45870();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_0174a9c0();
      uVar17 = extraout_XMM0_Da_00;
      if (iVar6 != iVar5) {
        uVar17 = FUN_00d23620();
      }
      if (lVar1 != 0) {
        uVar17 = FUN_00d50b20();
      }
      lVar13 = lVar13 + -1;
    } while (1 < lVar13);
  }
  FUN_01a1d6e0();
  plVar11 = local_a8;
  iVar5 = (**(code **)(*local_40 + 0xd20))();
  uVar14 = local_b8;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = (char)uVar14;
  if (iVar5 == 0) {
    if (plVar11 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      local_58 = plVar11;
      if (!bVar3) {
        local_80 = (longlong *)0x0;
        bVar2 = false;
        FUN_00d50b00();
        local_60 = '\0';
        local_50 = (longlong *)0x0;
        goto LAB_01b08497;
      }
    }
    local_50 = (longlong *)0x0;
    local_60 = '\0';
    local_68 = '\0';
    bVar2 = false;
    local_80 = (longlong *)0x0;
  }
  else {
    FUN_01a1d6e0();
    uVar17 = (**(code **)(*local_a0 + 0xe30))();
    local_80 = local_40;
    plVar10 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_80 = (longlong *)0x0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      uVar17 = FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
    pVar9 = (pthread_key_t)plVar10;
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if ((local_80 == (longlong *)0x0) || (*(int *)((longlong)local_80 + 0xc) == 0)) {
      if (plVar11 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
LAB_01b07cd8:
        local_60 = '\0';
      }
      else {
        if (bVar3) {
          local_50 = plVar11;
          goto LAB_01b07cd8;
        }
        FUN_00d50b00();
        local_50 = plVar11;
        local_60 = local_68;
      }
      local_68 = '\0';
      local_58 = (longlong *)0x0;
    }
    else {
      local_160 = local_80;
      local_158 = '\0';
      uVar17 = FUN_00550890(uVar17,&local_160);
      local_58 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_68 = '\0';
      }
      else if (local_38 == '\0') {
        uVar17 = FUN_00d50b00();
        local_68 = '\x01';
      }
      else {
        local_38 = '\0';
        local_68 = '\x01';
      }
      if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      local_150 = local_40;
      local_148 = '\0';
      FUN_00550890(uVar17,&local_150);
      local_50 = local_40;
      plVar10 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        local_60 = '\0';
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        local_60 = '\x01';
      }
      else {
        local_38 = '\0';
        local_60 = '\x01';
      }
      pVar9 = (pthread_key_t)plVar10;
      if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar17 = FUN_01a1d6e0();
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar17 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    local_140 = local_50;
    local_138 = '\0';
    uVar17 = FUN_01a296f0(uVar17,0);
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x2a0) == 0) {
      local_ac = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_ac = FUN_017702f0();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_017702f0();
      uVar17 = extraout_XMM0_Da_01;
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      local_ac = local_ac - iVar5;
    }
    if (local_50 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else if ((*(int *)((longlong)local_50 + 0xc) != 0) && (0 < *(int *)((longlong)local_50 + 0xc)))
    {
      lVar13 = 0;
      do {
        lVar1 = *(longlong *)(local_50[2] + lVar13 * 8);
        if (lVar1 != 0) {
          uVar17 = FUN_00d50b00();
        }
        if (local_48 != (longlong *)0x0) {
          if (bVar4) {
            uVar17 = FUN_00d50b20();
          }
          bVar4 = false;
        }
        if (*(longlong *)(unaff_RDI + 0x2a8) == 0) {
LAB_01b08370:
          local_48 = (longlong *)0x0;
        }
        else {
          local_128 = '\0';
          local_130 = lVar1;
          uVar17 = FUN_007a2fc0(uVar17,&local_130);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            uVar17 = FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) goto LAB_01b08370;
          local_118 = '\0';
          local_120 = lVar1;
          uVar17 = FUN_007a2fc0(uVar17,&local_120);
          local_48 = local_40;
          plVar11 = local_40;
          if (local_40 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            uVar17 = FUN_00d50b00();
            bVar4 = true;
          }
          else {
            local_38 = '\0';
            bVar4 = true;
          }
          if ((local_118 != '\0') && (local_120 != 0)) {
            uVar17 = FUN_00d50b20();
          }
          lVar8 = DAT_027e3b98;
          if (local_48 == (longlong *)0x0) goto LAB_01b08370;
          if (DAT_027e3b98 != 0) {
            uVar17 = FUN_00d50b00();
          }
          local_110 = lVar8;
          local_108 = '\x01';
          FUN_000175c0(uVar17,&local_110);
          uVar17 = FUN_00d45870();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            uVar17 = FUN_00d50b20();
          }
          lVar8 = DAT_027e3bb0;
          if (DAT_027e3bb0 != 0) {
            uVar17 = FUN_00d50b00();
          }
          local_100 = lVar8;
          local_f8 = '\x01';
          FUN_000175c0(uVar17,&local_100);
          fVar18 = (float)FUN_00d459e0();
          local_d0 = fVar18;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            fVar18 = (float)FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            fVar18 = (float)FUN_00d50b20();
          }
          lVar8 = DAT_02708700;
          if (DAT_02708700 != 0) {
            fVar18 = (float)FUN_00d50b00();
          }
          local_f0 = lVar8;
          local_e8 = '\x01';
          FUN_000175c0(fVar18,&local_f0);
          local_b0 = (float)FUN_00d459e0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
          plVar10 = local_40;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = local_40;
            plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          local_b0 = (float)(**(code **)(*plVar10 + 0x3a0))();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
          plVar10 = local_40;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = local_40;
            plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          pVar9 = (pthread_key_t)plVar11;
          local_cc = (float)(**(code **)(*plVar10 + 0x3a0))();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar17 = FUN_0125a580(local_d0 * (local_cc - local_b0) + local_b0);
        }
        if (lVar1 != 0) {
          uVar17 = FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
        uVar14 = local_b8;
        plVar11 = local_a8;
      } while (lVar13 < *(int *)((longlong)local_50 + 0xc));
    }
  }
LAB_01b08497:
  cVar12 = (char)uVar14;
  local_d8 = '\0';
  local_e0 = local_58;
  FUN_012879b0();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x1d8) = 0;
LAB_01b084dd:
  FUN_00d50b20();
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


