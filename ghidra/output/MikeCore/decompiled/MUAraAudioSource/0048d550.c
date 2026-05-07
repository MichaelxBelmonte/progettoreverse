// Function: FUN_0048d550
// Address: 0048d550
// Size: 6259 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAudioFileSource"
//   "MUCustomAudioSource"
//   "MUAraAudioSource"


/* WARNING: Removing unreachable block (ram,0x0048ea38) */
/* WARNING: Removing unreachable block (ram,0x0048ea41) */
/* WARNING: Removing unreachable block (ram,0x0048e783) */
/* WARNING: Removing unreachable block (ram,0x0048e78f) */
/* WARNING: Removing unreachable block (ram,0x0048de78) */
/* WARNING: Removing unreachable block (ram,0x0048de81) */
/* WARNING: Removing unreachable block (ram,0x0048dd7a) */
/* WARNING: Removing unreachable block (ram,0x0048dd7f) */
/* WARNING: Removing unreachable block (ram,0x0048e9fb) */
/* WARNING: Removing unreachable block (ram,0x0048e90a) */
/* WARNING: Removing unreachable block (ram,0x0048e913) */
/* WARNING: Removing unreachable block (ram,0x0048ea8c) */
/* WARNING: Removing unreachable block (ram,0x0048ea95) */
/* WARNING: Removing unreachable block (ram,0x0048df81) */
/* WARNING: Removing unreachable block (ram,0x0048df8a) */
/* WARNING: Removing unreachable block (ram,0x0048e9ae) */
/* WARNING: Removing unreachable block (ram,0x0048e9bb) */
/* WARNING: Removing unreachable block (ram,0x0048e97c) */
/* WARNING: Removing unreachable block (ram,0x0048e989) */
/* WARNING: Removing unreachable block (ram,0x0048e717) */
/* WARNING: Removing unreachable block (ram,0x0048e734) */
/* WARNING: Removing unreachable block (ram,0x0048e03c) */
/* WARNING: Removing unreachable block (ram,0x0048e045) */
/* WARNING: Removing unreachable block (ram,0x0048e719) */
/* WARNING: Removing unreachable block (ram,0x0048e736) */
/* WARNING: Removing unreachable block (ram,0x0048dc2e) */
/* WARNING: Removing unreachable block (ram,0x0048dc37) */
/* WARNING: Removing unreachable block (ram,0x0048db84) */
/* WARNING: Removing unreachable block (ram,0x0048db8d) */
/* WARNING: Removing unreachable block (ram,0x0048e0ef) */
/* WARNING: Removing unreachable block (ram,0x0048e0f8) */
/* WARNING: Removing unreachable block (ram,0x0048dc7c) */
/* WARNING: Removing unreachable block (ram,0x0048dca0) */
/* WARNING: Removing unreachable block (ram,0x0048dc7e) */
/* WARNING: Removing unreachable block (ram,0x0048dca2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0048d550(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  double extraout_XMM0_Qa;
  longlong *local_d8;
  char local_d0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  int local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *plVar26;
  char local_60;
  int local_50;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d216c0();
  FUN_00d50b00();
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
  plVar16 = unaff_RSI;
  do {
    (**(code **)(*unaff_RSI + 0x370))();
    plVar12 = local_a8;
    local_80 = unaff_RSI;
    if (local_a8 == unaff_RSI) {
      if ((((char)local_78 == '\0') && (local_a8 != (longlong *)0x0)) && ((char)local_a0 != '\0')) {
        goto LAB_0048d64a;
      }
    }
    else {
      if ((char)local_a0 == '\0') {
        if ((char)local_78 == '\0') {
          local_80 = local_a8;
          pplVar14 = &local_78;
        }
        else {
          FUN_00d50b20();
          local_80 = plVar12;
          pplVar14 = &local_78;
        }
      }
      else {
        if ((char)local_78 != '\0') {
          FUN_00d50b20();
        }
        local_80 = plVar12;
        plVar16 = plVar12;
LAB_0048d64a:
        local_78 = (longlong *)CONCAT71(local_78._1_7_,1);
        pplVar14 = &local_a0;
        plVar12 = plVar16;
      }
      *(undefined1 *)pplVar14 = 0;
      plVar16 = plVar12;
    }
    if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar12 = &DAT_02802688;
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar12 = (longlong *)&stack0xffffffffffffff98;
      if (cVar2 == '\0') {
        plVar12 = &DAT_02802688;
      }
    }
    plVar6 = local_80;
    if (*plVar12 != 0) {
      if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
    unaff_RSI = local_80;
  } while (local_80 != (longlong *)0x0);
  pVar10 = (pthread_key_t)plVar12;
  FUN_00d50b20();
  if (plVar6 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar23 = true;
    goto LAB_0048ec56;
  }
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    FUN_00757c60();
    plVar12 = local_a8;
    if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
LAB_0048e265:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar23 = true;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar12 = local_a8;
      if ((char)local_a0 == '\0') {
        if (local_a8 == (longlong *)0x0) goto LAB_0048e265;
        FUN_00d50b00();
        if (((char)local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_a8 == (longlong *)0x0) goto LAB_0048e265;
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_012cb480();
      plVar6 = local_a8;
      if ((char)local_a0 == '\0') {
        if (((local_a8 != (longlong *)0x0) &&
            (dVar24 = (double)FUN_00d50b00(), (char)local_a0 != '\0')) &&
           (local_a8 != (longlong *)0x0)) {
          dVar24 = (double)FUN_00d50b20();
        }
      }
      else {
        local_a0._0_1_ = '\0';
      }
      if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
        dVar24 = (double)FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        local_a0._0_1_ = '\0';
        local_a8 = (longlong *)0x0;
        local_98 = plVar6;
        local_90 = 0xffffffff;
        local_88 = 0;
        iVar3 = 0;
        iVar21 = 0;
        while( true ) {
          if (iVar21 == 0) {
            iVar21 = 0;
          }
          else {
            if (iVar21 < 1) {
              iVar3 = -iVar21;
            }
            else {
              local_90 = CONCAT44(local_90._4_4_,(int)local_90 - iVar21);
              FUN_00d23690(dVar24,iVar21);
              local_88 = local_88 + iVar3;
              iVar3 = 0;
            }
            local_90 = CONCAT44(iVar3,(int)local_90);
            iVar21 = iVar3;
          }
          lVar7 = (longlong)(int)local_90;
          iVar17 = (int)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,iVar17);
          if (*(int *)((longlong)local_98 + 0xc) <= iVar17) break;
          plVar6 = (longlong *)local_98[2];
          plVar15 = (longlong *)plVar6[lVar7 + 1];
          local_a8 = plVar15;
          pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_0124c6e0();
          iVar17 = *(int *)((longlong)plVar16 + 0xc);
          if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
            dVar24 = (double)FUN_00d50b20();
          }
          if ((1 < iVar17) && (plVar12 != plVar15)) {
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
            plVar19 = plVar12;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar6 = plVar12;
              plVar19 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            dVar25 = (double)(**(code **)(*plVar19 + 0x370))();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
            plVar19 = plVar15;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar19 = (longlong *)plVar15[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            dVar24 = (double)(**(code **)(*plVar19 + 0x370))();
            if ((dVar25 == dVar24) && (!NAN(dVar25) && !NAN(dVar24))) {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar6);
              plVar19 = plVar12;
              if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar6 = plVar12;
                plVar19 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              pVar10 = (pthread_key_t)plVar6;
              lVar7 = (**(code **)(*plVar19 + 0x378))();
              pvVar5 = _pthread_getspecific(pVar10);
              plVar6 = plVar15;
              if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar6 = (longlong *)plVar15[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              lVar8 = (**(code **)(*plVar6 + 0x378))();
              uVar22 = lVar7 - lVar8;
              uVar9 = -uVar22;
              if (0 < (longlong)uVar22) {
                uVar9 = uVar22;
              }
              dVar24 = extraout_XMM0_Qa;
              if (uVar9 < 2) {
                pvVar5 = _pthread_getspecific(pVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar24 = (double)FUN_0124c6e0();
                plVar6 = *(longlong **)(plVar16[2] + 8);
                if (plVar6 != (longlong *)0x0) {
                  dVar24 = (double)FUN_00d50b00();
                }
                if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
                  dVar24 = (double)FUN_00d50b20();
                }
                if (plVar6 != (longlong *)0x0) {
                  if ((DAT_026fdd70 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
                  pplVar14 = (longlong **)&DAT_02802688;
                  if (plVar15 != (longlong *)0x0) {
                    (**(code **)(*plVar15 + 0x360))();
                    cVar2 = FUN_00e85ea0();
                    pplVar14 = &local_a8;
                    if (cVar2 == '\0') {
                      pplVar14 = (longlong **)&DAT_02802688;
                    }
                  }
                  if (*(char *)(pplVar14 + 1) == '\0') {
                    if (*pplVar14 != (longlong *)0x0) {
                      FUN_00d50b00();
LAB_0048e5c9:
                      pVar10 = (pthread_key_t)pplVar14;
                      FUN_01f27fe0();
                      cVar2 = (**(code **)(*plVar16 + 0x450))();
                      if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar2 == '\0') {
                        FUN_00757c60();
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012cb110();
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012e6160();
                        if ((local_60 == '\0') && (plVar16 != (longlong *)0x0)) {
                          FUN_00d50b00();
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar16 == (longlong *)0x0) goto LAB_0048e878;
                        local_50 = -1;
                        while( true ) {
                          lVar7 = (longlong)local_50;
                          local_50 = local_50 + 1;
                          if (*(int *)((longlong)plVar16 + 0xc) <= local_50) break;
                          plVar15 = (longlong *)plVar16[2];
                          lVar7 = plVar15[lVar7 + 1];
                          FUN_004f9cf0();
                          local_70 = '\0';
                          local_78 = plVar6;
                          cVar2 = FUN_00d23d70();
                          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((cVar2 != '\0') && (*(int *)((longlong)local_d8 + 0xc) == 1)) {
                            bVar23 = lVar7 == 0;
                            if (bVar23) {
                              lVar7 = 0;
                              plVar16 = plVar15;
                            }
                            else {
                              FUN_00d50b00();
                              plVar16 = plVar15;
                            }
                            bVar23 = !bVar23;
                            if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            goto LAB_0048e823;
                          }
                          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        lVar7 = 0;
                        bVar23 = false;
LAB_0048e823:
                        pVar10 = (pthread_key_t)plVar16;
                        FUN_000be170();
                        FUN_00d50b20();
                        if (lVar7 == 0) goto LAB_0048e878;
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_012e6000();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d21140();
                        if (bVar23) {
                          FUN_00d50b20();
                        }
                      }
                      else {
LAB_0048e878:
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0123abe0();
                        (**(code **)(*local_d8 + 0x388))();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d21140();
                      }
                      local_60 = '\0';
                      FUN_00d50b20();
                      plVar16 = plVar6;
                    }
                  }
                  else {
                    *(undefined1 *)(pplVar14 + 1) = 0;
                    if (*pplVar14 != (longlong *)0x0) goto LAB_0048e5c9;
                  }
                  dVar24 = (double)FUN_00d50b20();
                }
                iVar3 = local_90._4_4_;
                iVar21 = local_90._4_4_;
              }
            }
          }
        }
        FUN_00115e00();
        FUN_00d50b20();
      }
      *unaff_RDI = puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      bVar23 = false;
    }
  }
  else {
    FUN_00792ed0();
    plVar12 = local_a8;
    if (((((char)local_a0 == '\0') && (local_a8 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_a0 != '\0')) && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    if ((DAT_0272a620 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02799028 = FUN_00115af0();
      _DAT_02799010 = "MUCustomAudioSource";
      _DAT_02799018 = 0x78;
      pVar10 = 0x49c5f0;
      _DAT_02799020 = FUN_0049c5f0;
      _DAT_02799030 = 0;
      uRam0000000002799038 = 0;
      _DAT_02799040 = 0;
      uRam0000000002799048 = 0;
      _DAT_02799050 = 0;
      uRam0000000002799058 = 0;
      _DAT_02799060 = 0;
      uRam0000000002799068 = 0;
      _DAT_02799070 = 0;
      uRam0000000002799078 = 0;
      _DAT_02799080 = 0;
      uRam0000000002799088 = 0;
      _DAT_02799090 = 0;
      uRam0000000002799098 = 0;
      _DAT_027990a0 = 0;
      uRam00000000027990a8 = 0;
      _DAT_027990b0 = 0;
      uRam00000000027990b8 = 0;
      _DAT_027990c0 = 0;
      uRam00000000027990c8 = 0;
      _DAT_027990d0 = 0;
      ___cxa_guard_release();
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x360))();
      FUN_00e85ea0();
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_a8 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*local_a8 + 0x10))();
    }
    if ((DAT_0272a630 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
      pVar10 = 0x49c720;
      _DAT_02708970 = FUN_0049c720;
      _DAT_02708980 = 0;
      uRam0000000002708988 = 0;
      _DAT_02708990 = 0;
      uRam0000000002708998 = 0;
      _DAT_027089a0 = 0;
      uRam00000000027089a8 = 0;
      _DAT_027089b0 = 0;
      uRam00000000027089b8 = 0;
      _DAT_027089c0 = 0;
      uRam00000000027089c8 = 0;
      _DAT_027089d0 = 0;
      uRam00000000027089d8 = 0;
      _DAT_027089e0 = 0;
      uRam00000000027089e8 = 0;
      _DAT_027089f0 = 0;
      uRam00000000027089f8 = 0;
      _DAT_02708a00 = 0;
      uRam0000000002708a08 = 0;
      _DAT_02708a10 = 0;
      uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
    bVar1 = true;
    bVar23 = true;
    if (plVar6 == (longlong *)0x0) {
LAB_0048d98a:
      plVar6 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0048d98a;
      FUN_00d50b00();
      bVar1 = false;
      bVar23 = false;
    }
    if (((char)local_a0 != '\0') && (bVar23 = bVar1, local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar23) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar1 = true;
      bVar23 = true;
    }
    else {
      FUN_0167ab60();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      plVar15 = local_a8;
      if ((char)local_a0 == '\0') {
        if (((local_a8 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_a0 != '\0')) &&
           (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a0._0_1_ = '\0';
      }
      if ((local_60 != '\0') && (plVar16 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == (longlong *)0x0) {
        *unaff_RDI = puVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0048ec37:
        FUN_00d50b20();
      }
      else {
        local_a0._0_1_ = '\0';
        local_a8 = (longlong *)0x0;
        local_98 = plVar15;
        local_88 = 0;
        local_90 = 0;
        if (0 < *(int *)((longlong)plVar15 + 0xc)) {
          uVar20 = 0;
          do {
            plVar19 = *(longlong **)(plVar15[2] + (ulonglong)uVar20 * 8);
            uVar11 = uVar20;
            local_a8 = plVar19;
            pvVar5 = _pthread_getspecific(uVar20);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            if (local_60 == '\0') {
              if (plVar16 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_0048dba0;
              }
            }
            else if (plVar16 != (longlong *)0x0) {
LAB_0048dba0:
              pvVar5 = _pthread_getspecific(uVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              plVar26 = plVar16;
              if (local_60 == '\0') {
                if (plVar16 != (longlong *)0x0) {
                  FUN_00d50b00();
                  goto LAB_0048dc40;
                }
              }
              else if (plVar16 != (longlong *)0x0) {
LAB_0048dc40:
                local_60 = '\0';
                plVar26 = (longlong *)0x0;
                local_50 = -1;
                bVar1 = true;
                while( true ) {
                  lVar7 = (longlong)local_50;
                  local_50 = local_50 + 1;
                  if (*(int *)((longlong)plVar16 + 0xc) <= local_50) break;
                  plVar26 = *(longlong **)(plVar16[2] + 8 + lVar7 * 8);
                  pvVar5 = _pthread_getspecific((pthread_key_t)plVar16[2]);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if (cVar2 == '\0') {
                    bVar1 = false;
                  }
                }
                plVar13 = plVar16;
                FUN_0049cc10();
                FUN_00d50b20();
                if (!bVar1) {
                  pvVar5 = _pthread_getspecific((pthread_key_t)plVar13);
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar13 = plVar16;
                  }
                  FUN_0124c6e0();
                  if (1 < *(int *)((longlong)plVar26 + 0xc)) {
                    pvVar5 = _pthread_getspecific((pthread_key_t)plVar13);
                    plVar18 = plVar16;
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar13 = plVar16;
                      plVar18 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    lVar7 = (**(code **)(*plVar18 + 0x378))();
                    pvVar5 = _pthread_getspecific((pthread_key_t)plVar13);
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01320d00();
                    pvVar5 = _pthread_getspecific((pthread_key_t)plVar13);
                    plVar18 = plVar26;
                    if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                      plVar18 = (longlong *)plVar26[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                    lVar8 = (**(code **)(*plVar18 + 0x378))();
                    uVar22 = lVar7 - lVar8;
                    uVar9 = -uVar22;
                    if (0 < (longlong)uVar22) {
                      uVar9 = uVar22;
                    }
                    if (uVar9 < 2) {
                      pvVar5 = _pthread_getspecific((pthread_key_t)plVar13);
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar13 = plVar16;
                        plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      pVar10 = (pthread_key_t)plVar13;
                      dVar24 = (double)(**(code **)(*plVar16 + 0x370))();
                      pvVar5 = _pthread_getspecific(pVar10);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01320d00();
                      pvVar5 = _pthread_getspecific(pVar10);
                      plVar16 = plVar26;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar16 = (longlong *)plVar26[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      dVar25 = (double)(**(code **)(*plVar16 + 0x370))();
                      if (((dVar24 == dVar25) && (!NAN(dVar24) && !NAN(dVar25))) &&
                         (plVar19 != plVar6)) {
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01667b90();
                        plVar16 = local_78;
                        if (local_70 == '\0') {
                          if (local_78 != (longlong *)0x0) {
                            FUN_00d50b00();
                          }
                        }
                        else {
                          local_70 = '\0';
                        }
                        FUN_00d21140();
                        if (plVar16 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        pvVar5 = _pthread_getspecific(pVar10);
                        if (pvVar5 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0124c6e0();
                        plVar26 = *(longlong **)(local_78[2] + 8);
                        if (plVar26 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        local_60 = '\0';
                        FUN_00d21140();
                        if (plVar26 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                }
              }
              FUN_00d50b20();
              plVar16 = plVar26;
            }
            uVar20 = uVar20 + 1;
            local_90 = CONCAT44(local_90._4_4_,uVar20);
          } while ((int)uVar20 < *(int *)((longlong)plVar15 + 0xc));
        }
        FUN_0049cb70();
        FUN_00d50b20();
        *unaff_RDI = puVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (!bVar23) goto LAB_0048ec37;
      }
      bVar1 = false;
      bVar23 = false;
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
      bVar23 = bVar1;
    }
  }
  FUN_00d50b20();
LAB_0048ec56:
  if ((bVar23) && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


