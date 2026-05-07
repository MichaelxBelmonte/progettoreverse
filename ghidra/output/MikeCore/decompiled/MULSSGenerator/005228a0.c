// Function: FUN_005228a0
// Address: 005228a0
// Size: 3465 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005228a0(uint param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong **pplVar8;
  longlong lVar9;
  void *pvVar10;
  code *pcVar11;
  longlong lVar12;
  pthread_key_t pVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong *unaff_RDI;
  ulonglong uVar20;
  void *pvVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_00;
  float fVar23;
  longlong *local_1a8;
  char local_1a0 [8];
  longlong local_198;
  undefined8 local_190;
  int local_188;
  uint local_180;
  undefined4 local_17c;
  undefined8 local_178;
  float local_16c;
  code *local_168;
  char local_160 [8];
  longlong local_158;
  char local_150;
  longlong local_38;
  
  pvVar21 = (void *)(ulonglong)param_1;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((unaff_RDI[0x1d] == 0) && (unaff_RDI[0x4f] == 0)) goto LAB_00523487;
  if ((unaff_RDI[0x61] == 0) || ((char)unaff_RDI[0x6b] == '\0')) {
    param_3 = FUN_00b33590();
    uVar22 = FUN_00b33520();
    pvVar17 = (void *)((longlong)&segment_command_00000020.vmsize + 4);
    pvVar10 = pvVar21;
    FUN_00ae9b20(pvVar21,0x44,param_3,uVar22);
    lVar9 = unaff_RDI[0x61];
  }
  else {
    uVar6 = FUN_00b33590();
    pvVar10 = (void *)(ulonglong)uVar6;
    pvVar17 = pvVar21;
    FUN_00ae9740();
    lVar9 = unaff_RDI[0x61];
  }
  if (lVar9 == 0) {
    cVar3 = FUN_00e316d0();
    if (cVar3 == '\0') goto LAB_00523487;
    *(undefined1 *)((longlong)unaff_RDI + 0x2e4) = 0;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
  lVar9 = local_158;
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
    FUN_00cbc280();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    _pthread_setspecific((pthread_key_t)pvVar10,pvVar17);
  }
  uVar7 = FUN_00b33120();
  uVar6 = FUN_00b33130();
  if ((int)uVar6 < (int)uVar7) {
    uVar6 = uVar7;
  }
  uVar15 = 0x24;
  if ((int)uVar6 < 0x24) {
    uVar15 = uVar6;
  }
  local_180 = uVar7;
  FUN_00516d30(extraout_XMM0_Da,uVar15);
  _memcpy(pvVar10,section_00000108.segname + 8,param_3);
  FUN_00b31a00();
  plVar1 = local_1a8;
  pcVar14 = (code *)CONCAT71((int7)((ulonglong)pvVar10 >> 8),local_1a0[0]);
  pcVar18 = local_160;
  if (local_1a0[0] != '\0') {
    pcVar18 = local_1a0;
  }
  local_160[0] = local_1a0[0];
  *pcVar18 = '\0';
  if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00bc4910();
  *(undefined1 *)(unaff_RDI + 0x49) = uVar4;
  lVar9 = FUN_00e7d6f0();
  unaff_RDI[0x48] = lVar9;
  *(undefined1 *)((longlong)unaff_RDI + 0x249) = 1;
  uVar22 = FUN_00523880();
  if (unaff_RDI[0x61] == 0) {
    FUN_011ee3f0(uVar22,pvVar21);
    cVar3 = (**(code **)(*unaff_RDI + 0x420))();
    if (cVar3 != '\0') {
      FUN_013fd5b0();
      FUN_013fe5f0();
      if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_00bc4910();
  if (cVar3 == '\0') {
    FUN_00521f90(extraout_XMM0_Da_00,pvVar21);
  }
  else {
    FUN_00520990(extraout_XMM0_Da_00,pvVar21);
  }
  uVar6 = (uint)pcVar14;
  if (unaff_RDI[0x61] != 0) goto LAB_00522b82;
  lVar9 = unaff_RDI[0x22];
  local_178 = 0;
  pvVar10 = _pthread_getspecific(uVar6);
  if (pvVar10 != (void *)0x0) {
    lVar9 = unaff_RDI[0x22];
    local_178 = 0;
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
    }
  }
  if ((*(float *)(lVar9 + 0x54) != 0.0) || (NAN(*(float *)(lVar9 + 0x54)))) {
LAB_00522c7b:
    FUN_0051b4f0();
    uVar6 = (uint)pcVar14;
    if (local_1a0[0] == '\0') {
      if (local_1a8 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00522cdc;
      }
    }
    else if (local_1a8 != (longlong *)0x0) {
LAB_00522cdc:
      pvVar10 = _pthread_getspecific((pthread_key_t)pcVar14);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar8 = &local_1a8;
      FUN_012e78c0();
      plVar2 = local_1a8;
      if ((DAT_0270c820 == '\0') && (iVar16 = ___cxa_guard_acquire(), iVar16 != 0)) {
        _DAT_027e77e8 = FUN_0015ef90();
        _DAT_027e77d0 = "MULSSGenerator";
        _DAT_027e77d8 = 0x70;
        pcVar14 = FUN_0015ef30;
        _DAT_027e77e0 = FUN_0015ef30;
        _DAT_027e77f0 = 0;
        uRam00000000027e77f8 = 0;
        _DAT_027e7800 = 0;
        uRam00000000027e7808 = 0;
        _DAT_027e7810 = 0;
        uRam00000000027e7818 = 0;
        _DAT_027e7820 = 0;
        uRam00000000027e7828 = 0;
        _DAT_027e7830 = 0;
        uRam00000000027e7838 = 0;
        _DAT_027e7840 = 0;
        uRam00000000027e7848 = 0;
        _DAT_027e7850 = 0;
        uRam00000000027e7858 = 0;
        _DAT_027e7860 = 0;
        uRam00000000027e7868 = 0;
        _DAT_027e7870 = 0;
        uRam00000000027e7878 = 0;
        _DAT_027e7880 = 0;
        uRam00000000027e7888 = 0;
        _DAT_027e7890 = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (longlong *)0x0) {
        pplVar8 = (longlong **)&DAT_02802688;
        pcVar11 = DAT_02802688;
        if (DAT_02802688 != (code *)0x0) goto LAB_00522d7b;
LAB_00522d9d:
        local_178 = 0;
        pcVar11 = (code *)0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
        pcVar11 = (code *)*pplVar8;
        if ((code *)*pplVar8 == (code *)0x0) goto LAB_00522d9d;
LAB_00522d7b:
        if (*(char *)(pplVar8 + 1) == '\0') {
          pplVar8 = (longlong **)FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
        }
        local_178 = CONCAT71((int7)((ulonglong)pplVar8 >> 8),1);
      }
      if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (pthread_key_t)pcVar14;
      if (pcVar11 == (code *)0x0) {
        local_16c = 0.0;
        local_17c = 0;
      }
      else {
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        local_17c = *(undefined4 *)(pcVar14 + 0x44);
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        local_16c = *(float *)(pcVar14 + 0x40);
        lVar9 = unaff_RDI[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = unaff_RDI[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = (code *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar9 + 0x54));
        lVar9 = unaff_RDI[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = unaff_RDI[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = (code *)CONCAT44(local_168._4_4_,local_168._0_4_ * *(float *)(lVar9 + 0x58));
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(float *)(pcVar14 + 0x40) = local_168._0_4_;
        lVar9 = unaff_RDI[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = unaff_RDI[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = (code *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar9 + 0x5c));
        lVar9 = unaff_RDI[0x22];
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          lVar9 = unaff_RDI[0x22];
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
          }
        }
        local_168 = (code *)CONCAT44(local_168._4_4_,local_168._0_4_ * *(float *)(lVar9 + 0x60));
        pvVar10 = _pthread_getspecific(pVar13);
        pcVar14 = pcVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar14 = *(code **)(pcVar11 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        *(float *)(pcVar14 + 0x44) = local_168._0_4_;
      }
      uVar6 = (uint)pcVar14;
      FUN_00d50b20();
      goto LAB_0052307e;
    }
LAB_00522b82:
    local_17c = 0;
    local_178 = 0;
    local_16c = 0.0;
    pcVar11 = (code *)0x0;
  }
  else {
    lVar9 = unaff_RDI[0x22];
    local_178 = 0;
    pvVar10 = _pthread_getspecific((pthread_key_t)pcVar14);
    if (pvVar10 != (void *)0x0) {
      lVar9 = unaff_RDI[0x22];
      local_178 = 0;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    uVar6 = (uint)pcVar14;
    if ((*(float *)(lVar9 + 0x5c) != 0.0) || (NAN(*(float *)(lVar9 + 0x5c)))) goto LAB_00522c7b;
    local_17c = 0;
    local_178 = 0;
    local_16c = 0.0;
    pcVar11 = (code *)0x0;
  }
LAB_0052307e:
  local_168 = pcVar11;
  lVar9 = FUN_00bc4920();
  unaff_RDI[0x4e] = lVar9;
  if (unaff_RDI[0x4f] != 0) {
    FUN_012dda10();
    pvVar10 = pvVar21;
    (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x400))(pvVar21,&local_158);
    cVar3 = (**(code **)(*(longlong *)unaff_RDI[0x4f] + 0x5e8))();
    uVar6 = (uint)pvVar10;
    if (cVar3 != '\0') {
      fVar23 = *(float *)(unaff_RDI + 0x52);
      if ((((fVar23 != DAT_02390124) || (NAN(fVar23) || NAN(DAT_02390124))) && (0 < (int)param_1))
         && (0 < (int)local_180)) {
        uVar20 = (ulonglong)local_180;
        if ((fVar23 != 0.0) || (NAN(fVar23))) {
          uVar19 = 0;
          do {
            if ((&local_158)[uVar19] != 0) {
              (**(code **)(DAT_02786500 + 0x20))(fVar23);
            }
            uVar6 = (uint)pvVar10;
            uVar19 = uVar19 + 1;
          } while (uVar20 != uVar19);
        }
        else {
          uVar19 = 0;
          do {
            if ((&local_158)[uVar19] != 0) {
              (**(code **)(DAT_02786500 + 0x40))();
            }
            uVar6 = (uint)pvVar10;
            uVar19 = uVar19 + 1;
          } while (uVar20 != uVar19);
        }
      }
    }
  }
  pcVar14 = local_168;
  if (unaff_RDI[0x1d] != 0) {
    FUN_012dda10();
    uVar6 = param_1;
    (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x400))(pvVar21,&local_158);
  }
  if (pcVar14 != (code *)0x0) {
    pvVar10 = _pthread_getspecific(uVar6);
    pcVar11 = pcVar14;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pcVar11 = *(code **)(pcVar14 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
    }
    *(float *)(pcVar11 + 0x40) = local_16c;
    pvVar10 = _pthread_getspecific(uVar6);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pcVar14 = *(code **)(pcVar14 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
    }
    *(undefined4 *)(pcVar14 + 0x44) = local_17c;
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x5a8))();
  if (cVar3 == '\0') {
    lVar9 = unaff_RDI[0x22];
    pvVar10 = _pthread_getspecific(uVar6);
    if (pvVar10 != (void *)0x0) {
      lVar9 = unaff_RDI[0x22];
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
    }
    fVar23 = *(float *)(lVar9 + 0x50);
    if ((((fVar23 != DAT_02390124) || (NAN(fVar23) || NAN(DAT_02390124))) && (0 < (int)param_1)) &&
       (0 < (int)local_180)) {
      uVar20 = (ulonglong)local_180;
      if ((fVar23 != 0.0) || (NAN(fVar23))) {
        uVar19 = 0;
        local_16c = fVar23;
        do {
          if ((&local_158)[uVar19] != 0) {
            (**(code **)(DAT_02786500 + 0x20))(fVar23);
            fVar23 = local_16c;
          }
          uVar19 = uVar19 + 1;
        } while (uVar20 != uVar19);
      }
      else {
        uVar19 = 0;
        do {
          if ((&local_158)[uVar19] != 0) {
            (**(code **)(DAT_02786500 + 0x40))();
          }
          uVar19 = uVar19 + 1;
        } while (uVar20 != uVar19);
      }
    }
  }
  pcVar14 = local_168;
  bVar5 = FUN_00bc4910();
  pVar13 = (pthread_key_t)bVar5;
  pvVar10 = pvVar21;
  FUN_00523d70(bVar5,pvVar21,local_180);
  FUN_005224d0();
  if (unaff_RDI[0x5d] != 0) {
    local_1a0[0] = '\0';
    local_1a8 = (longlong *)0x0;
    local_190 = 0xffffffff;
    local_188 = 0;
    local_198 = unaff_RDI[0x5d];
    while( true ) {
      lVar9 = (longlong)(int)local_190;
      uVar6 = (int)local_190 + 1;
      pvVar10 = (void *)(ulonglong)uVar6;
      local_190 = CONCAT44(local_190._4_4_,uVar6);
      if (*(int *)(local_198 + 0xc) <= (int)uVar6) break;
      local_1a8 = *(longlong **)(*(longlong *)(local_198 + 0x10) + 8 + lVar9 * 8);
      (**(code **)(*local_1a8 + 0x400))(pvVar21,param_2);
      if (local_190._4_4_ != 0) {
        if (local_190 < 0) {
          iVar16 = -local_190._4_4_;
        }
        else {
          local_190 = CONCAT44(local_190._4_4_,(int)local_190 - local_190._4_4_);
          FUN_00d23690();
          local_188 = local_188 + local_190._4_4_;
          iVar16 = 0;
        }
        local_190 = CONCAT44(iVar16,(int)local_190);
      }
    }
    lVar9 = local_198;
    FUN_00540a20();
    pVar13 = (pthread_key_t)lVar9;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
  plVar2 = local_1a8;
  if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    _pthread_setspecific(pVar13,pvVar10);
    (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
    FUN_00cbc2a0();
    if ((local_1a0[0] != '\0') && (local_1a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x61] == 0) {
    FUN_00e31730();
  }
  if (((char)local_178 != '\0') && (pcVar14 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00523487:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


