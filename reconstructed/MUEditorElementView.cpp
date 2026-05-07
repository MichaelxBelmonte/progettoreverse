// Reconstructed implementation of MUEditorElementView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUEditorElementView.h"

// ============================================================
// @019bb770 — 3782 bytes
// str: ""MUEditorElementView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019bc2d3) */
/* WARNING: Removing unreachable block (ram,0x019bc2df) */
/* WARNING: Removing unreachable block (ram,0x019bc391) */
/* WARNING: Removing unreachable block (ram,0x019bc39d) */
/* WARNING: Removing unreachable block (ram,0x019bc1cf) */
/* WARNING: Removing unreachable block (ram,0x019bc1db) */
/* WARNING: Removing unreachable block (ram,0x019bbe20) */
/* WARNING: Removing unreachable block (ram,0x019bbe2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019bb770(void)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar9;
  longlong lVar10;
  undefined7 uVar13;
  longlong *plVar11;
  longlong lVar12;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar19;
  uint local_c8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_5c;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined8 uVar18;
  
  FUN_01d3abf0();
  fVar14 = (float)FUN_01e466c0();
  pplVar9 = &local_78;
  (**(code **)(*unaff_RDI + 0x490))();
  plVar1 = local_78;
  if ((DAT_02733c90 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_02714138 = FUN_0034cf20();
    _DAT_02714120 = "MUEditorElementView";
    _DAT_02714128 = 0x1f8;
    _DAT_02714130 = FUN_0034ceb0;
    _DAT_02714140 = 0;
    uRam0000000002714148 = 0;
    _DAT_02714150 = 0;
    _DAT_027141c8 = 0;
    uRam00000000027141d0 = 0;
    _DAT_027141d8 = 0;
    DAT_027141da = 1;
    _DAT_02714158 = 0;
    uRam0000000002714160 = 0;
    _DAT_02714168 = 0;
    uRam0000000002714170 = 0;
    _DAT_02714178 = 0;
    uRam0000000002714180 = 0;
    _DAT_02714188 = 0;
    uRam0000000002714190 = 0;
    _DAT_02714198 = 0;
    uRam00000000027141a0 = 0;
    _DAT_027141a8 = 0;
    uRam00000000027141b0 = 0;
    _DAT_027141b8 = 0;
    uRam00000000027141c0 = 0;
    DAT_027141e3 = 0;
    _DAT_027141db = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019bb7f2;
  }
  pplVar9 = (longlong **)&DAT_02802688;
LAB_019bb7f2:
  plVar1 = *pplVar9;
  if (plVar1 == (longlong *)0x0) {
    local_84 = 1;
  }
  else {
    if (*(char *)(pplVar9 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    local_84 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = 0;
  local_80 = (longlong *)0x0;
  local_50 = 0;
  local_40 = (longlong *)0x0;
  local_88 = 0;
  fVar17 = fVar14;
  do {
    local_38 = CONCAT44(local_38._4_4_,(int)uVar7);
    do {
      (**(code **)(*unaff_RDI + 0x658))();
      plVar8 = local_78;
      plVar11 = (longlong *)*unaff_RSI;
      if (plVar11 == local_78) {
        if (((char)unaff_RSI[1] == '\0') && (local_78 != (longlong *)0x0)) {
          if (local_70 == '\0') {
            FUN_00d50b00();
            goto LAB_019bb92d;
          }
LAB_019bb8e3:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_70 = '\0';
        }
        lVar10 = *unaff_RSI;
      }
      else {
        lVar10 = unaff_RSI[1];
        if (local_70 != '\0') {
          *unaff_RSI = (longlong)local_78;
          if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019bb8e3;
        }
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar8;
        if (((char)lVar10 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019bb92d:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar10 = *unaff_RSI;
      }
      if (lVar10 == 0) {
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019bc4b7:
        lVar10 = unaff_RDI[0x99];
        if (lVar10 != 0) {
          local_70 = '\0';
          local_78 = (longlong *)0x0;
          local_5c = 0;
          local_68 = lVar10;
          for (lVar12 = 0; local_60 = (undefined4)lVar12, lVar12 < *(int *)(lVar10 + 0xc);
              lVar12 = lVar12 + 1) {
            plVar11 = *(longlong **)(*(longlong *)(lVar10 + 0x10) + lVar12 * 8);
            local_78 = plVar11;
            (**(code **)(*plVar11 + 0x9c0))();
            (**(code **)(*plVar11 + 0x620))();
          }
          FUN_01a02090();
        }
        FUN_00d216c0();
        *(undefined8 *)((longlong)unaff_RDI + 0x28c) = DAT_023dccdc;
        if ((char)unaff_RDI[0x51] != '\0') {
          *(undefined1 *)(unaff_RDI + 0x51) = 0;
          (**(code **)(*unaff_RDI + 0x620))();
        }
        if (((char)local_38 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = local_40;
        if ((char)local_84 == '\0' && plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        return;
      }
      iVar5 = FUN_01d3a5a0();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar5 == 6) goto LAB_019bc4b7;
      iVar5 = FUN_01d3a5a0();
    } while (iVar5 != 5);
    if ((char)unaff_RDI[0x51] == '\0') {
      *(undefined1 *)(unaff_RDI + 0x51) = 1;
      (**(code **)(*unaff_RDI + 0x620))(local_38 & 0xffffffff);
    }
    FUN_01d3abf0();
    uVar18 = FUN_01e466c0();
    fVar15 = (float)uVar18;
    if (fVar14 < fVar15) {
      local_88 = 1;
    }
    *(undefined8 *)((longlong)unaff_RDI + 0x28c) = uVar18;
    if (fVar15 < fVar14) {
      local_88 = -1;
    }
    fVar19 = fVar14;
    uVar18 = (**(code **)(*unaff_RDI + 0x490))();
    plVar11 = local_78;
    uVar18 = CONCAT71((int7)((ulonglong)uVar18 >> 8),DAT_02733c90);
    if ((DAT_02733c90 == '\0') && (uVar18 = ___cxa_guard_acquire(), (int)uVar18 != 0)) {
      _DAT_02714138 = FUN_0034cf20();
      _DAT_02714120 = "MUEditorElementView";
      _DAT_02714128 = 0x1f8;
      _DAT_02714130 = FUN_0034ceb0;
      _DAT_02714140 = 0;
      uRam0000000002714148 = 0;
      _DAT_02714150 = 0;
      _DAT_027141c8 = 0;
      uRam00000000027141d0 = 0;
      _DAT_027141d8 = 0;
      DAT_027141da = 1;
      _DAT_02714158 = 0;
      uRam0000000002714160 = 0;
      _DAT_02714168 = 0;
      uRam0000000002714170 = 0;
      _DAT_02714178 = 0;
      uRam0000000002714180 = 0;
      _DAT_02714188 = 0;
      uRam0000000002714190 = 0;
      _DAT_02714198 = 0;
      uRam00000000027141a0 = 0;
      _DAT_027141a8 = 0;
      uRam00000000027141b0 = 0;
      _DAT_027141b8 = 0;
      uRam00000000027141c0 = 0;
      DAT_027141e3 = 0;
      _DAT_027141db = 0;
      uVar18 = ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x360))();
      uVar18 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if ((char)uVar18 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar11 = *pplVar9;
    if (plVar11 == local_80) {
      plVar8 = local_80;
      if (((char)local_38 == '\0') && (plVar11 != (longlong *)0x0)) {
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019bba70;
        local_48 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        FUN_00d50b00();
        plVar8 = local_80;
      }
      else {
        local_48 = local_38 & 0xffffffff;
      }
    }
    else {
      plVar8 = plVar11;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          uVar18 = FUN_00d50b00();
        }
        local_48 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        if (((char)local_38 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_38 != '\0') && (local_80 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
LAB_019bba70:
        *(undefined1 *)(pplVar9 + 1) = 0;
        local_48 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        plVar11 = plVar8;
      }
    }
    local_80 = plVar8;
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 == -1) {
      if (fVar15 <= fVar17) {
        if ((local_80 != (longlong *)0x0) && (cVar4 = FUN_01968c50(), cVar4 == '\0')) {
          uVar16 = (**(code **)(*local_80 + 0x928))();
          plVar11 = local_78;
          if ((local_70 == '\0') &&
             (((local_78 != (longlong *)0x0 && (uVar16 = FUN_00d50b00(), local_70 != '\0')) &&
              (local_78 != (longlong *)0x0)))) {
            uVar16 = FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0xda8))(uVar16,1);
          FUN_0199e1b0();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0xe20))();
        local_c8 = *(uint *)((longlong)local_78 + 0xc);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < (int)local_c8) {
          lVar10 = (ulonglong)local_c8 + 1;
          do {
            local_c8 = local_c8 - 1;
            uVar16 = (**(code **)(*unaff_RDI + 0xe20))();
            local_38 = (ulonglong)local_c8;
            lVar12 = *(longlong *)(*(longlong *)(local_98 + 0x10) + local_38 * 8);
            local_a0 = 0;
            if (lVar12 != 0) {
              uVar16 = FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar12;
            uVar18 = (**(code **)(*unaff_RDI + 0xab0))(uVar16,&local_a8);
            plVar8 = local_78;
            uVar13 = (undefined7)((ulonglong)plVar11 >> 8);
            if (local_78 == local_40) {
              plVar8 = local_40;
              if (((char)local_50 != '\0') || (local_78 == (longlong *)0x0)) {
                plVar11 = (longlong *)(local_50 & 0xffffffff);
                goto joined_r0x019bc01d;
              }
              if (local_70 == '\0') {
                FUN_00d50b00();
                goto LAB_019bc030;
              }
LAB_019bbfb5:
              local_70 = '\0';
              local_50 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
              local_40 = plVar8;
            }
            else {
              if (local_70 != '\0') {
                if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar18 = FUN_00d50b20();
                }
                goto LAB_019bbfb5;
              }
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (longlong *)CONCAT71(uVar13,1);
              if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_40 = plVar8;
LAB_019bc030:
                plVar11 = (longlong *)CONCAT71(uVar13,1);
                plVar8 = local_40;
              }
joined_r0x019bc01d:
              local_40 = plVar8;
              if ((local_70 == '\0') || (local_78 == (longlong *)0x0)) {
                local_50 = (ulonglong)plVar11 & 0xffffffff;
              }
              else {
                FUN_00d50b20();
                local_50 = (ulonglong)plVar11 & 0xffffffff;
              }
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 == (longlong *)0x0) ||
               (fVar17 = (float)(**(code **)(*local_40 + 0x4d8))(), fVar17 = fVar17 + fVar19,
               fVar19 = fVar15, fVar15 <= fVar17 + DAT_02390d00)) {
              (**(code **)(*unaff_RDI + 0xe20))();
              pvVar6 = _pthread_getspecific((pthread_key_t)local_38);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar2 = (double)FUN_01259520();
              dVar3 = (double)(**(code **)(*unaff_RDI + 0x930))(fVar15);
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (dVar2 < dVar3) goto LAB_019bc15d;
            }
            else {
LAB_019bc15d:
              uVar16 = (**(code **)(*unaff_RDI + 0xe20))();
              plVar11 = *(longlong **)(local_78[2] + local_38 * 8);
              if (plVar11 != (longlong *)0x0) {
                uVar16 = FUN_00d50b00();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                uVar16 = FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0xdb0))(uVar16,1);
              FUN_0199e1b0();
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            lVar10 = lVar10 + -1;
          } while (1 < lVar10);
        }
      }
    }
    else if (local_88 == 1) {
      if (fVar17 <= fVar15) {
        if ((local_80 != (longlong *)0x0) && (cVar4 = FUN_01968c50(), cVar4 == '\0')) {
          uVar16 = (**(code **)(*local_80 + 0x928))();
          plVar11 = local_78;
          if ((local_70 == '\0') &&
             (((local_78 != (longlong *)0x0 && (uVar16 = FUN_00d50b00(), local_70 != '\0')) &&
              (local_78 != (longlong *)0x0)))) {
            uVar16 = FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0xda8))(uVar16,1);
          FUN_0199e1b0();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0xe20))();
        local_c8 = *(uint *)((longlong)local_78 + 0xc);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (0 < (int)local_c8) {
          lVar10 = (ulonglong)local_c8 + 1;
          do {
            local_c8 = local_c8 - 1;
            uVar16 = (**(code **)(*unaff_RDI + 0xe20))();
            local_38 = (ulonglong)local_c8;
            lVar12 = *(longlong *)(*(longlong *)(local_98 + 0x10) + local_38 * 8);
            local_b0 = 0;
            if (lVar12 != 0) {
              uVar16 = FUN_00d50b00();
            }
            local_b0 = '\x01';
            local_b8 = lVar12;
            uVar18 = (**(code **)(*unaff_RDI + 0xab0))(uVar16,&local_b8);
            plVar8 = local_78;
            uVar13 = (undefined7)((ulonglong)plVar11 >> 8);
            if (local_78 == local_40) {
              plVar8 = local_40;
              if (((char)local_50 != '\0') || (local_78 == (longlong *)0x0)) {
                plVar11 = (longlong *)(local_50 & 0xffffffff);
                goto joined_r0x019bbc7d;
              }
              if (local_70 == '\0') {
                FUN_00d50b00();
                goto LAB_019bbc90;
              }
LAB_019bbc15:
              local_70 = '\0';
              local_50 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
              local_40 = plVar8;
            }
            else {
              if (local_70 != '\0') {
                if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar18 = FUN_00d50b20();
                }
                goto LAB_019bbc15;
              }
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (longlong *)CONCAT71(uVar13,1);
              if (((char)local_50 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_40 = plVar8;
LAB_019bbc90:
                plVar11 = (longlong *)CONCAT71(uVar13,1);
                plVar8 = local_40;
              }
joined_r0x019bbc7d:
              local_40 = plVar8;
              if ((local_70 == '\0') || (local_78 == (longlong *)0x0)) {
                local_50 = (ulonglong)plVar11 & 0xffffffff;
              }
              else {
                FUN_00d50b20();
                local_50 = (ulonglong)plVar11 & 0xffffffff;
              }
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 == (longlong *)0x0) ||
               (fVar17 = (float)(**(code **)(*local_40 + 0x4d8))(), fVar17 <= fVar15)) {
              (**(code **)(*unaff_RDI + 0xe20))();
              pvVar6 = _pthread_getspecific((pthread_key_t)local_38);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar2 = (double)FUN_0125a280();
              dVar3 = (double)(**(code **)(*unaff_RDI + 0x930))(fVar15);
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (dVar3 < dVar2) goto LAB_019bbdae;
            }
            else {
LAB_019bbdae:
              uVar16 = (**(code **)(*unaff_RDI + 0xe20))();
              plVar11 = *(longlong **)(local_78[2] + local_38 * 8);
              if (plVar11 != (longlong *)0x0) {
                uVar16 = FUN_00d50b00();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                uVar16 = FUN_00d50b20();
              }
              (**(code **)(*unaff_RDI + 0xdb0))(uVar16,1);
              FUN_0199e1b0();
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            lVar10 = lVar10 + -1;
          } while (1 < lVar10);
        }
      }
    }
    uVar7 = local_48;
    (**(code **)(*unaff_RDI + 0x620))();
    fVar17 = fVar15;
  } while( true );
}




// ============================================================
// @019c3840 — 3717 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c4505) */
/* WARNING: Removing unreachable block (ram,0x019c4511) */
/* WARNING: Removing unreachable block (ram,0x019c3ae4) */
/* WARNING: Removing unreachable block (ram,0x019c3af0) */
/* WARNING: Removing unreachable block (ram,0x019c459a) */
/* WARNING: Removing unreachable block (ram,0x019c45aa) */

ulonglong FUN_019c3840(undefined8 param_1,byte param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  ulonglong unaff_RBX;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *unaff_RDI;
  longlong **pplVar19;
  undefined7 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  undefined8 *local_198;
  char local_190;
  undefined8 *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe10))();
  if (*(int *)((longlong)local_40 + 0xc) == 0) {
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    uVar8 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *unaff_RDI))();
    unaff_RBX = (ulonglong)uVar8;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar8 == '\0') {
      uVar17 = 0;
      goto LAB_019c46b1;
    }
  }
  (**(code **)(*unaff_RDI + 0xe28))();
  local_68 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_019c3910;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = local_68;
    if (*(int *)((longlong)local_68 + 0xc) == 0) goto LAB_019c390b;
LAB_019c39b7:
    local_68 = plVar3;
    (**(code **)(*unaff_RDI + 0xe10))();
    plVar3 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pplVar19 = &local_40;
    (**(code **)(*unaff_RDI + 0xd40))();
    plVar18 = local_40;
    FUN_00083c20();
    if (plVar18 == (longlong *)0x0) {
LAB_019c3a37:
      pplVar19 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar18 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_019c3a37;
    }
    plVar18 = *pplVar19;
    if (*(char *)(pplVar19 + 1) == '\0') {
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar19 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = plVar18;
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar16 = 0x2572358;
    *puVar11 = &DAT_02572358;
    (*DAT_02572370)();
    if ((plVar3 == (longlong *)0x0) || (*(int *)((longlong)plVar3 + 0xc) == 0)) {
      local_58 = (longlong *)(**(code **)(*unaff_RDI + 0xf08))();
      if (!NAN((double)local_58)) {
        if (plVar18 == (longlong *)0x0) {
          local_178 = local_68;
          local_170 = '\0';
          local_160 = '\0';
          local_168 = puVar11;
          bVar6 = FUN_01c9db50(local_58,&local_168);
          if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_150 = '\0';
              local_158 = puVar11;
              (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Qa_00,1);
              local_58 = (longlong *)0x0;
              local_60 = 0;
              if ((local_150 == '\0') || (local_158 == (undefined8 *)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        else {
          uVar22 = FUN_01a8c310();
          plVar18 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          plVar13 = local_50;
          if (plVar18 == (longlong *)0x0) goto LAB_019c3dd0;
          local_1c8 = local_50;
          local_1c0 = '\0';
          FUN_019c29e0(uVar22,&local_1c8);
          plVar18 = local_40;
          if (plVar13 == local_40) {
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_38[0] == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar18;
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            local_50 = plVar18;
          }
          if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_1b8 = local_50;
          local_1b0 = '\0';
          uVar22 = FUN_01ca2ec0(local_58);
          if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = (longlong *)unaff_RDI[0x77];
          local_1a8 = local_68;
          local_1a0 = '\0';
          uVar5 = (**(code **)(&DAT_000015e8 + *unaff_RDI))();
          local_190 = '\0';
          local_198 = puVar11;
          bVar6 = FUN_01ca1b40(uVar5,uVar22,&local_198,param_2);
          if ((local_190 != '\0') && (local_198 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_180 = '\0';
              local_188 = puVar11;
              (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Qa_01,1);
              local_58 = (longlong *)0x0;
              local_60 = 0;
              if ((local_180 == '\0') || (local_188 == (undefined8 *)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        bVar7 = bVar6;
        local_60 = 0;
        local_58 = (longlong *)0x0;
        goto LAB_019c3f8c;
      }
LAB_019c3dd0:
      uVar17 = 0;
    }
    else {
      uVar10 = FUN_01ca1fa0();
      if ((char)uVar10 == '\0') {
        FUN_00243390();
        plVar18 = local_40;
        if (local_40 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
          uVar22 = 0;
        }
        else {
          uVar20 = (undefined7)((ulonglong)plVar3 >> 8);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
            uVar22 = CONCAT71(uVar20,1);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            uVar22 = CONCAT71(uVar20,1);
          }
        }
        if (param_2 != 0) {
          (**(code **)(*unaff_RDI + 0xda0))();
        }
        local_1d0 = '\0';
        local_1d8 = puVar11;
        local_60 = uVar22;
        local_58 = plVar18;
        bVar7 = FUN_01c97b90(param_2,&local_1d8);
        if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
LAB_019c3f8c:
        if ((param_2 != 0) && (bVar7 != 0)) {
          local_48 = puVar11;
          plVar13 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          uVar22 = (**(code **)(*plVar13 + 0x18))();
          plVar18 = DAT_026de560;
          if ((local_58 != (longlong *)0x0) && (*(int *)((longlong)local_58 + 0xc) != 0)) {
            local_148 = local_58;
            local_140 = '\0';
            if (DAT_026de560 != (longlong *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_40 = plVar18;
            local_38[0] = '\0';
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (*(int *)((longlong)puVar11 + 0xc) != 0) {
            local_130 = '\0';
            local_138 = puVar11;
            uVar22 = FUN_00243390();
            lVar15 = CONCAT71(uStack_77,local_78);
            plVar18 = DAT_0270b8f0;
            if (local_70 == '\0') {
              if (lVar15 != 0) {
                uVar22 = FUN_00d50b00();
                plVar18 = DAT_0270b8f0;
              }
            }
            else {
              local_70 = '\0';
            }
            DAT_0270b8f0 = plVar18;
            if (plVar18 != (longlong *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_38[0] = '\0';
            local_40 = plVar18;
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (lVar15 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d403d0();
          local_128 = DAT_026de568;
          if (DAT_026de568 != 0) {
            FUN_00d50b00();
          }
          local_120 = '\x01';
          FUN_00d50b00();
          local_110 = '\0';
          pplVar19 = &local_118;
          local_118 = plVar13;
          FUN_00d40470(pplVar19,&stack0xffffffffffffff48,1,0);
          pVar16 = (pthread_key_t)pplVar19;
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23310();
          plVar13 = local_40;
          local_78 = local_38[0];
          pcVar14 = local_38;
          if (local_38[0] == '\0') {
            pcVar14 = &local_78;
          }
          *pcVar14 = '\0';
          if ((local_38[0] != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = local_50;
          if (plVar13 != (longlong *)0x0) {
            FUN_00d23310();
            plVar13 = local_40;
            pcVar14 = local_38;
            if (local_38[0] == '\0') {
              pcVar14 = &local_78;
            }
            local_78 = local_38[0];
            *pcVar14 = '\0';
            if ((local_38[0] != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific(pVar16);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            local_100 = '\0';
            local_108 = (longlong *)0x0;
            FUN_00cb1fa0();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              (**(code **)(*local_108 + 0x10))();
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          puVar11 = local_48;
          if (*(int *)((longlong)local_48 + 0xc) != 0) goto LAB_019c437c;
LAB_019c4658:
          bVar7 = 1;
          local_50 = plVar18;
        }
      }
      else {
        if (param_2 == 0) {
          uVar17 = CONCAT71((uint7)(uint3)((uint)uVar10 >> 8),1);
          goto LAB_019c4680;
        }
        local_38[0] = '\0';
        local_40 = plVar3;
        FUN_00d214d0(extraout_XMM0_Qa,*(undefined4 *)((longlong)puVar11 + 0xc));
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xda0))();
        (**(code **)(*unaff_RDI + 0xa00))();
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00d3af20();
        lVar15 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        plVar18 = local_50;
        FUN_00db2790();
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        local_58 = (longlong *)0x0;
        if (*(int *)((longlong)puVar11 + 0xc) == 0) goto LAB_019c4658;
LAB_019c437c:
        bVar7 = 1;
        local_f0 = '\0';
        local_f8 = puVar11;
        uVar21 = FUN_012664b0();
        uVar22 = uVar21;
        if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
        if (plVar18 == (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x60))(uVar21);
          local_50 = (longlong *)0x0;
          plVar18 = (longlong *)0x0;
        }
        else {
          local_e0 = '\0';
          local_d0 = '\0';
          local_e8 = puVar11;
          local_d8 = plVar18;
          local_50 = plVar18;
          FUN_01ca29a0(uVar22,&local_d8);
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = (longlong *)unaff_RDI[0x69];
          (**(code **)(*unaff_RDI + 0xa18))();
          plVar18 = local_40;
          pvVar12 = _pthread_getspecific(pVar16);
          plVar2 = local_40;
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), plVar18 = plVar2, lVar15 != 0))
          {
            plVar18 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          FUN_016c98e0();
          (**(code **)(*plVar13 + 0x60))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar17 = CONCAT71((int7)((ulonglong)plVar18 >> 8),bVar7 != 0);
      if (((char)local_60 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_019c4680:
    FUN_00d50b20();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (longlong *)0x0) {
LAB_019c3910:
      bVar1 = true;
    }
    else {
      plVar3 = local_68;
      if (*(int *)((longlong)local_40 + 0xc) != 0) goto LAB_019c39b7;
LAB_019c390b:
      bVar1 = false;
    }
    iVar9 = FUN_01ca3250();
    uVar17 = CONCAT71((int7)(unaff_RBX >> 8),iVar9 != 0);
    if ((iVar9 != 0) && (param_2 != 0)) {
      uVar10 = FUN_01ca3250();
      (**(code **)(&UNK_000015e0 + *unaff_RDI))(*unaff_RDI,uVar10);
      plVar3 = local_40;
      plVar18 = local_68;
      if (local_68 != local_40) {
        if (local_38[0] != '\0') {
          if (!bVar1) {
            local_68 = local_40;
            FUN_00d50b20();
          }
          goto LAB_019c39b7;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar18 = plVar3;
        if (!bVar1) {
          local_68 = plVar3;
          FUN_00d50b20();
        }
      }
      plVar3 = plVar18;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019c39b7;
    }
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_019c46b1:
  return uVar17 & 0xffffffff;
}




// ============================================================
// @019cb6b0 — 2629 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019cbc05) */
/* WARNING: Removing unreachable block (ram,0x019cbc0a) */
/* WARNING: Removing unreachable block (ram,0x019cbc26) */
/* WARNING: Removing unreachable block (ram,0x019cbc2f) */
/* WARNING: Removing unreachable block (ram,0x019cc091) */
/* WARNING: Removing unreachable block (ram,0x019cc09e) */
/* WARNING: Removing unreachable block (ram,0x019cb6f7) */
/* WARNING: Removing unreachable block (ram,0x019cb700) */
/* WARNING: Removing unreachable block (ram,0x019cc0f7) */
/* WARNING: Removing unreachable block (ram,0x019cc103) */
/* WARNING: Removing unreachable block (ram,0x019cbca4) */
/* WARNING: Removing unreachable block (ram,0x019cbcd0) */
/* WARNING: Removing unreachable block (ram,0x019cb7dd) */
/* WARNING: Removing unreachable block (ram,0x019cb800) */
/* WARNING: Removing unreachable block (ram,0x019cb7df) */
/* WARNING: Removing unreachable block (ram,0x019cb802) */
/* WARNING: Removing unreachable block (ram,0x019cbca6) */
/* WARNING: Removing unreachable block (ram,0x019cbcd2) */

ulonglong FUN_019cb6b0(undefined8 param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  pthread_key_t pVar13;
  int iVar14;
  longlong *unaff_RDI;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  int local_68;
  longlong local_58;
  char local_50;
  bool local_40;
  
  lVar5 = local_80;
  (**(code **)(*unaff_RDI + 0xe20))();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  local_40 = *(int *)(local_80 + 0xc) == 0;
  if ((!local_40) && (param_2 != '\0')) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_80 = 0;
    local_68 = -1;
    bVar4 = false;
    bVar2 = false;
    lVar15 = 0;
    lVar16 = 0;
LAB_019cb7d9:
    lVar9 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (local_68 < *(int *)(lVar5 + 0xc)) {
      lVar17 = *(longlong *)(lVar5 + 0x10);
      local_80 = *(longlong *)(lVar17 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar17);
      pVar13 = (pthread_key_t)lVar17;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_58 == lVar15) {
          lVar9 = lVar15;
          bVar3 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_019cb954;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cb999:
          lVar15 = lVar9;
          bVar2 = bVar3;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cb999;
          }
          lVar9 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_019cb954:
          local_50 = '\0';
          lVar15 = lVar9;
          bVar2 = true;
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507e40();
        if (local_58 == lVar16) {
          lVar9 = lVar16;
          bVar3 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            bVar3 = true;
            if (local_50 != '\0') goto LAB_019cbac4;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_019cbab0:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar9 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar4) && (lVar16 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_019cbab0;
          }
          bVar3 = true;
          if ((bVar4) && (lVar16 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_019cbac4:
        bVar4 = bVar3;
        if (lVar9 == 0) {
          lVar16 = 0;
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01507f00();
          iVar1 = *(int *)(puVar8 + 3);
          lVar17 = (longlong)iVar1;
          iVar14 = iVar1 + 3;
          if (-1 < lVar17) {
            iVar14 = iVar1;
          }
          lVar16 = lVar9;
          if (3 < lVar17) {
            iVar14 = iVar14 >> 2;
            lVar9 = 0;
            do {
              if (*(int *)(puVar8[2] + lVar9 * 4) == iVar7) goto LAB_019cb7d9;
              lVar9 = lVar9 + 1;
            } while (iVar14 != (int)lVar9);
          }
          FUN_00c8e340(iVar14,1);
          *(int *)(puVar8[2] + lVar17) = iVar7;
        }
      }
      goto LAB_019cb7d9;
    }
    FUN_001159b0();
    uVar12 = (ulonglong)(*(int *)(puVar8 + 3) + 3U);
    local_40 = *(int *)(puVar8 + 3) + 3U < 7;
    if (!local_40) {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_02572358;
      (*DAT_02572370)();
      (**(code **)(*unaff_RDI + 0x9b0))();
      if (local_80 != 0) {
        FUN_00d50b00();
        local_68 = -1;
LAB_019cbca0:
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if (local_68 < *(int *)(local_80 + 0xc)) {
          uVar12 = *(ulonglong *)(local_80 + 0x10);
          lVar9 = *(longlong *)(uVar12 + 8 + lVar9 * 8);
          pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if (local_58 == lVar15) {
              lVar17 = lVar15;
              bVar3 = bVar2;
              if ((!bVar2) && (local_58 != 0)) {
                if (local_50 != '\0') goto LAB_019cbe24;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbe65:
              lVar15 = lVar17;
              bVar2 = bVar3;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                lVar17 = local_58;
                if ((bVar2) && (lVar15 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbe65;
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_019cbe24:
              local_50 = '\0';
              lVar15 = lVar17;
              bVar2 = true;
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507e40();
            if (local_58 == lVar16) {
              lVar17 = lVar16;
              bVar3 = bVar4;
              if ((!bVar4) && (local_58 != 0)) {
                bVar3 = true;
                if (local_50 != '\0') goto LAB_019cbf79;
                FUN_00d50b00();
                bVar3 = true;
              }
LAB_019cbf65:
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
                bVar3 = true;
                if ((bVar4) && (lVar16 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_019cbf65;
              }
              bVar3 = true;
              if ((bVar4) && (lVar16 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_019cbf79:
            bVar4 = bVar3;
            lVar16 = lVar17;
            if (lVar16 == 0) {
              lVar16 = 0;
            }
            else {
              pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if (3 < *(int *)(puVar8 + 3)) {
                lVar17 = 0;
                do {
                  pvVar10 = _pthread_getspecific((pthread_key_t)uVar12);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar6 = FUN_01751560();
                  if (cVar6 != '\0') {
                    local_50 = '\0';
                    FUN_00d21140();
                    local_58 = lVar9;
                    break;
                  }
                  lVar17 = lVar17 + 1;
                  iVar1 = *(int *)(puVar8 + 3);
                  iVar14 = iVar1 + 3;
                  if (-1 < iVar1) {
                    iVar14 = iVar1;
                  }
                  uVar12 = (ulonglong)(uint)(iVar14 >> 2);
                } while (lVar17 < iVar14 >> 2);
              }
            }
          }
          goto LAB_019cbca0;
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(*unaff_RDI + 0xdc8))();
      if (puVar11 != (undefined8 *)0x0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar4) && (lVar16 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((bVar2) && (lVar15 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (lVar5 == 0) goto LAB_019cc15a;
  }
  uVar12 = FUN_00d50b20();
LAB_019cc15a:
  return CONCAT71((int7)(uVar12 >> 8),local_40) ^ 1;
}




// ============================================================
// @019cc590 — 2139 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019cca09) */
/* WARNING: Removing unreachable block (ram,0x019cca0e) */
/* WARNING: Removing unreachable block (ram,0x019cca32) */
/* WARNING: Removing unreachable block (ram,0x019cca3b) */
/* WARNING: Removing unreachable block (ram,0x019ccdd3) */
/* WARNING: Removing unreachable block (ram,0x019ccddf) */
/* WARNING: Removing unreachable block (ram,0x019cc5dd) */
/* WARNING: Removing unreachable block (ram,0x019cc5e6) */
/* WARNING: Removing unreachable block (ram,0x019cca87) */
/* WARNING: Removing unreachable block (ram,0x019ccab0) */
/* WARNING: Removing unreachable block (ram,0x019cc6a7) */
/* WARNING: Removing unreachable block (ram,0x019cc6d0) */
/* WARNING: Removing unreachable block (ram,0x019cc6a9) */
/* WARNING: Removing unreachable block (ram,0x019cc6d2) */
/* WARNING: Removing unreachable block (ram,0x019cca89) */
/* WARNING: Removing unreachable block (ram,0x019ccab2) */

ulonglong FUN_019cc590(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  int iVar11;
  longlong lVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  ulonglong unaff_R13;
  bool bVar14;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  lVar2 = local_78;
  uVar4 = (**(code **)(*unaff_RDI + 0xe20))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    uVar4 = FUN_00d50b00();
  }
  bVar14 = *(int *)(local_78 + 0xc) == 0;
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar14);
  if (bVar14) {
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    uVar5 = uVar5 & 0xffffffff;
    if (param_2 != '\0') {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      local_78 = 0;
      local_60 = -1;
      local_38 = 0;
      lVar13 = 0;
LAB_019cc6a3:
      lVar7 = (longlong)local_60;
      local_60 = local_60 + 1;
      if (local_60 < *(int *)(lVar2 + 0xc)) {
        lVar12 = *(longlong *)(lVar2 + 0x10);
        local_78 = *(longlong *)(lVar12 + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((pthread_key_t)lVar12);
        pVar10 = (pthread_key_t)lVar12;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        lVar7 = local_50;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_0152ebe0();
          lVar7 = local_50;
          if (local_50 == lVar13) {
            lVar7 = lVar13;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar5 = local_38 & 0xffffffff;
              goto joined_r0x019cc86b;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto joined_r0x019cc96b;
            }
LAB_019cc814:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            lVar13 = lVar7;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar13 != 0)) {
                uVar4 = FUN_00d50b20();
              }
              goto LAB_019cc814;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            if (((char)local_38 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
joined_r0x019cc96b:
            uVar5 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019cc86b:
            lVar13 = lVar7;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar5 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar5 & 0xffffffff;
            }
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01507f00();
          iVar1 = *(int *)(puVar6 + 3);
          unaff_R13 = (ulonglong)iVar1;
          iVar11 = iVar1 + 3;
          if (-1 < (longlong)unaff_R13) {
            iVar11 = iVar1;
          }
          if (3 < (longlong)unaff_R13) {
            iVar11 = iVar11 >> 2;
            lVar7 = 0;
            do {
              if (*(int *)(puVar6[2] + lVar7 * 4) == iVar3) goto LAB_019cc6a3;
              lVar7 = lVar7 + 1;
            } while (iVar11 != (int)lVar7);
          }
          FUN_00c8e340(iVar11,1);
          *(int *)(puVar6[2] + unaff_R13) = iVar3;
        }
        goto LAB_019cc6a3;
      }
      FUN_001159b0();
      bVar14 = *(int *)(puVar6 + 3) + 3U < 7;
      uVar5 = CONCAT71((int7)((ulonglong)&local_50 >> 8),bVar14);
      if (!bVar14) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02572358;
        (*DAT_02572370)();
        (**(code **)(*unaff_RDI + 0x9b0))();
        if (local_78 != 0) {
          FUN_00d50b00();
          local_60 = -1;
          local_39 = bVar14;
LAB_019cca83:
          lVar7 = (longlong)local_60;
          local_60 = local_60 + 1;
          if (local_60 < *(int *)(local_78 + 0xc)) {
            lVar12 = *(longlong *)(local_78 + 0x10);
            lVar7 = *(longlong *)(lVar12 + 8 + lVar7 * 8);
            pvVar8 = _pthread_getspecific((pthread_key_t)lVar12);
            pVar10 = (pthread_key_t)lVar12;
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            lVar12 = local_50;
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (lVar12 != 0) {
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_0152ebe0();
              lVar12 = local_50;
              if (local_50 == lVar13) {
                lVar12 = lVar13;
                if (((char)local_38 != '\0') || (local_50 == 0)) {
                  unaff_R13 = local_38 & 0xffffffff;
                  goto joined_r0x019ccc4b;
                }
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  goto joined_r0x019ccd55;
                }
LAB_019ccbf4:
                local_48 = '\0';
                local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
                lVar13 = lVar12;
              }
              else {
                if (local_48 != '\0') {
                  if (((char)local_38 != '\0') && (lVar13 != 0)) {
                    uVar4 = FUN_00d50b20();
                  }
                  goto LAB_019ccbf4;
                }
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
                if (((char)local_38 != '\0') && (lVar13 != 0)) {
                  FUN_00d50b20();
                }
joined_r0x019ccd55:
                unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
joined_r0x019ccc4b:
                lVar13 = lVar12;
                if ((local_48 == '\0') || (local_50 == 0)) {
                  local_38 = unaff_R13 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_38 = unaff_R13 & 0xffffffff;
                }
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_01507f00();
              iVar1 = *(int *)(puVar6 + 3);
              iVar11 = iVar1 + 3;
              if (-1 < iVar1) {
                iVar11 = iVar1;
              }
              if (3 < iVar1) {
                lVar12 = 0;
                do {
                  if (*(int *)(puVar6[2] + lVar12 * 4) == iVar3) {
                    local_48 = '\0';
                    local_50 = lVar7;
                    FUN_00d21140();
                    if ((local_48 != '\0') && (local_50 != 0)) {
                      FUN_00d50b20();
                    }
                    break;
                  }
                  lVar12 = lVar12 + 1;
                } while (iVar11 >> 2 != (int)lVar12);
              }
            }
            goto LAB_019cca83;
          }
          FUN_001159b0();
          FUN_00d50b20();
          uVar5 = CONCAT71((int7)((ulonglong)&local_50 >> 8),local_39);
        }
        (**(code **)(*unaff_RDI + 0xdc8))();
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      if (((char)local_38 != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_019cce2c;
    }
  }
  FUN_00d50b20();
LAB_019cce2c:
  return (uVar5 ^ 1) & 0xffffffff;
}




// ============================================================
// @019cd110 — 2069 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019cd906) */
/* WARNING: Removing unreachable block (ram,0x019cd912) */

ulonglong FUN_019cd110(pthread_key_t param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  int iVar10;
  longlong *unaff_RDI;
  int iVar11;
  undefined1 local_c0 [4];
  int local_bc;
  undefined4 local_84;
  undefined8 *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  char local_40;
  undefined1 local_31;
  
  (**(code **)(*unaff_RDI + 0xe20))();
  lVar2 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_31 = *(int *)(lVar2 + 0xc) == 0;
  if ((!(bool)local_31) && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar6 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_50 = lVar6;
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_84 = 0xffffffff;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_80 = puVar5;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar10 = -local_60._4_4_;
        }
        else {
          iVar10 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar10 = 0;
        }
        local_60 = CONCAT44(iVar10,(int)local_60);
      }
      lVar6 = (longlong)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)(local_68 + 0xc) <= iVar10) break;
      lVar9 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
      pVar8 = (pthread_key_t)lVar9;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd360;
        }
      }
      else if (local_48 != 0) {
LAB_019cd360:
        pvVar4 = _pthread_getspecific(pVar8);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar8 = (pthread_key_t)local_50;
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507970();
        FUN_016caaa0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016cae50(&local_84,&local_48);
        iVar10 = *(int *)(local_80 + 3);
        iVar11 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (7 < iVar10) {
          iVar11 = iVar11 >> 3;
          lVar6 = local_80[2];
          do {
            if (((*(int *)(lVar6 + 4) != 0) && (local_48._4_4_ != 0)) &&
               (cVar3 = FUN_00e7c000(), cVar3 != '\0')) goto LAB_019cd280;
            lVar6 = lVar6 + 8;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar10 = *(int *)(local_80 + 3);
        }
        FUN_00c8e340();
        *(longlong *)(local_80[2] + (longlong)iVar10) = local_48;
LAB_019cd280:
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar6 = local_50;
    local_31 = *(int *)(local_80 + 3) + 7U < 0xf;
    if (*(int *)(local_80 + 3) + 7U < 0xf) {
LAB_019cd931:
      uVar7 = FUN_00d50b20();
    }
    else {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      (**(code **)(*unaff_RDI + 0x9b0))();
      lVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019cd5ee;
        }
      }
      else if (local_78 != 0) {
LAB_019cd5ee:
        local_70 = '\0';
        local_78 = 0;
        local_68 = lVar9;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar6 = (longlong)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)(local_68 + 0xc) <= iVar10) break;
          lVar9 = *(longlong *)(local_68 + 0x10);
          local_78 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
          pVar8 = (pthread_key_t)lVar9;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019cd700;
            }
          }
          else if (local_48 != 0) {
LAB_019cd700:
            pvVar4 = _pthread_getspecific(pVar8);
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              pVar8 = (pthread_key_t)local_50;
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_016caaa0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016cae50(&local_84,local_c0);
            iVar10 = *(int *)(local_80 + 3);
            iVar11 = iVar10 + 7;
            if (-1 < iVar10) {
              iVar11 = iVar10;
            }
            if (7 < iVar10) {
              iVar11 = iVar11 >> 3;
              lVar6 = local_80[2];
              do {
                if (((*(int *)(lVar6 + 4) != 0) && (local_bc != 0)) &&
                   (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
                  local_48 = local_78;
                  local_40 = '\0';
                  FUN_00d21140();
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  break;
                }
                lVar6 = lVar6 + 8;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        lVar6 = local_50;
      }
      uVar7 = (**(code **)(*unaff_RDI + 0xdc8))();
      puVar1 = local_80;
      if (puVar5 != (undefined8 *)0x0) {
        uVar7 = FUN_00d50b20();
      }
      if (puVar1 != (undefined8 *)0x0) goto LAB_019cd931;
    }
    if (lVar6 != 0) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_019cd953;
  }
  uVar7 = FUN_00d50b20();
LAB_019cd953:
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),local_31) ^ 1;
}




// ============================================================
// @019c8d20 — 1894 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c906c) */
/* WARNING: Removing unreachable block (ram,0x019c9078) */
/* WARNING: Removing unreachable block (ram,0x019c8fdf) */
/* WARNING: Removing unreachable block (ram,0x019c8feb) */
/* WARNING: Removing unreachable block (ram,0x019c8f57) */
/* WARNING: Removing unreachable block (ram,0x019c8f63) */
/* WARNING: Removing unreachable block (ram,0x019c8ecf) */
/* WARNING: Removing unreachable block (ram,0x019c8edb) */
/* WARNING: Removing unreachable block (ram,0x019c8e47) */
/* WARNING: Removing unreachable block (ram,0x019c8e53) */
/* WARNING: Removing unreachable block (ram,0x019c8dbf) */
/* WARNING: Removing unreachable block (ram,0x019c8dcb) */
/* WARNING: Removing unreachable block (ram,0x019c8e03) */
/* WARNING: Removing unreachable block (ram,0x019c8e0f) */
/* WARNING: Removing unreachable block (ram,0x019c8e8b) */
/* WARNING: Removing unreachable block (ram,0x019c8e97) */
/* WARNING: Removing unreachable block (ram,0x019c8f13) */
/* WARNING: Removing unreachable block (ram,0x019c8f1f) */
/* WARNING: Removing unreachable block (ram,0x019c8f9b) */
/* WARNING: Removing unreachable block (ram,0x019c8fa7) */
/* WARNING: Removing unreachable block (ram,0x019c9023) */
/* WARNING: Removing unreachable block (ram,0x019c902f) */
/* WARNING: Removing unreachable block (ram,0x019c90ac) */
/* WARNING: Removing unreachable block (ram,0x019c90b8) */
/* WARNING: Removing unreachable block (ram,0x019c90fd) */
/* WARNING: Removing unreachable block (ram,0x019c9106) */
/* WARNING: Removing unreachable block (ram,0x019c91cf) */
/* WARNING: Removing unreachable block (ram,0x019c91f0) */
/* WARNING: Removing unreachable block (ram,0x019c91d1) */
/* WARNING: Removing unreachable block (ram,0x019c91f2) */

ulonglong FUN_019c8d20(char param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  char *pcVar11;
  undefined *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined7 uVar15;
  longlong *unaff_RDI;
  undefined *local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar13 = 0;
  cVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar5 == '\0') goto LAB_019c9497;
  (**(code **)(*unaff_RDI + 0xe30))();
  iVar6 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  uVar3 = (uint3)((uint)iVar6 >> 8);
  uVar13 = (ulonglong)CONCAT31(uVar3,iVar6 != 0);
  if ((iVar6 == 0) || (param_2 == '\0')) goto LAB_019c9497;
  (**(code **)(*unaff_RDI + 0xf40))();
  (**(code **)(*unaff_RDI + 0xf68))();
  (**(code **)(*unaff_RDI + 0xf70))();
  (**(code **)(*unaff_RDI + 0xf78))();
  (**(code **)(*unaff_RDI + 0xf80))();
  (**(code **)(*unaff_RDI + 0xf88))();
  (**(code **)(*unaff_RDI + 0xf90))();
  (**(code **)(*unaff_RDI + 0xf98))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *unaff_RDI))();
  (**(code **)(
              "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
              + *unaff_RDI + 8))();
  if (param_1 == '\0') {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *unaff_RDI + 0x10))();
    cVar5 = FUN_019c98c0();
    uVar13 = CONCAT71((uint7)uVar3,1);
    if (cVar5 == '\0') goto LAB_019c9497;
  }
  else {
    (**(code **)(
                "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                + *unaff_RDI + 0x18))();
  }
  (**(code **)(*unaff_RDI + 0xe30))();
  if ((local_68 == '\0') && (local_70 != (undefined *)0x0)) {
    FUN_00d50b00();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_025683c0;
  *puVar8 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (local_70 == (undefined *)0x0) {
LAB_019c934d:
    if (0 < *(int *)((longlong)puVar7 + 0xc)) {
      lVar9 = 0;
      do {
        pvVar10 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar6 = *(int *)(local_48 + 0xc);
        iVar2 = *(int *)(puVar8[2] + lVar9 * 4);
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == iVar2) {
          pvVar10 = _pthread_getspecific((pthread_key_t)puVar12);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012f49a0();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)((longlong)puVar7 + 0xc));
    }
    FUN_000be170();
    bVar4 = false;
    uVar15 = 0;
  }
  else {
    local_58 = -1;
    puVar14 = puVar8;
    while( true ) {
      lVar9 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) break;
      puVar14 = *(undefined8 **)(*(longlong *)(local_70 + 0x10) + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        puVar14 = (undefined8 *)puVar14[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      FUN_01266fe0();
      local_38[0] = local_40[0];
      pcVar11 = local_40;
      if (local_40[0] == '\0') {
        pcVar11 = local_38;
      }
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        local_40[0] = '\0';
        iVar6 = FUN_00d23d20();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == -1) {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          iVar6 = *(int *)(puVar8 + 3);
          FUN_00c8e340();
          *(undefined4 *)(puVar8[2] + (longlong)iVar6) = 1;
          puVar14 = puVar8;
        }
        else {
          piVar1 = (int *)(puVar8[2] + (longlong)iVar6 * 4);
          *piVar1 = *piVar1 + 1;
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
    }
    puVar12 = local_70;
    FUN_001159b0();
    if (puVar7 != (undefined8 *)0x0) goto LAB_019c934d;
    uVar15 = (undefined7)((ulonglong)puVar14 >> 8);
    bVar4 = true;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  uVar13 = CONCAT71(uVar15,1);
  if (local_70 != (undefined *)0x0) {
    FUN_00d50b20();
  }
LAB_019c9497:
  return uVar13 & 0xffffffff;
}




// ============================================================
// @019c5150 — 1690 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c5704) */
/* WARNING: Removing unreachable block (ram,0x019c5720) */
/* WARNING: Removing unreachable block (ram,0x019c5725) */
/* WARNING: Removing unreachable block (ram,0x019c572d) */
/* WARNING: Removing unreachable block (ram,0x019c5732) */
/* WARNING: Removing unreachable block (ram,0x019c5794) */
/* WARNING: Removing unreachable block (ram,0x019c579d) */
/* WARNING: Removing unreachable block (ram,0x019c570a) */
/* WARNING: Removing unreachable block (ram,0x019c5753) */
/* WARNING: Removing unreachable block (ram,0x019c570f) */
/* WARNING: Removing unreachable block (ram,0x019c5434) */
/* WARNING: Removing unreachable block (ram,0x019c5450) */
/* WARNING: Removing unreachable block (ram,0x019c5455) */
/* WARNING: Removing unreachable block (ram,0x019c545d) */
/* WARNING: Removing unreachable block (ram,0x019c5462) */
/* WARNING: Removing unreachable block (ram,0x019c54c4) */
/* WARNING: Removing unreachable block (ram,0x019c54cd) */
/* WARNING: Removing unreachable block (ram,0x019c543a) */
/* WARNING: Removing unreachable block (ram,0x019c5483) */
/* WARNING: Removing unreachable block (ram,0x019c543f) */
/* WARNING: Removing unreachable block (ram,0x019c51f3) */
/* WARNING: Removing unreachable block (ram,0x019c51ff) */
/* WARNING: Removing unreachable block (ram,0x019c51a6) */
/* WARNING: Removing unreachable block (ram,0x019c51b2) */
/* WARNING: Removing unreachable block (ram,0x019c52c9) */
/* WARNING: Removing unreachable block (ram,0x019c52d5) */
/* WARNING: Removing unreachable block (ram,0x019c54fe) */
/* WARNING: Removing unreachable block (ram,0x019c5560) */
/* WARNING: Removing unreachable block (ram,0x019c5565) */
/* WARNING: Removing unreachable block (ram,0x019c556d) */
/* WARNING: Removing unreachable block (ram,0x019c5576) */
/* WARNING: Removing unreachable block (ram,0x019c57b6) */
/* WARNING: Removing unreachable block (ram,0x019c57c3) */
/* WARNING: Removing unreachable block (ram,0x019c5504) */
/* WARNING: Removing unreachable block (ram,0x019c5509) */
/* WARNING: Removing unreachable block (ram,0x019c5511) */
/* WARNING: Removing unreachable block (ram,0x019c54ad) */
/* WARNING: Removing unreachable block (ram,0x019c54ba) */
/* WARNING: Removing unreachable block (ram,0x019c559b) */
/* WARNING: Removing unreachable block (ram,0x019c55a7) */
/* WARNING: Removing unreachable block (ram,0x019c584a) */
/* WARNING: Removing unreachable block (ram,0x019c5857) */
/* WARNING: Removing unreachable block (ram,0x019c5818) */
/* WARNING: Removing unreachable block (ram,0x019c5825) */
/* WARNING: Removing unreachable block (ram,0x019c553b) */
/* WARNING: Removing unreachable block (ram,0x019c5548) */
/* WARNING: Removing unreachable block (ram,0x019c577d) */
/* WARNING: Removing unreachable block (ram,0x019c578a) */

longlong * FUN_019c5150(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00243390();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01271180();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar3 = 0;
      do {
        uVar4 = (ulonglong)uVar3;
        FUN_01266770();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        FUN_01266b80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_01a02020();
    FUN_00d50b20();
  }
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @019c5bf0 — 1625 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c6001) */
/* WARNING: Removing unreachable block (ram,0x019c6107) */
/* WARNING: Removing unreachable block (ram,0x019c6110) */
/* WARNING: Removing unreachable block (ram,0x019c5e79) */
/* WARNING: Removing unreachable block (ram,0x019c5e82) */
/* WARNING: Removing unreachable block (ram,0x019c5fac) */
/* WARNING: Removing unreachable block (ram,0x019c60a4) */
/* WARNING: Removing unreachable block (ram,0x019c60ad) */
/* WARNING: Removing unreachable block (ram,0x019c5cdf) */
/* WARNING: Removing unreachable block (ram,0x019c6068) */
/* WARNING: Removing unreachable block (ram,0x019c6071) */
/* WARNING: Removing unreachable block (ram,0x019c6081) */
/* WARNING: Removing unreachable block (ram,0x019c608d) */
/* WARNING: Removing unreachable block (ram,0x019c5c87) */
/* WARNING: Removing unreachable block (ram,0x019c5cb0) */
/* WARNING: Removing unreachable block (ram,0x019c5c89) */
/* WARNING: Removing unreachable block (ram,0x019c5cb2) */
/* WARNING: Removing unreachable block (ram,0x019c6284) */
/* WARNING: Removing unreachable block (ram,0x019c628d) */

void FUN_019c5bf0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  bool bVar10;
  int local_68;
  undefined8 *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = DAT_02572370;
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      lVar8 = *(longlong *)(lVar1 + 0x10);
      lVar5 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pVar7 = (pthread_key_t)lVar8;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (lVar5 != local_40) {
          if (local_38 != '\0') {
            bVar10 = lVar5 != 0;
            lVar5 = local_40;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_019c5e00;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar5 != 0;
          lVar5 = local_40;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_019c5e00:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      cVar3 = FUN_00c9ff50();
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02572358;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        bVar10 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00805b20();
        if (local_58 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          FUN_00d50b00();
          puVar9 = local_58;
        }
        bVar10 = local_58 != (undefined8 *)0x0;
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      FUN_00d235a0();
      if ((bVar10) && (puVar9 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = lVar5;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = plVar4[2];
  if (0 < *(int *)(lVar1 + 0xc)) {
    pVar7 = 0;
    do {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019c6680();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_012edae0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = pVar7 + 1;
    } while ((int)pVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @019be690 — 1594 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019bea78) */
/* WARNING: Removing unreachable block (ram,0x019bea81) */
/* WARNING: Removing unreachable block (ram,0x019bea2b) */
/* WARNING: Removing unreachable block (ram,0x019be88e) */
/* WARNING: Removing unreachable block (ram,0x019be897) */
/* WARNING: Removing unreachable block (ram,0x019be761) */
/* WARNING: Removing unreachable block (ram,0x019be76a) */
/* WARNING: Removing unreachable block (ram,0x019bec9b) */
/* WARNING: Removing unreachable block (ram,0x019beca4) */
/* WARNING: Removing unreachable block (ram,0x019beae7) */
/* WARNING: Removing unreachable block (ram,0x019beb10) */
/* WARNING: Removing unreachable block (ram,0x019beae9) */
/* WARNING: Removing unreachable block (ram,0x019beb12) */

void FUN_019be690(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  int local_40;
  
  if (unaff_RDI[0x58] == *unaff_RSI) {
    return;
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  FUN_00d46300();
  lVar2 = local_c8;
  lVar3 = DAT_026f6f98;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
      lVar3 = DAT_026f6f98;
    }
  }
  else {
    local_c0 = '\0';
  }
  DAT_026f6f98 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)0x0;
  if (*unaff_RSI != 0) {
    FUN_00d403d0();
    lVar2 = DAT_027e13e0;
    if (DAT_027e13e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_100 = '\0';
    local_108 = plVar7;
    FUN_00d40470(&local_108,&stack0xffffffffffffff48,1,3);
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)*unaff_RSI;
  }
  FUN_00827d60();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = unaff_RSI;
    if (cVar5 != '\0') goto LAB_019be8d2;
  }
  plVar8 = &DAT_02802688;
LAB_019be8d2:
  if ((bool)*(char *)((longlong)unaff_RDI + 0x512) != (*plVar8 != 0)) {
    *(bool *)((longlong)unaff_RDI + 0x512) = *plVar8 != 0;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  plVar8 = (longlong *)0x0;
  if ((longlong *)unaff_RDI[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x450))();
    plVar8 = (longlong *)unaff_RDI[0x58];
  }
  plVar1 = (longlong *)*unaff_RSI;
  plVar4 = plVar8;
  if (plVar8 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x58] = (longlong)plVar1;
    plVar4 = plVar1;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar4 = (longlong *)unaff_RDI[0x58];
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x448))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar2 = unaff_RDI[0x58];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xed8))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0x81];
  if ((plVar8 != (longlong *)0x0) && ((longlong *)unaff_RDI[0x58] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x420))();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar8 + 0x918))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x4b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x4b] + 0x620))();
  }
  lVar3 = unaff_RDI[0x4a];
  if (lVar3 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar3 + 0xc)) {
      FUN_01981860();
      local_f8 = *unaff_RSI;
      local_f0 = '\0';
      FUN_01983f50();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a01cb0();
  }
  if ((longlong *)unaff_RDI[0x80] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x80] + 0x620))();
  }
  if (unaff_RDI[0x7f] != 0) {
    unaff_RDI[0x5a] = unaff_RDI[0x5b];
    uVar6 = FUN_01e1f170();
    *(undefined4 *)(unaff_RDI + 0x5b) = uVar6;
    uVar6 = FUN_01e1f180();
    *(undefined4 *)((longlong)unaff_RDI + 0x2dc) = uVar6;
  }
  FUN_00d403d0();
  local_e8 = DAT_026f6ed8;
  if (DAT_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  FUN_00d50b00();
  local_d0 = '\0';
  local_d8 = plVar7;
  FUN_00d40470(&local_d8,&stack0xffffffffffffff78,1,3);
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xa48))();
  (**(code **)(*unaff_RDI + 0x620))();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019c0170 — 1423 bytes
// ============================================================

void FUN_019c0170(longlong *param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  local_38 = param_1;
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else if (*(int *)(*param_2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d23310();
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_c8);
    plVar8 = &local_60;
    if ((char)local_c8 != '\0') {
      plVar8 = &local_c8;
    }
    local_60 = CONCAT71(local_60._1_7_,(char)local_c8);
    *(undefined1 *)plVar8 = 0;
    if (((char)local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar9);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_60 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_a0 = '\0';
      local_a8 = (longlong *)0x0;
      FUN_00cb1fa0();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    lVar3 = *param_2;
    local_88 = puVar4;
    if (lVar3 != 0) {
      local_c8._0_1_ = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        pVar9 = 0;
        do {
          pVar7 = pVar9;
          pvVar2 = _pthread_getspecific(pVar9);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          local_80 = local_60;
          if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (*local_38 == 0) {
            uVar5 = (**(code **)(*unaff_RSI + 0x988))();
            lVar11 = local_60;
            if (local_60 == 0) {
              local_78 = 0;
              lVar11 = 0;
            }
            else {
              local_78 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar11 = *(longlong *)(*local_38 + 0x10);
            if (lVar11 == 0) {
              lVar11 = 0;
              local_78 = 0;
            }
            else {
              uVar5 = FUN_00d50b00();
              local_78 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            }
          }
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar6 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_019c0500;
            }
          }
          else if (local_60 != 0) {
LAB_019c0500:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar6;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar10 = -local_48._4_4_;
                }
                else {
                  iVar10 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar10);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar10 = 0;
                }
                local_48 = CONCAT44(iVar10,(int)local_48);
              }
              lVar6 = (longlong)(int)local_48;
              iVar10 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              if (*(int *)(local_50 + 0xc) <= iVar10) break;
              local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar6 * 8);
              pvVar2 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar6 = local_98;
              if (local_90 == '\0') {
                if (local_98 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_90 = '\0';
              }
              local_70 = lVar6;
              local_68 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_70 = local_60;
                local_68 = '\0';
                FUN_00d21140();
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (lVar11 != 0)) {
            FUN_00d50b20();
          }
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          pVar9 = pVar9 + 1;
          local_b8 = CONCAT44(local_b8._4_4_,pVar9);
        } while ((int)pVar9 < *(int *)(lVar3 + 0xc));
      }
      FUN_001159b0();
    }
    *unaff_RDI = (longlong)local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}




// ============================================================
// @019c29e0 — 1405 bytes
// ============================================================

void FUN_019c29e0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  double dVar8;
  double dVar9;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0xa18))();
  if (local_40 == (longlong *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a8c310();
    (**(code **)(*unaff_RSI + 0xa18))();
    bVar7 = local_50 == local_80;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    goto LAB_019c2f2f;
  }
  if ((longlong *)unaff_RSI[0x9d] == (longlong *)0x0) {
LAB_019c2cf5:
    lVar6 = unaff_RSI[0x9d];
    if (lVar6 == 0) goto LAB_019c2d16;
  }
  else {
    (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
    (**(code **)(*unaff_RSI + 0x958))();
    plVar5 = local_40;
    plVar1 = local_50;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == plVar1) {
      FUN_01a8c310();
      (**(code **)(*unaff_RSI + 0xa18))();
      plVar5 = local_40;
      plVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == plVar1) {
        iVar2 = FUN_01a904a0();
        iVar3 = FUN_01a904a0();
        if (iVar2 == iVar3) {
          iVar2 = FUN_01a90480();
          iVar3 = FUN_01a90480();
          if (iVar2 == iVar3) {
            (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x388))();
            (**(code **)(*(longlong *)*param_2 + 0x388))();
            plVar5 = local_40;
            plVar1 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 == plVar1) {
              dVar8 = (double)FUN_01a905a0();
              dVar9 = (double)FUN_01a905a0();
              if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) goto LAB_019c2cf5;
            }
          }
        }
      }
    }
    (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
      plVar1 = local_40;
      lVar6 = unaff_RSI[0x9d];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RSI[0x9d] != 0) {
      unaff_RSI[0x9d] = 0;
      FUN_00d50b20();
      goto LAB_019c2cf5;
    }
LAB_019c2d16:
    FUN_01a904a0();
    uVar4 = FUN_01a90480();
    (**(code **)(*(longlong *)*param_2 + 0x388))();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*unaff_RSI + 0xa18))();
    local_58 = 0;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_80;
    FUN_01a905a0();
    FUN_01a8bce0(1,uVar4,&local_70,&local_60);
    plVar1 = (longlong *)unaff_RSI[0x9d];
    plVar5 = plVar1;
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_019c2df4;
        }
        FUN_00d50b00();
        plVar1 = (longlong *)unaff_RSI[0x9d];
        unaff_RSI[0x9d] = (longlong)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_019c2df4:
        unaff_RSI[0x9d] = (longlong)plVar5;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x958))();
    plVar1 = local_40;
    lVar6 = unaff_RSI[0x9d];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3d8))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = unaff_RSI[0x9d];
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_019c2f2f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @019aa080 — 1235 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019aa2a2) */
/* WARNING: Removing unreachable block (ram,0x019aa2ae) */
/* WARNING: Removing unreachable block (ram,0x019aa53f) */
/* WARNING: Removing unreachable block (ram,0x019aa54b) */

void FUN_019aa080(undefined8 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar10;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar8 = (longlong *)&DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  plVar5 = (longlong *)unaff_RSI[0x3d];
  iVar3 = *(int *)((longlong)plVar5 + 0xc);
  if (iVar3 == 1) {
    FUN_00d23310();
    lVar7 = local_68;
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (longlong *)local_60;
    }
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d23310();
      lVar7 = local_68;
      plVar8 = &local_78;
      plVar5 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar5 = plVar8;
      }
      local_78._0_1_ = local_60[0];
      *(char *)plVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      lVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = lVar9;
      local_60[0] = '\0';
      FUN_00d214d0();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aa40b;
    }
    plVar5 = (longlong *)unaff_RSI[0x3d];
    iVar3 = *(int *)((longlong)plVar5 + 0xc);
  }
  if (1 < iVar3) {
    local_60[0] = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = plVar5;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          iVar3 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar3) break;
      lVar9 = local_58[2];
      local_68 = *(longlong *)(lVar9 + 8 + lVar7 * 8);
      cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
      if (cVar2 != '\0') {
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        lVar7 = CONCAT71(local_78._1_7_,(char)local_78);
        if (local_70 == '\0') {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar7;
        FUN_00d214d0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
      }
    }
    plVar8 = local_58;
    FUN_000be170();
  }
LAB_019aa40b:
  iVar3 = (**(code **)(*unaff_RSI + 0x9f0))();
  if (((puVar4 != (undefined8 *)0x0) && (iVar3 != 0)) && (0 < *(int *)((longlong)puVar4 + 0xc))) {
    uVar10 = (ulonglong)(*(int *)((longlong)puVar4 + 0xc) - 1);
    if (iVar3 == 1) {
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *unaff_RSI))();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @019ab7b0 — 1196 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019abaa7) */
/* WARNING: Removing unreachable block (ram,0x019abab3) */

undefined8 * FUN_019ab7b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  pthread_key_t in_ECX;
  code *pcVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RSI[0x3e] + 0xc) == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_90);
    plVar5 = &local_90;
    if ((char)local_90 == '\0') {
      plVar5 = &local_40;
    }
    *(undefined1 *)plVar5 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    if (((char)local_40 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    local_68 = local_98;
    local_60 = '\x01';
    cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      local_58._0_1_ = (char)local_90;
      plVar5 = &local_90;
      if ((char)local_90 == '\0') {
        plVar5 = &local_58;
      }
      *(undefined1 *)plVar5 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_58 != '\0');
      plVar5 = &local_58;
      if ((char)local_58 == '\0') {
        plVar5 = &local_40;
      }
      *(undefined1 *)plVar5 = 0;
      if (((char)local_58 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_90._0_1_ = '\0';
      cVar4 = FUN_00d23d70();
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(in_ECX);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*unaff_RSI + 0x9f0))();
        FUN_012e9900(param_1,param_2);
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      if ((char)local_40 == '\0') {
        return unaff_RDI;
      }
      if (local_98 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  else if (*(int *)(unaff_RSI[0x3e] + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*unaff_RSI + 0x9f0))();
  pcVar3 = DAT_02572370;
  lVar1 = unaff_RSI[0x3e];
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_90._0_1_ = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_70 = 0;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar10 = 0;
      puVar6 = (undefined8 *)0x0;
      local_70 = 0;
      pcVar9 = DAT_02572370;
      do {
        local_40 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        local_38 = '\0';
        cVar4 = FUN_00d23d70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            uVar7 = (*pcVar3)();
            local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
          if (cVar4 != '\0') {
            pvVar8 = _pthread_getspecific((pthread_key_t)pcVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_012e9900(param_1,param_2);
            lVar2 = CONCAT71(local_58._1_7_,(char)local_58);
            if (local_50 == '\0') {
              if (lVar2 != 0) {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar2;
            FUN_00d214d0(uVar7,*(undefined4 *)((longlong)puVar6 + 0xc));
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(local_58._1_7_,(char)local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_70 != '\0') goto LAB_019abbcd;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_019abbcd;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_019abbcd:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @019bf590 — 1166 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019bf812) */
/* WARNING: Removing unreachable block (ram,0x019bf79a) */
/* WARNING: Removing unreachable block (ram,0x019bf7a3) */
/* WARNING: Removing unreachable block (ram,0x019bf8a3) */
/* WARNING: Removing unreachable block (ram,0x019bf8ac) */
/* WARNING: Removing unreachable block (ram,0x019bf8fc) */
/* WARNING: Removing unreachable block (ram,0x019bf905) */
/* WARNING: Removing unreachable block (ram,0x019bf679) */
/* WARNING: Removing unreachable block (ram,0x019bf685) */
/* WARNING: Removing unreachable block (ram,0x019bf910) */
/* WARNING: Removing unreachable block (ram,0x019bf919) */
/* WARNING: Removing unreachable block (ram,0x019bf93f) */
/* WARNING: Removing unreachable block (ram,0x019bf94c) */

longlong * FUN_019bf590(longlong param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_b0;
  char local_a8;
  longlong local_60;
  char local_58;
  longlong local_48;
  
  cVar1 = FUN_019a9840();
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return unaff_RDI;
    }
    if (lVar4 != 0) {
LAB_019bf618:
      FUN_00d50b00();
    }
LAB_019bf620:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf620;
    }
    else {
      if (1 < *(int *)(lVar4 + 0xc)) {
        FUN_0025e9a0();
        if ((local_a8 == '\0') && (local_b0 != 0)) {
          FUN_00d50b00();
        }
        lVar4 = *param_2;
        if (lVar4 == 0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = 0;
          bVar5 = false;
          if ((char)param_2[1] == '\0') {
LAB_019bfa09:
            *unaff_RDI = lVar4;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            local_48 = 0;
            goto joined_r0x019bfa18;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xc) < 1) {
            bVar5 = false;
            local_48 = 0;
          }
          else {
            iVar3 = 0;
            local_48 = 0;
            bVar5 = false;
            do {
              pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01274b60();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              cVar1 = FUN_00d23d70();
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 == '\0') {
                pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274b60();
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                FUN_00d21140();
                if (local_60 != 0) {
                  FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_48 == 0) {
                  FUN_00243390();
                  local_48 = local_60;
                  param_1 = local_60;
                  if (local_60 == 0) {
                    local_48 = 0;
                  }
                  else {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                FUN_00d23f50();
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(lVar4 + 0xc));
          }
          FUN_001159b0();
          if (local_48 != 0) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (!bVar5) {
              FUN_00d50b00();
            }
            *unaff_RDI = local_48;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            bVar5 = false;
            goto joined_r0x019bfa18;
          }
          lVar4 = *param_2;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if ((char)param_2[1] == '\0') {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
            goto LAB_019bfa09;
          }
        }
        *unaff_RDI = lVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(param_2 + 1) = 0;
        local_48 = 0;
joined_r0x019bfa18:
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if (!bVar5) {
          return unaff_RDI;
        }
        if (local_48 == 0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)param_2[1] == '\0') goto LAB_019bf618;
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return unaff_RDI;
}




// ============================================================
// @019ac7b0 — 1111 bytes
// ============================================================

longlong * FUN_019ac7b0(double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t in_ECX;
  pthread_key_t pVar6;
  longlong lVar7;
  char *pcVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined1 local_90 [4];
  int iStack_8c;
  undefined1 local_88 [4];
  int iStack_84;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  lVar9 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar9 != 0) {
    if ((*(double *)(unaff_RSI + 0x58) <= param_1) && (param_1 < *(double *)(unaff_RSI + 0x60))) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      FUN_00d50b00();
      *unaff_RDI = lVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    *(undefined8 *)(unaff_RSI + 0x50) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa20))();
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019ac865;
    }
  }
  else if (local_50 != 0) {
LAB_019ac865:
    (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa18))();
    if (local_50 == 0) {
      lVar9 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar9 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar10 = lVar9 == 0;
      bVar2 = true;
      local_40 = 0;
    }
    else {
      lVar7 = local_50;
      if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 == 0) {
        bVar2 = false;
        bVar10 = true;
      }
      else {
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7bcc0();
        pVar6 = 0;
        uVar5 = FUN_016cb9d0(param_1,4);
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(uVar5,1,local_90,local_88);
        pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_48[0]);
        pcVar8 = local_38;
        if (local_48[0] != '\0') {
          pcVar8 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)(unaff_RSI + 0x50);
        if (lVar9 == local_50) {
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RSI + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RSI + 0x50) = local_50;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if (*(longlong *)(unaff_RSI + 0x50) != 0) {
          if (iStack_8c == 0) {
            uVar5 = (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x940))();
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_016c98e0();
          }
          *(undefined8 *)(unaff_RSI + 0x58) = uVar5;
          if (iStack_84 == 0) {
            dVar12 = (double)(**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x940))();
            dVar11 = (double)(**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x918))();
            dVar12 = dVar12 + dVar11;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_016c98e0();
          }
          *(double *)(unaff_RSI + 0x60) = dVar12;
        }
        bVar2 = false;
        bVar10 = false;
      }
    }
    bVar1 = false;
    goto LAB_019acb9b;
  }
  bVar2 = true;
  bVar10 = true;
  bVar3 = false;
  local_40 = 0;
  bVar1 = true;
LAB_019acb9b:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar9 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (bVar3 && !bVar10) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @019cafa0 — 1110 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019cb366) */
/* WARNING: Removing unreachable block (ram,0x019cb36f) */
/* WARNING: Removing unreachable block (ram,0x019cb1bd) */
/* WARNING: Removing unreachable block (ram,0x019cb1ca) */
/* WARNING: Removing unreachable block (ram,0x019cb334) */
/* WARNING: Removing unreachable block (ram,0x019cb33d) */
/* WARNING: Removing unreachable block (ram,0x019cb3d0) */
/* WARNING: Removing unreachable block (ram,0x019cb3dc) */
/* WARNING: Removing unreachable block (ram,0x019cb248) */
/* WARNING: Removing unreachable block (ram,0x019cb251) */
/* WARNING: Removing unreachable block (ram,0x019cb07f) */
/* WARNING: Removing unreachable block (ram,0x019cb088) */
/* WARNING: Removing unreachable block (ram,0x019cb187) */
/* WARNING: Removing unreachable block (ram,0x019cb190) */
/* WARNING: Removing unreachable block (ram,0x019cb309) */
/* WARNING: Removing unreachable block (ram,0x019cb312) */
/* WARNING: Removing unreachable block (ram,0x019cb0cf) */
/* WARNING: Removing unreachable block (ram,0x019cb0f0) */
/* WARNING: Removing unreachable block (ram,0x019cb0d1) */
/* WARNING: Removing unreachable block (ram,0x019cb0f2) */

ulonglong FUN_019cafa0(undefined *param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  longlong lVar10;
  undefined *local_70;
  char local_68;
  int local_58;
  undefined *local_40;
  char local_38;
  
  puVar7 = local_70;
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_70 + 0xc);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    uVar9 = 0;
    goto LAB_019cb402;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_68 == '\0') {
    puVar8 = &DAT_02572358;
    if (local_70 != (undefined *)0x0) {
      FUN_00d50b00();
      goto LAB_019cb08d;
    }
  }
  else {
    puVar8 = &DAT_02572358;
    if (local_70 != (undefined *)0x0) {
LAB_019cb08d:
      local_68 = '\0';
      local_70 = (undefined *)0x0;
      local_58 = -1;
      puVar8 = &DAT_02572358;
LAB_019cb0cb:
      while( true ) {
        lVar10 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(puVar7 + 0xc) <= local_58) break;
        local_70 = *(undefined **)(*(longlong *)(puVar7 + 0x10) + 8 + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(puVar7 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012972e0();
        puVar8 = local_40;
        if (local_38 == '\0') goto LAB_019cb170;
        if (local_40 != (undefined *)0x0) goto LAB_019cb1a0;
      }
      FUN_001159b0();
      FUN_00d50b20();
      param_1 = puVar7;
    }
  }
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0x9b0))();
    if (local_68 == '\0') {
      if (local_70 != (undefined *)0x0) {
        FUN_00d50b00();
        goto LAB_019cb256;
      }
    }
    else if (local_70 != (undefined *)0x0) {
LAB_019cb256:
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar10 = 0;
        do {
          puVar8 = local_40;
          puVar7 = *(undefined **)(*(longlong *)(local_70 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012972e0();
          if ((local_38 == '\0') && (local_40 != (undefined *)0x0)) {
            FUN_00d50b00();
          }
          cVar3 = FUN_00d23d70();
          if (cVar3 != '\0') {
            FUN_00d21140();
            local_40 = puVar7;
          }
          local_38 = '\0';
          if (puVar8 != (undefined *)0x0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xdc8))();
    puVar8 = local_70;
  }
  uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),iVar1 != 0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_019cb402:
  return uVar9 & 0xffffffff;
LAB_019cb170:
  if (local_40 != (undefined *)0x0) {
    FUN_00d50b00();
LAB_019cb1a0:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_019cb0cb;
}




// ============================================================
// @019bccc0 — 1093 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019bd03e) */
/* WARNING: Removing unreachable block (ram,0x019bd047) */
/* WARNING: Removing unreachable block (ram,0x019bcfef) */
/* WARNING: Removing unreachable block (ram,0x019bcff8) */
/* WARNING: Removing unreachable block (ram,0x019bcf27) */
/* WARNING: Removing unreachable block (ram,0x019bcf30) */
/* WARNING: Removing unreachable block (ram,0x019bce09) */
/* WARNING: Removing unreachable block (ram,0x019bce11) */
/* WARNING: Removing unreachable block (ram,0x019bce16) */
/* WARNING: Removing unreachable block (ram,0x019bce32) */
/* WARNING: Removing unreachable block (ram,0x019bcd8d) */
/* WARNING: Removing unreachable block (ram,0x019bcd96) */
/* WARNING: Removing unreachable block (ram,0x019bce9b) */
/* WARNING: Removing unreachable block (ram,0x019bcea4) */
/* WARNING: Removing unreachable block (ram,0x019bcf8c) */
/* WARNING: Removing unreachable block (ram,0x019bcf95) */
/* WARNING: Removing unreachable block (ram,0x019bd098) */
/* WARNING: Removing unreachable block (ram,0x019bd0a1) */
/* WARNING: Removing unreachable block (ram,0x019bd003) */
/* WARNING: Removing unreachable block (ram,0x019bd00c) */

undefined4 FUN_019bccc0(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 local_64;
  longlong *local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar3)();
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x59] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x59] + 0x490))();
  }
  local_64 = 0;
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar1 == local_58) {
      if (((char)unaff_RSI[1] == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
        goto LAB_019bce7c;
      }
      lVar2 = *unaff_RSI;
    }
    else {
      lVar2 = unaff_RSI[1];
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_58;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019bce7c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar2 = *unaff_RSI;
    }
    if ((lVar2 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      if ((longlong *)unaff_RDI[0x59] != (longlong *)0x0) {
        (**(code **)(*(longlong *)unaff_RDI[0x59] + 0x4a0))();
      }
      (**(code **)(*unaff_RDI + 0xdf0))((int)DAT_023dccec,(int)DAT_023dccf4);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return local_64;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*unaff_RDI + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*unaff_RDI + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xe20))();
      uVar7 = (**(code **)(*local_58 + 0x50))();
      if ((char)uVar7 == '\0') {
        uVar7 = (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Da,1);
      }
      plVar1 = (longlong *)unaff_RDI[0x59];
      local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if (plVar1 != (longlong *)0x0) {
        FUN_01d3b590();
        (**(code **)(*plVar1 + 0x498))(uVar10,uVar9);
      }
    }
  } while( true );
}




// ============================================================
// @019a8300 — 1072 bytes
// str: ""MUEditorElementView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a8300(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong **pplVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined7 uVar11;
  ulonglong uVar12;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar3 = *(longlong *)(unaff_RSI + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc);
  uVar12 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    uVar8 = 0;
    plVar7 = (longlong *)0x0;
    do {
      uVar5 = uVar5 - 1;
      plVar10 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5 * 8);
      local_58 = plVar10;
      local_50 = '\0';
      uVar4 = 0;
      if ((DAT_02733c90 == '\0') && (uVar4 = ___cxa_guard_acquire(), (int)uVar4 != 0)) {
        _DAT_02714138 = FUN_0034cf20();
        _DAT_02714120 = "MUEditorElementView";
        _DAT_02714128 = 0x1f8;
        _DAT_02714130 = FUN_0034ceb0;
        _DAT_02714140 = 0;
        uRam0000000002714148 = 0;
        _DAT_02714150 = 0;
        _DAT_027141c8 = 0;
        uRam00000000027141d0 = 0;
        _DAT_027141d8 = 0;
        DAT_027141da = 1;
        _DAT_02714158 = 0;
        uRam0000000002714160 = 0;
        _DAT_02714168 = 0;
        uRam0000000002714170 = 0;
        _DAT_02714178 = 0;
        uRam0000000002714180 = 0;
        _DAT_02714188 = 0;
        uRam0000000002714190 = 0;
        _DAT_02714198 = 0;
        uRam00000000027141a0 = 0;
        _DAT_027141a8 = 0;
        uRam00000000027141b0 = 0;
        _DAT_027141b8 = 0;
        uRam00000000027141c0 = 0;
        DAT_027141e3 = 0;
        _DAT_027141db = 0;
        uVar4 = ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar4 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if ((char)uVar4 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar6;
      cVar1 = (char)uVar8;
      if (plVar10 == plVar7) {
        plVar9 = plVar7;
        if ((cVar1 == '\0') && (plVar10 != (longlong *)0x0)) {
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019a8413;
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          FUN_00d50b00();
        }
        else {
          local_40 = uVar8;
        }
      }
      else {
        plVar9 = plVar10;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar10 != (longlong *)0x0) {
            uVar4 = FUN_00d50b00();
          }
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((cVar1 != '\0') && (plVar7 != (longlong *)0x0)) {
            uVar4 = FUN_00d50b20();
          }
LAB_019a8413:
          *(undefined1 *)(pplVar6 + 1) = 0;
          local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          plVar10 = plVar9;
        }
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = local_48;
      if ((plVar9 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar9 + 0x958))(param_1,param_2), uVar8 = local_48, cVar1 != '\0'))
      {
        (**(code **)(*plVar9 + 0x928))();
        plVar7 = local_58;
        uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
        plVar10 = local_58;
        if (local_58 == local_38) {
          uVar8 = local_48;
          plVar7 = local_38;
          if (((char)local_48 == '\0') && (local_58 != (longlong *)0x0)) {
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
            if (local_50 != '\0') goto joined_r0x019a8601;
            FUN_00d50b00();
LAB_019a857b:
            uVar8 = CONCAT71(uVar11,1);
            plVar7 = local_38;
          }
joined_r0x019a861d:
          local_38 = plVar7;
          plVar10 = local_58;
          if (local_50 != '\0') {
LAB_019a8581:
            plVar10 = local_58;
            plVar7 = local_38;
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar10 = local_58;
              plVar7 = local_38;
            }
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar8 = CONCAT71(uVar11,1);
            if ((char)local_48 == '\0') goto joined_r0x019a861d;
            if (local_38 != (longlong *)0x0) {
              FUN_00d50b20();
              local_38 = plVar7;
              goto LAB_019a857b;
            }
            local_38 = plVar7;
            plVar10 = local_58;
            if (local_50 == '\0') goto joined_r0x019a8601;
            goto LAB_019a8581;
          }
          uVar8 = CONCAT71(uVar11,1);
          if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar10 = local_58;
          }
        }
joined_r0x019a8601:
        local_58 = plVar7;
        if (local_58 == (longlong *)0x0) {
          local_38 = (longlong *)0x0;
          local_58 = plVar10;
        }
        else {
          local_50 = '\0';
          local_38 = local_58;
          FUN_00d235a0();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)uVar12 < 2) goto LAB_019a86eb;
      uVar12 = uVar12 - 1;
      lVar3 = *(longlong *)(unaff_RSI + 0x38);
      local_48 = uVar8;
      uVar8 = local_40;
      plVar7 = plVar9;
    } while( true );
  }
  uVar8 = 0;
  plVar7 = (longlong *)0x0;
  cVar1 = '\0';
  plVar9 = (longlong *)0x0;
LAB_019a8700:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a86eb:
  cVar1 = (char)local_40;
  plVar7 = local_38;
  goto LAB_019a8700;
}




// ============================================================
// @019ca970 — 1064 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019cad69) */
/* WARNING: Removing unreachable block (ram,0x019cad72) */

ulonglong FUN_019ca970(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_88;
  char local_80;
  double local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  uVar8 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  if ((iVar1 != 0) && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0xe20))();
    FUN_00d23310();
    uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar7 = local_38;
    if (local_40[0] != '\0') {
      pcVar7 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar7 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_0125a280();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = 1;
    while( true ) {
      (**(code **)(*unaff_RDI + 0xe20))();
      iVar1 = *(int *)(local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (iVar1 <= lVar9) break;
      (**(code **)(*unaff_RDI + 0xe20))();
      pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar11 < local_68) {
        (**(code **)(*unaff_RDI + 0xe20))();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_68 = (double)FUN_0125a280();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    uVar12 = (*DAT_02572370)();
    dVar11 = (double)(**(code **)(*unaff_RDI + 0x9b0))(uVar12,1);
    if ((((local_40[0] == '\0') && (local_48 != 0)) &&
        (dVar11 = (double)FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      dVar11 = (double)FUN_00d50b20();
    }
    if (*(int *)(local_48 + 0xc) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar10 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + lVar10 * 8);
        lVar6 = local_48;
        if (lVar9 == lVar2) {
          if ((!bVar3) && (lVar9 != 0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
            bVar3 = true;
            lVar9 = lVar2;
          }
          else {
            bVar3 = true;
            lVar9 = lVar2;
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        if (local_68 <= dVar11) {
          local_40[0] = '\0';
          dVar11 = (double)FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar9 != 0)) {
            dVar11 = (double)FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(local_48 + 0xc));
    }
    (**(code **)(*unaff_RDI + 0xdc8))(dVar11,1);
    FUN_00d50b20();
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}




// ============================================================
// @019c2380 — 990 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c2526) */
/* WARNING: Removing unreachable block (ram,0x019c2532) */
/* WARNING: Removing unreachable block (ram,0x019c25a3) */
/* WARNING: Removing unreachable block (ram,0x019c25ac) */

undefined4 FUN_019c2380(pthread_key_t param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  longlong *plVar8;
  undefined8 local_78;
  longlong *local_40;
  char local_38;
  
  cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar4 == '\0') {
    return 0;
  }
  (**(code **)(*unaff_RDI + 0xe10))();
  iVar1 = *(int *)((longlong)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    return 0;
  }
  local_78 = FUN_00e7bdb0();
  pplVar7 = &local_40;
  (**(code **)(*unaff_RDI + 0xd40))();
  plVar8 = local_40;
  FUN_00083c20();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019c2427;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_019c2427:
  plVar8 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    if ((param_2 != '\0') && (plVar2 = (longlong *)unaff_RDI[0x69], plVar2 != (longlong *)0x0)) {
      (**(code **)(*unaff_RDI + 0xe10))();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01266200();
      (**(code **)(*plVar2 + 0x60))();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_019c29e0();
    if (plVar8 == local_40) {
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0xe10))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = FUN_01ca2090();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_2 != '\0') && (plVar2 = (longlong *)unaff_RDI[0x69], plVar2 != (longlong *)0x0)) {
      (**(code **)(*unaff_RDI + 0xa18))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c98e0();
      (**(code **)(*plVar2 + 0x60))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0xe10))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01c936e0(param_2,local_78);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar5;
}




// ============================================================
// @0193e5c0 — 980 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0193e8d4) */
/* WARNING: Removing unreachable block (ram,0x0193e8dd) */
/* WARNING: Removing unreachable block (ram,0x0193e87e) */
/* WARNING: Removing unreachable block (ram,0x0193e887) */
/* WARNING: Removing unreachable block (ram,0x0193e78b) */
/* WARNING: Removing unreachable block (ram,0x0193e794) */
/* WARNING: Removing unreachable block (ram,0x0193e68d) */
/* WARNING: Removing unreachable block (ram,0x0193e696) */
/* WARNING: Removing unreachable block (ram,0x0193e6f9) */
/* WARNING: Removing unreachable block (ram,0x0193e701) */
/* WARNING: Removing unreachable block (ram,0x0193e706) */
/* WARNING: Removing unreachable block (ram,0x0193e722) */
/* WARNING: Removing unreachable block (ram,0x0193e819) */
/* WARNING: Removing unreachable block (ram,0x0193e822) */
/* WARNING: Removing unreachable block (ram,0x0193e937) */
/* WARNING: Removing unreachable block (ram,0x0193e940) */
/* WARNING: Removing unreachable block (ram,0x0193e91a) */
/* WARNING: Removing unreachable block (ram,0x0193e927) */

undefined4 FUN_0193e5c0(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_98;
  longlong local_58;
  char local_50;
  
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar3)();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d243f0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  do {
    (**(code **)(*unaff_RDI + 0x658))();
    lVar1 = *unaff_RSI;
    if (lVar1 == local_58) {
      if (((char)unaff_RSI[1] == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
        goto LAB_0193e76c;
      }
      lVar1 = *unaff_RSI;
    }
    else {
      lVar2 = unaff_RSI[1];
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0193e76c:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      lVar1 = *unaff_RSI;
    }
    if ((lVar1 == 0) || (iVar4 = FUN_01d3a5a0(), iVar4 == 6)) {
      (**(code **)(*unaff_RDI + 0xdf0))((int)DAT_023dccec,(int)DAT_023dccf4);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      return local_98;
    }
    iVar4 = FUN_01d3a5a0();
    if (iVar4 == 5) {
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      uVar10 = FUN_00d05580(uVar8);
      (**(code **)(*unaff_RDI + 0xdf0))();
      FUN_00d216c0();
      FUN_00d23480();
      (**(code **)(*unaff_RDI + 0xb38))(uVar10,uVar9);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d23480();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (**(code **)(*(longlong *)unaff_RDI[0x41] + 0x50))();
      local_98 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      if ((char)uVar7 == '\0') {
        (**(code **)(&DAT_00001710 + *unaff_RDI))();
      }
    }
  } while( true );
}




// ============================================================
// @019aa7b0 — 949 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019aa8a8) */
/* WARNING: Removing unreachable block (ram,0x019aa8b1) */
/* WARNING: Removing unreachable block (ram,0x019aab3c) */
/* WARNING: Removing unreachable block (ram,0x019aab48) */
/* WARNING: Removing unreachable block (ram,0x019aa921) */
/* WARNING: Removing unreachable block (ram,0x019aa92d) */
/* WARNING: Removing unreachable block (ram,0x019aa837) */
/* WARNING: Removing unreachable block (ram,0x019aa860) */
/* WARNING: Removing unreachable block (ram,0x019aa839) */
/* WARNING: Removing unreachable block (ram,0x019aa862) */
/* WARNING: Removing unreachable block (ram,0x019aa9b7) */
/* WARNING: Removing unreachable block (ram,0x019aa9c0) */

undefined8 * FUN_019aa7b0(longlong param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar10;
  longlong local_80;
  char local_78;
  int local_58;
  
  pcVar3 = DAT_02572370;
  lVar9 = unaff_RSI[0x3e];
  if (*(int *)(lVar9 + 0xc) == 0) {
    bVar2 = false;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_58 = -1;
    bVar2 = false;
    puVar6 = (undefined8 *)0x0;
    while (local_58 = local_58 + 1, local_58 < *(int *)(lVar9 + 0xc)) {
      pVar8 = (pthread_key_t)*(undefined8 *)(lVar9 + 0x10);
      cVar4 = FUN_00d23d70();
      if (cVar4 == '\0') {
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02572358;
          (*pcVar3)();
          bVar2 = true;
        }
        cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (cVar4 != '\0') {
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_000be170();
    param_1 = lVar9;
  }
  iVar5 = (**(code **)(*unaff_RSI + 0x9f0))();
  if (((puVar6 != (undefined8 *)0x0) && (iVar5 != 0)) && (0 < *(int *)((longlong)puVar6 + 0xc))) {
    uVar10 = (ulonglong)(*(int *)((longlong)puVar6 + 0xc) - 1);
    if (iVar5 == 1) {
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 != '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    else {
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 == '\0') {
          FUN_00d23620();
        }
        bVar1 = 0 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((puVar6 != (undefined8 *)0x0) && (param_2 != '\0')) {
    (**(code **)(&UNK_00001630 + *unaff_RSI))();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @019c6d40 — 944 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c6d9a) */
/* WARNING: Removing unreachable block (ram,0x019c6da3) */

ulonglong FUN_019c6d40(pthread_key_t param_1,char param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_40;
  char local_38;
  
  uVar6 = 0;
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    uVar4 = (ulonglong)*(uint *)(local_40 + 0xc);
    if (((uVar4 != 0) && (param_2 != '\0')) && (0 < (int)*(uint *)(local_40 + 0xc))) {
      uVar7 = 0;
      uVar6 = 0;
      bVar2 = false;
      do {
        uVar1 = *(ulonglong *)(*(longlong *)(local_40 + 0x10) + uVar7 * 8);
        if (uVar6 == uVar1) {
          if ((!bVar2) && (uVar6 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (uVar1 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (uVar6 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            uVar6 = uVar1;
          }
          else {
            bVar2 = true;
            uVar6 = uVar1;
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2f0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e9d0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125ea90();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012df8d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      if ((bVar2) && (uVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar4 != 0);
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}




// ============================================================
// @019c6750 — 881 bytes
// ============================================================

ulonglong FUN_019c6750(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  undefined8 *puVar5;
  longlong local_d0 [2];
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  ulonglong local_78;
  char local_70;
  ulonglong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar4 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe20))();
    if (local_a8 == (undefined8 *)0x0) {
      uVar4 = 1;
    }
    else {
      (**(code **)(*unaff_RDI + 0xe20))();
      uVar4 = (ulonglong)(*(int *)(local_48 + 0xc) == 0);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 == '\0') {
      (**(code **)(*unaff_RDI + 0xe20))();
      lVar1 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c0 = 1;
      uVar3 = FUN_019c5150();
      puVar5 = local_a8;
      if (local_a8 == (undefined8 *)0x0) {
        local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        puVar5 = (undefined8 *)0x0;
      }
      else {
        if (local_a0 == '\0') {
          FUN_00d50b00();
        }
        local_34 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (((param_2 != '\0') && (puVar5 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)puVar5 + 0xc) != 0)) {
        FUN_019c5bf0();
        FUN_00d403d0();
        local_b8 = DAT_026de568;
        if (DAT_026de568 != 0) {
          FUN_00d50b00();
        }
        local_b0 = '\x01';
        FUN_00d50b00();
        lVar1 = DAT_026de560;
        if (DAT_026de560 != 0) {
          FUN_00d50b00();
        }
        local_d0[0] = lVar1;
        FUN_00083ea0(2,local_d0);
        FUN_000b4da0();
        uVar4 = local_78;
        local_50 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_50 = '\x01';
        local_58 = uVar4;
        FUN_00d40470(&local_58,&stack0xffffffffffffff98,1,0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = (undefined8 *)&DAT_0253d630;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_a8 = &DAT_024c5048;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xda0))();
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if ((char)local_34 == '\0' && puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}




// ============================================================
// @019a9c40 — 838 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019a9d89) */
/* WARNING: Removing unreachable block (ram,0x019a9d92) */

longlong * FUN_019a9c40(undefined8 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  bool bVar7;
  longlong local_d8;
  char local_d0;
  undefined8 local_78;
  longlong local_58;
  char local_50;
  undefined8 local_40;
  longlong local_38;
  
  local_78 = 0;
  if (((param_2 == 0) || ((longlong *)unaff_RSI[0x69] == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xb0))(), cVar2 == '\0')) {
    local_40 = 0;
    lVar4 = unaff_RSI[0x3d];
    if (lVar4 != 0) goto LAB_019a9cdd;
LAB_019a9cb7:
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_019a9cbf:
    local_38 = 0;
  }
  else {
    local_78 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xc0))();
    local_40 = (**(code **)(*(longlong *)unaff_RSI[0x69] + 0xd0))();
    lVar4 = unaff_RSI[0x3d];
    if (lVar4 == 0) goto LAB_019a9cb7;
LAB_019a9cdd:
    if (*(int *)(lVar4 + 0xc) < 1) {
      bVar1 = false;
      local_38 = 0;
    }
    else {
      iVar6 = 0;
      local_38 = 0;
      bVar1 = false;
      do {
        lVar5 = lVar4;
        cVar2 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*unaff_RSI + 0x9f0))();
          FUN_019a9940(local_78,local_40);
          if (local_d8 == local_38) {
            if (local_d0 != '\0') {
              if ((!bVar1) && (local_d8 != 0)) {
                bVar1 = true;
                FUN_00d50b00();
              }
              bVar7 = local_38 == 0;
              goto joined_r0x019a9ec9;
            }
            bVar7 = local_38 == 0;
          }
          else {
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
            }
            bVar7 = local_d8 == 0;
            local_38 = local_d8;
            if (local_d0 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
joined_r0x019a9ec9:
              if (local_d8 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (!bVar7) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1) {
      *unaff_RDI = local_38;
      goto LAB_019a9f75;
    }
    if (local_38 == 0) goto LAB_019a9cbf;
    FUN_00d50b00();
  }
  *unaff_RDI = local_38;
LAB_019a9f75:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @019aae50 — 827 bytes
// ============================================================

undefined8 * FUN_019aae50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  undefined *puVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined8 uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*unaff_RSI + 0x9f0))();
      FUN_012e9900(param_1,param_2);
      if (local_50 == '\0') {
        return unaff_RDI;
      }
      if (local_40 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*unaff_RSI + 0x9f0))();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    lVar6 = unaff_RSI[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (pthread_key_t)puVar9;
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012e9900(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(undefined4 *)((longlong)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = unaff_RSI[0x3d];
        puVar9 = (undefined *)(longlong)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (longlong)puVar9);
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @019a9050 — 813 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019a925f) */
/* WARNING: Removing unreachable block (ram,0x019a926b) */

undefined8 * FUN_019a9050(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar4 = *(int *)(unaff_RSI[0x3d] + 0xc);
  if (iVar4 == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_88);
    plVar5 = &local_88;
    if ((char)local_88 == '\0') {
      plVar5 = &local_40;
    }
    *(undefined1 *)plVar5 = 0;
    if (((char)local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    if (((char)local_40 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    local_50 = local_90;
    local_48 = '\x01';
    cVar3 = (**(code **)(*unaff_RSI + 0x9a0))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      plVar5 = &local_88;
      if ((char)local_88 == '\0') {
        plVar5 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_88);
      *(undefined1 *)plVar5 = 0;
      if (((char)local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if ((char)local_40 == '\0') {
        return unaff_RDI;
      }
      if (local_90 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    iVar4 = *(int *)(unaff_RSI[0x3d] + 0xc);
  }
  if (iVar4 < 2) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &DAT_02572358;
    *puVar7 = &DAT_02572358;
    local_58 = puVar7;
    (*DAT_02572370)();
    lVar1 = unaff_RSI[0x3d];
    if (lVar1 != 0) {
      local_88._0_1_ = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar3 = (**(code **)(*unaff_RSI + 0x9a0))();
          if (cVar3 != '\0') {
            pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            lVar2 = local_68;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = lVar2;
            local_38 = '\0';
            FUN_00d214d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar4 = iVar4 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @019ab310 — 779 bytes
// ============================================================

undefined8 * FUN_019ab310(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  undefined *puVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  undefined8 uVar11;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  if (iVar2 == 1) {
    FUN_00d23310();
    lVar6 = local_40;
    local_50 = local_38[0];
    pcVar8 = &local_50;
    pcVar3 = local_38;
    if (local_38[0] == '\0') {
      pcVar3 = pcVar8;
    }
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == '\0') && (lVar6 != 0)) {
      FUN_00d50b00();
    }
    cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = pcVar8;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)pcVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012ea6f0(param_1,param_2);
      if (local_50 == '\0') {
        return unaff_RDI;
      }
      if (local_40 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    iVar2 = *(int *)(unaff_RSI[0x3d] + 0xc);
  }
  if (iVar2 < 2) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    lVar6 = unaff_RSI[0x3d];
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar10 = 0;
      do {
        pVar7 = (pthread_key_t)puVar9;
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar10 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        cVar1 = (**(code **)(*unaff_RSI + 0x9a0))();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar11 = FUN_012ea6f0(param_1,param_2);
          lVar6 = CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (lVar6 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38[0] = '\0';
          local_40 = lVar6;
          FUN_00d214d0(uVar11,*(undefined4 *)((longlong)puVar5 + 0xc));
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
        }
        lVar10 = lVar10 + 1;
        lVar6 = unaff_RSI[0x3d];
        puVar9 = (undefined *)(longlong)*(int *)(lVar6 + 0xc);
      } while (lVar10 < (longlong)puVar9);
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @019c3480 — 713 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c36fb) */
/* WARNING: Removing unreachable block (ram,0x019c3708) */
/* WARNING: Removing unreachable block (ram,0x019c3649) */
/* WARNING: Removing unreachable block (ram,0x019c3670) */
/* WARNING: Removing unreachable block (ram,0x019c364b) */
/* WARNING: Removing unreachable block (ram,0x019c3674) */

undefined8 FUN_019c3480(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RDI;
  pthread_key_t pVar9;
  ulonglong uVar10;
  double dVar11;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_48;
  int local_34;
  
  lVar2 = *unaff_RDI;
  iVar1 = *(int *)(lVar2 + 0xc);
  if (0 < *(int *)(lVar2 + 0xc)) {
    uVar10 = 0;
    local_34 = 0;
    do {
      lVar4 = local_60;
      pVar9 = (pthread_key_t)uVar10;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar10 * 8);
      pVar7 = pVar9;
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      FUN_012e9900(dVar11 + DAT_0241b698,DAT_0241b6a0);
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        do {
          lVar8 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar4 + 0xc) <= local_48) goto LAB_019c3724;
          local_60 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar8 * 8);
        } while ((lVar3 == local_60) || (cVar5 = FUN_019c32a0(), cVar5 == '\0'));
        local_34 = local_34 + 1;
LAB_019c3724:
        FUN_001159b0();
        FUN_00d50b20();
      }
      if (local_34 == iVar1) {
        FUN_001159b0();
        return 1;
      }
      uVar10 = (ulonglong)(pVar9 + 1);
    } while ((int)(pVar9 + 1) < *(int *)(lVar2 + 0xc));
  }
  FUN_001159b0();
  return 0;
}




// ============================================================
// @019a9940 — 708 bytes
// ============================================================

longlong * FUN_019a9940(double param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  int in_EDX;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    param_2 = param_2 - param_1;
    cVar3 = (char)in_ECX;
    if (in_EDX == 0) {
      if (cVar3 != '\0') {
        lVar5 = 0;
        do {
          if (*(int *)(lVar1 + 0xc) <= (int)lVar5) goto LAB_019a9bfb;
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_012755a0(param_1,param_2);
          lVar5 = lVar5 + 1;
        } while (cVar3 == '\0');
LAB_019a9baa:
        *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x019a9bdf:
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_001159b0();
        return unaff_RDI;
      }
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = **(longlong **)(lVar1 + 0x10);
        *(undefined1 *)(unaff_RDI + 1) = 0;
        goto joined_r0x019a9bdf;
      }
    }
    else if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      if (in_EDX == 1) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(in_ECX);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 != '\0') {
            if (cVar3 == '\0') goto LAB_019a9baa;
            pvVar4 = _pthread_getspecific(in_ECX);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_012755a0(param_1,param_2);
            if (cVar2 != '\0') goto LAB_019a9baa;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
    }
LAB_019a9bfb:
    FUN_001159b0();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @019c7c20 — 699 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c7c7a) */
/* WARNING: Removing unreachable block (ram,0x019c7c83) */

ulonglong FUN_019c7c20(pthread_key_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(ulonglong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfc10();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(ulonglong *)(uVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfc10();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @019c86b0 — 699 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c870a) */
/* WARNING: Removing unreachable block (ram,0x019c8713) */

ulonglong FUN_019c86b0(pthread_key_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(ulonglong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfbc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(ulonglong *)(uVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dfbc0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @019c76d0 — 699 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c772a) */
/* WARNING: Removing unreachable block (ram,0x019c7733) */

ulonglong FUN_019c76d0(pthread_key_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(ulonglong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01270ab0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(ulonglong *)(uVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_012708c0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012df8d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @019bd990 — 677 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019bd990(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  undefined *local_118 [14];
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar3 = DAT_028b28c8;
  if ((DAT_028b28c8 == (longlong *)0x0) || (DAT_028b28d1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b28c8 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b28c8 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b28c8 != (longlong *)0x0;
        DAT_028b28c8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b28d0 == '\0') {
        DAT_028b28d0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc9f0(DAT_0239109c,0);
      local_3c = 0;
      FUN_01cfc9f0(DAT_0239109c,0);
      local_38 = 0x3e800000;
      FUN_01cfc9f0(_DAT_023b294c,DAT_02390124);
      local_34 = 0x3f000000;
      FUN_01cfc9f0(DAT_02390124,DAT_02390124);
      local_30 = 0x3f000000;
      FUN_01cfc9f0(DAT_02390124,0);
      local_2c = 0x3f800000;
      FUN_019bddb0(&local_60,&local_3c,&local_38,&local_50,&local_2c);
      FUN_01f7ba60(DAT_023b5d7c,local_118);
      local_118[0] = &DAT_02628ac8;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_019fe220();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b28c8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_019bdc14;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_019bdc14:
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @019a6410 — 654 bytes
// str: ""MUEditorElementView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019a6410(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  local_38[0] = '\0';
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc);
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar6 = (longlong *)0x0;
  do {
    uVar5 = uVar5 - 1;
    plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar5 * 8);
    local_48 = plVar1;
    local_40 = '\0';
    if ((DAT_02733c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02714138 = FUN_0034cf20();
      _DAT_02714120 = "MUEditorElementView";
      _DAT_02714128 = 0x1f8;
      _DAT_02714130 = FUN_0034ceb0;
      _DAT_02714140 = 0;
      uRam0000000002714148 = 0;
      _DAT_02714150 = 0;
      _DAT_027141c8 = 0;
      uRam00000000027141d0 = 0;
      _DAT_027141d8 = 0;
      DAT_027141da = 1;
      _DAT_02714158 = 0;
      uRam0000000002714160 = 0;
      _DAT_02714168 = 0;
      uRam0000000002714170 = 0;
      _DAT_02714178 = 0;
      uRam0000000002714180 = 0;
      _DAT_02714188 = 0;
      uRam0000000002714190 = 0;
      _DAT_02714198 = 0;
      uRam00000000027141a0 = 0;
      _DAT_027141a8 = 0;
      uRam00000000027141b0 = 0;
      _DAT_027141b8 = 0;
      uRam00000000027141c0 = 0;
      DAT_027141e3 = 0;
      _DAT_027141db = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar7 = &local_48;
      if (cVar2 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
    plVar1 = *pplVar7;
    pplVar7 = pplVar7 + 1;
    if (plVar1 == plVar6) {
      if (((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) && (*(char *)pplVar7 != '\0')) {
        local_38[0] = '\x01';
        goto LAB_019a6520;
      }
    }
    else {
      bVar9 = plVar6 != (longlong *)0x0;
      plVar6 = plVar1;
      if (*(char *)pplVar7 == '\0') {
        pplVar7 = (longlong **)local_38;
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
          pplVar7 = (longlong **)local_38;
        }
      }
      else {
        if (bVar9 && local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
      }
LAB_019a6520:
      *(char *)pplVar7 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar6 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar6 + 0x960))(param_1), cVar2 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if ((longlong)uVar8 < 2) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (local_38[0] == '\0') {
        return;
      }
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    uVar8 = uVar8 - 1;
    lVar4 = *(longlong *)(unaff_RSI + 0x38);
  } while( true );
}




// ============================================================
// @012df8d0 — 602 bytes
// ============================================================

void FUN_012df8d0(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong unaff_RDI;
  longlong lVar5;
  bool bVar6;
  longlong local_48;
  char local_40;
  float local_38;
  
  local_38 = DAT_02394288;
  if ((*(longlong *)(unaff_RDI + 0x60) == 0) || (*(longlong *)(unaff_RDI + 0x58) == 0))
  goto LAB_012df9a8;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01263cf0();
  if (cVar2 == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01263cf0();
    if (cVar2 != '\0') goto LAB_012df98a;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if (local_48 == 0) {
      lVar5 = 0;
      bVar1 = false;
      bVar6 = false;
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_40 = '\0';
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      lVar5 = local_48;
      if (iVar3 == 2) {
        bVar1 = true;
        bVar6 = true;
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar6 = iVar3 == 4;
        bVar1 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_38 = DAT_02394288;
    if (bVar6) goto LAB_012df98f;
  }
  else {
LAB_012df98a:
    bVar1 = false;
    lVar5 = 0;
LAB_012df98f:
    local_38 = 0.0;
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
LAB_012df9a8:
  FUN_00d64850();
  *(double *)(unaff_RDI + 0x40) = (double)local_38;
  FUN_00d64910();
  return;
}




// ============================================================
// @019bf190 — 588 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019bf362) */
/* WARNING: Removing unreachable block (ram,0x019bf36b) */
/* WARNING: Removing unreachable block (ram,0x019bf3a7) */
/* WARNING: Removing unreachable block (ram,0x019bf3b0) */
/* WARNING: Removing unreachable block (ram,0x019bf299) */
/* WARNING: Removing unreachable block (ram,0x019bf2a5) */

void FUN_019bf190(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  int iVar6;
  longlong local_98;
  char local_90;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar4 == plVar1) {
    return;
  }
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) goto LAB_019bf1e8;
LAB_019bf214:
    if (plVar4 != (longlong *)0x0) goto LAB_019bf21d;
LAB_019bf2b8:
    bVar3 = false;
    local_98 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x418))();
    plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
    plVar5 = plVar4;
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar4 == (longlong *)*unaff_RSI) goto LAB_019bf214;
LAB_019bf1e8:
    plVar4 = plVar1;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x2c8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
      goto LAB_019bf214;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_019bf2b8;
LAB_019bf21d:
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x410))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x2c8) + 0x388))();
    if (local_98 == 0) {
      bVar3 = false;
      lVar2 = *(longlong *)(unaff_RDI + 0x250);
      goto joined_r0x019bf2c7;
    }
    bVar3 = true;
    if (local_90 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x250);
joined_r0x019bf2c7:
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar6 = 0;
      do {
        FUN_01981860();
        FUN_01983f50();
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_01a01cb0();
  }
  FUN_01e4ac90();
  if ((bVar3) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019c10c0 — 581 bytes
// ============================================================

undefined8 FUN_019c10c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  pVar6 = (pthread_key_t)param_1;
  cVar2 = FUN_019a9840();
  if (cVar2 == '\0') {
    return param_2;
  }
  if ((int)((ulonglong)param_1 >> 0x20) == 0) {
    if (*unaff_RSI == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pcVar5 = local_58;
    pVar6 = CONCAT31((int3)(pVar6 >> 8),local_58[0]);
    pcVar7 = local_38;
    if (local_58[0] != '\0') {
      pcVar7 = pcVar5;
    }
    local_38[0] = local_58[0];
    *pcVar7 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    if (local_60 == 0) {
      local_3c = (undefined4)CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
      lVar1 = 0;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      local_3c = 0;
      lVar1 = local_60;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507970();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_3c == '\0') {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012f9410();
  return uVar4;
}




// ============================================================
// @019c13c0 — 558 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c1530) */
/* WARNING: Removing unreachable block (ram,0x019c153d) */
/* WARNING: Removing unreachable block (ram,0x019c149d) */
/* WARNING: Removing unreachable block (ram,0x019c14a6) */
/* WARNING: Removing unreachable block (ram,0x019c15b1) */
/* WARNING: Removing unreachable block (ram,0x019c15ba) */
/* WARNING: Removing unreachable block (ram,0x019c13ff) */
/* WARNING: Removing unreachable block (ram,0x019c1408) */

void FUN_019c13c0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0xe20))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e7b500(DAT_023908c8,0);
  if (*(int *)(local_38 + 0xc) != 0) {
    FUN_01266770();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a280();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)((longlong)&dylib_command_00001288.cmd + *unaff_RDI))();
    if (cVar1 == '\0') {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012646c0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(&DAT_000015f8 + *unaff_RDI))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @019c83e0 — 549 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c843a) */
/* WARNING: Removing unreachable block (ram,0x019c8443) */

ulonglong FUN_019c83e0(pthread_key_t param_1,char param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = 0;
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0xe30))();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if ((iVar1 != 0) && (param_2 != '\0')) {
      if (0 < *(int *)(local_70 + 0xc)) {
        lVar6 = 0;
        do {
          uVar5 = *(ulonglong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01265b00(DAT_02390124);
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar5 = *(ulonglong *)(uVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152e890(DAT_023b26e8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(local_70 + 0xc));
      }
      FUN_001159b0();
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar1 != 0);
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @019c1c00 — 531 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019c1cf7) */
/* WARNING: Removing unreachable block (ram,0x019c1d00) */

longlong FUN_019c1c00(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong lVar7;
  bool bVar8;
  longlong local_50;
  char local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar5 = *unaff_RSI;
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((ulonglong)uVar1 == 0) {
    return 0;
  }
  if (0 < (int)uVar1) {
    lVar7 = 0;
    local_3c = 0;
    local_34 = 0;
    local_40 = 0;
    local_38 = 0;
    lVar2 = **(longlong **)(lVar5 + 0x10);
    do {
      pVar6 = (pthread_key_t)lVar5;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          goto LAB_019c1d10;
        }
      }
      else if (local_50 != 0) {
LAB_019c1d10:
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_01326de0();
        switch(uVar3) {
        case 1:
          local_38 = local_38 + 1;
          break;
        case 2:
          local_34 = local_34 + 1;
          break;
        case 3:
          local_40 = local_40 + 1;
          break;
        case 4:
          local_3c = local_3c + 1;
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((ulonglong)uVar1 - 1 == lVar7) goto code_r0x019c1dae;
      lVar5 = *unaff_RSI;
      lVar7 = lVar7 + 1;
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
    } while( true );
  }
  local_38 = 0;
  local_40 = 0;
  local_34 = 0;
  local_3c = 0;
LAB_019c1ddd:
  if ((((local_34 != 0) || (local_38 == 0)) || ((local_40 != 0 || (lVar5 = 1, local_3c != 0)))) &&
     (((bVar8 = local_34 != 0 || local_38 != 0, bVar8 || (local_40 == 0)) ||
      (lVar5 = 3, local_3c != 0)))) {
    lVar5 = (ulonglong)(byte)((local_40 == 0 && local_3c != 0) & ~bVar8) << 2;
  }
  return lVar5;
code_r0x019c1dae:
  if ((((local_34 != 0) && (local_38 == 0)) && (local_40 == 0)) && (local_3c == 0)) {
    return 2;
  }
  goto LAB_019c1ddd;
}




// ============================================================
// @019be1d0 — 531 bytes
// ============================================================

void FUN_019be1d0(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  char *pcVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  longlong local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe20))();
  if (local_50 != 0) {
    if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((*(int *)(local_50 + 0xc) != 0) && (unaff_RDI[0x69] != 0)) {
      FUN_00d23310();
      pVar3 = CONCAT31((int3)((uint)param_1 >> 8),local_48[0]);
      pcVar4 = local_38;
      if (local_48[0] != '\0') {
        pcVar4 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar4 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_0125a280();
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)(local_50 + 0xc)) {
        lVar5 = 1;
        do {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          if (dVar6 < local_40) {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_0125a280();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(local_50 + 0xc));
      }
      auVar7._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_40);
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7 = roundss(auVar7,auVar7,9);
      dVar6 = (double)(**(code **)(*unaff_RDI + 0x930))(auVar7._0_8_);
      if (((longlong *)unaff_RDI[0x69] != (longlong *)0x0) &&
         (local_40 = dVar6, cVar1 = (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x50))(),
         cVar1 == '\0')) {
        (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x60))();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019be470 — 506 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019be470(double param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((longlong *)unaff_RDI[0x69] == (longlong *)0x0) {
    dVar8 = (double)unaff_RDI[0x53];
    cVar2 = '\0';
    if ((dVar8 == param_1) && (cVar2 = '\0', !NAN(dVar8) && !NAN(param_1))) goto LAB_019be59f;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x50))();
    dVar8 = (double)unaff_RDI[0x53];
    if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
LAB_019be59f:
      if (*(char *)((longlong)unaff_RDI + 0x454) != cVar2) {
        (**(code **)(&UNK_00001560 + *unaff_RDI))(param_1);
      }
      goto LAB_019be64c;
    }
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x938))
                    (~-(ulonglong)(!NAN(dVar8) && !NAN(dVar8)) & (ulonglong)param_1 |
                     (ulonglong)dVar8 & -(ulonglong)(!NAN(dVar8) && !NAN(dVar8)));
  unaff_RDI[0x53] = (longlong)param_1;
  local_38 = (**(code **)(*unaff_RDI + 0x938))();
  uStack_30 = extraout_XMM0_Qb_00;
  auVar10 = _local_38;
  (**(code **)(&UNK_00001560 + *unaff_RDI))(param_1);
  cVar3 = (**(code **)(*unaff_RDI + 0xef8))();
  if (cVar3 != '\0') {
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = uVar4;
    fVar1 = (float)uVar4;
    local_38._4_4_ = (uint)((ulonglong)local_38 >> 0x20);
    uStack_30._0_4_ = (uint)extraout_XMM0_Qb_00;
    uStack_30._4_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    if (DAT_023908ec <= (float)(_DAT_02390140 & (uint)(fVar1 - (float)local_38))) {
      auVar12._0_4_ = fVar1 + DAT_023b8b2c;
      auVar12._4_12_ = auVar6._4_12_;
      insertps(_DAT_0241b5f0,(int)unaff_RDI[0x23],0x10);
      blendps(auVar12,ZEXT416(0),0xe);
      (**(code **)(*unaff_RDI + 0x618))();
      auVar7._4_12_ = auVar10._4_12_;
      auVar7._0_4_ = (float)local_38 + DAT_023b8b2c;
      auVar10 = blendps(auVar7,_DAT_0238ff00,0xe);
      uVar4 = auVar10._0_8_;
      auVar10 = _DAT_0241b5f0;
    }
    else {
      if ((float)local_38 <= fVar1) {
        auVar6._0_4_ = (float)local_38;
      }
      auVar11._4_12_ = auVar6._4_12_;
      auVar11._0_4_ = auVar6._0_4_ + DAT_023b8b2c;
      auVar9._4_4_ = local_38._4_4_ & (uint)((ulonglong)uVar4 >> 0x20);
      auVar9._0_4_ = (uint)((float)local_38 - fVar1) & -(uint)(fVar1 < (float)local_38);
      auVar9._8_4_ = (uint)uStack_30 & (uint)extraout_XMM0_Qb;
      auVar9._12_4_ = uStack_30._4_4_ & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar9 = ZEXT416(~-(uint)(fVar1 < (float)local_38) & (uint)(fVar1 - (float)local_38)) | auVar9
      ;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ + DAT_02390d28;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar6 = blendps(auVar5,auVar11,1);
      uVar4 = auVar6._0_8_;
    }
    auVar10 = insertps(auVar10,(int)unaff_RDI[0x23],0x10);
    (**(code **)(*unaff_RDI + 0x618))();
    if (cVar2 != '\0') {
      local_28 = auVar10._0_8_;
      (**(code **)(*unaff_RDI + 0x910))(uVar4,local_28);
    }
  }
LAB_019be64c:
  (**(code **)(&DAT_000015b0 + *unaff_RDI))();
  *(char *)((longlong)unaff_RDI + 0x454) = cVar2;
  return;
}



