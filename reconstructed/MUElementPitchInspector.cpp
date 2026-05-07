// Reconstructed implementation of MUElementPitchInspector
// From MikeCore binary — reverse-engineered pseudocode

#include "MUElementPitchInspector.h"

// ============================================================
// @01ba9e60 — 2369 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01baa762) */
/* WARNING: Removing unreachable block (ram,0x01baa76b) */
/* WARNING: Removing unreachable block (ram,0x01baa590) */
/* WARNING: Removing unreachable block (ram,0x01baa59c) */
/* WARNING: Removing unreachable block (ram,0x01baa496) */
/* WARNING: Removing unreachable block (ram,0x01baa4a2) */
/* WARNING: Removing unreachable block (ram,0x01baa661) */
/* WARNING: Removing unreachable block (ram,0x01baa779) */
/* WARNING: Removing unreachable block (ram,0x01baa785) */
/* WARNING: Removing unreachable block (ram,0x01baa5d8) */
/* WARNING: Removing unreachable block (ram,0x01baa5e4) */
/* WARNING: Removing unreachable block (ram,0x01ba9ee7) */
/* WARNING: Removing unreachable block (ram,0x01ba9f10) */
/* WARNING: Removing unreachable block (ram,0x01ba9ee9) */
/* WARNING: Removing unreachable block (ram,0x01ba9f12) */

undefined8 * FUN_01ba9e60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 *puVar13;
  longlong lVar14;
  pthread_key_t pVar15;
  longlong **pplVar16;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar17;
  longlong local_108;
  char local_100;
  longlong *local_88;
  int local_70;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  pcVar6 = DAT_02572370;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puVar13 = (undefined8 *)0x0;
    bVar5 = false;
    lVar1 = *unaff_RSI;
joined_r0x01baa22b:
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto LAB_01baa79d;
    }
    lVar1 = *param_2;
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      local_50 = (longlong *)0x0;
    }
    else {
      if (*(int *)(lVar1 + 0xc) < 1) {
        bVar3 = false;
        local_50 = (longlong *)0x0;
      }
      else {
        lVar11 = 0;
        local_50 = (longlong *)0x0;
        bVar3 = false;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar11 * 8);
          local_40 = plVar2;
          FUN_0006e1c0();
          pplVar16 = (longlong **)&DAT_02802688;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x360))();
            cVar9 = FUN_00e85ea0();
            pplVar16 = &local_40;
            if (cVar9 == '\0') {
              pplVar16 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar16 != (longlong *)0x0) {
            pvVar12 = _pthread_getspecific((pthread_key_t)pplVar16);
            pVar15 = (pthread_key_t)pplVar16;
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0128c200();
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01baa3c0;
                }
              }
              else if (local_40 != (longlong *)0x0) {
LAB_01baa3c0:
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507e40();
                plVar7 = local_40;
                if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                    (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_50 == (longlong *)0x0) {
                  local_50 = (longlong *)FUN_00e8fc40();
                  FUN_00022d50();
                  (**(code **)(*local_50 + 0x18))();
                  bVar3 = true;
                }
                FUN_01baacc0();
                plVar8 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if (plVar8 == (longlong *)0x0) {
                  FUN_0039e8b0();
                  plVar2 = local_40;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01baac10();
                  if (plVar2 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                  local_40 = plVar2;
                  FUN_00d21140();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                if (plVar7 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < *(int *)(lVar1 + 0xc));
      }
      FUN_002d7220();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (bVar3) {
        *unaff_RDI = local_50;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto LAB_01baa79d;
      }
      if (local_50 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  else {
    local_88 = (longlong *)0x0;
    local_70 = -1;
    bVar3 = true;
    bVar5 = false;
    puVar13 = (undefined8 *)0x0;
    bVar4 = true;
    while( true ) {
      lVar11 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar11 * 8);
      local_40 = local_88;
      FUN_0006e1c0();
      pplVar16 = (longlong **)&DAT_02802688;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar16 = &local_40;
        if (cVar9 == '\0') {
          pplVar16 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar16 != (longlong *)0x0) {
        pvVar12 = _pthread_getspecific((pthread_key_t)pplVar16);
        pVar15 = (pthread_key_t)pplVar16;
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          plVar2 = local_40;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar10 = FUN_01326de0();
            if (iVar10 == 2) {
              bVar17 = false;
            }
            else {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar10 = FUN_01326de0();
              bVar17 = iVar10 != 4;
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar3 = bVar4;
            if (bVar17) {
              bVar3 = false;
            }
            if (puVar13 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar13 = &DAT_02572358;
              (*pcVar6)();
              bVar5 = true;
            }
            local_38 = '\0';
            local_40 = local_88;
            FUN_00d21140();
            bVar4 = bVar3;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    FUN_002d7220();
    if (!bVar3) {
      lVar1 = *unaff_RSI;
      goto joined_r0x01baa22b;
    }
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
      lVar1 = *unaff_RSI;
      goto joined_r0x01baa22b;
    }
    local_50 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*local_50 + 0x18))();
    FUN_019ac590();
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01baac10();
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01baa79d:
  if ((bVar5) && (puVar13 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01ba8330 — 1324 bytes
// ============================================================

void FUN_01ba8330(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
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
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_30;
  char local_28;
  
  FUN_01a12f60();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0258a670;
  (*DAT_0258a688)();
  puVar3 = *(undefined8 **)(unaff_RDI + 0xf0);
  if (puVar3 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xf0) = puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = DAT_027e3bc0;
  if (DAT_027e3bc0 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027e3d40;
  if (DAT_027e3d40 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027e1340;
  if (DAT_027e1340 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02576110;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*DAT_02576128)();
  lVar1 = *(longlong *)(unaff_RDI + 0xf8);
  *(undefined8 **)(unaff_RDI + 0xf8) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d48ac0();
  local_90 = DAT_02727808;
  if (DAT_02727808 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d48b20();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270b790;
  if (DAT_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_00d48c60();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02570340;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*DAT_02570358)();
  lVar1 = *(longlong *)(unaff_RDI + 0x100);
  *(undefined8 **)(unaff_RDI + 0x100) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d040c0();
  *(undefined4 *)(unaff_RDI + 0x108) = 0;
  FUN_01ba8c20();
  return;
}




// ============================================================
// @01ba7eb0 — 1110 bytes
// str: ""MUElementPitchInspector""
// str: ""handleNoteNameChanged""
// str: ""handleNoteOffsetChanged""
// str: ""handleFrequencyChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ba7eb0(void)

{
  int iVar1;
  
  if (DAT_028b5b80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02735010 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02734f60 = FUN_00335590();
          _DAT_02734f48 = "MUElementPitchInspector";
          _DAT_02734f50 = 0x110;
          _DAT_02734f58 = FUN_008317f0;
          _DAT_02734f68 = 0;
          uRam0000000002734f70 = 0;
          _DAT_02734f78 = 0;
          _DAT_02734ff0 = 0;
          uRam0000000002734ff8 = 0;
          _DAT_02735000 = 0;
          DAT_02735002 = 1;
          _DAT_02734f80 = 0;
          uRam0000000002734f88 = 0;
          _DAT_02734f90 = 0;
          uRam0000000002734f98 = 0;
          _DAT_02734fa0 = 0;
          uRam0000000002734fa8 = 0;
          _DAT_02734fb0 = 0;
          uRam0000000002734fb8 = 0;
          _DAT_02734fc0 = 0;
          uRam0000000002734fc8 = 0;
          _DAT_02734fd0 = 0;
          uRam0000000002734fd8 = 0;
          _DAT_02734fe0 = 0;
          uRam0000000002734fe8 = 0;
          DAT_0273500b = 0;
          _DAT_02735003 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5b40 = "handleNoteNameChanged";
      _DAT_028b5b48 = &DAT_02734f48;
      _DAT_028b5b50 = 0;
      _DAT_028b5b58 = &DAT_027e54d8;
      _DAT_028b5b60 = FUN_01bb3d90;
      _DAT_028b5b68 = FUN_01bae3c0;
      _DAT_028b5b70 = 0;
      uRam00000000028b5b78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5bc8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02735010 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02734f60 = FUN_00335590();
          _DAT_02734f48 = "MUElementPitchInspector";
          _DAT_02734f50 = 0x110;
          _DAT_02734f58 = FUN_008317f0;
          _DAT_02734f68 = 0;
          uRam0000000002734f70 = 0;
          _DAT_02734f78 = 0;
          _DAT_02734ff0 = 0;
          uRam0000000002734ff8 = 0;
          _DAT_02735000 = 0;
          DAT_02735002 = 1;
          _DAT_02734f80 = 0;
          uRam0000000002734f88 = 0;
          _DAT_02734f90 = 0;
          uRam0000000002734f98 = 0;
          _DAT_02734fa0 = 0;
          uRam0000000002734fa8 = 0;
          _DAT_02734fb0 = 0;
          uRam0000000002734fb8 = 0;
          _DAT_02734fc0 = 0;
          uRam0000000002734fc8 = 0;
          _DAT_02734fd0 = 0;
          uRam0000000002734fd8 = 0;
          _DAT_02734fe0 = 0;
          uRam0000000002734fe8 = 0;
          DAT_0273500b = 0;
          _DAT_02735003 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5b88 = "handleNoteOffsetChanged";
      _DAT_028b5b90 = &DAT_02734f48;
      _DAT_028b5b98 = 0;
      _DAT_028b5ba0 = &DAT_027e54d8;
      _DAT_028b5ba8 = FUN_01bb3d90;
      _DAT_028b5bb0 = FUN_01bb14c0;
      _DAT_028b5bb8 = 0;
      uRam00000000028b5bc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b5c10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02735010 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02734f60 = FUN_00335590();
          _DAT_02734f48 = "MUElementPitchInspector";
          _DAT_02734f50 = 0x110;
          _DAT_02734f58 = FUN_008317f0;
          _DAT_02734f68 = 0;
          uRam0000000002734f70 = 0;
          _DAT_02734f78 = 0;
          _DAT_02734ff0 = 0;
          uRam0000000002734ff8 = 0;
          _DAT_02735000 = 0;
          DAT_02735002 = 1;
          _DAT_02734f80 = 0;
          uRam0000000002734f88 = 0;
          _DAT_02734f90 = 0;
          uRam0000000002734f98 = 0;
          _DAT_02734fa0 = 0;
          uRam0000000002734fa8 = 0;
          _DAT_02734fb0 = 0;
          uRam0000000002734fb8 = 0;
          _DAT_02734fc0 = 0;
          uRam0000000002734fc8 = 0;
          _DAT_02734fd0 = 0;
          uRam0000000002734fd8 = 0;
          _DAT_02734fe0 = 0;
          uRam0000000002734fe8 = 0;
          DAT_0273500b = 0;
          _DAT_02735003 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b5bd0 = "handleFrequencyChanged";
      _DAT_028b5bd8 = &DAT_02734f48;
      _DAT_028b5be0 = 0;
      _DAT_028b5be8 = &DAT_027e54d8;
      _DAT_028b5bf0 = FUN_01bb3d90;
      _DAT_028b5bf8 = FUN_01bb2610;
      _DAT_028b5c00 = 0;
      uRam00000000028b5c08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01ba9470 — 769 bytes
// ============================================================

void FUN_01ba9470(void)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  (**(code **)(*unaff_RDI + 0x630))();
  lVar4 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01ba9593;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_01ba94d0:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = -1;
    iStack_3c = 0;
    iStack_38 = 0;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        local_60 = 0;
        (**(code **)(unaff_RDI[0x17] + 0x10))();
        FUN_00d50b00();
        local_60 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_68 = unaff_RDI + 0x17;
        FUN_00cbadd0(&local_88,&local_98);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          (**(code **)(*local_68 + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
        break;
      }
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_00083b20();
    bVar1 = false;
  }
  else {
    if (local_58 != 0) goto LAB_01ba94d0;
LAB_01ba9593:
    bVar1 = true;
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_01a13090();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x630))();
  if (lVar4 != local_58) {
    lVar4 = local_58;
    if (local_50 != '\0') {
      if (!bVar1) {
        FUN_00d50b20();
      }
      goto LAB_01ba96f4;
    }
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01ba96f4:
  if (lVar4 != 0) {
    local_50 = 0;
    local_58 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    local_48 = lVar4;
    for (lVar3 = 0; local_40 = (int)lVar3, local_40 < *(int *)(lVar4 + 0xc); lVar3 = lVar3 + 1) {
      local_58 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar3 * 8);
      FUN_01ba91a0();
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ba9ae0 — 697 bytes
// ============================================================

undefined8 * FUN_01ba9ae0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  bool bVar8;
  longlong local_98;
  char local_90;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_40 = plVar2;
        FUN_0006e1c0();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar6 = &local_40;
          if (cVar3 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar6 != (longlong *)0x0) {
          pvVar4 = _pthread_getspecific((pthread_key_t)pplVar6);
          pVar5 = (pthread_key_t)pplVar6;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == (longlong *)0x0) {
            bVar8 = false;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            bVar8 = local_98 != 0;
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar8) {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002d7220();
            return unaff_RDI;
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @01baae50 — 509 bytes
// ============================================================

void FUN_01baae50(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *unaff_RDI;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  (**(code **)(*unaff_RDI + 0x630))();
  local_48 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = 1;
  uVar6 = (**(code **)(*unaff_RDI + 0x688))();
  local_31 = (**(code **)(*unaff_RDI + 0x698))();
  local_b8 = unaff_RDI[0x1b];
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  lVar1 = unaff_RDI[0x1c];
  local_40 = local_b8;
  local_32 = uVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 1;
  lVar2 = unaff_RDI[0x1d];
  local_a8 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_90 = 1;
  lVar3 = unaff_RDI[0x20];
  local_98 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_80 = 1;
  lVar4 = unaff_RDI[0x1f];
  local_88 = lVar3;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_70 = 1;
  local_78 = lVar4;
  FUN_01bab160(local_31,local_32,&local_b8,&local_a8);
  lVar5 = local_48;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



