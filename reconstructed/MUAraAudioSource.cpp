// Reconstructed implementation of MUAraAudioSource
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAraAudioSource.h"

// ============================================================
// @0048d550 — 6259 bytes
// str: ""MUAudioFileSource""
// str: ""MUCustomAudioSource""
// str: ""MUAraAudioSource""
// ============================================================

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




// ============================================================
// @01699090 — 4823 bytes
// str: ""MUAraAudioPlaybackRegion""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01699090(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_016961d0();
  *unaff_RDI = &DAT_025f61c8;
  unaff_RDI[8] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169a410();
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169a5a0();
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169a730();
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169a8c0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169aa50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x61) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169abe0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x62) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169ad70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 99) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169af00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 100) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169b090();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x65) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169b220();
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169b3b0();
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169b540();
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169b6d0();
    FUN_00e87980();
  }
  FUN_0169b860();
  FUN_0169bb80();
  FUN_0169beb0();
  FUN_0169c1e0();
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169c510();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa1) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169c6a0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169c830();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa3) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169c9c0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169cb50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa5) = 0;
  if (DAT_026f9a88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f99d8 = FUN_00274820();
      _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
      _DAT_026f99c8 = 0xb0;
      _DAT_026f99d0 = FUN_00275d40;
      _DAT_026f99e0 = 0;
      uRam00000000026f99e8 = 0;
      _DAT_026f99f0 = 0;
      _DAT_026f9a68 = 0;
      uRam00000000026f9a70 = 0;
      _DAT_026f9a78 = 0;
      DAT_026f9a7a = 1;
      _DAT_026f99f8 = 0;
      uRam00000000026f9a00 = 0;
      _DAT_026f9a08 = 0;
      uRam00000000026f9a10 = 0;
      _DAT_026f9a18 = 0;
      uRam00000000026f9a20 = 0;
      _DAT_026f9a28 = 0;
      uRam00000000026f9a30 = 0;
      _DAT_026f9a38 = 0;
      uRam00000000026f9a40 = 0;
      _DAT_026f9a48 = 0;
      uRam00000000026f9a50 = 0;
      _DAT_026f9a58 = 0;
      uRam00000000026f9a60 = 0;
      DAT_026f9a83 = 0;
      _DAT_026f9a7b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f9a7b == '\0') {
    FUN_0169cce0();
    FUN_00e87980();
  }
  FUN_0169ce70();
  return;
}




// ============================================================
// @0048ba10 — 4413 bytes
// str: ""MUAudioFileSource""
// str: ""%@: %@""
// str: ""MUCustomAudioSource""
// str: ""MUAraAudioSource""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ba10(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  bool bVar11;
  undefined4 uVar12;
  longlong local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x35] == 0) {
    return;
  }
  if (unaff_RDI[0x23] == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_70;
  FUN_01320d00();
  plVar4 = local_70;
  if ((DAT_026fdd70 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    param_1 = 0x136df0;
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
  if (plVar4 == (longlong *)0x0) {
LAB_0048bacb:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0048bacb;
  }
  plVar4 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar10 = &local_70;
    FUN_01320d00();
    plVar4 = local_70;
    if ((DAT_0272a620 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_02799028 = FUN_00115af0();
      _DAT_02799010 = "MUCustomAudioSource";
      _DAT_02799018 = 0x78;
      param_1 = 0x49c5f0;
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
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') goto LAB_0048bcfd;
    }
    pplVar10 = (longlong **)&DAT_02802688;
LAB_0048bcfd:
    plVar4 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_70 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*local_70 + 0x10))();
    }
    if ((DAT_0272a630 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
    bVar11 = true;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        FUN_00d50b00();
        bVar11 = false;
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    lVar5 = DAT_026f6f70;
    if (!bVar11) {
      plVar4 = (longlong *)unaff_RDI[0x35];
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_026fbaa0;
      local_118 = lVar5;
      local_110 = '\x01';
      if (DAT_026fbaa0 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar8;
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      plVar7 = &local_f8;
      FUN_00d31230(plVar7,&local_108);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      local_150 = local_148;
      uVar12 = FUN_00083ea0(2,&local_150);
      FUN_00d8cb40(uVar12,&local_70);
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar4 + 0x968))();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = (longlong *)&DAT_0253d630;
      if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    local_78 = plVar4;
    FUN_00d50b00();
    local_88 = '\0';
    plVar4 = unaff_RDI;
    local_40 = unaff_RDI;
    do {
      (**(code **)(*plVar4 + 0x370))();
      plVar7 = local_70;
      if (local_70 == plVar4) {
        if (((local_88 == '\0') && (local_70 != (longlong *)0x0)) &&
           (plVar7 = plVar4, local_68[0] != '\0')) goto LAB_0048bbc7;
      }
      else {
        local_40 = local_70;
        if (local_68[0] == '\0') {
          if (local_88 == '\0') {
            pcVar3 = &local_88;
          }
          else {
            FUN_00d50b20();
            pcVar3 = &local_88;
          }
        }
        else {
          if (local_88 != '\0') {
            FUN_00d50b20();
          }
LAB_0048bbc7:
          local_88 = '\x01';
          pcVar3 = local_68;
        }
        *pcVar3 = '\0';
        plVar4 = plVar7;
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar1 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar10 != (longlong *)0x0) {
        if ((local_88 == '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar4 != (longlong *)0x0);
    param_1 = (pthread_key_t)pplVar10;
    FUN_00d50b20();
    if (plVar4 != (longlong *)0x0) {
      FUN_00757c60();
      if (local_70 == (longlong *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        bVar11 = local_40 != (longlong *)0x0;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_00757c60();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        plVar4 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          local_60 = plVar4;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_e8 = plVar4;
          do {
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                iVar9 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar9);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
            lVar5 = (longlong)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((longlong)local_60 + 0xc) <= iVar9) {
              plVar4 = local_60;
              FUN_000be170();
              param_1 = (pthread_key_t)plVar4;
              FUN_00d50b20();
              break;
            }
            lVar8 = local_60[2];
            local_138 = *(longlong **)(lVar8 + 8 + lVar5 * 8);
            local_130 = '\0';
            local_70 = local_138;
            FUN_004f9cf0();
            plVar4 = local_40;
            pVar6 = (pthread_key_t)lVar8;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (longlong *)unaff_RDI[0x23];
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = plVar7;
            cVar1 = FUN_00d23d70();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar1 == '\0') {
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (plVar4 != (longlong *)0x0) goto LAB_0048c0d0;
            }
            else {
              iVar9 = *(int *)((longlong)plVar4 + 0xc);
              if (plVar7 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (iVar9 == 1) goto LAB_0048c73b;
LAB_0048c0d0:
              FUN_00d50b20();
            }
          } while( true );
        }
      }
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  plVar4 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x27a) == '\0') &&
     (*(char *)((longlong)unaff_RDI + 0x27b) != '\0')) {
    local_128 = plVar4;
    local_120 = '\0';
    FUN_014fff90();
    plVar7 = local_70;
    if (plVar4 == local_70) {
LAB_0048c7b4:
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar4 != (longlong *)0x0;
        plVar4 = plVar7;
        if (bVar11) {
          FUN_00d50b20();
        }
        goto LAB_0048c7b4;
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_68[0] = '\0';
      plVar4 = plVar7;
    }
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)unaff_RDI[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x468))();
    local_c0 = local_70;
    local_b8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar4 + 0x968))();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar4 = (longlong *)unaff_RDI[0x35];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_40 + 0x470))();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_a8 = '\x01';
    (**(code **)(*plVar4 + 0x6a8))();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_0048c6cc:
  FUN_00d50b20();
  return;
LAB_0048c73b:
  plVar4 = (longlong *)unaff_RDI[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  local_e0 = local_40;
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
  (**(code **)(*plVar4 + 0x968))();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)unaff_RDI[0x35];
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123abe0();
  (**(code **)(*(longlong *)CONCAT71(uStack_87,local_88) + 0x468))();
  local_d0 = local_40;
  local_c8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c8 = '\x01';
  (**(code **)(*plVar4 + 0x6a8))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_000be170();
  FUN_00d50b20();
  FUN_00d50b20();
  goto LAB_0048c6cc;
}




// ============================================================
// @0169d230 — 4345 bytes
// str: ""GNHeartbeatHandler""
// str: ""MUAraAudioSource""
// str: ""MUCustomAudioSourceDataSource""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169d230(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_01696b40();
  unaff_RDI[0x12] = &DAT_025f98c0;
  if (DAT_02799140 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02799128 = "MUCustomAudioSourceDataSource";
      DAT_02799138 = 0;
      _DAT_02799130 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x13] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025f73d0;
  unaff_RDI[10] = &DAT_025f7788;
  unaff_RDI[0x12] = &DAT_025f77b8;
  unaff_RDI[0x13] = &DAT_025f7808;
  FUN_0169e4e0();
  FUN_0169e7c0();
  FUN_0169ead0();
  FUN_0169ed50();
  unaff_RDI[0x18] = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169efd0();
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f140();
    FUN_00e87980();
  }
  unaff_RDI[0x1a] = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f2b0();
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f420();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f590();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f700();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x1d) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f870();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe9) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169f9e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169fb50();
    FUN_00e87980();
  }
  FUN_0169fcc0();
  unaff_RDI[0x1f] = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_0169ffb0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0120();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x104) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0290();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x105) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0400();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x106) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0570();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x107) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a06e0();
    FUN_00e87980();
  }
  FUN_016a0850();
  FUN_016a0ad0();
  *(undefined4 *)(unaff_RDI + 0x23) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0d50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x11c) = 0;
  if (DAT_0272a630 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
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
      _uRam0000000002708a18 = 0;
      _DAT_02708a20 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02708a1b == '\0') {
    FUN_016a0ec0();
    FUN_00e87980();
  }
  FUN_016a1030();
  FUN_016a12b0();
  FUN_016a15a0();
  return;
}




// ============================================================
// @007860e0 — 3801 bytes
// str: ""MUCustomAudioSource""
// str: ""MUAraAudioSource""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007868e9) */
/* WARNING: Removing unreachable block (ram,0x007868f5) */
/* WARNING: Removing unreachable block (ram,0x007862aa) */
/* WARNING: Removing unreachable block (ram,0x007862b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007860e0(pthread_key_t param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong local_1a0;
  char local_198;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  
  local_a8 = param_2;
  cVar4 = FUN_00751ba0();
  if (cVar4 == '\0') {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124c710();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    plVar7 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    local_a0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      local_58[0] = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar7;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar11 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong **)(local_50[2] + 8 + lVar11 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)local_50[2]);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar7 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00786600;
          }
        }
        else if (local_98 != (longlong *)0x0) {
LAB_00786600:
          local_90 = '\0';
          local_98 = (longlong *)0x0;
          local_88 = plVar7;
          local_80 = 0xffffffff;
          local_78 = 0;
          while( true ) {
            lVar11 = (longlong)(int)local_80;
            iVar5 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar5);
            if (*(int *)((longlong)local_88 + 0xc) <= iVar5) break;
            local_98 = *(longlong **)(local_88[2] + 8 + lVar11 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)local_88[2]);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            plVar3 = local_70;
            plVar7 = (longlong *)*unaff_RSI;
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == plVar7) {
              local_70 = local_60;
              local_68 = '\0';
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar5 = -local_80._4_4_;
              }
              else {
                local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar5 = 0;
              }
              local_80 = CONCAT44(iVar5,(int)local_80);
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d23310();
    plVar7 = local_60;
    pplVar9 = &local_98;
    if (local_58[0] != '\0') {
      pplVar9 = (longlong **)local_58;
    }
    local_98 = (longlong *)CONCAT71(local_98._1_7_,local_58[0]);
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_98 == '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    local_70 = (longlong *)CONCAT71(local_70._1_7_,local_58[0]);
    pplVar9 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar9 = &local_70;
    }
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    local_d0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (longlong *)((ulonglong)local_70 & 0xffffffffffffff00);
    }
    local_d0 = '\x01';
    local_d8 = plVar3;
    local_148 = *unaff_RSI;
    local_140 = '\0';
    FUN_004f9d80(uVar13,&local_148);
    plVar3 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (longlong *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = plVar3;
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    pplVar9 = &local_70;
    pplVar12 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar12 = pplVar9;
    }
    local_70 = (longlong *)CONCAT71(local_70._1_7_,local_58[0]);
    *(char *)pplVar12 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    pVar10 = (pthread_key_t)pplVar9;
    local_c0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (longlong *)((ulonglong)local_70 & 0xffffffffffffff00);
    }
    plVar2 = local_e8;
    local_c0 = '\x01';
    local_c8 = plVar3;
    local_138 = *local_a8;
    local_130 = '\0';
    FUN_004f9d80(uVar13,&local_138);
    local_e0 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (longlong *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_128 = plVar2;
    local_120 = '\0';
    local_118 = *local_a8;
    local_110 = '\0';
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    local_b8 = local_60;
    local_b0 = 0;
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    plVar3 = local_a0;
    local_b0 = '\x01';
    FUN_012f0b60(&local_118,&local_128,0,0,&local_b8);
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_e0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    plVar7 = local_98;
    if ((DAT_0272a620 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_02799028 = FUN_00115af0();
      _DAT_02799010 = "MUCustomAudioSource";
      _DAT_02799018 = 0x78;
      param_1 = 0x49c5f0;
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
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      FUN_00e85ea0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_60 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*local_60 + 0x10))();
    }
    if ((DAT_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_02708978 = FUN_0049c750();
      _DAT_02708960 = "MUAraAudioSource";
      _DAT_02708968 = 0x138;
      param_1 = 0x49c720;
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
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0166dcf0(1,1,1);
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  uVar13 = (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x4a0))();
  plVar7 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (longlong *)0x0) {
      return;
    }
    uVar13 = FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) {
    return;
  }
  local_58[0] = 0;
  local_60 = (longlong *)0x0;
  local_50 = plVar7;
  local_40 = 0;
  local_48 = 0;
  if (0 < *(int *)((longlong)plVar7 + 0xc)) {
    lVar11 = 0;
    do {
      local_60 = *(longlong **)(plVar7[2] + lVar11 * 8);
      local_108 = *unaff_RSI;
      local_100 = '\0';
      local_f8 = *local_a8;
      local_f0 = '\0';
      uVar13 = FUN_00652840(uVar13,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)((longlong)plVar7 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01673fe0 — 2996 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01674b94) */
/* WARNING: Removing unreachable block (ram,0x01674ba0) */
/* WARNING: Removing unreachable block (ram,0x01674a3d) */
/* WARNING: Removing unreachable block (ram,0x01674a49) */
/* WARNING: Removing unreachable block (ram,0x016746e8) */
/* WARNING: Removing unreachable block (ram,0x016746f4) */
/* WARNING: Removing unreachable block (ram,0x01674478) */
/* WARNING: Removing unreachable block (ram,0x01674484) */

ulonglong FUN_01673fe0(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  undefined *puVar16;
  int iVar17;
  longlong *unaff_RSI;
  byte bVar18;
  bool bVar19;
  char cVar20;
  undefined *unaff_R13;
  undefined7 uVar21;
  undefined *puVar22;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined *local_40;
  char local_38 [8];
  
  puVar13 = (undefined *)0x0;
  local_48 = param_1;
  FUN_01674fe0();
  local_50 = local_78;
  puVar16 = local_78;
  if (((((char)local_70 == '\0') && (local_78 != (undefined *)0x0)) &&
      (FUN_00d50b00(), puVar16 = local_50, (char)local_70 != '\0')) &&
     (local_78 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(puVar16 + 0xc) == 0) {
    uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
  }
  else {
    lVar6 = *unaff_RSI;
    pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    puVar16 = (undefined *)*unaff_RSI;
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (undefined *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(undefined **)(puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      puVar7 = *(undefined8 **)(puVar16 + 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d242c0();
      uVar3 = *(uint *)((longlong)puVar7 + 0xc);
      uVar1 = *(uint *)(local_50 + 0xc);
      pcVar12 = (char *)(ulonglong)uVar1;
      if (uVar3 == uVar1) {
        local_70._0_1_ = '\0';
        local_78 = (undefined *)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (*(int *)(local_50 + 0xc) < 1) {
          bVar18 = 1;
        }
        else {
          bVar18 = 1;
          puVar16 = (undefined *)0x0;
          local_48 = puVar7;
          do {
            local_78 = *(undefined **)(*(longlong *)(local_50 + 0x10) + (longlong)puVar16 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)pcVar12);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017120c0();
            bVar2 = FUN_01673220();
            bVar18 = bVar18 & bVar2;
            puVar16 = puVar16 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)puVar16);
            puVar7 = local_48;
          } while ((int)puVar16 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),bVar18 != 0);
      }
      else {
        bVar19 = (int)uVar1 <= (int)uVar3;
        if (uVar3 != 0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_68 = local_50;
          local_58 = 0;
          local_60 = 0;
          local_48 = puVar7;
          if (0 < *(int *)(local_50 + 0xc)) {
            lVar6 = 0;
            do {
              local_78 = *(undefined **)(*(longlong *)(local_50 + 0x10) + lVar6 * 8);
              FUN_01671da0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 == (undefined *)0x0) goto LAB_01674630;
                FUN_00d50b00();
              }
              else if (local_40 == (undefined *)0x0) {
LAB_01674630:
                FUN_00d23310();
                puVar16 = local_40;
                local_88 = local_38[0];
                pcVar12 = &local_88;
                pcVar8 = local_38;
                if (local_38[0] == '\0') {
                  pcVar8 = pcVar12;
                }
                *pcVar8 = '\0';
                if ((local_38[0] != '\0') && (puVar16 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                if ((puVar16 != (undefined *)0x0) && (puVar13 = puVar16, local_88 == '\0')) {
                  FUN_00d50b00();
                }
                bVar19 = false;
              }
              pvVar4 = _pthread_getspecific((pthread_key_t)pcVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017120c0();
              uVar3 = FUN_01673220();
              puVar16 = (undefined *)(ulonglong)uVar3;
              if (puVar13 != (undefined *)0x0) {
                FUN_00d50b20();
              }
              bVar19 = (bool)(bVar19 & (byte)uVar3);
              lVar6 = lVar6 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
            } while ((int)lVar6 < *(int *)(local_50 + 0xc));
          }
          FUN_0166fd40();
          puVar7 = local_48;
        }
        uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),bVar19 != false);
      }
      if (puVar7 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (undefined *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(undefined **)(puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      if (puVar16[0x51] == '\0') {
        uVar15 = 0;
LAB_0167475c:
        puVar22 = (undefined *)0x0;
        if ((undefined *)*local_48 != (undefined *)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_68 = (undefined *)*local_48;
          while( true ) {
            lVar6 = (longlong)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            puVar13 = local_68;
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            puVar13 = *(undefined **)(local_68 + 0x10);
            local_78 = *(undefined **)(puVar13 + lVar6 * 8 + 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016501d0();
            puVar16 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar16 != (undefined *)0x0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016501d0();
              puVar16 = (undefined *)CONCAT71(uStack_87,local_88);
              pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
              if (pvVar4 != (void *)0x0) {
                puVar16 = (undefined *)CONCAT71(uStack_87,local_88);
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  puVar16 = *(undefined **)
                             (puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
                }
              }
              FUN_015058d0();
              puVar22 = local_40;
              if (local_40 == (undefined *)0x0) {
                puVar22 = (undefined *)0x0;
              }
              else {
                uVar21 = (undefined7)(uVar15 >> 8);
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                  uVar15 = CONCAT71(uVar21,1);
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38[0] = '\0';
                  uVar15 = CONCAT71(uVar21,1);
                }
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              break;
            }
            puVar16 = (undefined *)0x0;
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
          }
          FUN_0049cc10();
        }
      }
      else {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar13 = &DAT_02572358;
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        if ((undefined *)*local_48 != (undefined *)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (undefined *)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          local_68 = (undefined *)*local_48;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                iVar17 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar17);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
            lVar6 = (longlong)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            lVar5 = *(longlong *)(local_68 + 0x10);
            puVar16 = *(undefined **)(lVar5 + 8 + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar5);
            puVar13 = local_78;
            pVar11 = (pthread_key_t)lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar16 = puVar13, lVar6 != 0))
            {
              puVar16 = *(undefined **)
                         (puVar13 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_016501d0();
            unaff_R13 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (undefined *)0x0) {
                FUN_00d50b00();
                if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01674220;
              }
            }
            else if (local_40 != (undefined *)0x0) {
LAB_01674220:
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 != (undefined *)0x0) {
                  FUN_00d50b00();
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_016742b0;
                }
              }
              else if (local_40 != (undefined *)0x0) {
LAB_016742b0:
                pvVar4 = _pthread_getspecific(pVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510360(0,0,0);
                puVar16 = local_40;
                if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar16 != (undefined *)0x0) {
                  local_38[0] = '\0';
                  local_40 = puVar13;
                  FUN_00d21140();
                  if ((local_38[0] != '\0') && (local_40 != (undefined *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          puVar13 = local_68;
          FUN_0049cc10();
        }
        FUN_00d242c0();
        FUN_00d23340();
        puVar22 = local_78;
        puVar13 = (undefined *)CONCAT71((int7)((ulonglong)puVar13 >> 8),(char)local_70);
        ppuVar14 = &local_40;
        if ((char)local_70 != '\0') {
          ppuVar14 = &local_70;
        }
        local_40 = (undefined *)CONCAT71(local_40._1_7_,(char)local_70);
        *(undefined1 *)ppuVar14 = 0;
        if (((char)local_70 != '\0') && (local_78 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar22 == (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          if ((char)local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (puVar7 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar22 == (undefined *)0x0) goto LAB_0167475c;
      }
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_01676840();
      (**(code **)(*plVar9 + 0x18))();
      if (puVar22 != (undefined *)0x0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
        plVar10 = plVar9;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        puVar16 = (undefined *)plVar10[7];
        pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
        if (pvVar4 != (void *)0x0) {
          puVar16 = (undefined *)plVar10[7];
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            puVar16 = *(undefined **)
                       (puVar16 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
          }
        }
        FUN_015127c0();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      plVar10 = plVar9;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar10 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      *(undefined1 *)(plVar10 + 0xb) = 0;
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        *(undefined1 *)((longlong)plVar9 + 0x59) = 0;
        if (local_50 != (undefined *)0x0) goto LAB_01674ad7;
LAB_01674bbc:
        cVar20 = (char)uVar15;
        FUN_00d50b20();
      }
      else {
        *(undefined1 *)(plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x59) = 0;
        if (local_50 == (undefined *)0x0) goto LAB_01674bbc;
LAB_01674ad7:
        local_48 = (undefined8 *)CONCAT44(local_48._4_4_,(int)uVar15);
        local_70._0_1_ = '\0';
        local_78 = (undefined *)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (0 < *(int *)(local_50 + 0xc)) {
          lVar6 = 0;
          do {
            puVar16 = *(undefined **)(*(longlong *)(local_50 + 0x10) + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar13);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              puVar16 = *(undefined **)
                         (puVar16 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_017120c0();
            lVar6 = lVar6 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = (ulonglong)local_48 & 0xffffffff;
        cVar20 = (char)local_48;
        if (plVar9 != (longlong *)0x0) goto LAB_01674bbc;
      }
      if ((cVar20 != '\0') && (puVar22 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      if (local_50 == (undefined *)0x0) goto LAB_01674be6;
    }
  }
  FUN_00d50b20();
LAB_01674be6:
  return uVar15 & 0xffffffff;
}




// ============================================================
// @002312f0 — 2638 bytes
// str: ""MUAraAudioPlaybackRegion""
// str: ""_startInModificationTime""
// str: ""_durationInModificationTime""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00231362) */
/* WARNING: Removing unreachable block (ram,0x0023136e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002312f0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
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
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d216c0();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x980))();
  FUN_00d50b20();
  if (*unaff_RSI != 0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *unaff_RSI;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      FUN_00d50b00();
      lVar3 = DAT_026f6f58;
      if (DAT_026f6f58 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar3;
      local_188 = '\x01';
      local_178 = '\0';
      local_180 = lVar5;
      FUN_000823a0();
      uVar7 = FUN_00e86210();
      lVar3 = DAT_026f6f60;
      if (DAT_026f6f60 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      FUN_00c841b0(uVar7,&local_170);
      local_88 = local_f0;
      local_80 = 0;
      if (local_e8 == '\0') {
        if (local_f0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e8 = '\0';
      }
      local_80 = '\x01';
      local_160 = local_58;
      local_158 = '\0';
      FUN_000bfbc0(&local_180,&local_190,0xa0,&local_88);
      lVar3 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_78 = lVar3;
      local_70 = '\0';
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = local_48;
    FUN_000be170();
    param_1 = (pthread_key_t)lVar3;
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x178) + 0xc) == 0) goto LAB_00231adb;
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_58 + 0x450))();
  if (cVar2 == '\0') {
    if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
      local_70 = '\0';
      local_78 = 0;
LAB_00231721:
      cVar2 = '\0';
    }
    else {
      FUN_006f3f00();
      if (local_78 == 0) goto LAB_00231721;
      if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
        local_60 = '\0';
        local_68 = 0;
      }
      else {
        FUN_006f3f00();
      }
      cVar2 = FUN_00751ba0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_00231adb;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_00231adb;
  uVar7 = FUN_00d50b00();
  local_150 = DAT_026f6f68;
  if (DAT_026f6f68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_148 = '\x01';
  local_138 = '\0';
  local_140 = lVar3;
  if ((DAT_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_02, iVar6 != 0)) {
    _DAT_026f99d8 = FUN_00274820();
    _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
    _DAT_026f99c8 = 0xb0;
    _DAT_026f99d0 = FUN_00275d40;
    _DAT_026f99e0 = 0;
    uRam00000000026f99e8 = 0;
    _DAT_026f99f0 = 0;
    _DAT_026f9a68 = 0;
    uRam00000000026f9a70 = 0;
    _DAT_026f9a78 = 0;
    DAT_026f9a7a = 1;
    _DAT_026f99f8 = 0;
    uRam00000000026f9a00 = 0;
    _DAT_026f9a08 = 0;
    uRam00000000026f9a10 = 0;
    _DAT_026f9a18 = 0;
    uRam00000000026f9a20 = 0;
    _DAT_026f9a28 = 0;
    uRam00000000026f9a30 = 0;
    _DAT_026f9a38 = 0;
    uRam00000000026f9a40 = 0;
    _DAT_026f9a48 = 0;
    uRam00000000026f9a50 = 0;
    _DAT_026f9a58 = 0;
    uRam00000000026f9a60 = 0;
    DAT_026f9a83 = 0;
    _DAT_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_0023189d;
LAB_0023188c:
    local_a0 = 0;
    FUN_00d50b00();
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 != 0) goto LAB_0023188c;
LAB_0023189d:
    lVar3 = 0;
  }
  local_a0 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_a8 = lVar3;
  uVar7 = FUN_000bfbc0(&local_140,&local_150,0xa0,&local_a8);
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((DAT_026f9a88 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_03, iVar6 != 0)) {
    _DAT_026f99d8 = FUN_00274820();
    _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
    _DAT_026f99c8 = 0xb0;
    _DAT_026f99d0 = FUN_00275d40;
    _DAT_026f99e0 = 0;
    uRam00000000026f99e8 = 0;
    _DAT_026f99f0 = 0;
    _DAT_026f9a68 = 0;
    uRam00000000026f9a70 = 0;
    _DAT_026f9a78 = 0;
    DAT_026f9a7a = 1;
    _DAT_026f99f8 = 0;
    uRam00000000026f9a00 = 0;
    _DAT_026f9a08 = 0;
    uRam00000000026f9a10 = 0;
    _DAT_026f9a18 = 0;
    uRam00000000026f9a20 = 0;
    _DAT_026f9a28 = 0;
    uRam00000000026f9a30 = 0;
    _DAT_026f9a38 = 0;
    uRam00000000026f9a40 = 0;
    _DAT_026f9a48 = 0;
    uRam00000000026f9a50 = 0;
    _DAT_026f9a58 = 0;
    uRam00000000026f9a60 = 0;
    DAT_026f9a83 = 0;
    _DAT_026f9a7b = 0;
    uVar7 = ___cxa_guard_release();
  }
  lVar3 = FUN_00e85ef0(uVar7,1);
  if (lVar3 == 0) {
    lVar3 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    uVar7 = extraout_XMM0_Da_01;
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_00231a36;
LAB_00231a25:
    local_90 = 0;
    uVar7 = FUN_00d50b00();
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    uVar7 = extraout_XMM0_Da_00;
    if (lVar3 != 0) goto LAB_00231a25;
LAB_00231a36:
    lVar3 = 0;
  }
  local_90 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_98 = lVar3;
  FUN_000bfd00(uVar7,&local_120);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = plVar1;
  FUN_00d21140();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00231adb:
  FUN_00d403d0();
  local_110 = DAT_026e0f08;
  if (DAT_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,1,1);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @016756d0 — 2550 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016760bf) */
/* WARNING: Removing unreachable block (ram,0x016760c8) */
/* WARNING: Removing unreachable block (ram,0x01675c77) */
/* WARNING: Removing unreachable block (ram,0x01675c80) */
/* WARNING: Removing unreachable block (ram,0x01675d77) */
/* WARNING: Removing unreachable block (ram,0x01675d80) */
/* WARNING: Removing unreachable block (ram,0x01675cb7) */
/* WARNING: Removing unreachable block (ram,0x01675ce0) */
/* WARNING: Removing unreachable block (ram,0x01675cb9) */
/* WARNING: Removing unreachable block (ram,0x01675ce2) */
/* WARNING: Removing unreachable block (ram,0x01676128) */
/* WARNING: Removing unreachable block (ram,0x01676131) */

void FUN_016756d0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  pthread_key_t pVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *unaff_RSI;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *local_70;
  char local_68;
  int local_58;
  undefined8 *local_48;
  char local_40;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      plVar15 = (longlong *)0x0;
      do {
        plVar16 = plVar15;
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_01676840();
        (**(code **)(*plVar5 + 0x18))();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar16 = plVar5;
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017105a0();
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_015127c0();
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0170f680();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(undefined4 *)(plVar8 + 8) = uVar4;
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (longlong *)plVar5[9];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (longlong *)plVar8[9];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
              goto LAB_016759db;
            }
            FUN_00d50b00();
            plVar16 = (longlong *)plVar8[9];
            plVar8[9] = (longlong)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_016759db:
            plVar8[9] = (longlong)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (longlong *)plVar5[10];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (longlong *)plVar8[10];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
              goto LAB_01675acb;
            }
            FUN_00d50b00();
            plVar16 = (longlong *)plVar8[10];
            plVar8[10] = (longlong)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_01675acb:
            plVar8[10] = (longlong)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170f810();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(undefined1 *)(plVar8 + 0xb) = uVar3;
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170fee0();
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(undefined1 *)((longlong)plVar8 + 0x59) = uVar3;
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01675c88;
          }
        }
        else if (local_70 != (longlong *)0x0) {
LAB_01675c88:
          local_58 = -1;
LAB_01675cb3:
          while( true ) {
            lVar7 = (longlong)local_58;
            local_58 = local_58 + 1;
            if (*(int *)((longlong)local_70 + 0xc) <= local_58) break;
            lVar17 = local_70[2];
            plVar16 = *(longlong **)(lVar17 + (lVar7 + 1) * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar17);
            pVar14 = (pthread_key_t)lVar17;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar16 + 0x368))();
            if (local_40 == '\0') goto LAB_01675d60;
            if (local_48 != (undefined8 *)0x0) goto LAB_01675d90;
          }
          FUN_01714b60();
          FUN_00d50b20();
        }
        local_68 = '\0';
        FUN_00d21140();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = (int)plVar15 + 1;
        plVar15 = (longlong *)(ulonglong)uVar13;
        local_70 = plVar5;
      } while ((int)uVar13 < *(int *)(lVar1 + 0xc));
    }
    FUN_0166fd40();
  }
  return;
LAB_01675d60:
  if (local_48 == (undefined8 *)0x0) goto LAB_01675cb3;
  FUN_00d50b00();
LAB_01675d90:
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025f82c0;
  *(undefined4 *)(puVar9 + 7) = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  FUN_00d500e0();
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012c8fb0();
  pvVar6 = _pthread_getspecific(pVar14);
  puVar10 = puVar9;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar10 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(puVar10 + 7) = uVar4;
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (undefined8 *)puVar9[8];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (undefined8 *)puVar10[8];
  }
  if (puVar19 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        goto LAB_01675eda;
      }
      FUN_00d50b00();
      puVar2 = (undefined8 *)puVar10[8];
      puVar10[8] = local_48;
      puVar19 = local_48;
    }
    else {
      local_40 = '\0';
      puVar11 = local_48;
LAB_01675eda:
      puVar10[8] = puVar11;
      puVar2 = puVar19;
      puVar19 = puVar11;
    }
    pVar14 = (pthread_key_t)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
      puVar19 = local_48;
    }
  }
  if ((local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (undefined8 *)puVar9[9];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (undefined8 *)puVar10[9];
  }
  if (puVar19 == local_48) goto LAB_01675ffc;
  if (local_40 == '\0') {
    if (local_48 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      goto LAB_01675fba;
    }
    FUN_00d50b00();
    puVar2 = (undefined8 *)puVar10[9];
    puVar10[9] = local_48;
    puVar19 = local_48;
  }
  else {
    local_40 = '\0';
    puVar11 = local_48;
LAB_01675fba:
    puVar10[9] = puVar11;
    puVar2 = puVar19;
    puVar19 = puVar11;
  }
  pVar14 = (pthread_key_t)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
    puVar19 = local_48;
  }
LAB_01675ffc:
  if ((local_40 != '\0') && (puVar19 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (undefined8 *)puVar9[10];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (undefined8 *)puVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (undefined8 *)puVar10[10];
  }
  if (puVar19 != local_48) {
    FUN_00d50b00();
    puVar10[10] = local_48;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = '\0';
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00d50b20();
  local_48 = puVar9;
  goto LAB_01675cb3;
}




// ============================================================
// @0078a130 — 2429 bytes
// str: ""%@.%I""
// ============================================================

undefined8 * FUN_0078a130(pthread_key_t param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint7 uVar15;
  ulonglong uVar14;
  bool bVar16;
  longlong local_150;
  char local_148;
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
  undefined8 *local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  int local_8c;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  uint local_60;
  undefined8 *local_58;
  char local_50;
  int local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  if (*param_2 == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    puVar10 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      cVar11 = '\0';
    }
    else if ((char)local_60 == '\0') {
      FUN_00d50b00();
      cVar11 = '\x01';
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      cVar11 = '\x01';
    }
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026f6f70;
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02729650;
    local_110 = lVar2;
    local_108 = '\x01';
    if (DAT_02729650 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar3;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    plVar9 = &local_f0;
    uVar6 = FUN_00d31230(plVar9,&local_100);
    puVar13 = local_68;
    pVar8 = (pthread_key_t)plVar9;
    if (local_68 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_8c = *(int *)((longlong)local_68 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6a50();
  puVar10 = local_68;
  if (local_68 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    local_38 = 0;
  }
  else {
    local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_68 = (undefined8 *)*param_2;
  local_60 = local_60 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  puVar13 = local_68;
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026f6f70;
  local_8c = iVar4 + 1;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02729650;
    cVar11 = (char)local_38;
    if (DAT_02729650 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar3;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    uVar6 = FUN_00d31230(&local_120,&local_130);
    puVar13 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6000();
  puVar12 = local_68;
  if (local_68 == (undefined8 *)0x0) {
    bVar1 = 1;
    puVar12 = (undefined8 *)0x0;
    local_40 = 0;
  }
  else if ((char)local_60 == '\0') {
    uVar6 = FUN_00d50b00();
    bVar1 = 0;
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      uVar6 = FUN_00d50b20();
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 0;
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  local_60 = 2;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_68 = (undefined8 *)&DAT_025df2a0;
  local_58 = puVar12;
  local_48 = iVar4 + 2;
  uVar6 = FUN_00d8cb40();
  puVar13 = local_78;
  uVar15 = (uint7)(uint3)((uint)(iVar4 + 2) >> 8);
  uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
  cVar11 = (char)local_38;
  if (local_78 == puVar12) {
    puVar13 = puVar12;
    if ((bool)(bVar1 & local_78 != (undefined8 *)0x0)) {
      if (local_70 != '\0') goto LAB_0078a585;
      uVar14 = CONCAT71(uVar15,1);
      FUN_00d50b00();
    }
    else {
      uVar14 = local_40 & 0xffffffff;
    }
LAB_0078a812:
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar15,1);
      if (((byte)local_40 & puVar12 != (undefined8 *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_0078a812;
    }
    bVar16 = puVar12 != (undefined8 *)0x0;
    puVar12 = puVar13;
    if (((byte)local_40 & bVar16) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_0078a585:
    local_70 = '\0';
    puVar13 = puVar12;
    uVar14 = CONCAT71(uVar7,1);
  }
  local_40 = uVar14;
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_68 = &DAT_024c5048, local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_0078a854:
  local_d8 = '\0';
  local_c8 = '\0';
  pVar8 = 0;
  local_e0 = puVar13;
  local_d0 = puVar10;
  FUN_004f83c0(0,&local_d0);
  puVar12 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x628))();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = puVar12;
  local_b8 = '\0';
  local_b0 = puVar12;
  local_a8 = '\0';
  FUN_004a11d0();
  local_88 = local_78;
  local_80 = 0;
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_80 = '\x01';
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_004a17d0(local_8c,&local_a0);
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar12;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_40 != '\0') && (puVar13 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (puVar10 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @016b6bb0 — 2193 bytes
// str: ""provided object ref is invalid""
// str: ""properties != NULL""
// str: ""properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize""
// str: ""properties->durationInModificationTime >= 0.0""
// str: ""properties->durationInPlaybackTime >= 0.0""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b6e67) */
/* WARNING: Removing unreachable block (ram,0x016b6d2b) */
/* WARNING: Removing unreachable block (ram,0x016b6d37) */
/* WARNING: Removing unreachable block (ram,0x016b6e73) */

void FUN_016b6bb0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  code *UNRECOVERED_JUMPTABLE;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
  }
  else {
    if (0x33 < *unaff_RSI) {
      if ((*unaff_RSI < 0x3d) || (*(longlong *)((longlong)unaff_RSI + 0x3c) == 0)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        pVar7 = (pthread_key_t)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654a70();
      }
      else {
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        pVar7 = (pthread_key_t)param_1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d93290();
        local_78 = local_48;
        local_70 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_70 = '\x01';
        FUN_01654a70();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((*unaff_RSI < 0x45) || (*(longlong *)((longlong)unaff_RSI + 0x44) == 0)) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654d80();
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01cfbee0(**(undefined4 **)((longlong)unaff_RSI + 0x44),
                     (*(undefined4 **)((longlong)unaff_RSI + 0x44))[1]);
        local_68 = local_48;
        local_60 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_60 = '\x01';
        FUN_01654d80();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      dVar1 = *(double *)((longlong)unaff_RSI + 0x14);
      if (dVar1 < 0.0) {
        if (DAT_02802f60 == (longlong *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
        pcVar8 = "properties->durationInModificationTime >= 0.0";
      }
      else {
        dVar2 = *(double *)((longlong)unaff_RSI + 0x24);
        if (0.0 <= dVar2) {
          if ((unaff_RSI[1] & 1) == 0) {
            if ((((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) &&
                (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)
                        (dVar1,
                         "properties->durationInModificationTime == properties->durationInPlaybackTime"
                        );
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655050(*(undefined8 *)((longlong)unaff_RSI + 0xc));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655110(*(undefined8 *)((longlong)unaff_RSI + 0x14));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016551d0(*(undefined8 *)((longlong)unaff_RSI + 0x1c));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655290(*(undefined8 *)((longlong)unaff_RSI + 0x24));
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01655370();
          iVar4 = DAT_027cb0f0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (iVar4 < 3) {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *unaff_RSI;
          }
          else {
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016572d0();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_01657330();
            uVar3 = *unaff_RSI;
          }
          if (uVar3 < 0x35) {
            local_38[0] = '\0';
            if (2 < DAT_027cb0f0) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)
                          (uVar10,"false && \"ARA 2 requires properties->regionSequenceRef\"");
                return;
              }
              return;
            }
            lVar9 = *(longlong *)((longlong)unaff_RSI + 0x2c);
            if (lVar9 == 0) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(uVar10,"musicalContext");
                return;
              }
              return;
            }
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01658380();
            local_58 = local_88;
            local_50 = 0;
            if (local_80 == '\0') {
              if (local_88 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = '\0';
            }
            local_50 = '\x01';
            local_b0 = '\0';
            local_b8 = lVar9;
            uVar10 = FUN_0168a170(&local_b8,&local_58);
            if (local_48 == 0) {
              lVar9 = 0;
            }
            else {
              if (local_40[0] == '\0') {
                pcVar8 = local_38;
              }
              else {
                pcVar8 = local_40;
                local_38[0] = '\x01';
              }
              *pcVar8 = '\0';
              lVar9 = local_48;
              if (local_40[0] != '\0') {
                uVar10 = FUN_00d50b20();
              }
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar10 = FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            if ((*(longlong *)((longlong)unaff_RSI + 0x34) == 0) ||
               (cVar5 = FUN_012c91b0(), uVar10 = extraout_XMM0_Qa, cVar5 == '\0')) {
              if (DAT_02802f60 == (longlong *)0x0) {
                return;
              }
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
                return;
              }
              return;
            }
            lVar9 = *(longlong *)((longlong)unaff_RSI + 0x34);
          }
          local_a0 = '\0';
          local_98 = *unaff_RDI;
          local_90 = '\0';
          local_a8 = lVar9;
          FUN_0168a900(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            if (lVar9 != 0) {
              FUN_00d50b20();
              return;
            }
            return;
          }
          return;
        }
        if (DAT_02802f60 == (longlong *)0x0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return;
        }
        pcVar8 = "properties->durationInPlaybackTime >= 0.0";
      }
      (*UNRECOVERED_JUMPTABLE)(dVar1,pcVar8);
      return;
    }
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAPlaybackRegionPropertiesMinSize";
  }
                    /* WARNING: Could not recover jumptable at 0x016b6cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
  return;
}




// ============================================================
// @00787770 — 1965 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00787dc9) */
/* WARNING: Removing unreachable block (ram,0x00787dd5) */
/* WARNING: Removing unreachable block (ram,0x00787de3) */
/* WARNING: Removing unreachable block (ram,0x00787def) */

ulonglong FUN_00787770(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  longlong *unaff_RDI;
  ulonglong uVar10;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38 [8];
  
  FUN_00757c60();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    uVar10 = 0;
    goto LAB_00787f08;
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_40 + 0xc);
  uVar10 = CONCAT71(0x28025,iVar1 == 1);
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if ((iVar1 == 1) && (param_2 != '\0')) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar4 = local_40;
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
    pcVar9 = &local_98;
    if (local_38[0] != '\0') {
      pcVar9 = local_38;
    }
    local_98 = local_38[0];
    *pcVar9 = '\0';
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 == '\0') && (lVar4 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar2 = DAT_02729620;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar2 = DAT_02729620;
    }
    DAT_02729620 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_012e5ae0();
    lVar2 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00787a7c;
      }
LAB_00787a90:
      local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
LAB_00787a95:
      pvVar6 = _pthread_getspecific(pVar8);
      lVar3 = DAT_02729628;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
        lVar3 = DAT_02729628;
      }
      DAT_02729628 = lVar3;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_012e5f80();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == 0) goto LAB_00787a90;
LAB_00787a7c:
      local_44 = 0;
      if (*(int *)(lVar2 + 0xc) == 0) goto LAB_00787a95;
    }
    lVar3 = DAT_02729630;
    if (DAT_02729630 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_88 = local_58;
    local_80 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_80 = '\x01';
    pVar8 = 0;
    FUN_004f83c0(0,&local_88);
    lVar5 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11d0();
    local_78 = local_58;
    local_70 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_60 = 0;
    local_68 = CONCAT71(uStack_97,local_98);
    if (local_90 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_60 = '\x01';
    pVar8 = 0xffffffff;
    FUN_004a17d0(0xffffffff,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar8);
    lVar3 = DAT_02729638;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar3 = DAT_02729638;
    }
    DAT_02729638 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_012e60e0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
    uVar10 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00787f08:
  return uVar10 & 0xffffffff;
}




// ============================================================
// @005dab40 — 1742 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""MUAraAudioPlaybackRegion""
// str: ""GNHeartbeatHandler""
// str: ""_cursorTime""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dab40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005da070();
  unaff_RDI[5] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024f67b8;
  unaff_RDI[2] = &DAT_024f6cb8;
  unaff_RDI[5] = &DAT_024f6df8;
  unaff_RDI[6] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cd68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cd30 = FUN_0045de50();
        _DAT_0271cd28 = "_cursorTime";
        _DAT_0271cd38 = 0;
        _DAT_0271cd40 = 0x6400;
        _DAT_0271cd48 = "double";
        _DAT_0271cd50 = 0;
        uRam000000000271cd58 = 0;
        _DAT_0271cd60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cdb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cd78 = FUN_0045de50();
        _DAT_0271cd70 = "_lastHostCursorTime";
        _DAT_0271cd80 = 0;
        _DAT_0271cd88 = 0x6400;
        _DAT_0271cd90 = "double";
        _DAT_0271cd98 = 0;
        uRam000000000271cda0 = 0;
        _DAT_0271cda8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cdf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cdc0 = FUN_0045de50();
        _DAT_0271cdb8 = "_lastHostCursorTimeValid";
        _DAT_0271cdc8 = 0;
        _DAT_0271cdd0 = 0x6200;
        _DAT_0271cdd8 = "bool";
        _DAT_0271cde0 = 0;
        uRam000000000271cde8 = 0;
        _DAT_0271cdf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ce40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ce08 = FUN_0045de50();
        _DAT_0271ce00 = "_hostPlaybackPendingStopTime";
        _DAT_0271ce10 = 0;
        _DAT_0271ce18 = 0x6400;
        _DAT_0271ce20 = "double";
        _DAT_0271ce28 = 0;
        uRam000000000271ce30 = 0;
        _DAT_0271ce38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db760();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cfa8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cf70 = FUN_0045de50();
        _DAT_0271cf68 = "_controlsLocalPlayback";
        _DAT_0271cf78 = 0;
        _DAT_0271cf80 = 0x6200;
        _DAT_0271cf88 = "bool";
        _DAT_0271cf90 = 0;
        uRam000000000271cf98 = 0;
        _DAT_0271cfa0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x75) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cff0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cfb8 = FUN_0045de50();
        _DAT_0271cfb0 = "_distributedLocalPlayback";
        _DAT_0271cfc0 = 0;
        _DAT_0271cfc8 = 0x6200;
        _DAT_0271cfd0 = "bool";
        _DAT_0271cfd8 = 0;
        uRam000000000271cfe0 = 0;
        _DAT_0271cfe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271d038 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271d000 = FUN_0045de50();
        _DAT_0271cff8 = "_lastPendingHostCycleUpdateRequestTime";
        _DAT_0271d008 = 0;
        _DAT_0271d010 = 0x6400;
        _DAT_0271d018 = "double";
        _DAT_0271d020 = 0;
        uRam000000000271d028 = 0;
        _DAT_0271d030 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0078bc40 — 1572 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0078bdf7) */
/* WARNING: Removing unreachable block (ram,0x0078be03) */
/* WARNING: Removing unreachable block (ram,0x0078c085) */
/* WARNING: Removing unreachable block (ram,0x0078c091) */
/* WARNING: Removing unreachable block (ram,0x0078bccb) */
/* WARNING: Removing unreachable block (ram,0x0078bcd7) */
/* WARNING: Removing unreachable block (ram,0x0078bd26) */
/* WARNING: Removing unreachable block (ram,0x0078bd32) */

longlong * FUN_0078bc40(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  int iVar12;
  longlong *unaff_RDI;
  int iVar13;
  int iVar14;
  longlong *local_d8;
  char local_d0;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  char local_41;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  local_41 = (**(code **)(*local_d8 + 0x450))();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003b7950();
  if ((local_d0 == '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_0078b9c0();
  if (local_d0 == '\0') {
    if (local_d8 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0078bd37;
    }
  }
  else if (local_d8 != (longlong *)0x0) {
LAB_0078bd37:
    iVar13 = -1;
    do {
      iVar13 = iVar13 + 1;
      iVar1 = *(int *)((longlong)local_d8 + 0xc);
      if (iVar1 <= iVar13) {
        FUN_000be170();
        goto LAB_0078c259;
      }
      lVar8 = *(longlong *)(local_d8[2] + (longlong)iVar13 * 8);
      FUN_004f9670();
      lVar4 = local_70;
      local_40[0] = local_68[0];
      pcVar11 = local_40;
      pcVar9 = local_68;
      if (local_68[0] == '\0') {
        pcVar9 = pcVar11;
      }
      *pcVar9 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)pcVar11;
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      lVar5 = local_70;
      if (local_68[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      cVar6 = (**(code **)(*local_d8 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        if (local_41 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          lVar8 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0078bf9e;
            }
          }
          else if (local_70 != 0) {
LAB_0078bf9e:
            local_68[0] = '\0';
            local_70 = 0;
            local_60 = lVar8;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_58._4_4_ = 0;
            while( true ) {
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar12 = -local_58._4_4_;
                }
                else {
                  iVar12 = (int)local_58 - local_58._4_4_;
                  local_58 = CONCAT44(local_58._4_4_,iVar12);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar12 = 0;
                }
                local_58 = CONCAT44(iVar12,(int)local_58);
              }
              lVar8 = (longlong)(int)local_58;
              iVar14 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              iVar12 = *(int *)(local_60 + 0xc);
              if (iVar12 <= iVar14) goto LAB_0078c1e3;
              local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar8 * 8);
              FUN_004f9670();
              local_38[0] = local_78[0];
              pcVar11 = local_38;
              pcVar9 = local_78;
              if (local_78[0] == '\0') {
                pcVar9 = pcVar11;
              }
              *pcVar9 = '\0';
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pcVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004fae50();
              if (local_78[0] == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              cVar6 = (**(code **)(*local_d8 + 0x50))();
              if (local_80 != 0) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = local_70;
              if (cVar6 != '\0') break;
              if ((local_38[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (local_68[0] == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *unaff_RDI = lVar8;
              *(undefined1 *)(unaff_RDI + 1) = 1;
            }
            else {
              *unaff_RDI = local_70;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              local_68[0] = '\0';
            }
            if ((local_38[0] != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
LAB_0078c1e3:
            FUN_000be170();
            FUN_00d50b20();
            if (iVar14 < iVar12) goto LAB_0078bf03;
          }
        }
        bVar3 = true;
        bVar2 = true;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar8;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0078bf03:
        bVar3 = false;
        bVar2 = false;
      }
      if ((local_40[0] != '\0') && (bVar2 = bVar3, lVar4 != 0)) {
        FUN_00d50b20();
      }
    } while (bVar2);
    FUN_000be170();
LAB_0078c259:
    FUN_00d50b20();
    if (iVar13 < iVar1) goto LAB_0078c27d;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0078c27d:
  if (local_d8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01670220 — 1484 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016706bb) */
/* WARNING: Removing unreachable block (ram,0x016706c7) */

ulonglong FUN_01670220(pthread_key_t param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  uint uVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  longlong *local_a8;
  char local_a0;
  longlong *in_stack_ffffffffffffff68;
  undefined8 uVar16;
  char local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_42;
  byte local_41;
  char local_40 [8];
  char local_38 [8];
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar8 = 0;
  FUN_01510360(0,0,0);
  local_40[0] = local_90[0];
  pcVar5 = local_40;
  if (local_90[0] != '\0') {
    pcVar5 = local_90;
  }
  *pcVar5 = '\0';
  plVar12 = in_stack_ffffffffffffff68;
  if ((local_90[0] != '\0') && (in_stack_ffffffffffffff68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = in_stack_ffffffffffffff68;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510360(0,0,0);
  pcVar5 = local_38;
  pcVar10 = local_90;
  if (local_90[0] == '\0') {
    pcVar10 = pcVar5;
  }
  local_38[0] = local_90[0];
  *pcVar10 = '\0';
  if ((local_90[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar8 = (pthread_key_t)pcVar5;
  if (in_stack_ffffffffffffff68 == (longlong *)0x0) {
    uVar13 = 0xffffffff;
    if (plVar12 == (longlong *)0x0) goto LAB_01670357;
  }
  else {
    if (plVar12 == (longlong *)0x0) {
      uVar13 = 1;
      goto LAB_016707e3;
    }
LAB_01670357:
    local_58 = plVar12;
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = in_stack_ffffffffffffff68;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4]
      ;
    }
    iVar2 = (**(code **)(*plVar11 + 0x3f0))();
    pvVar4 = _pthread_getspecific(pVar8);
    plVar11 = plVar12;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar11 + 0x3f0))();
    uVar13 = 0xffffffff;
    if (iVar3 <= iVar2) {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = in_stack_ffffffffffffff68;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (longlong *)
                  in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar2 = (**(code **)(*plVar11 + 0x3f0))();
      pvVar4 = _pthread_getspecific(pVar8);
      plVar11 = plVar12;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar3 = (**(code **)(*plVar11 + 0x3f0))();
      uVar13 = 1;
      if (iVar2 <= iVar3) {
        if (param_2 == 0) {
          uVar13 = 0;
        }
        else {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)
                      in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_68 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_64 = (**(code **)(*plVar11 + 0x408))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = in_stack_ffffffffffffff68;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)
                      in_stack_ffffffffffffff68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_42 = (**(code **)(*plVar11 + 0x400))();
          pvVar4 = _pthread_getspecific(pVar8);
          plVar11 = plVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar11 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          local_41 = (**(code **)(*plVar11 + 0x400))();
          local_90[0] = '\0';
          local_78 = 0;
          local_80 = 0;
          local_88 = param_2;
          if (*(int *)(param_2 + 0xc) < 1) {
            local_50 = 0;
            local_4c = 0;
            local_48 = 0;
            uVar9 = 0;
          }
          else {
            lVar6 = 0;
            uVar9 = 0;
            local_48 = 0;
            local_4c = 0;
            local_50 = 0;
            do {
              uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar6 * 8);
              local_6c = uVar9;
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              pVar8 = 0;
              FUN_01510360(0,0,0,param_4,uVar16);
              if ((local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (longlong *)local_a8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              iVar2 = (**(code **)(*plVar12 + 0x408))();
              pvVar4 = _pthread_getspecific(pVar8);
              plVar12 = local_a8;
              if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                plVar12 = (longlong *)local_a8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              bVar1 = (**(code **)(*plVar12 + 0x400))();
              bVar14 = iVar2 == local_68;
              bVar15 = iVar2 == local_64;
              if (local_a8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_50 = local_50 + bVar14;
              local_4c = local_4c + bVar15;
              local_48 = local_48 + (byte)(local_42 ^ bVar1 ^ 1);
              uVar9 = local_6c + (byte)(bVar1 ^ local_41 ^ 1);
              lVar6 = lVar6 + 1;
              local_80 = CONCAT44(local_80._4_4_,(int)lVar6);
              plVar12 = local_58;
              in_stack_ffffffffffffff68 = local_60;
            } while ((int)lVar6 < *(int *)(param_2 + 0xc));
          }
          FUN_0131c770();
          uVar13 = 0xffffffff;
          if ((local_4c <= local_50) && (uVar13 = 1, local_50 == local_4c)) {
            uVar13 = 0xffffffff;
            if (uVar9 <= local_48) {
              uVar13 = (ulonglong)(local_48 != uVar9);
            }
          }
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_38[0] != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_016707e3:
  if ((local_40[0] != '\0') && (in_stack_ffffffffffffff68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar13;
}




// ============================================================
// @0078c610 — 1467 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0078ca31) */
/* WARNING: Removing unreachable block (ram,0x0078cb94) */
/* WARNING: Removing unreachable block (ram,0x0078cba1) */
/* WARNING: Removing unreachable block (ram,0x0078c7c3) */
/* WARNING: Removing unreachable block (ram,0x0078c7cf) */
/* WARNING: Removing unreachable block (ram,0x0078c8f3) */
/* WARNING: Removing unreachable block (ram,0x0078c8fc) */
/* WARNING: Removing unreachable block (ram,0x0078c937) */
/* WARNING: Removing unreachable block (ram,0x0078c960) */
/* WARNING: Removing unreachable block (ram,0x0078c697) */
/* WARNING: Removing unreachable block (ram,0x0078c6c0) */
/* WARNING: Removing unreachable block (ram,0x0078c699) */
/* WARNING: Removing unreachable block (ram,0x0078c6c2) */
/* WARNING: Removing unreachable block (ram,0x0078c939) */
/* WARNING: Removing unreachable block (ram,0x0078c962) */

longlong * FUN_0078c610(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  code *pcVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  code *pcVar10;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  int local_80;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  cVar2 = FUN_00751ba0();
  if (cVar2 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_98 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = local_98;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      local_90 = '\0';
      local_98 = 0;
      local_80 = -1;
      while( true ) {
        lVar3 = (longlong)local_80;
        local_80 = local_80 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_80) break;
        local_98 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4c40();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00323290();
    if ((local_90 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    if (*(char *)(unaff_RSI + 0x170) == '\0') {
      pcVar10 = FUN_0165a0b0;
      lVar1 = *param_2;
    }
    else {
      pcVar10 = FUN_0165a070;
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar6 = 0;
        do {
          lVar3 = local_70;
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f4c40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              goto LAB_0078c904;
            }
          }
          else if (local_70 != 0) {
LAB_0078c904:
            local_68 = '\0';
            local_70 = 0;
            local_58 = -1;
            while( true ) {
              lVar5 = (longlong)local_58;
              local_58 = local_58 + 1;
              if (*(int *)(lVar3 + 0xc) <= local_58) break;
              lVar8 = *(longlong *)(lVar3 + 0x10);
              local_70 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
              pVar7 = (pthread_key_t)lVar8;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012f51f0();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                pvVar4 = _pthread_getspecific(pVar7);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012f51f0();
                pcVar9 = pcVar10;
                (*pcVar10)();
                pVar7 = (pthread_key_t)pcVar9;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (local_70 != local_48) {
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012f51f0();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01657380();
                  pvVar4 = _pthread_getspecific(pVar7);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01650890();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 == '\0') {
                    local_40 = '\0';
                    FUN_00d21140();
                    local_48 = local_70;
                  }
                }
              }
            }
            FUN_000be170();
            FUN_00d50b20();
          }
          pVar6 = pVar6 + 1;
        } while ((int)pVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  *unaff_RDI = local_98;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01671370 — 1437 bytes
// str: ""GNList""
// str: ""MUAraAudioSource""
// str: ""_musicalContextData""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016713b0) */
/* WARNING: Removing unreachable block (ram,0x016713bc) */
/* WARNING: Removing unreachable block (ram,0x0167146a) */
/* WARNING: Removing unreachable block (ram,0x01671476) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01671370(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d61ea0();
  uVar8 = FUN_016be450();
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
  if (cVar4 != '\0') {
    local_b0 = plVar3;
    local_a8 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_b0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_a0 = plVar3;
    local_98 = '\0';
    (**(code **)(*unaff_RDI + 0x1f0))(0,&local_a0,0);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027c8380;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar6;
  local_88 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_026fce90;
  if (iVar5 < 3) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_026fce90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar6;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    uVar8 = extraout_XMM0_Da_01;
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar6 = DAT_026fce90;
    if (cVar4 != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_026fce90 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar6;
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x578))(uVar8,&local_70);
      plVar1 = local_40;
      if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((DAT_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_02708978 = FUN_0049c750();
            _DAT_02708960 = "MUAraAudioSource";
            _DAT_02708968 = 0x138;
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
          cVar4 = FUN_00e8da30();
          pplVar7 = &local_40;
          if (cVar4 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar2 = (longlong *)unaff_RDI[9];
      plVar1 = *pplVar7;
      if (plVar2 != plVar1) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar1 == (longlong *)0x0) {
            unaff_RDI[9] = 0;
          }
          else {
            FUN_00d50b00();
            plVar2 = (longlong *)unaff_RDI[9];
            unaff_RDI[9] = (longlong)*pplVar7;
          }
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
          unaff_RDI[9] = (longlong)plVar1;
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = DAT_027c8380;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027c8380 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar6;
  local_58 = '\x01';
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 < 2) {
    *(undefined1 *)((longlong)unaff_RDI + 0x51) = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @008cad5c — 1396 bytes
// str: "", ""
// str: ""<null>""
// str: ""computerId=""
// str: ""channelId=""
// str: ""auxChannelId=""
// ============================================================

void FUN_008cad5c(void *param_1)

{
  longlong unaff_RDI;
  byte local_40;
  
  FUN_009ad920(param_1,0x1a);
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0091dc38();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_0091dc38();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(unaff_RDI + 0xa1) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_00925da0();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(unaff_RDI + 0xa2) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_00925da0();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(unaff_RDI + 0xa3) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0088d900();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(unaff_RDI + 0xa4) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_008d3120();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  if (*(char *)(unaff_RDI + 0xa5) == '\0') {
    FUN_009ad920();
  }
  else {
    FUN_0091dc38();
    FUN_009ad920();
    if ((local_40 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  FUN_009ad920();
  FUN_009ad920();
  FUN_00a6d1a0();
  FUN_009ad920();
  if ((local_40 & 1) != 0) {
    operator_delete(param_1);
  }
  FUN_009ad920();
  return;
}




// ============================================================
// @01697750 — 1258 bytes
// str: ""MUAraAudioModification""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01697750(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_01696b40();
  *unaff_RDI = &DAT_025f5dd8;
  unaff_RDI[10] = &DAT_025f6198;
  FUN_01697d10();
  FUN_01698010();
  FUN_01698320();
  FUN_016985a0();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  if (DAT_027c8358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c82a8 = FUN_0049c750();
      _DAT_027c8290 = "MUAraAudioModification";
      _DAT_027c8298 = 0xb8;
      _DAT_027c82a0 = FUN_0166fbe0;
      _DAT_027c82b0 = 0;
      uRam00000000027c82b8 = 0;
      _DAT_027c82c0 = 0;
      uRam00000000027c82c8 = 0;
      _DAT_027c82d0 = 0;
      uRam00000000027c82d8 = 0;
      _DAT_027c82e0 = 0;
      uRam00000000027c82e8 = 0;
      _DAT_027c82f0 = 0;
      uRam00000000027c82f8 = 0;
      _DAT_027c8300 = 0;
      uRam00000000027c8308 = 0;
      _DAT_027c8310 = 0;
      uRam00000000027c8318 = 0;
      _DAT_027c8320 = 0;
      uRam00000000027c8328 = 0;
      _DAT_027c8330 = 0;
      uRam00000000027c8338 = 0;
      _DAT_027c8340 = 0;
      _uRam00000000027c8348 = 0;
      _DAT_027c8350 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c834b == '\0') {
    FUN_01698890();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb1) = 0;
  if (DAT_027c8358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c82a8 = FUN_0049c750();
      _DAT_027c8290 = "MUAraAudioModification";
      _DAT_027c8298 = 0xb8;
      _DAT_027c82a0 = FUN_0166fbe0;
      _DAT_027c82b0 = 0;
      uRam00000000027c82b8 = 0;
      _DAT_027c82c0 = 0;
      uRam00000000027c82c8 = 0;
      _DAT_027c82d0 = 0;
      uRam00000000027c82d8 = 0;
      _DAT_027c82e0 = 0;
      uRam00000000027c82e8 = 0;
      _DAT_027c82f0 = 0;
      uRam00000000027c82f8 = 0;
      _DAT_027c8300 = 0;
      uRam00000000027c8308 = 0;
      _DAT_027c8310 = 0;
      uRam00000000027c8318 = 0;
      _DAT_027c8320 = 0;
      uRam00000000027c8328 = 0;
      _DAT_027c8330 = 0;
      uRam00000000027c8338 = 0;
      _DAT_027c8340 = 0;
      _uRam00000000027c8348 = 0;
      _DAT_027c8350 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c834b == '\0') {
    FUN_01698a00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb2) = 0;
  if (DAT_027c8358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c82a8 = FUN_0049c750();
      _DAT_027c8290 = "MUAraAudioModification";
      _DAT_027c8298 = 0xb8;
      _DAT_027c82a0 = FUN_0166fbe0;
      _DAT_027c82b0 = 0;
      uRam00000000027c82b8 = 0;
      _DAT_027c82c0 = 0;
      uRam00000000027c82c8 = 0;
      _DAT_027c82d0 = 0;
      uRam00000000027c82d8 = 0;
      _DAT_027c82e0 = 0;
      uRam00000000027c82e8 = 0;
      _DAT_027c82f0 = 0;
      uRam00000000027c82f8 = 0;
      _DAT_027c8300 = 0;
      uRam00000000027c8308 = 0;
      _DAT_027c8310 = 0;
      uRam00000000027c8318 = 0;
      _DAT_027c8320 = 0;
      uRam00000000027c8328 = 0;
      _DAT_027c8330 = 0;
      uRam00000000027c8338 = 0;
      _DAT_027c8340 = 0;
      _uRam00000000027c8348 = 0;
      _DAT_027c8350 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c834b == '\0') {
    FUN_01698b70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb3) = 0;
  if (DAT_027c8358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c82a8 = FUN_0049c750();
      _DAT_027c8290 = "MUAraAudioModification";
      _DAT_027c8298 = 0xb8;
      _DAT_027c82a0 = FUN_0166fbe0;
      _DAT_027c82b0 = 0;
      uRam00000000027c82b8 = 0;
      _DAT_027c82c0 = 0;
      uRam00000000027c82c8 = 0;
      _DAT_027c82d0 = 0;
      uRam00000000027c82d8 = 0;
      _DAT_027c82e0 = 0;
      uRam00000000027c82e8 = 0;
      _DAT_027c82f0 = 0;
      uRam00000000027c82f8 = 0;
      _DAT_027c8300 = 0;
      uRam00000000027c8308 = 0;
      _DAT_027c8310 = 0;
      uRam00000000027c8318 = 0;
      _DAT_027c8320 = 0;
      uRam00000000027c8328 = 0;
      _DAT_027c8330 = 0;
      uRam00000000027c8338 = 0;
      _DAT_027c8340 = 0;
      _uRam00000000027c8348 = 0;
      _DAT_027c8350 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c834b == '\0') {
    FUN_01698ce0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb4) = 0;
  if (DAT_027c8358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c82a8 = FUN_0049c750();
      _DAT_027c8290 = "MUAraAudioModification";
      _DAT_027c8298 = 0xb8;
      _DAT_027c82a0 = FUN_0166fbe0;
      _DAT_027c82b0 = 0;
      uRam00000000027c82b8 = 0;
      _DAT_027c82c0 = 0;
      uRam00000000027c82c8 = 0;
      _DAT_027c82d0 = 0;
      uRam00000000027c82d8 = 0;
      _DAT_027c82e0 = 0;
      uRam00000000027c82e8 = 0;
      _DAT_027c82f0 = 0;
      uRam00000000027c82f8 = 0;
      _DAT_027c8300 = 0;
      uRam00000000027c8308 = 0;
      _DAT_027c8310 = 0;
      uRam00000000027c8318 = 0;
      _DAT_027c8320 = 0;
      uRam00000000027c8328 = 0;
      _DAT_027c8330 = 0;
      uRam00000000027c8338 = 0;
      _DAT_027c8340 = 0;
      _uRam00000000027c8348 = 0;
      _DAT_027c8350 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c834b == '\0') {
    FUN_01698e50();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @016b76f0 — 1241 bytes
// str: ""MUAraAudioPlaybackRegion""
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b7aad) */
/* WARNING: Removing unreachable block (ram,0x016b7ab6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_016b76f0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar9 = FUN_00da7190();
  if ((unaff_RDI == (longlong *)0x0) ||
     (cVar1 = FUN_0168a120(), uVar9 = extraout_XMM0_Da, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar9,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        local_50 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Da_00,"call required from document main thread");
        }
        goto LAB_016b7873;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (DAT_02802f60 != (undefined8 *)0x0) {
          local_50 = (longlong *)0x0;
          if ((code *)*DAT_02802f60 != (code *)0x0) {
            (*(code *)*DAT_02802f60)
                      (extraout_XMM0_Da_01,"documentController->isHostEditingDocument()");
            local_50 = (longlong *)0x0;
          }
          goto LAB_016b7873;
        }
      }
      else {
        FUN_01689520();
        pVar6 = (pthread_key_t)param_1;
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          uVar9 = FUN_00d23310();
          pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)
                      (uVar9,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_0164e2c0();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (local_50 == unaff_RDI) {
          if ((DAT_028ad860 == 0) || (DAT_028ad869 == '\0')) {
            FUN_00e8cb50();
            if (DAT_028ad860 == 0) {
              if ((DAT_026f9a88 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
                _DAT_026f99d8 = FUN_00274820();
                _DAT_026f99c0 = "MUAraAudioPlaybackRegion";
                _DAT_026f99c8 = 0xb0;
                pVar6 = 0x275d40;
                _DAT_026f99d0 = FUN_00275d40;
                _DAT_026f99e0 = 0;
                uRam00000000026f99e8 = 0;
                _DAT_026f99f0 = 0;
                _DAT_026f9a68 = 0;
                uRam00000000026f9a70 = 0;
                _DAT_026f9a78 = 0;
                DAT_026f9a7a = 1;
                _DAT_026f99f8 = 0;
                uRam00000000026f9a00 = 0;
                _DAT_026f9a08 = 0;
                uRam00000000026f9a10 = 0;
                _DAT_026f9a18 = 0;
                uRam00000000026f9a20 = 0;
                _DAT_026f9a28 = 0;
                uRam00000000026f9a30 = 0;
                _DAT_026f9a38 = 0;
                uRam00000000026f9a40 = 0;
                _DAT_026f9a48 = 0;
                uRam00000000026f9a50 = 0;
                _DAT_026f9a58 = 0;
                uRam00000000026f9a60 = 0;
                DAT_026f9a83 = 0;
                _DAT_026f9a7b = 0;
                ___cxa_guard_release();
              }
              lVar4 = FUN_00e86210();
              lVar5 = DAT_028ad860;
              if (DAT_028ad860 != lVar4) {
                if (lVar4 != 0) {
                  FUN_00d50b00();
                }
                DAT_028ad860 = lVar4;
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
              }
              if ((lVar4 != 0) && (DAT_028ad868 == '\0')) {
                DAT_028ad868 = '\x01';
                FUN_00e8cb90();
              }
              DAT_028ad869 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028ad869 = '\x01';
              FUN_00e8cb70();
            }
          }
          FUN_00c811e0();
          if ((((local_48[0] == '\0') && (local_50 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar6);
          plVar8 = local_50;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar8 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x18))();
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_01653e10();
          FUN_016b6bb0(uVar9,&stack0xffffffffffffff68);
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_016b7873;
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar9,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  local_50 = (longlong *)0x0;
LAB_016b7873:
  FUN_00da71b0();
  return local_50;
}




// ============================================================
// @01673220 — 1228 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01673298) */
/* WARNING: Removing unreachable block (ram,0x016732a1) */
/* WARNING: Removing unreachable block (ram,0x01673328) */
/* WARNING: Removing unreachable block (ram,0x01673331) */

ulonglong FUN_01673220(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *plVar10;
  ulonglong uVar11;
  longlong local_d0;
  char local_c8;
  longlong local_78;
  char local_70;
  uint local_3c;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01713cc0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  lVar9 = *unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar9 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if ((*(int *)(*(longlong *)(lVar9 + 0x60) + 0xc) != 0) && (*(int *)(local_78 + 0xc) != 0)) {
    uVar7 = 0;
    FUN_016738f0(0,FUN_01673990);
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    lVar9 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
    if (pvVar3 != (void *)0x0) {
      lVar9 = *unaff_RSI;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x60);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    iVar1 = *(int *)(lVar9 + 0xc);
    iVar2 = *(int *)(local_78 + 0xc);
    if (iVar1 == iVar2) {
      if (0 < *(int *)(local_78 + 0xc)) {
        lVar4 = 0;
        do {
          plVar10 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar4 * 8);
          lVar6 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar4 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          lVar6 = *(longlong *)(lVar6 + 0x50);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar10 + 0x370))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(local_78 + 0xc));
      }
      uVar7 = FUN_01714b60();
      local_3c = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    else {
      local_3c = (uint)CONCAT71((int7)((ulonglong)local_78 >> 8),iVar2 <= iVar1);
      if (iVar1 != 0) {
        if (0 < *(int *)(local_78 + 0xc)) {
          lVar4 = 0;
          do {
            plVar10 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar4 * 8);
            FUN_016727d0();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
                goto LAB_016735c1;
              }
LAB_01673530:
              local_3c = 0;
            }
            else {
              if (local_d0 == 0) goto LAB_01673530;
LAB_016735c1:
              pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
              if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
              if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                lVar6 = *(longlong *)(local_d0 + 0x50);
              }
              else {
                lVar6 = *(longlong *)
                         (*(longlong *)
                           (local_d0 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x50)
                ;
              }
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar10 + 0x370))();
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < *(int *)(local_78 + 0xc));
        }
        FUN_01714b60();
      }
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
    uVar8 = (ulonglong)local_3c;
    if (iVar1 == iVar2) goto LAB_016736d9;
  }
  uVar11 = uVar8 & 0xffffff01;
LAB_016736d9:
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}




// ============================================================
// @016727d0 — 1209 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01672b05) */
/* WARNING: Removing unreachable block (ram,0x01672b11) */
/* WARNING: Removing unreachable block (ram,0x01672bf3) */
/* WARNING: Removing unreachable block (ram,0x01672bfc) */
/* WARNING: Removing unreachable block (ram,0x01672b1f) */
/* WARNING: Removing unreachable block (ram,0x01672b2f) */

longlong * FUN_016727d0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  longlong local_60;
  char local_58;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025f82c0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_012c8fb0();
  pvVar5 = _pthread_getspecific(param_1);
  puVar7 = puVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(puVar7 + 7) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[8];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[8];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672932;
      }
      FUN_00d50b00();
      lVar1 = puVar7[8];
      puVar7[8] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01672932:
      puVar7[8] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = puVar4[9];
    puVar7 = puVar4;
  }
  else {
    puVar7 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = puVar7[9];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01672a11;
      }
      FUN_00d50b00();
      lVar1 = puVar7[9];
      puVar7[9] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01672a11:
      puVar7[9] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *unaff_RSI;
  if (lVar6 == 0) {
LAB_01672b74:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_01677860();
        goto LAB_01672b74;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_01672e10();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_01677860();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)(int)lVar8 * 8);
        uVar2 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          uVar2 = FUN_00d50b00();
        }
        iVar3 = FUN_01672e10(uVar2,0);
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_01677860();
          goto joined_r0x01672c87;
        }
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_01677860();
    }
  }
joined_r0x01672c87:
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01675080 — 1188 bytes
// ============================================================

uint FUN_01675080(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_0170f680();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    iVar2 = FUN_0170f680();
  }
  else {
    iVar2 = FUN_0170f680();
  }
  uVar3 = 0xffffffff;
  if (iVar2 <= iVar1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0170f680();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      iVar2 = FUN_0170f680();
    }
    else {
      iVar2 = FUN_0170f680();
    }
    uVar3 = 1;
    if (iVar1 <= iVar2) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f570();
      if (local_40 == (longlong *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = (**(code **)(*local_40 + 0x58))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f6e0();
      if (local_40 == (longlong *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = 0xffffffff;
        if (*(uint *)(local_50 + 0xc) <= *(uint *)((longlong)local_40 + 0xc)) {
          uVar3 = (uint)(*(uint *)(local_50 + 0xc) < *(uint *)((longlong)local_40 + 0xc));
        }
        FUN_00d50b20();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}




// ============================================================
// @01673990 — 1188 bytes
// ============================================================

uint FUN_01673990(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_012c8fb0();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    iVar2 = FUN_012c8fb0();
  }
  else {
    iVar2 = FUN_012c8fb0();
  }
  uVar3 = 0xffffffff;
  if (iVar2 <= iVar1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_012c8fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      iVar2 = FUN_012c8fb0();
    }
    else {
      iVar2 = FUN_012c8fb0();
    }
    uVar3 = 1;
    if (iVar1 <= iVar2) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f50();
      if (local_40 == (longlong *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8f50();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = (**(code **)(*local_40 + 0x58))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8fc0();
      if (local_40 == (longlong *)0x0) {
        bVar6 = false;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        bVar6 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar6) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c8fc0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        uVar3 = 0xffffffff;
        if (*(uint *)(local_50 + 0xc) <= *(uint *)((longlong)local_40 + 0xc)) {
          uVar3 = (uint)(*(uint *)(local_50 + 0xc) < *(uint *)((longlong)local_40 + 0xc));
        }
        FUN_00d50b20();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}




// ============================================================
// @01671da0 — 1176 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016720b5) */
/* WARNING: Removing unreachable block (ram,0x016720c1) */
/* WARNING: Removing unreachable block (ram,0x016721a3) */
/* WARNING: Removing unreachable block (ram,0x016721ac) */
/* WARNING: Removing unreachable block (ram,0x016720cf) */
/* WARNING: Removing unreachable block (ram,0x016720df) */

longlong * FUN_01671da0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong local_60;
  char local_58;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_01676840();
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_0170f680();
  pvVar5 = _pthread_getspecific(param_1);
  plVar7 = plVar4;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(plVar7 + 8) = uVar2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f570();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[9];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[9];
  }
  if (lVar6 != local_60) {
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671ee1;
      }
      FUN_00d50b00();
      lVar1 = plVar7[9];
      plVar7[9] = local_60;
      lVar6 = local_60;
    }
    else {
      local_58 = '\0';
      lVar8 = local_60;
LAB_01671ee1:
      plVar7[9] = lVar8;
      lVar1 = lVar6;
      lVar6 = lVar8;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f6e0();
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = plVar4[10];
    plVar7 = plVar4;
  }
  else {
    plVar7 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    lVar6 = plVar7[10];
  }
  if (lVar6 != local_60) {
    lVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        lVar8 = 0;
        goto LAB_01671fc0;
      }
      FUN_00d50b00();
      lVar1 = plVar7[10];
      plVar7[10] = local_60;
    }
    else {
      local_58 = '\0';
LAB_01671fc0:
      plVar7[10] = lVar8;
      lVar1 = lVar6;
    }
    lVar6 = lVar8;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_60;
    }
  }
  if ((local_58 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *unaff_RSI;
  if (lVar6 == 0) {
LAB_01672124:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) <= (int)lVar8) {
        FUN_016777f0();
        goto LAB_01672124;
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      iVar3 = FUN_016723c0();
      lVar8 = lVar8 + 1;
    } while (iVar3 == -1);
    if (iVar3 == 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_016777f0();
    }
    else {
      if (*(int *)(lVar6 + 0xc) != (int)lVar8) {
        lVar6 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (longlong)(int)lVar8 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        iVar3 = FUN_016723c0();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar3 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_016777f0();
          goto joined_r0x01672237;
        }
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_016777f0();
    }
  }
joined_r0x01672237:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01661d30 — 1146 bytes
// ============================================================

ulonglong FUN_01661d30(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  longlong local_38;
  
  local_3c = param_2;
  cVar2 = FUN_01733c10();
  if (cVar2 == '\0') {
    bVar10 = *(longlong *)(unaff_RDI + 0xf0) != 0;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(unaff_RDI + 0xe9) = bVar10;
  FUN_0184a0c0();
  lVar8 = *unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  if (lVar8 != 0) {
    FUN_00d50b00();
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined8 *)(unaff_RDI + 200) = *(undefined8 *)(lVar4 + 200);
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined8 *)(unaff_RDI + 0xd8) = *(undefined8 *)(lVar4 + 0xd8);
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar1 = *(int *)(lVar4 + 0xe4);
    *(int *)(unaff_RDI + 0xe4) = iVar1;
    if (((*(double *)(unaff_RDI + 0xc0) != *(double *)(unaff_RDI + 200)) ||
        (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(*(double *)(unaff_RDI + 200)))) ||
       (param_1 = *(longlong *)(unaff_RDI + 0xd0), param_1 != *(longlong *)(unaff_RDI + 0xd8))) {
      *(undefined1 *)(unaff_RDI + 0xe8) = 1;
    }
    else {
      bVar10 = *(int *)(unaff_RDI + 0xe0) != iVar1;
      *(bool *)(unaff_RDI + 0xe8) = bVar10;
      if (!bVar10) {
        local_58 = '\0';
        local_60 = lVar8;
        cVar2 = FUN_01316d80();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)param_1;
        if (cVar2 != '\0') {
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          if (*(longlong *)(lVar4 + 0xf0) != 0) {
            *(undefined8 *)(lVar4 + 0xf0) = 0;
            FUN_00d50b20();
          }
          FUN_01660e50();
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          *(undefined1 *)(unaff_RDI + 0x106) = *(undefined1 *)(lVar4 + 0x106);
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar4 + 0x120);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          lVar5 = *unaff_RSI;
          local_50 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *unaff_RSI;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar5 + 0x108);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_78 = 1;
          lVar5 = *unaff_RSI;
          local_80 = lVar4;
          local_38 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *unaff_RSI;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar5 + 0x110);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_68 = 1;
          plVar7 = &local_80;
          local_70 = lVar4;
          FUN_01662280(plVar7,&local_50,&local_70);
          lVar5 = local_38;
          pVar6 = (pthread_key_t)plVar7;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0166213b;
        }
      }
    }
  }
  pVar6 = (pthread_key_t)param_1;
  uVar9 = 0;
LAB_0166213b:
  if ((char)local_3c != '\0') {
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(unaff_RDI + 0x104) = *(undefined1 *)(lVar4 + 0x104);
  }
  FUN_01733c40();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}




// ============================================================
// @01661390 — 1102 bytes
// str: ""GNList""
// str: ""MUAraAudioSource""
// str: ""_audioModifications""
// str: ""MUAraAudioModification""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016613c1) */
/* WARNING: Removing unreachable block (ram,0x016613ca) */
/* WARNING: Removing unreachable block (ram,0x0166147a) */
/* WARNING: Removing unreachable block (ram,0x01661483) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01661390(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_00d61ea0();
  if ((DAT_0272a630 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_02708978 = FUN_0049c750();
    _DAT_02708960 = "MUAraAudioSource";
    _DAT_02708968 = 0x138;
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
    uVar8 = ___cxa_guard_release();
  }
  lVar6 = FUN_00e85ef0(uVar8,1);
  if (lVar6 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
  if (cVar4 != '\0') {
    local_50 = plVar3;
    local_48 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_50);
    plVar2 = local_40;
    if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        if ((DAT_027c8358 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          _DAT_027c82a8 = FUN_0049c750();
          _DAT_027c8290 = "MUAraAudioModification";
          _DAT_027c8298 = 0xb8;
          _DAT_027c82a0 = FUN_0166fbe0;
          _DAT_027c82b0 = 0;
          uRam00000000027c82b8 = 0;
          _DAT_027c82c0 = 0;
          uRam00000000027c82c8 = 0;
          _DAT_027c82d0 = 0;
          uRam00000000027c82d8 = 0;
          _DAT_027c82e0 = 0;
          uRam00000000027c82e8 = 0;
          _DAT_027c82f0 = 0;
          uRam00000000027c82f8 = 0;
          _DAT_027c8300 = 0;
          uRam00000000027c8308 = 0;
          _DAT_027c8310 = 0;
          uRam00000000027c8318 = 0;
          _DAT_027c8320 = 0;
          uRam00000000027c8328 = 0;
          _DAT_027c8330 = 0;
          uRam00000000027c8338 = 0;
          _DAT_027c8340 = 0;
          uRam00000000027c8348 = 0;
          _DAT_027c8350 = 0;
          ___cxa_guard_release();
        }
        cVar4 = FUN_00e8da30();
        pplVar7 = &local_40;
        if (cVar4 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    plVar2 = *pplVar7;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar2 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0xb0) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0xb0);
          *(longlong **)(unaff_RDI + 0xb0) = *pplVar7;
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
        *(longlong **)(unaff_RDI + 0xb0) = plVar2;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @016b4e90 — 1067 bytes
// str: ""MUAraAudioModification""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b50cf) */
/* WARNING: Removing unreachable block (ram,0x016b50d8) */
/* WARNING: Removing unreachable block (ram,0x016b5027) */
/* WARNING: Removing unreachable block (ram,0x016b5030) */
/* WARNING: Removing unreachable block (ram,0x016b51e1) */
/* WARNING: Removing unreachable block (ram,0x016b51ea) */
/* WARNING: Removing unreachable block (ram,0x016b4f8d) */
/* WARNING: Removing unreachable block (ram,0x016b4f96) */
/* WARNING: Removing unreachable block (ram,0x016b518f) */
/* WARNING: Removing unreachable block (ram,0x016b5198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b4e90(pthread_key_t param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028ad850 == 0) || (DAT_028ad859 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad850 == 0) {
      if ((DAT_027c8358 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
        _DAT_027c82a8 = FUN_0049c750();
        _DAT_027c8290 = "MUAraAudioModification";
        _DAT_027c8298 = 0xb8;
        param_1 = 0x166fbe0;
        _DAT_027c82a0 = FUN_0166fbe0;
        _DAT_027c82b0 = 0;
        uRam00000000027c82b8 = 0;
        _DAT_027c82c0 = 0;
        uRam00000000027c82c8 = 0;
        _DAT_027c82d0 = 0;
        uRam00000000027c82d8 = 0;
        _DAT_027c82e0 = 0;
        uRam00000000027c82e8 = 0;
        _DAT_027c82f0 = 0;
        uRam00000000027c82f8 = 0;
        _DAT_027c8300 = 0;
        uRam00000000027c8308 = 0;
        _DAT_027c8310 = 0;
        uRam00000000027c8318 = 0;
        _DAT_027c8320 = 0;
        uRam00000000027c8328 = 0;
        _DAT_027c8330 = 0;
        uRam00000000027c8338 = 0;
        _DAT_027c8340 = 0;
        uRam00000000027c8348 = 0;
        _DAT_027c8350 = 0;
        ___cxa_guard_release();
      }
      lVar2 = FUN_00e86210();
      lVar4 = DAT_028ad850;
      if (DAT_028ad850 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        DAT_028ad850 = lVar2;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if ((lVar2 != 0) && (DAT_028ad858 == '\0')) {
        DAT_028ad858 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028ad859 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad859 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c811e0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0164df60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  FUN_0167ab60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01538000();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_016b4a70();
  if (*param_3 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016501d0();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_016b51f7;
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) goto LAB_016b51f7;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650af0();
    FUN_00d50b20();
  }
LAB_016b51f7:
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01662650 — 1004 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016629ac) */
/* WARNING: Removing unreachable block (ram,0x016629b9) */
/* WARNING: Removing unreachable block (ram,0x01662811) */
/* WARNING: Removing unreachable block (ram,0x0166281a) */

longlong * FUN_01662650(undefined8 param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar3 = local_68;
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  if (lVar5 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    goto LAB_01662962;
  }
  if (*(longlong *)(unaff_RSI + 0xf0) != 0) {
    cVar1 = FUN_01667df0();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124e000();
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a500();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b7f0();
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124e100();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        goto LAB_0166281f;
      }
    }
    else if (local_68 != 0) {
LAB_0166281f:
      local_60 = '\0';
      local_68 = 0;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          local_68 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
          cVar1 = FUN_00e34240();
          if ((cVar1 == '\0') && (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
            FUN_013fb3a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pVar4 = (pthread_key_t)param_1;
            if (local_40 != 0) {
              FUN_013fb3a0();
              pvVar2 = _pthread_getspecific(pVar4);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b7f0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              FUN_00540b60();
              FUN_00d50b20();
              return unaff_RDI;
            }
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
      }
      FUN_00540b60();
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  lVar3 = lVar5;
  if (lVar5 != local_68) {
    lVar3 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar3 = 0;
        goto LAB_016628e8;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RSI + 0x120);
      *(longlong *)(unaff_RSI + 0x120) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016628e8:
      *(longlong *)(unaff_RSI + 0x120) = lVar3;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar3 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar5 = *(longlong *)(unaff_RSI + 0x120);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
LAB_01662962:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @016b9550 — 996 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""regionSequence->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b97ef) */
/* WARNING: Removing unreachable block (ram,0x016b9798) */
/* WARNING: Removing unreachable block (ram,0x016b97a1) */
/* WARNING: Removing unreachable block (ram,0x016b97f8) */

void FUN_016b9550(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_012c91b0(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c89b0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c81e0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8a40();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c8a40();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_88 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b66d0 — 943 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioModification->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b6926) */
/* WARNING: Removing unreachable block (ram,0x016b692f) */

void FUN_016b66d0(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01538130();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @0078b1d0 — 937 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0078b432) */
/* WARNING: Removing unreachable block (ram,0x0078b43e) */
/* WARNING: Removing unreachable block (ram,0x0078b44c) */
/* WARNING: Removing unreachable block (ram,0x0078b458) */
/* WARNING: Removing unreachable block (ram,0x0078b4b4) */
/* WARNING: Removing unreachable block (ram,0x0078b4c1) */

undefined8 * FUN_0078b1d0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  undefined8 local_d8;
  longlong local_c8;
  char local_c0;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_01f27fe0();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_000c4290();
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (longlong *)0x0) {
      if (0 < *(int *)((longlong)local_70 + 0xc)) {
        iVar4 = 0;
        do {
          FUN_0051e6f0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((longlong)local_70 + 0xc));
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else if (*(longlong *)(unaff_RSI + 0x90) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    local_d8 = *(undefined8 *)(unaff_RSI + 0x90);
    FUN_00083ea0(2,&local_d8);
    FUN_0078b920();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0078b830();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01672e10 — 909 bytes
// ============================================================

uint FUN_01672e10(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = *unaff_RDI;
  lVar11 = *unaff_RSI;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x38);
  pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
  pVar9 = (pthread_key_t)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x38);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x38);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x38);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x38);
    }
    else {
      iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x38);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x40);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x40);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x40);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(longlong **)(lVar8 + 0x40);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(longlong *)(lVar11 + 0x40);
          }
          else {
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x40);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x48);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(longlong *)(lVar11 + 0x48);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}




// ============================================================
// @016723c0 — 909 bytes
// ============================================================

uint FUN_016723c0(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = *unaff_RDI;
  lVar11 = *unaff_RSI;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x40);
  pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
  pVar9 = (pthread_key_t)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x40);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x40);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x40);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x40);
    }
    else {
      iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x40);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(longlong **)(lVar8 + 0x48);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(longlong *)(lVar11 + 0x48);
          }
          else {
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x48);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x50);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x50);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x50);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x50);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x50);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(longlong *)(lVar11 + 0x50);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}




// ============================================================
// @016b5830 — 876 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioModification->getDocumentController() == documentController""
// ============================================================

longlong FUN_016b5830(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  uVar5 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        local_60 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b59cc;
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if (DAT_02802f60 != (undefined8 *)0x0) {
          local_60 = 0;
          if ((code *)*DAT_02802f60 != (code *)0x0) {
            (*(code *)*DAT_02802f60)();
            local_60 = 0;
          }
          goto LAB_016b59cc;
        }
      }
      else {
        FUN_01689520();
        pVar4 = (pthread_key_t)uVar5;
        if (*(int *)(local_50 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_58[0]);
          pcVar6 = local_38;
          if (local_58[0] != '\0') {
            pcVar6 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar6 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 == unaff_RDI) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            lVar1 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_016b4e90(param_1,param_2,&stack0xffffffffffffff70);
            if ((local_58[0] == '\0') && (local_60 != 0)) {
              FUN_00d50b00();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            goto LAB_016b59cc;
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  local_60 = 0;
LAB_016b59cc:
  FUN_00da71b0();
  return local_60;
}




// ============================================================
// @016b8970 — 873 bytes
// str: ""properties != NULL""
// str: ""musicalContext""
// str: ""properties->structSize >= ARA::kARARegionSequencePropertiesMinSize""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b8c71) */
/* WARNING: Removing unreachable block (ram,0x016b89f6) */
/* WARNING: Removing unreachable block (ram,0x016b89ff) */
/* WARNING: Removing unreachable block (ram,0x016b8c7a) */

void FUN_016b8970(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *unaff_RSI;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b8af6:
                    /* WARNING: Could not recover jumptable at 0x016b8b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*unaff_RSI < 0x1c) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARARegionSequencePropertiesMinSize";
    goto LAB_016b8af6;
  }
  if (*(longlong *)((longlong)unaff_RSI + 0x14) == 0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "musicalContext";
    goto LAB_016b8af6;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  uVar1 = unaff_RSI[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b8b2f;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b8b2f;
    }
  }
  local_50 = 0;
LAB_016b8b2f:
  FUN_012c7b60();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7e50();
  if ((*unaff_RSI < 0x1d) || (*(longlong *)((longlong)unaff_RSI + 0x1c) == 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c7f30();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar2 = *(undefined4 **)((longlong)unaff_RSI + 0x1c);
    FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012c7f30();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @016b84b0 — 873 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""playbackRegion->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b8676) */
/* WARNING: Removing unreachable block (ram,0x016b8659) */
/* WARNING: Removing unreachable block (ram,0x016b8662) */
/* WARNING: Removing unreachable block (ram,0x016b866d) */
/* WARNING: Removing unreachable block (ram,0x016b8695) */
/* WARNING: Removing unreachable block (ram,0x016b869e) */

void FUN_016b84b0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        FUN_0168a900();
        FUN_01689980();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654660();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
        cVar1 = FUN_0167b260();
        if (cVar1 == '\0') {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          FUN_01689520();
          if (*(int *)(local_98 + 0xc) != 0) {
            FUN_01689520();
            FUN_00d23310();
            pcVar3 = local_30;
            if (local_40[0] != '\0') {
              pcVar3 = local_40;
            }
            local_30[0] = local_40[0];
            *pcVar3 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
            if ((local_30[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b7d40 — 806 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""playbackRegion->getDocumentController() == documentController""
// ============================================================

void FUN_016b7d40(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01654a00();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657380();
            if (local_48[0] == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48[0] = '\0';
            }
            FUN_016b6bb0();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b6000 — 778 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioModification->getDocumentController() == documentController""
// str: ""!audioModification->isDeactivatedForUndoHistory()""
// ============================================================

undefined1 FUN_016b6000(pthread_key_t param_1)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong local_40;
  char local_38;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((unaff_RSI == (longlong *)0x0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01650890();
        if (cVar1 == '\0') {
          cVar1 = FUN_0167b260();
          if (cVar1 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0166b8c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(param_1);
            plVar5 = unaff_RSI;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar5 = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar5 + 0x3a0))();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            unaff_RSI = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          uVar2 = (**(code **)(*unaff_RSI + 0x398))();
        }
        else {
          uVar2 = 1;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @005db8e0 — 762 bytes
// str: ""_transferStartTime""
// str: ""_transferEndTime""
// str: ""_userStartTime""
// str: ""_userEndTime""
// str: ""double""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005db8e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_024e3cd0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d118 = FUN_0032c070();
        _DAT_0271d110 = "_transferStartTime";
        _DAT_0271d120 = 0;
        _DAT_0271d128 = 0x6400;
        _DAT_0271d130 = "double";
        _DAT_0271d138 = 0;
        uRam000000000271d140 = 0;
        _DAT_0271d148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d160 = FUN_0032c070();
        _DAT_0271d158 = "_transferEndTime";
        _DAT_0271d168 = 0;
        _DAT_0271d170 = 0x6400;
        _DAT_0271d178 = "double";
        _DAT_0271d180 = 0;
        uRam000000000271d188 = 0;
        _DAT_0271d190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d1e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d1a8 = FUN_0032c070();
        _DAT_0271d1a0 = "_userStartTime";
        _DAT_0271d1b0 = 0;
        _DAT_0271d1b8 = 0x6400;
        _DAT_0271d1c0 = "double";
        _DAT_0271d1c8 = 0;
        uRam000000000271d1d0 = 0;
        _DAT_0271d1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_0032c070();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0271d228 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0271d1f0 = FUN_0032c070();
        _DAT_0271d1e8 = "_userEndTime";
        _DAT_0271d1f8 = 0;
        _DAT_0271d200 = 0x6400;
        _DAT_0271d208 = "double";
        _DAT_0271d210 = 0;
        uRam000000000271d218 = 0;
        _DAT_0271d220 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @016b5480 — 754 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

longlong FUN_016b5480(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar6 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b561c;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (DAT_02802f60 != (undefined8 *)0x0) {
          lVar6 = 0;
          if ((code *)*DAT_02802f60 != (code *)0x0) {
            (*(code *)*DAT_02802f60)();
          }
          goto LAB_016b561c;
        }
      }
      else {
        FUN_01689520();
        pVar3 = (pthread_key_t)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          lVar6 = local_50;
          pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          lVar6 = local_50;
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == unaff_RDI) {
            local_80 = 0;
            local_78 = 0;
            FUN_016b4e90(param_1,param_2,&local_80);
            lVar6 = local_50;
            if (local_48[0] == '\0') {
              if (local_50 == 0) goto LAB_016b561c;
              FUN_00d50b00();
            }
            else if (local_50 == 0) goto LAB_016b561c;
            FUN_00d50b20();
            goto LAB_016b561c;
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  lVar6 = 0;
LAB_016b561c:
  FUN_00da71b0();
  return lVar6;
}




// ============================================================
// @007886a0 — 750 bytes
// str: ""%@.txt""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0078895c) */
/* WARNING: Removing unreachable block (ram,0x00788965) */

undefined4 FUN_007886a0(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  
  if (((longlong *)*unaff_RDI == (longlong *)0x0) ||
     ((cVar3 = (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))(), cVar3 == '\0' &&
      (cVar3 = (**(code **)(*(longlong *)*unaff_RDI + 0x428))(), cVar3 == '\0')))) {
    uVar4 = 0;
  }
  else {
    bVar1 = false;
    local_40 = (longlong *)0x0;
    do {
      plVar5 = (longlong *)*unaff_RDI;
      FUN_00d9bb60();
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      (**(code **)(*plVar5 + 0x400))();
      if (local_60 == local_40) {
        if ((!bVar1) && (local_60 != (longlong *)0x0)) {
          plVar5 = local_40;
          if (local_58 != '\0') goto LAB_00788813;
          FUN_00d50b00();
LAB_00788870:
          bVar1 = true;
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar1) {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
            local_40 = local_60;
            goto LAB_00788870;
          }
          local_40 = local_60;
          bVar1 = true;
        }
        else {
          local_40 = local_60;
          bVar1 = true;
        }
      }
      else {
        plVar5 = local_60;
        if ((bVar1) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00788813:
        local_58 = '\0';
        local_40 = plVar5;
        bVar1 = true;
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = (**(code **)(*local_40 + 0x398))();
      lVar2 = DAT_02729640;
    } while (cVar3 != '\0');
    if (DAT_02729640 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90550();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      (**(code **)(*local_40 + 0x408))();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @007894f0 — 730 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00789762) */
/* WARNING: Removing unreachable block (ram,0x0078976f) */
/* WARNING: Removing unreachable block (ram,0x007897b4) */
/* WARNING: Removing unreachable block (ram,0x007897c1) */

void FUN_007894f0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *unaff_RDI;
  int iVar2;
  bool bVar3;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x628))();
  if (local_78 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_40 == 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_004f9670();
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7990();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00789930 — 730 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00789ba2) */
/* WARNING: Removing unreachable block (ram,0x00789baf) */
/* WARNING: Removing unreachable block (ram,0x00789bf4) */
/* WARNING: Removing unreachable block (ram,0x00789c01) */

void FUN_00789930(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *unaff_RDI;
  int iVar2;
  bool bVar3;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x628))();
  if (local_78 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_40 == 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_004f9670();
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004f7900();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01661910 — 723 bytes
// str: ""_composition""
// str: ""MUAraAudioSource""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0166193e) */
/* WARNING: Removing unreachable block (ram,0x01661947) */
/* WARNING: Removing unreachable block (ram,0x016619f6) */
/* WARNING: Removing unreachable block (ram,0x016619ff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01661910(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *unaff_RSI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_00d50f50();
  if ((DAT_0272a630 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar4 != 0)) {
    _DAT_02708978 = FUN_0049c750();
    _DAT_02708960 = "MUAraAudioSource";
    _DAT_02708968 = 0x138;
    param_1 = 0x49c720;
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
    uVar8 = ___cxa_guard_release();
  }
  lVar5 = FUN_00e85ef0(uVar8,1);
  if (lVar5 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
  if (cVar3 == '\0') goto LAB_01661b1d;
  local_50 = plVar2;
  local_48 = '\0';
  pplVar7 = &local_40;
  (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_50);
  plVar1 = local_40;
  FUN_000be210();
  if (plVar1 == (longlong *)0x0) {
LAB_01661a57:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01661a57;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505de0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
  }
LAB_01661b1d:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00789100 — 708 bytes
// ============================================================

void FUN_00789100(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  cVar1 = (char)param_1;
  local_98 = *param_3;
  local_90 = 0;
  FUN_00788fc0(param_1,&local_98);
  lVar2 = local_40;
  pVar6 = (pthread_key_t)param_1;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  if (cVar1 == '\0') {
    if (*param_3 != 0) {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_016c2e90();
      if (1 < iVar3) {
        pvVar4 = _pthread_getspecific(pVar6);
        if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          local_48 = lVar2;
        }
        else {
          local_48 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = lVar2;
  local_80 = '\0';
  FUN_0132d960();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = DAT_027ebe30;
  if (DAT_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = lVar2;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @016b8e20 — 705 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

longlong * FUN_016b8e20(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        local_48 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_58 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar4 = local_30;
          if (local_40[0] != '\0') {
            pcVar4 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar4 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_016ae690();
        FUN_00c811e0();
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(param_1);
        plVar5 = local_48;
        if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x18))();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c7820();
        FUN_016b8970();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_016b8fdd;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        local_48 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b8fdd;
      }
    }
  }
  local_48 = (longlong *)0x0;
LAB_016b8fdd:
  FUN_00da71b0();
  return local_48;
}




// ============================================================
// @016b6360 — 703 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioModification->getDocumentController() == documentController""
// ============================================================

void FUN_016b6360(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650840();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b8170 — 701 bytes
// str: ""provided object ref is invalid""
// str: ""playbackRegion->getDocumentController() == documentController""
// str: ""headTime != NULL""
// str: ""tailTime != NULL""
// ============================================================

void FUN_016b8170(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong local_48;
  char local_40;
  
  pVar3 = (pthread_key_t)param_1;
  uVar4 = FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), uVar4 = extraout_XMM0_Qa_00, cVar1 == '\0'))
  {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01654a00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (local_48 == unaff_RDI) {
      if (param_2 == (undefined8 *)0x0) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar4,"headTime != NULL");
        }
      }
      else if (param_1 == (undefined8 *)0x0) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar4,"tailTime != NULL");
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f94c0();
        *param_2 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f9500();
        *param_1 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar4,"playbackRegion->getDocumentController() == documentController");
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @0078d680 — 700 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0078d903) */
/* WARNING: Removing unreachable block (ram,0x0078d910) */
/* WARNING: Removing unreachable block (ram,0x0078d7c0) */
/* WARNING: Removing unreachable block (ram,0x0078d7c9) */
/* WARNING: Removing unreachable block (ram,0x0078d74d) */
/* WARNING: Removing unreachable block (ram,0x0078d756) */
/* WARNING: Removing unreachable block (ram,0x0078d836) */
/* WARNING: Removing unreachable block (ram,0x0078d83f) */

ulonglong FUN_0078d680(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *local_40;
  char local_38;
  
  FUN_00b160d0();
  iVar2 = (**(code **)(*local_40 + 0x690))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI == 0) {
    return (ulonglong)(0 < iVar2);
  }
  if (iVar2 < 1) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return 0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return 0;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0078d7ce;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_0078d7ce:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_0078d92e;
      FUN_00d50b00();
LAB_0078d844:
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0124a860();
        if (iVar4 <= iVar3) break;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01240ab0();
        iVar1 = iVar3 + 1;
      } while (iVar5 <= iVar2);
      uVar7 = CONCAT71(0x28025,iVar4 <= iVar3);
      FUN_00d50b20();
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_0078d844;
LAB_0078d92e:
      uVar7 = 0;
    }
    FUN_00d50b20();
    goto LAB_0078d938;
  }
  uVar7 = 0;
LAB_0078d938:
  FUN_00d50b20();
  return uVar7;
}




// ============================================================
// @016b5cb0 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioModification->getDocumentController() == documentController""
// ============================================================

void FUN_016b5cb0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == unaff_RDI) {
            FUN_016b4a70();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b9200 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""regionSequence->getDocumentController() == documentController""
// ============================================================

void FUN_016b9200(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_012c91b0(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c89b0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == unaff_RDI) {
            FUN_016b8970();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @01670fa0 — 638 bytes
// str: ""_musicalContextData""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0167111b) */
/* WARNING: Removing unreachable block (ram,0x01671124) */
/* WARNING: Removing unreachable block (ram,0x016711b6) */
/* WARNING: Removing unreachable block (ram,0x016711bf) */

void FUN_01670fa0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_028ad820;
  if ((DAT_028ad820 == 0) || (DAT_028ad829 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad820 == 0) {
      FUN_00d630a0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01e33cd0();
      lVar2 = DAT_028ad820;
      if (DAT_028ad820 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = DAT_028ad820 != 0;
        DAT_028ad820 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (DAT_028ad828 == '\0')) {
        DAT_028ad828 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_016be450();
      lVar2 = FUN_00e85ef0();
      if (lVar2 == 0) {
        lVar2 = FUN_00e858c0();
        if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x28) == 0)) goto LAB_0167119a;
LAB_0167115a:
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        if (*(longlong *)(lVar2 + 0x30) != 0) goto LAB_0167115a;
LAB_0167119a:
        bVar1 = true;
      }
      FUN_00d23f50();
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = DAT_028ad820;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_016711f7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_016711f7:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00789d70 — 599 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00789fb6) */
/* WARNING: Removing unreachable block (ram,0x00789fc3) */

void FUN_00789d70(pthread_key_t param_1)

{
  void *pvVar1;
  int iVar2;
  longlong *unaff_RDI;
  bool bVar3;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x628))();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    bVar3 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      for (iVar2 = 0; iVar2 < *(int *)(local_70 + 0xc); iVar2 = iVar2 + 1) {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e44d0();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @016b9a60 — 516 bytes
// str: ""!audioSource->isDeactivatedForUndoHistory()""
// ============================================================

undefined4 FUN_016b9a60(pthread_key_t param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_016670a0();
  if (cVar1 == '\0') {
    if (DAT_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      cVar1 = (**(code **)(*local_40 + 0x390))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016676f0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (longlong *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)();
    return 0;
  }
  return 0;
}



