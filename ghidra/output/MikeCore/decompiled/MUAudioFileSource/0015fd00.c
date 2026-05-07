// Function: FUN_0015fd00
// Address: 0015fd00
// Size: 4548 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Removing unreachable block (ram,0x00160816) */
/* WARNING: Removing unreachable block (ram,0x00160822) */
/* WARNING: Removing unreachable block (ram,0x0016010e) */
/* WARNING: Removing unreachable block (ram,0x0016011a) */
/* WARNING: Removing unreachable block (ram,0x0016077e) */
/* WARNING: Removing unreachable block (ram,0x0016078a) */
/* WARNING: Removing unreachable block (ram,0x00160a50) */
/* WARNING: Removing unreachable block (ram,0x00160a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015fd00(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  pthread_key_t pVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong unaff_RDI;
  longlong *plVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined7 uVar19;
  longlong *plVar18;
  longlong **pplVar20;
  bool bVar21;
  bool bVar22;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  undefined8 *local_88;
  char local_80 [8];
  undefined8 *local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  FUN_001616e0();
  puVar1 = local_88;
  if ((local_80[0] == '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  plVar18 = *(longlong **)(unaff_RDI + 0xd0);
  if (plVar18 != (longlong *)0x0) {
    iVar15 = *(int *)((longlong)puVar1 + 0xc);
    if (iVar15 == 0) {
      local_40 = (longlong *)0x0;
      cVar2 = '\0';
      iVar15 = 0;
LAB_001600e0:
      (**(code **)(*plVar18 + 0x6a8))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
      lVar8 = DAT_026e3e60;
      lVar5 = DAT_026e3e58;
      plVar18 = *(longlong **)(unaff_RDI + 0xd0);
      if (iVar15 == 0) {
        if (DAT_026e3e60 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_026e3e58 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x978))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d23310();
      pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar20 = &local_50;
      FUN_0126ef70();
      plVar18 = local_50;
      if ((DAT_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
        _DAT_026e3238 = FUN_00115af0();
        DAT_026e3220 = "MUAudioFileSource";
        _DAT_026e3228 = 0xa0;
        _DAT_026e3230 = FUN_00136df0;
        _DAT_026e3240 = 0;
        uRam00000000026e3248 = 0;
        _DAT_026e3250 = 0;
        uRam00000000026e3258 = 0;
        _DAT_026e3260 = 0;
        uRam00000000026e3268 = 0;
        _DAT_026e3270 = 0;
        uRam00000000026e3278 = 0;
        _DAT_026e3280 = 0;
        uRam00000000026e3288 = 0;
        _DAT_026e3290 = 0;
        uRam00000000026e3298 = 0;
        _DAT_026e32a0 = 0;
        uRam00000000026e32a8 = 0;
        _DAT_026e32b0 = 0;
        uRam00000000026e32b8 = 0;
        _DAT_026e32c0 = 0;
        uRam00000000026e32c8 = 0;
        _DAT_026e32d0 = 0;
        uRam00000000026e32d8 = 0;
        _DAT_026e32e0 = 0;
        ___cxa_guard_release();
      }
      if (plVar18 == (longlong *)0x0) {
LAB_0015fe1d:
        pplVar20 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar18 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_0015fe1d;
      }
      local_40 = *pplVar20;
      if (*pplVar20 == (longlong *)0x0) {
        lVar5 = 0;
        local_40 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar20 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar20 + 1) = 0;
        }
        lVar5 = CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar15);
      local_60 = lVar5;
      if ((local_98 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_80[0] = '\0';
      local_88 = (undefined8 *)0x0;
      local_78 = puVar1;
      local_70 = 0xffffffff;
      local_68 = 0;
      iVar15 = 1;
      local_70._4_4_ = 0;
      while( true ) {
        if (local_70._4_4_ != 0) {
          if (local_70._4_4_ < 1) {
            iVar13 = -local_70._4_4_;
          }
          else {
            iVar13 = (int)local_70 - local_70._4_4_;
            local_70 = CONCAT44(local_70._4_4_,iVar13);
            FUN_00d23690();
            local_68 = local_68 + local_70._4_4_;
            iVar13 = 0;
          }
          local_70 = CONCAT44(iVar13,(int)local_70);
        }
        lVar5 = (longlong)(int)local_70;
        iVar13 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar13);
        if (*(int *)((longlong)local_78 + 0xc) <= iVar13) break;
        local_88 = *(undefined8 **)(local_78[2] + 8 + lVar5 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)local_78[2]);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        plVar18 = local_50;
        if ((DAT_026fdd70 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
          _DAT_026e3238 = FUN_00115af0();
          DAT_026e3220 = "MUAudioFileSource";
          _DAT_026e3228 = 0xa0;
          _DAT_026e3230 = FUN_00136df0;
          _DAT_026e3240 = 0;
          uRam00000000026e3248 = 0;
          _DAT_026e3250 = 0;
          uRam00000000026e3258 = 0;
          _DAT_026e3260 = 0;
          uRam00000000026e3268 = 0;
          _DAT_026e3270 = 0;
          uRam00000000026e3278 = 0;
          _DAT_026e3280 = 0;
          uRam00000000026e3288 = 0;
          _DAT_026e3290 = 0;
          uRam00000000026e3298 = 0;
          _DAT_026e32a0 = 0;
          uRam00000000026e32a8 = 0;
          _DAT_026e32b0 = 0;
          uRam00000000026e32b8 = 0;
          _DAT_026e32c0 = 0;
          uRam00000000026e32c8 = 0;
          _DAT_026e32d0 = 0;
          uRam00000000026e32d8 = 0;
          _DAT_026e32e0 = 0;
          ___cxa_guard_release();
        }
        pplVar20 = (longlong **)&DAT_02802688;
        if (plVar18 != (longlong *)0x0) {
          (**(code **)(*plVar18 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar20 = &local_50;
          if (cVar2 == '\0') {
            pplVar20 = (longlong **)&DAT_02802688;
          }
        }
        plVar18 = *pplVar20;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar15 = iVar15 + (uint)(plVar18 != local_40);
      }
      puVar9 = local_78;
      FUN_001159b0();
      pVar3 = (pthread_key_t)puVar9;
      plVar18 = *(longlong **)(unaff_RDI + 0xd0);
      cVar2 = (char)local_60;
      if (iVar15 != 1) {
        iVar15 = (int)local_58;
        goto LAB_001600e0;
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar3 = (pthread_key_t)local_40;
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x468))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x978))();
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar18 = *(longlong **)(unaff_RDI + 0xd0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123abe0();
      (**(code **)(*local_50 + 0x470))();
      puVar9 = local_88;
      if (local_80[0] == '\0') {
        if (local_88 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80[0] = '\0';
      }
      (**(code **)(*plVar18 + 0x6a8))();
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
    }
    if ((cVar2 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = (undefined8 *)&DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (puVar1 != (undefined8 *)0x0) {
    local_80[0] = '\0';
    local_88 = (undefined8 *)0x0;
    local_78 = puVar1;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar15 = -local_70._4_4_;
        }
        else {
          iVar15 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar15 = 0;
        }
        local_70 = CONCAT44(iVar15,(int)local_70);
      }
      lVar5 = (longlong)(int)local_70;
      iVar15 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar15);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
      local_88 = *(undefined8 **)(local_78[2] + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)local_78[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar18 = (longlong *)CONCAT71(uStack_97,local_98);
      if (local_90 == '\0') {
        if (plVar18 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_48 = '\0';
      local_50 = plVar18;
      FUN_00d235a0();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
        FUN_00d50b20();
      }
    }
    puVar9 = local_78;
    FUN_001159b0();
  }
  lVar5 = DAT_026e3e60;
  plVar18 = *(longlong **)(unaff_RDI + 0xd8);
  if (plVar18 != (longlong *)0x0) {
    if (*(int *)((longlong)puVar1 + 0xc) != 0) {
      if (puVar6 != (undefined8 *)0x0) {
        local_80[0] = '\0';
        local_88 = (undefined8 *)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_60 = (ulonglong)local_60._4_4_ << 0x20;
        plVar12 = (longlong *)0x0;
        bVar22 = false;
        local_40 = (longlong *)0x0;
        local_78 = puVar6;
        local_70._4_4_ = 0;
        do {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar15 = -local_70._4_4_;
            }
            else {
              iVar15 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar15 = 0;
            }
            local_70 = CONCAT44(iVar15,(int)local_70);
          }
          lVar5 = (longlong)(int)local_70;
          iVar15 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar15);
          if (*(int *)((longlong)local_78 + 0xc) <= iVar15) {
            puVar9 = local_78;
            uVar17 = (uint)local_60;
            goto LAB_001609f0;
          }
          puVar9 = (undefined8 *)local_78[2];
          local_88 = (undefined8 *)puVar9[lVar5 + 1];
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar9);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a500();
          plVar18 = local_50;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (longlong *)0x0) {
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar9);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0141b7f0();
            plVar18 = local_50;
            if (local_48 == '\0') {
              if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
                 (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
            }
            if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
              FUN_00d50b20();
            }
            uVar19 = (undefined7)((ulonglong)plVar12 >> 8);
            if (local_40 == (longlong *)0x0) {
              if (plVar18 == (longlong *)0x0) {
                local_40 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                bVar22 = true;
                local_40 = plVar18;
              }
              pVar3 = FUN_0141b8d0();
              FUN_0141b540();
              lVar8 = (longlong)(int)pVar3;
              lVar5 = *(longlong *)(local_50[2] + lVar8 * 8);
              if (lVar5 != 0) {
                FUN_00d50b00();
                pVar3 = (pthread_key_t)lVar8;
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar5 != 0) {
                local_58 = plVar12;
                pvVar4 = _pthread_getspecific(pVar3);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                plVar11 = local_50;
                if (plVar12 == local_50) {
                  bVar21 = (char)local_60 == '\0';
                  plVar11 = plVar12;
                  uVar16 = (uint)local_60;
                  if ((bVar21) && (plVar11 = local_58, plVar12 != (longlong *)0x0)) {
                    uVar16 = (undefined4)CONCAT71(uVar19,1);
                    plVar12 = local_58;
                    if (local_48 != '\0') goto LAB_00160966;
                    local_60 = local_60 & 0xffffffff00000000;
                    FUN_00d50b00();
                    uVar16 = (int)CONCAT71(uVar19,1);
                  }
LAB_00160952:
                  plVar12 = plVar11;
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_48 == '\0') {
                    if (local_50 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar16 = (undefined4)CONCAT71(uVar19,1);
                    if (((char)local_60 != '\0') && (local_58 != (longlong *)0x0)) {
                      local_58 = plVar11;
                      FUN_00d50b20();
                    }
                    goto LAB_00160952;
                  }
                  uVar16 = (undefined4)CONCAT71(uVar19,1);
                  plVar12 = plVar11;
                  if (((char)local_60 != '\0') && (local_58 != (longlong *)0x0)) {
                    local_58 = local_50;
                    FUN_00d50b20();
                  }
                }
LAB_00160966:
                FUN_00d50b20();
                local_60 = CONCAT44(local_60._4_4_,uVar16);
              }
            }
            else {
              cVar2 = (**(code **)(*local_40 + 0x50))();
              plVar11 = DAT_02726ce0;
              if (cVar2 != '\0') goto LAB_00160b84;
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        } while( true );
      }
      local_60 = (ulonglong)local_60._4_4_ << 0x20;
      plVar12 = (longlong *)0x0;
      bVar22 = false;
      local_40 = (longlong *)0x0;
      goto LAB_00160a26;
    }
    if (DAT_026e3e60 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar18 + 0x978))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  goto LAB_00160a8d;
LAB_00160b84:
  if (DAT_02726ce0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar2 = (char)local_60;
  if (plVar12 == plVar11) {
    puVar9 = (undefined8 *)(local_60 & 0xffffffff);
    uVar17 = 1;
    if (plVar11 == (longlong *)0x0) {
      uVar17 = (uint)local_60 & 0xff;
    }
    plVar14 = plVar12;
    if ((cVar2 != '\0') && (uVar17 = (uint)local_60 & 0xff, plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar17 = (uint)local_60;
    }
  }
  else {
    uVar17 = (uint)CONCAT71(uVar19,1);
    plVar14 = plVar11;
    if (((char)local_60 != '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar12 = plVar14;
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_001609f0:
  FUN_00115190();
  plVar18 = *(longlong **)(unaff_RDI + 0xd8);
  local_60 = CONCAT44(local_60._4_4_,uVar17);
LAB_00160a26:
  (**(code **)(*plVar18 + 0x978))();
  if (((char)local_60 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar22) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00160a8d:
  pVar3 = (pthread_key_t)puVar9;
  if (((*(longlong *)(unaff_RDI + 0xe8) == 0) || (*(longlong *)(unaff_RDI + 0xf0) == 0)) ||
     (*(longlong *)(unaff_RDI + 0xf8) == 0)) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_00160de7;
  }
  else {
    iVar15 = *(int *)((longlong)puVar6 + 0xc);
    if (iVar15 == 1) {
      FUN_00d23310();
      puVar6 = local_88;
      pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_80[0]);
      pcVar10 = &local_98;
      if (local_80[0] != '\0') {
        pcVar10 = local_80;
      }
      local_98 = local_80[0];
      *pcVar10 = '\0';
      if ((local_80[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_01264240();
      plVar18 = local_50;
      if (local_50 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        plVar18 = (longlong *)0x0;
      }
      else if (local_48 == '\0') {
        uVar7 = FUN_00d50b00();
        local_40 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        local_40 = (longlong *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      if ((local_98 != '\0') && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar13 = FUN_01326de0();
      bVar22 = true;
      if (iVar13 != 2) {
        pvVar4 = _pthread_getspecific(pVar3);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar13 = FUN_01326de0();
        bVar22 = iVar13 == 4;
      }
    }
    else {
      plVar18 = (longlong *)0x0;
      local_40 = (longlong *)0x0;
      bVar22 = false;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x998))();
    if (bVar22) {
      plVar12 = *(longlong **)(unaff_RDI + 0xe8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7bd0();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (iVar15 == 1) {
      plVar12 = *(longlong **)(unaff_RDI + 0xf0);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7ca0();
      (**(code **)(*plVar12 + 0x928))();
      plVar12 = *(longlong **)(unaff_RDI + 0xf8);
      pvVar4 = _pthread_getspecific(pVar3);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7d70();
      (**(code **)(*plVar12 + 0x928))();
    }
    if (((char)local_40 != '\0') && (plVar18 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00160de7:
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


