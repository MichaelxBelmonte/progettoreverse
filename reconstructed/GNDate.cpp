// Reconstructed implementation of GNDate
// From MikeCore binary — reverse-engineered pseudocode

#include "GNDate.h"

// ============================================================
// @01399490 — 11197 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0139b258) */
/* WARNING: Removing unreachable block (ram,0x0139b264) */
/* WARNING: Removing unreachable block (ram,0x0139b308) */
/* WARNING: Removing unreachable block (ram,0x0139b314) */

void FUN_01399490(pthread_key_t param_1,longlong *param_2,undefined8 param_3,void *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  pthread_key_t pVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar20;
  byte bVar21;
  undefined7 uVar22;
  bool bVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  longlong *local_250;
  char local_248;
  longlong local_240;
  char in_stack_fffffffffffffdc8;
  undefined7 in_stack_fffffffffffffdc9;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  undefined4 local_104;
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong local_b0;
  pthread_key_t local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong *local_38;
  
  local_118 = 0;
  lVar20 = *(longlong *)(unaff_RDI + 0x40);
  local_110 = param_2;
  if (lVar20 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_120 = lVar20;
  FUN_0147ce20();
  local_c8 = local_c0;
  if ((char)local_b8 == '\0') {
    if (local_c0 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (0 < (int)*(uint *)((longlong)local_c8 + 0xc)) {
    lVar20 = (ulonglong)*(uint *)((longlong)local_c8 + 0xc) + 1;
    do {
      param_1 = (pthread_key_t)local_c8[2];
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar18 = local_c0;
      if (((char)local_b8 == '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b00();
        if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((plVar18 == *(longlong **)(unaff_RDI + 0x118)) ||
          (plVar18 == *(longlong **)(unaff_RDI + 0x128))) ||
         (plVar18 == *(longlong **)(unaff_RDI + 0x120))) {
        FUN_00d23620();
      }
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + -1;
    } while (1 < lVar20);
  }
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_a0 = (longlong *)0x0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (longlong *)0x0;
    local_88 = 0;
    local_90 = 0;
    local_d0 = 0;
    local_a0 = (longlong *)0x0;
    FUN_00e8b990();
  }
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_a0 = (longlong *)0x0;
  lVar20 = FUN_013de650();
  if (*(int *)((longlong)local_c8 + 0xc) < 1) {
    bVar24 = false;
    local_d0 = 0;
    local_a0 = (longlong *)0x0;
  }
  else {
    lVar15 = 0;
    local_a0 = (longlong *)0x0;
    local_d0 = 0;
    do {
      lVar11 = local_c8[2];
      plVar18 = *(longlong **)(lVar11 + lVar15 * 8);
      if (local_a0 == plVar18) {
        if (((char)local_d0 == '\0') && (local_a0 != (longlong *)0x0)) {
          local_d0 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar18 != (longlong *)0x0) {
          lVar11 = FUN_00d50b00();
        }
        if (((char)local_d0 == '\0') || (local_a0 == (longlong *)0x0)) {
          local_d0 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          local_a0 = plVar18;
        }
        else {
          local_a0 = plVar18;
          uVar12 = FUN_00d50b20();
          local_d0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        }
      }
      if ((longlong *)*unaff_RSI != local_a0) {
        plVar18 = unaff_RSI;
        pvVar10 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar18 = local_a0;
        }
        lVar11 = FUN_013de650();
        if (lVar11 <= lVar20) {
          bVar24 = true;
          goto LAB_0139993b;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)((longlong)local_c8 + 0xc));
    bVar24 = false;
    plVar18 = local_c8;
LAB_0139993b:
    param_1 = (pthread_key_t)plVar18;
  }
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (longlong *)0x0;
    local_88 = 0;
    local_90 = 0;
    FUN_00e8b990();
  }
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  lVar20 = FUN_013de650();
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    local_e0 = (longlong *)0x0;
    local_88 = 0;
    local_90 = 0;
    FUN_00e8b990();
  }
  local_e0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  plVar13 = (longlong *)FUN_013de790();
  plVar18 = plVar13;
  if (0 < *(int *)((longlong)local_c8 + 0xc)) {
    lVar15 = 0;
    do {
      lVar11 = local_c8[2];
      plVar18 = *(longlong **)(lVar11 + lVar15 * 8);
      if (local_a0 == plVar18) {
        if (((char)local_d0 == '\0') && (local_a0 != (longlong *)0x0)) {
          local_d0 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar18 != (longlong *)0x0) {
          lVar11 = FUN_00d50b00();
        }
        if (((char)local_d0 == '\0') || (local_a0 == (longlong *)0x0)) {
          local_d0 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          local_a0 = plVar18;
        }
        else {
          local_a0 = plVar18;
          uVar12 = FUN_00d50b20();
          local_d0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        }
      }
      if ((longlong *)*unaff_RSI != local_a0) {
        plVar18 = unaff_RSI;
        pvVar10 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        pVar17 = (pthread_key_t)plVar18;
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar17 = (pthread_key_t)local_a0;
        }
        lVar11 = FUN_013de650();
        pvVar10 = _pthread_getspecific(pVar17);
        if ((pvVar10 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          pVar17 = (pthread_key_t)local_a0;
        }
        lVar14 = FUN_013de790();
        if ((longlong)plVar13 + lVar20 <= lVar14 + lVar11) {
          uVar22 = (undefined7)((ulonglong)lVar15 >> 8);
          bVar21 = 1;
          goto LAB_01399d70;
        }
      }
      lVar15 = lVar15 + 1;
      plVar18 = local_c8;
    } while (lVar15 < *(int *)((longlong)local_c8 + 0xc));
  }
  pVar17 = (pthread_key_t)plVar18;
  bVar21 = 0;
  uVar22 = 0;
LAB_01399d70:
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e5de0();
  local_d8 = local_c0;
  plVar18 = local_c0;
  if (local_c0 == (longlong *)0x0) {
    local_104 = 1;
    local_d8 = (longlong *)0x0;
    local_100 = 0;
LAB_01399e37:
    pVar17 = (pthread_key_t)plVar18;
  }
  else {
    plVar13 = local_c0;
    if ((char)local_b8 == '\0') {
      uVar12 = FUN_00d50b00();
      if (((char)local_b8 == '\0') || (local_c0 == (longlong *)0x0)) {
        local_104 = 0;
        local_100 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        goto LAB_01399e37;
      }
      plVar13 = (longlong *)FUN_00d50b20();
    }
    pVar17 = (pthread_key_t)plVar18;
    local_100 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
    local_104 = 0;
  }
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e61a0();
  local_98 = local_c0;
  bVar23 = local_c0 == (longlong *)0x0;
  if (bVar23) {
    if (local_d8 == (longlong *)0x0) {
      bVar4 = false;
      local_e0 = (longlong *)0x0;
LAB_0139a112:
      if (((bool)(bVar24 | bVar21)) || (local_98 != (longlong *)0x0)) {
        local_78 = (longlong *)0x0;
        local_90 = 0;
        local_68 = (longlong *)0x0;
        local_88 = 0;
        bVar24 = true;
        goto LAB_0139c07f;
      }
      if (*local_110 != 0) {
        local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
        local_c0 = (longlong *)0x0;
        local_b0 = *(longlong *)(*local_110 + 0x10);
        local_a8 = 0;
        if (*(int *)(local_b0 + 0xc) < 1) {
          local_38 = (longlong *)0x0;
          bVar5 = false;
        }
        else {
          local_38 = (longlong *)0x0;
          bVar5 = false;
          do {
            lVar20 = (longlong)(int)local_a8;
            local_c0 = *(longlong **)(*(longlong *)(local_b0 + 0x10) + lVar20 * 8);
            pvVar10 = _pthread_getspecific(local_a8);
            pVar17 = (pthread_key_t)lVar20;
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5700(0);
            plVar18 = local_f0;
            if (local_f0 == local_38) {
              plVar18 = local_38;
              bVar24 = bVar5;
              if ((bVar5) || (local_f0 == (longlong *)0x0)) goto joined_r0x0139a2c6;
              bVar5 = true;
              if (local_e8 == '\0') {
                FUN_00d50b00();
                goto LAB_0139a2aa;
              }
            }
            else if (local_e8 == '\0') {
              if (local_f0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar24 = true;
              if ((bVar5) && (local_38 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_38 = plVar18;
LAB_0139a2aa:
                plVar18 = local_38;
                bVar24 = true;
              }
joined_r0x0139a2c6:
              bVar5 = bVar24;
              local_38 = plVar18;
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar5) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
              bVar5 = true;
            }
            else {
              local_38 = local_f0;
              bVar5 = true;
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
              pVar17 = (pthread_key_t)local_38;
            }
            FUN_0139d190();
            FUN_00d45bc0();
            FUN_012642b0();
            if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_130 = local_38;
            local_128 = '\0';
            FUN_012e6a70();
            if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c620();
            local_a8 = local_a8 + 1;
          } while ((int)local_a8 < *(int *)(local_b0 + 0xc));
          if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar24 = true;
        local_90 = 0;
        local_78 = (longlong *)0x0;
        bVar6 = false;
        lVar11 = 0;
        goto joined_r0x0139b9dd;
      }
      local_78 = (longlong *)0x0;
      local_90 = 0;
      bVar24 = true;
    }
    else {
      plVar18 = local_c0;
      pvVar10 = _pthread_getspecific(0);
      pVar17 = (pthread_key_t)plVar18;
      if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pVar17 = (pthread_key_t)local_d8;
      }
      FUN_013dfcb0();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd7c0();
      local_78 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        uVar12 = 0;
      }
      else if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = uVar12;
      if (0 < *(int *)((longlong)local_78 + 0xc)) {
        lVar15 = 0;
        local_38 = (longlong *)0x0;
        lVar20 = 0;
        bVar24 = false;
        bVar23 = false;
        do {
          lVar11 = *(longlong *)(local_78[2] + lVar15 * 8);
          plVar18 = local_78;
          if (lVar20 == lVar11) {
            lVar11 = lVar20;
            bVar6 = bVar23;
            if ((!bVar23) && (lVar20 != 0)) {
              FUN_00d50b00();
              bVar6 = true;
            }
          }
          else {
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            bVar6 = true;
            if ((bVar23) && (lVar20 != 0)) {
              FUN_00d50b20();
            }
          }
          pVar17 = (pthread_key_t)plVar18;
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5700(0);
          plVar18 = local_c0;
          if (local_c0 == local_38) {
            plVar18 = local_38;
            bVar5 = bVar24;
            if ((bVar24) || (local_c0 == (longlong *)0x0)) goto joined_r0x0139b706;
            bVar5 = true;
            if ((char)local_b8 == '\0') {
              FUN_00d50b00();
              goto LAB_0139b6ea;
            }
          }
          else if ((char)local_b8 == '\0') {
            if (local_c0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar24) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
LAB_0139b6ea:
              plVar18 = local_38;
              bVar5 = true;
            }
joined_r0x0139b706:
            local_38 = plVar18;
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar5 = true;
            if ((bVar24) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar18;
            }
            else {
              local_38 = local_c0;
            }
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01259520();
          FUN_012642b0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_160 = local_38;
          local_158 = '\0';
          uVar12 = FUN_012e6a70();
          if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_148 = '\0';
          local_140 = local_38;
          local_138 = '\0';
          local_150 = lVar11;
          FUN_012e0130(uVar12,&local_140);
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c620();
          lVar15 = lVar15 + 1;
          lVar20 = lVar11;
          bVar24 = bVar5;
          bVar23 = bVar6;
        } while (lVar15 < *(int *)((longlong)local_78 + 0xc));
        bVar24 = false;
        bVar4 = false;
        local_e0 = (longlong *)0x0;
joined_r0x0139b9dd:
        bVar7 = false;
        bVar23 = true;
        bVar3 = true;
        bVar8 = true;
        bVar2 = true;
        local_68 = (longlong *)0x0;
        local_88 = 0;
        local_60 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        plVar18 = (longlong *)0x0;
        goto joined_r0x0139b9dd;
      }
      local_e0 = (longlong *)0x0;
      bVar4 = false;
      bVar24 = false;
    }
    local_68 = (longlong *)0x0;
    local_88 = 0;
    bVar23 = true;
LAB_0139c07f:
    local_38 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
    local_60 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    plVar18 = (longlong *)0x0;
    lVar11 = 0;
    bVar8 = true;
  }
  else {
    plVar18 = local_c0;
    if ((char)local_b8 == '\0') {
      FUN_00d50b00();
      if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pVar17 = (pthread_key_t)plVar18;
    if (local_d8 == (longlong *)0x0) {
      if (bVar24) {
        bVar4 = true;
        local_e0 = local_98;
        goto LAB_0139a112;
      }
      pvVar10 = _pthread_getspecific(pVar17);
      if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
        pVar17 = (pthread_key_t)local_98;
      }
      FUN_013dfcb0();
      pvVar10 = _pthread_getspecific(pVar17);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd7c0();
      local_68 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
        uVar12 = 0;
      }
      else if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_88 = uVar12;
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        lVar20 = 0;
        plVar18 = (longlong *)0x0;
        local_38 = (longlong *)0x0;
        bVar24 = false;
        bVar23 = false;
        do {
          plVar13 = *(longlong **)(local_68[2] + lVar20 * 8);
          plVar19 = local_68;
          if (plVar18 == plVar13) {
            plVar13 = plVar18;
            bVar7 = bVar23;
            if ((!bVar23) && (plVar18 != (longlong *)0x0)) {
              FUN_00d50b00();
              bVar7 = true;
            }
          }
          else {
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar7 = true;
            if ((bVar23) && (plVar18 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar18 = plVar13;
          pVar17 = (pthread_key_t)plVar19;
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5700(0);
          plVar13 = local_c0;
          if (local_c0 == local_38) {
            plVar13 = local_38;
            bVar5 = bVar24;
            if ((bVar24) || (local_c0 == (longlong *)0x0)) goto joined_r0x0139bcf2;
            bVar5 = true;
            if ((char)local_b8 == '\0') {
              FUN_00d50b00();
              goto LAB_0139bcd7;
            }
          }
          else if ((char)local_b8 == '\0') {
            if (local_c0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            if ((bVar24) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar13;
LAB_0139bcd7:
              plVar13 = local_38;
              bVar5 = true;
            }
joined_r0x0139bcf2:
            local_38 = plVar13;
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar5 = true;
            if ((bVar24) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar13;
            }
            else {
              local_38 = local_c0;
            }
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar27 = (double)FUN_0125a280();
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar17 = (pthread_key_t)local_38;
          }
          dVar25 = (double)FUN_01264170();
          FUN_012642b0(dVar27 - dVar25);
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_190 = local_38;
          local_188 = '\0';
          uVar12 = FUN_012e6a70();
          if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_180 = local_38;
          local_178 = '\0';
          local_168 = '\0';
          local_170 = plVar18;
          FUN_012e0130(uVar12,&local_170);
          if ((local_218 != '\0') && (local_220 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c620();
          lVar20 = lVar20 + 1;
          bVar24 = bVar5;
          bVar23 = bVar7;
        } while (lVar20 < *(int *)((longlong)local_68 + 0xc));
        bVar24 = true;
        bVar8 = true;
        bVar2 = true;
        local_70 = (undefined8 *)0x0;
        local_60 = (undefined8 *)0x0;
        local_90 = 0;
        local_78 = (longlong *)0x0;
        bVar6 = false;
        lVar11 = 0;
        goto joined_r0x0139c026;
      }
      local_78 = (longlong *)0x0;
      local_90 = 0;
      local_e0 = local_98;
      bVar4 = true;
      bVar24 = true;
      bVar23 = false;
      goto LAB_0139c07f;
    }
    local_60 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_60 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    local_70 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar17 = 0x2572358;
    *local_70 = &DAT_02572358;
    (*DAT_02572370)();
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar17 = (pthread_key_t)local_d8;
    }
    FUN_013dfcb0();
    plVar18 = local_f0;
    pvVar10 = _pthread_getspecific(pVar17);
    plVar13 = local_f0;
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar18 = plVar13, lVar20 != 0)) {
      plVar18 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    FUN_013dd7c0();
    local_78 = local_c0;
    if (local_c0 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
      uVar12 = 0;
    }
    else {
      uVar22 = (undefined7)((ulonglong)plVar18 >> 8);
      if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = uVar12;
    pvVar10 = _pthread_getspecific(pVar17);
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar17 = (pthread_key_t)local_98;
    }
    FUN_013dfcb0();
    plVar18 = local_f0;
    pvVar10 = _pthread_getspecific(pVar17);
    plVar13 = local_f0;
    if ((pvVar10 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar18 = plVar13, lVar20 != 0)) {
      plVar18 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
    }
    FUN_013dd7c0();
    local_68 = local_c0;
    if (local_c0 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      uVar12 = 0;
    }
    else {
      uVar22 = (undefined7)((ulonglong)plVar18 >> 8);
      if ((char)local_b8 == '\0') {
        FUN_00d50b00();
        uVar12 = CONCAT71(uVar22,1);
        if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
        uVar12 = CONCAT71(uVar22,1);
      }
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = uVar12;
    if (*(int *)((longlong)local_78 + 0xc) < 1) {
      bVar7 = false;
      plVar18 = (longlong *)0x0;
      bVar6 = false;
      lVar11 = 0;
    }
    else {
      local_e0 = (longlong *)0x0;
      lVar11 = 0;
      bVar6 = false;
      plVar18 = (longlong *)0x0;
      bVar7 = false;
      do {
        lVar20 = *(longlong *)(local_78[2] + (longlong)local_e0 * 8);
        if (lVar11 == lVar20) {
          if ((!bVar6) && (lVar11 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar20 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (lVar11 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            lVar11 = lVar20;
          }
          else {
            bVar6 = true;
            lVar11 = lVar20;
          }
        }
        if (0 < *(int *)((longlong)local_68 + 0xc)) {
          lVar20 = 0;
          do {
            plVar13 = *(longlong **)(local_68[2] + lVar20 * 8);
            plVar19 = local_68;
            if (plVar18 == plVar13) {
              if ((!bVar7) && (plVar18 != (longlong *)0x0)) {
                bVar7 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar7) && (plVar18 != (longlong *)0x0)) {
                FUN_00d50b20();
                bVar7 = true;
                plVar18 = plVar13;
              }
              else {
                bVar7 = true;
                plVar18 = plVar13;
              }
            }
            pVar17 = (pthread_key_t)plVar19;
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_c0 == (longlong *)0x0) {
              bVar24 = false;
            }
            else {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              if (local_f0 == (longlong *)0x0) {
                bVar24 = false;
              }
              else {
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                if (local_200 == local_1f0) {
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar27 = (double)FUN_01259520();
                  pvVar10 = _pthread_getspecific(pVar17);
                  if (pvVar10 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar25 = (double)FUN_0125a280();
                  bVar24 = true;
                  if (dVar25 <= dVar27) {
                    pvVar10 = _pthread_getspecific(pVar17);
                    if (pvVar10 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012641c0();
                    bVar24 = local_250 == plVar18;
                    if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  bVar24 = false;
                }
                if ((local_1e8 != '\0') && (local_1f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar24) {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012641c0();
              plVar13 = local_c0;
              if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              dVar27 = DAT_024119c0;
              if (plVar13 != plVar18) {
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar25 = (double)FUN_0125a280();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar26 = (double)FUN_01259520();
                pvVar10 = _pthread_getspecific(pVar17);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar27 = (double)FUN_013de9b0();
                dVar25 = dVar25 - dVar26;
                if (dVar25 <= dVar27) {
                  dVar27 = dVar25 / dVar27;
                }
                else {
                  dVar27 = dVar27 / dVar25;
                }
              }
              lVar14 = (longlong)*(int *)(local_60 + 3);
              FUN_00c8e340(dVar27,1);
              lVar15 = local_60[2];
              *(longlong *)(lVar15 + lVar14) = lVar11;
              *(longlong **)(lVar15 + 8 + lVar14) = plVar18;
              *(double *)(lVar15 + 0x10 + lVar14) = dVar27;
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)((longlong)local_68 + 0xc));
        }
        local_e0 = (longlong *)((longlong)local_e0 + 1);
      } while ((longlong)local_e0 < (longlong)*(int *)((longlong)local_78 + 0xc));
    }
    if (0x2e < *(int *)(local_60 + 3) + 0x17U) {
      local_c0 = (longlong *)0x0;
      local_b8 = FUN_01399460;
      local_e0 = (longlong *)CONCAT71((uint7)(uint3)((uint)(*(int *)(local_60 + 3) / 0x18) >> 8),1);
      _qsort_r(&local_c0,0x18,0x13dc2a0,param_4,
               (int *)CONCAT71(in_stack_fffffffffffffdc9,in_stack_fffffffffffffdc8));
      if (0x17 < *(int *)(local_60 + 3)) {
        uVar1 = *(int *)(local_60 + 3) / 0x18;
        plVar13 = (longlong *)((ulonglong)uVar1 + 1);
        local_e0 = (longlong *)(ulonglong)(uVar1 - 1);
        local_f8 = (longlong *)0x0;
        bVar5 = false;
        do {
          while( true ) {
            pVar17 = (int)local_e0 * 3;
            plVar19 = *(longlong **)(local_60[2] + (longlong)local_e0 * 0x18);
            lVar20 = *(longlong *)(local_60[2] + 8 + (longlong)local_e0 * 0x18);
            local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
            local_110 = plVar13;
            local_c0 = plVar19;
            cVar9 = FUN_00d24090();
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar9 != '\0') break;
            local_b8 = (code *)((ulonglong)local_b8 & 0xffffffffffffff00);
            local_c0 = plVar19;
            FUN_00d21140();
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5700(0);
            local_38 = local_c0;
            plVar19 = local_f8;
            plVar13 = local_c0;
            if (local_c0 == local_f8) {
              local_38 = local_f8;
              if ((bVar5) || (local_c0 == (longlong *)0x0)) goto joined_r0x0139aee3;
              if ((char)local_b8 == '\0') {
                bVar5 = true;
                FUN_00d50b00();
                local_38 = plVar19;
                bVar24 = bVar5;
                if ((char)local_b8 == '\0') goto LAB_0139af1a;
                goto LAB_0139af09;
              }
              bVar24 = true;
            }
            else {
              if ((char)local_b8 != '\0') {
                bVar24 = true;
                if ((bVar5) && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0139af1a;
              }
              if (local_c0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (local_f8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar5 = true;
joined_r0x0139aee3:
              bVar24 = bVar5;
              if ((char)local_b8 != '\0') {
LAB_0139af09:
                bVar24 = bVar5;
                if (local_c0 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
LAB_0139af1a:
            bVar5 = bVar24;
            pVar16 = (pthread_key_t)plVar13;
            pvVar10 = _pthread_getspecific(pVar16);
            pVar17 = (pthread_key_t)local_38;
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01259520();
            FUN_012642b0();
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = (longlong *)FUN_0125a280();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_01259520();
            FUN_01259540((double)local_f8 - dVar27);
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            local_f8 = (longlong *)FUN_01264170();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_013dea30();
            FUN_01264390((double)local_f8 - dVar27);
            pvVar10 = _pthread_getspecific(pVar16);
            if ((pvVar10 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              pVar16 = pVar17;
            }
            FUN_0125a5f0();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_012e6a70();
            if (((char)local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_1c0 = local_38;
            local_1b8 = '\0';
            uVar12 = FUN_012e0130(uVar12,&local_1c0);
            plVar19 = local_e0;
            plVar13 = local_110;
            if ((in_stack_fffffffffffffdc8 != '\0') && (local_240 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_1b0 = local_38;
            local_1a8 = '\0';
            local_198 = '\0';
            local_1a0 = lVar20;
            FUN_012e0130(uVar12,&local_1a0);
            if ((local_228 != '\0') && (local_230 != 0)) {
              FUN_00d50b20();
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific(pVar16);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c620();
            local_f8 = local_38;
            plVar13 = (longlong *)((longlong)plVar13 + -1);
            local_e0 = (longlong *)(ulonglong)((int)plVar19 - 1);
            if ((longlong)plVar13 < 2) goto LAB_0139b40a;
          }
          plVar13 = (longlong *)((longlong)local_110 + -1);
          local_e0 = (longlong *)(ulonglong)((int)local_e0 - 1);
        } while (1 < (longlong)plVar13);
LAB_0139b40a:
        bVar24 = false;
        bVar8 = false;
        bVar2 = false;
        local_38 = local_f8;
joined_r0x0139c026:
        bVar4 = true;
        bVar23 = false;
        bVar3 = false;
        local_e0 = local_98;
        goto joined_r0x0139b9dd;
      }
    }
    bVar4 = true;
    bVar23 = false;
    bVar3 = false;
    bVar24 = false;
    bVar2 = false;
    bVar5 = false;
    local_38 = (longlong *)0x0;
    local_e0 = local_98;
    bVar8 = bVar2;
joined_r0x0139b9dd:
    if (local_c8 == (longlong *)0x0) goto LAB_0139c08b;
  }
  bVar3 = bVar23;
  bVar2 = bVar8;
  FUN_00d50b20();
LAB_0139c08b:
  if ((!bVar2) && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && local_60 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (plVar18 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  if ((char)local_104 == '\0' && !bVar24) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01397bb0 — 3442 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0139810a) */
/* WARNING: Removing unreachable block (ram,0x0139810f) */
/* WARNING: Removing unreachable block (ram,0x01397e10) */
/* WARNING: Removing unreachable block (ram,0x01397e19) */
/* WARNING: Removing unreachable block (ram,0x013980b2) */
/* WARNING: Removing unreachable block (ram,0x013980bb) */
/* WARNING: Removing unreachable block (ram,0x01398323) */
/* WARNING: Removing unreachable block (ram,0x0139832c) */
/* WARNING: Removing unreachable block (ram,0x01398138) */
/* WARNING: Removing unreachable block (ram,0x01398141) */
/* WARNING: Removing unreachable block (ram,0x01397fe2) */
/* WARNING: Removing unreachable block (ram,0x01397feb) */
/* WARNING: Removing unreachable block (ram,0x013983ad) */
/* WARNING: Removing unreachable block (ram,0x013983ba) */
/* WARNING: Removing unreachable block (ram,0x013981f2) */
/* WARNING: Removing unreachable block (ram,0x013981fb) */

void FUN_01397bb0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined1 local_68;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  plVar7 = param_1;
  local_d0 = param_2;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cbea0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)(unaff_RDI + 0xc0) != '\0') && (*(char *)(unaff_RDI + 0x1a8) == '\0')) {
    return;
  }
  FUN_01328810();
  if (local_50 != (longlong *)0x0) {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    local_60 = local_50;
    if (*(char *)(unaff_RDI + 0x1a8) == '\0') goto LAB_01397ebc;
LAB_01397cd2:
    local_58 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    local_64._0_1_ = 0;
LAB_01397ce6:
    local_c8 = *(longlong *)(unaff_RDI + 0x48);
    uVar13 = FUN_01394a40();
    local_c0 = DAT_027bf480;
    if (DAT_027bf480 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_b8 = '\x01';
    (**(code **)(*local_e0 + 0x400))(uVar13,&local_c0);
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 != '\0') {
      FUN_00d50b20();
    }
    if (local_c8 != 0) {
      bVar2 = false;
      do {
        (**(code **)(*DAT_028acd20 + 0x368))();
        lVar12 = *(longlong *)(unaff_RDI + 0x48);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d7a850();
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*DAT_028acd20 + 0x378))();
        if (cVar4 == '\0') {
          (**(code **)(*DAT_028acd20 + 0x368))();
          lVar12 = *(longlong *)(unaff_RDI + 0x48);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          FUN_00d7a410();
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          (**(code **)(*DAT_028acd20 + 0x378))();
          bVar1 = true;
          goto LAB_013980e0;
        }
        plVar7 = (longlong *)*unaff_RSI;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
          cVar4 = (**(code **)(*plVar7 + 0x18))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') goto LAB_013984d8;
        }
        bVar2 = true;
        FUN_00da68a0(DAT_023934c8);
      } while( true );
    }
    goto LAB_01398255;
  }
  bVar3 = true;
  local_60 = (longlong *)0x0;
  if (*(char *)(unaff_RDI + 0x1a8) != '\0') goto LAB_01397cd2;
LAB_01397ebc:
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_0141bab0();
    if (iVar5 != 3) goto LAB_01397ed4;
LAB_01397ef1:
    if ((*(longlong *)(unaff_RDI + 0x48) != 0) &&
       ((cVar4 = FUN_01396430(), cVar4 == '\0' || (cVar4 = FUN_013965b0(), cVar4 != '\0')))) {
      local_40 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
LAB_01397f34:
      if (*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) < 1) {
        local_64._0_1_ = 1;
      }
      else {
        lVar12 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
        local_64 = (uint)lVar12;
        lVar8 = 0;
        do {
          pVar9 = (pthread_key_t)lVar12;
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_64 = local_64 & 0xff;
          if (local_50 == (longlong *)0x0) {
            local_64 = 0;
          }
          else {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          lVar12 = (longlong)*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc);
        } while (lVar8 < lVar12);
      }
      goto LAB_01397ce6;
    }
  }
  else {
LAB_01397ed4:
    cVar4 = FUN_01334f30();
    if (cVar4 != '\0') goto LAB_01397ef1;
  }
  iVar5 = *(int *)((longlong)local_60 + 0xc);
  if (iVar5 < 1) {
    local_40 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
  }
  else {
    lVar12 = 0;
    local_58 = (longlong *)0x0;
    local_40 = (longlong *)0x0;
    do {
      pVar9 = (pthread_key_t)plVar7;
      lVar8 = local_60[2];
      plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
      cVar4 = (char)local_40;
      if (local_58 == plVar11) {
        if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          FUN_00d50b00();
        }
        else if (local_58 == (longlong *)0x0) goto LAB_013983f0;
LAB_0139846b:
        pvVar6 = _pthread_getspecific(pVar9);
        plVar7 = local_58;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        cVar4 = (**(code **)(*plVar7 + 0x498))();
        plVar7 = local_40;
        if (cVar4 == '\0') goto LAB_01397f34;
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = FUN_00d50b00();
        }
        local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        if ((cVar4 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (pthread_key_t)plVar7;
        local_58 = plVar11;
        if (plVar11 != (longlong *)0x0) goto LAB_0139846b;
LAB_013983f0:
        local_58 = (longlong *)0x0;
      }
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff);
      lVar12 = lVar12 + 1;
      iVar5 = *(int *)((longlong)local_60 + 0xc);
    } while (lVar12 < iVar5);
    if (0 < iVar5) {
      lVar12 = 0;
      do {
        plVar11 = *(longlong **)(local_60[2] + lVar12 * 8);
        cVar4 = (char)local_40;
        if (local_58 == plVar11) {
          if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
            local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
            FUN_00d50b00();
          }
          else if (local_58 == (longlong *)0x0) goto LAB_01398580;
LAB_013985fb:
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar7);
          plVar11 = local_58;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar11 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar11 + 0x480))();
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_40 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          if ((cVar4 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = plVar11;
          if (plVar11 != (longlong *)0x0) goto LAB_013985fb;
LAB_01398580:
          local_58 = (longlong *)0x0;
        }
        lVar12 = lVar12 + 1;
        iVar5 = *(int *)((longlong)local_60 + 0xc);
      } while (lVar12 < iVar5);
    }
  }
  if (iVar5 != 0) {
    FUN_01396e30();
  }
LAB_01398713:
  *(undefined1 *)(unaff_RDI + 0xc0) = 1;
  FUN_01398e20();
LAB_01398723:
  if (!bVar3 && local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_013980e0:
  cVar4 = (**(code **)(*local_50 + 0x398))();
  if (cVar4 == '\0') {
    bVar1 = false;
LAB_01398187:
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00ca5c10();
    local_b0 = local_50;
    local_a8 = '\0';
    cVar4 = FUN_00c91c80();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      bVar1 = true;
    }
    FUN_00d50b20();
  }
  else {
    (**(code **)(*local_50 + 0x3c0))();
    if (lVar12 != 0) {
      FUN_00d50b00();
      dVar14 = (double)FUN_00c93980();
      if (dVar14 < DAT_0240d408) {
        (**(code **)(*local_50 + 0x408))();
        bVar1 = false;
      }
      FUN_00d50b20();
    }
    if (!bVar1) goto LAB_01398187;
  }
  if (!bVar1) goto LAB_01398232;
  bVar2 = true;
  FUN_00da68a0(DAT_023934c8);
  goto LAB_013980e0;
LAB_01398232:
  if (((bVar2) && (cVar4 = FUN_01396430(), cVar4 != '\0')) && (*(char *)(unaff_RDI + 0x1a8) == '\0')
     ) {
    if (0 < *(int *)((longlong)local_60 + 0xc)) {
      lVar12 = 0;
      plVar7 = (longlong *)((ulonglong)local_40 & 0xffffffff);
      do {
        lVar8 = local_60[2];
        plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
        plVar10 = local_60;
        if (local_58 == plVar11) {
          plVar11 = local_58;
          if ((char)plVar7 != '\0') {
            local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
            goto LAB_01398820;
          }
          if (local_58 == (longlong *)0x0) {
            local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
            goto LAB_01398820;
          }
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          plVar7 = local_60;
          FUN_00d50b00();
          pVar9 = (pthread_key_t)plVar7;
LAB_0139882d:
          pvVar6 = _pthread_getspecific(pVar9);
          plVar7 = local_58;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          cVar4 = (**(code **)(*plVar7 + 0x498))();
          plVar7 = local_40;
          if (cVar4 == '\0') goto LAB_01398255;
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            lVar8 = FUN_00d50b00();
          }
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          if (((char)plVar7 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01398820:
          pVar9 = (pthread_key_t)plVar10;
          local_58 = plVar11;
          if (plVar11 != (longlong *)0x0) goto LAB_0139882d;
          local_58 = (longlong *)0x0;
          plVar7 = (longlong *)((ulonglong)local_40 & 0xffffffff);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((longlong)local_60 + 0xc));
      if (*(int *)((longlong)local_60 + 0xc) < 1) {
        local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
      }
      else {
        lVar12 = 0;
        local_40 = local_60;
        do {
          pVar9 = (pthread_key_t)local_40;
          lVar8 = local_60[2];
          plVar11 = *(longlong **)(lVar8 + lVar12 * 8);
          if (local_58 == plVar11) {
            plVar11 = local_58;
            if ((char)plVar7 != '\0') {
              local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
              goto LAB_01398921;
            }
            if (local_58 == (longlong *)0x0) {
              local_40 = (longlong *)((ulonglong)plVar7 & 0xffffffff);
              goto LAB_01398921;
            }
            local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            FUN_00d50b00();
LAB_0139892e:
            pvVar6 = _pthread_getspecific(pVar9);
            plVar7 = local_58;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar7 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar7 + 0x480))();
          }
          else {
            if (plVar11 != (longlong *)0x0) {
              lVar8 = FUN_00d50b00();
            }
            local_40 = (longlong *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            if (((char)plVar7 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01398921:
            local_58 = plVar11;
            if (plVar11 != (longlong *)0x0) goto LAB_0139892e;
            local_58 = (longlong *)0x0;
          }
          lVar12 = lVar12 + 1;
          plVar7 = local_40;
        } while (lVar12 < *(int *)((longlong)local_60 + 0xc));
      }
    }
  }
  else {
LAB_01398255:
    local_100 = *local_d0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_68 = SUB81(param_1,0);
    FUN_0134a250(&local_f0,&local_100,(undefined1)local_64,local_68);
  }
  if (local_c8 != 0) {
    (**(code **)(*local_50 + 0x408))();
    (**(code **)(*DAT_028acd20 + 0x368))();
    lVar12 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    FUN_00d7a770();
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028acd20 + 0x378))();
  }
  if (*(char *)(unaff_RDI + 0x1a8) != '\0') {
    FUN_00d64850();
    *(undefined1 *)(unaff_RDI + 0x1a8) = 0;
    FUN_00d64910();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01398713;
LAB_013984d8:
  plVar7 = (longlong *)*unaff_RSI;
  local_98 = 0;
  FUN_00d50b00();
  local_98 = '\x01';
  local_a0 = unaff_RDI;
  (**(code **)(*plVar7 + 0x20))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01398723;
}




// ============================================================
// @00b4c8e0 — 2632 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b4d24e) */
/* WARNING: Removing unreachable block (ram,0x00b4d257) */
/* WARNING: Removing unreachable block (ram,0x00b4cc8d) */
/* WARNING: Removing unreachable block (ram,0x00b4cc9a) */
/* WARNING: Removing unreachable block (ram,0x00b4d117) */
/* WARNING: Removing unreachable block (ram,0x00b4d123) */
/* WARNING: Removing unreachable block (ram,0x00b4cc56) */
/* WARNING: Removing unreachable block (ram,0x00b4cc62) */
/* WARNING: Removing unreachable block (ram,0x00b4c937) */
/* WARNING: Removing unreachable block (ram,0x00b4c940) */
/* WARNING: Removing unreachable block (ram,0x00b4d14e) */
/* WARNING: Removing unreachable block (ram,0x00b4d15b) */

void FUN_00b4c8e0(int param_1,longlong param_2,size_t param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong unaff_RSI;
  longlong lVar17;
  longlong *unaff_RDI;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x530))();
  if (local_40 == (longlong *)0x0) {
    bVar5 = true;
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar20 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_00d216c0();
  lVar17 = unaff_RDI[0x15];
  if (0 < *(int *)(lVar17 + 0xc)) {
    lVar18 = 0;
    local_50 = (longlong *)0x0;
    bVar3 = false;
    bVar4 = false;
    plVar15 = (longlong *)0x0;
    bVar9 = false;
LAB_00b4c9e3:
    plVar14 = *(longlong **)(*(longlong *)(lVar17 + 0x10) + lVar18 * 8);
    if (local_50 == plVar14) {
      if ((!bVar3) && (local_50 != (longlong *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar3 = true;
        local_50 = plVar14;
      }
      else {
        bVar3 = true;
        local_50 = plVar14;
      }
    }
    plVar14 = (longlong *)0x0;
    do {
      FUN_00b713c0();
      if (local_40 == plVar14) {
        if ((bVar4) || (local_40 == (longlong *)0x0)) {
joined_r0x00b4cb26:
          plVar16 = plVar14;
          bVar6 = bVar4;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_00b4cb40;
          }
          plVar16 = plVar14;
          bVar6 = true;
        }
      }
      else {
        plVar16 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = true;
          if ((bVar4) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar14 = local_40;
LAB_00b4cb40:
            bVar4 = true;
            goto joined_r0x00b4cb26;
          }
        }
        else {
          if ((bVar4) && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar6 = true;
        }
      }
      bVar4 = bVar6;
      plVar14 = plVar16;
      if (plVar14 == (longlong *)0x0) goto LAB_00b4c9c0;
      FUN_00b37f00(0,0);
      if (plVar15 == local_40) {
        if ((!bVar9) && (plVar15 != (longlong *)0x0)) {
          plVar16 = plVar15;
          if (local_38 != '\0') goto LAB_00b4cbc4;
          FUN_00d50b00();
          goto LAB_00b4cc30;
        }
        if (local_38 == '\0') goto LAB_00b4cc67;
LAB_00b4cc36:
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar16 = local_40;
        if ((bVar9) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b4cc30:
        bVar9 = true;
        plVar15 = plVar16;
        if (local_38 != '\0') goto LAB_00b4cc36;
      }
      else {
        plVar16 = local_40;
        if ((bVar9) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b4cbc4:
        bVar9 = true;
        plVar15 = plVar16;
      }
LAB_00b4cc67:
      local_38 = '\0';
      FUN_00d21140();
      local_40 = plVar15;
    } while( true );
  }
  bVar9 = false;
  plVar15 = (longlong *)0x0;
  bVar4 = false;
  bVar3 = false;
  local_50 = (longlong *)0x0;
LAB_00b4cd00:
  if (0 < *(int *)(unaff_RDI[0x12] + 0xc)) {
    lVar17 = 0;
    do {
      FUN_00b513b0();
      if (local_40 == local_50) {
        if ((!bVar3) && (local_40 != (longlong *)0x0)) {
          plVar14 = local_50;
          if (local_38 != '\0') goto LAB_00b4cda4;
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        plVar14 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_50 = local_40;
            bVar3 = true;
            goto LAB_00b4ce10;
          }
        }
        else {
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00b4cda4:
          local_38 = '\0';
        }
        local_50 = plVar14;
        bVar3 = true;
      }
LAB_00b4ce10:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        plVar14 = (longlong *)0x0;
LAB_00b4ce43:
        FUN_00b713c0();
        if (local_40 == plVar14) {
          if ((!bVar4) && (local_40 != (longlong *)0x0)) {
            plVar16 = plVar14;
            if (local_38 != '\0') goto LAB_00b4ce93;
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          plVar16 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar14 = local_40;
              bVar4 = true;
              goto LAB_00b4cee0;
            }
          }
          else {
            if ((bVar4) && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00b4ce93:
            local_38 = '\0';
          }
          plVar14 = plVar16;
          bVar4 = true;
        }
LAB_00b4cee0:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (longlong *)0x0) {
          cVar7 = FUN_00b51d00();
          if (cVar7 == -0x50) {
            cVar7 = FUN_00b51df0();
            iVar10 = *(int *)(unaff_RDI[0x14] + 0x18);
            iVar13 = iVar10 + 7;
            if (-1 < iVar10) {
              iVar13 = iVar10;
            }
            uVar19 = (ulonglong)(uint)(iVar13 >> 3);
            do {
              if ((int)uVar19 < 1) goto LAB_00b4d020;
              lVar2 = *(longlong *)(unaff_RDI[0x14] + 0x10);
              uVar1 = uVar19 - 1;
              lVar18 = uVar19 * 8;
              uVar19 = uVar1;
            } while (*(char *)(lVar2 + -8 + lVar18) != cVar7);
            if (*(int *)(lVar2 + 4 + (uVar1 & 0xffffffff) * 8) == -1) goto LAB_00b4d020;
            bVar8 = FUN_00b51e10();
            fVar21 = (float)bVar8 / DAT_023d5000;
            if (plVar20 != (longlong *)0x0) {
              fVar22 = (float)(**(code **)(*plVar20 + 0x460))();
              fVar23 = (float)(**(code **)(*plVar20 + 0x468))();
              fVar21 = fVar21 * (fVar23 - fVar22) + fVar22;
            }
            FUN_00b38040(fVar21);
            if (plVar15 == local_40) {
              if ((bVar9) || (plVar15 == (longlong *)0x0)) goto joined_r0x00b4d206;
              bVar9 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
                plVar16 = plVar15;
                goto LAB_00b4d1e9;
              }
            }
            else if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d1e9:
              bVar9 = true;
              plVar15 = plVar16;
joined_r0x00b4d206:
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if ((bVar9) && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar9 = true;
              plVar15 = local_40;
            }
            else {
              bVar9 = true;
              plVar15 = local_40;
            }
            local_38 = '\0';
            FUN_00d21140();
            local_40 = plVar15;
          }
          else {
LAB_00b4d020:
            FUN_00b37f00(0,0);
            if (plVar15 == local_40) {
              if ((!bVar9) && (plVar15 != (longlong *)0x0)) {
                plVar16 = plVar15;
                if (local_38 != '\0') goto LAB_00b4d084;
                FUN_00d50b00();
                goto LAB_00b4d0f0;
              }
              if (local_38 == '\0') goto LAB_00b4d128;
LAB_00b4d0f6:
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            else if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d0f0:
              bVar9 = true;
              plVar15 = plVar16;
              if (local_38 != '\0') goto LAB_00b4d0f6;
            }
            else {
              plVar16 = local_40;
              if ((bVar9) && (plVar15 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_00b4d084:
              bVar9 = true;
              plVar15 = plVar16;
            }
LAB_00b4d128:
            local_38 = '\0';
            FUN_00d21140();
            local_40 = plVar15;
          }
          goto LAB_00b4ce43;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(unaff_RDI[0x12] + 0xc));
  }
  if ((unaff_RSI != 0) && (param_2 != 0)) {
    iVar10 = FUN_00b33130();
    uVar11 = FUN_00b33120();
    if (0 < (int)uVar11) {
      uVar19 = 0;
      pvVar12 = (void *)((longlong)param_1 << 2);
      do {
        if ((longlong)uVar19 < (longlong)iVar10) {
          if (*(longlong *)(unaff_RSI + uVar19 * 8) != *(longlong *)(param_2 + uVar19 * 8)) {
            _memcpy(pvVar12,(void *)((longlong)param_1 << 2),param_3);
          }
        }
        else {
          ___bzero();
        }
        uVar19 = uVar19 + 1;
      } while (uVar11 != uVar19);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    FUN_00b31a00();
    FUN_00bc4760();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar17 = unaff_RDI[0x13];
    if (lVar17 != 0) {
      FUN_00d50b00();
    }
    FUN_00b332c0();
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar20 + 0x5b0))();
    if (!bVar5) {
      FUN_00d50b20();
    }
  }
  if ((bVar9) && (plVar15 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_00b4c9c0:
  lVar18 = lVar18 + 1;
  lVar17 = unaff_RDI[0x15];
  if (*(int *)(lVar17 + 0xc) <= lVar18) goto LAB_00b4cd00;
  goto LAB_00b4c9e3;
}




// ============================================================
// @00b471b0 — 2217 bytes
// ============================================================

undefined8 FUN_00b471b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 uVar4;
  bool bVar5;
  longlong local_170;
  char local_168;
  longlong local_160;
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
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) &&
     ((ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20 == 0))
  {
    if (unaff_SIL == '\0') {
      return 0x6c;
    }
    FUN_00b45250(param_1,0x6d766864);
    FUN_00b45190(param_1,0);
    uVar1 = *(undefined4 *)(unaff_RDI + 0x70);
    uVar2 = *(undefined4 *)(unaff_RDI + 0x88);
    FUN_00ccdf50(param_1,uVar2);
    bVar5 = true;
    if (local_60 == 0) {
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_50 == 0) {
        FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
        bVar5 = true;
        if (local_40 == 0) {
          FUN_00ccdf50(param_1,uVar1);
          bVar5 = local_70 != 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    uVar4 = 0x6c;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (unaff_SIL == '\0') {
      return 0x7a;
    }
    FUN_00b45250(param_1,0x6d766864);
    FUN_00b45190(param_1,0);
    FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
    bVar5 = true;
    if (local_60 == 0) {
      FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
      bVar5 = true;
      if (local_50 == 0) {
        FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
        bVar5 = true;
        if (local_40 == 0) {
          FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x70));
          bVar5 = local_70 != 0;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    uVar4 = 0x7a;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_60 == 0) {
    FUN_00ccdf10(param_1,0x100);
    bVar5 = true;
    if (local_50 == 0) {
      FUN_00ccdf10(param_1,0);
      bVar5 = true;
      if (local_40 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = true;
        if (local_70 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = local_80 != 0;
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_60 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_50 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_40 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = true;
        if (local_70 == 0) {
          FUN_00ccdf50(param_1,0x10000);
          bVar5 = true;
          if (local_80 == 0) {
            FUN_00ccdf50(param_1,0);
            bVar5 = true;
            if (local_160 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = true;
              if (local_150 == 0) {
                FUN_00ccdf50(param_1,0);
                bVar5 = true;
                if (local_140 == 0) {
                  FUN_00ccdf50(param_1,0x40000000);
                  bVar5 = true;
                  if (local_130 == 0) {
                    FUN_00ccdf50(param_1,0);
                    bVar5 = true;
                    if (local_120 == 0) {
                      FUN_00ccdf50(param_1,0);
                      bVar5 = true;
                      if (local_110 == 0) {
                        FUN_00ccdf50(param_1,0);
                        bVar5 = true;
                        if (local_100 == 0) {
                          FUN_00ccdf50(param_1,0);
                          bVar5 = true;
                          if (local_f0 == 0) {
                            FUN_00ccdf50(param_1,0);
                            bVar5 = true;
                            if (local_e0 == 0) {
                              FUN_00ccdf50(param_1,0);
                              bVar5 = true;
                              if (local_d0 == 0) {
                                FUN_00ccdf50(param_1,2);
                                bVar5 = local_170 != 0;
                                if ((local_168 != '\0') && (local_170 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              if ((local_c8 != '\0') && (local_d0 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            if ((local_d8 != '\0') && (local_e0 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          if ((local_e8 != '\0') && (local_f0 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                        if ((local_f8 != '\0') && (local_100 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                      if ((local_108 != '\0') && (local_110 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if ((local_118 != '\0') && (local_120 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_128 != '\0') && (local_130 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @00b48010 — 2155 bytes
// ============================================================

undefined8 FUN_00b48010(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 uVar4;
  bool bVar5;
  longlong local_e8;
  char local_e0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) &&
     ((ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20 == 0))
  {
    if (unaff_SIL == '\0') {
      return 0x5c;
    }
    FUN_00b45250(param_1,0x746b6864);
    FUN_00b45190(param_1,1);
    uVar1 = *(undefined4 *)(unaff_RDI + 0x70);
    uVar2 = *(undefined4 *)(unaff_RDI + 0x88);
    FUN_00ccdf50(param_1,uVar2);
    bVar5 = true;
    if (local_48 == 0) {
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_38 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = true;
          if (local_68 == 0) {
            FUN_00ccdf50(param_1,uVar1);
            bVar5 = local_78 != 0;
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    uVar4 = 0x5c;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (unaff_SIL == '\0') {
      return 0x68;
    }
    FUN_00b45250(param_1,0x746b6864);
    FUN_00b45190(param_1,1);
    FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
    bVar5 = true;
    if (local_48 == 0) {
      FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
      bVar5 = true;
      if (local_38 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,0);
          bVar5 = true;
          if (local_68 == 0) {
            FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x70));
            bVar5 = local_78 != 0;
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    uVar4 = 0x68;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00ccdf50(param_1,0);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf10(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf10(param_1,0);
        bVar5 = true;
        if (local_68 == 0) {
          FUN_00ccdf10(param_1,0x100);
          bVar5 = true;
          if (local_78 == 0) {
            FUN_00ccdf10(param_1,0);
            bVar5 = local_e8 != 0;
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccdf50(param_1,0x10000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar5 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ccdf50(param_1,0x40000000);
  bVar5 = true;
  if (local_48 == 0) {
    FUN_00ccdf50(param_1,0);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar5 = local_58 != 0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (bVar5) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @00b444a0 — 2083 bytes
// str: ""GNDate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b444a0(double param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int in_ECX;
  ulong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
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
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  char local_38;
  
  uVar8 = SUB84(param_1,0);
  *(undefined8 *)(unaff_RDI + 0x78) = 0;
  lVar2 = DAT_027dc910;
  local_6c = param_3;
  local_68 = param_1;
  local_44 = param_2;
  if (*param_4 == 0) goto LAB_00b445f1;
  if (DAT_027dc910 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar8,&local_100);
  plVar5 = local_40;
  if ((DAT_026d02f0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d0240 = FUN_00d4fe50();
    _DAT_026d0228 = "GNDate";
    _DAT_026d0230 = 0x18;
    _DAT_026d0238 = FUN_000378e0;
    _DAT_026d0248 = 0;
    uRam00000000026d0250 = 0;
    _DAT_026d0258 = 0;
    uRam00000000026d0260 = 0;
    _DAT_026d0268 = 0;
    uRam00000000026d0270 = 0;
    _DAT_026d0278 = 0;
    uRam00000000026d0280 = 0;
    _DAT_026d0288 = 0;
    uRam00000000026d0290 = 0;
    _DAT_026d0298 = 0;
    uRam00000000026d02a0 = 0;
    _DAT_026d02a8 = 0;
    uRam00000000026d02b0 = 0;
    _DAT_026d02b8 = 0;
    uRam00000000026d02c0 = 0;
    _DAT_026d02c8 = 0;
    uRam00000000026d02d0 = 0;
    _DAT_026d02d8 = 0;
    uRam00000000026d02e0 = 0;
    _DAT_026d02e8 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00b44556:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00b44556;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  plVar5 = *pplVar7;
  if (plVar1 != plVar5) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x80) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x80);
        *(longlong **)(unaff_RDI + 0x80) = *pplVar7;
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
      *(longlong **)(unaff_RDI + 0x80) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
LAB_00b445f1:
  FUN_00bb9440();
  plVar5 = local_40;
  uVar8 = local_6c;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar5;
  FUN_00d46530();
  plVar5 = (longlong *)CONCAT44(uStack_5c,local_60);
  if (local_58 == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_38 = '\0';
  local_40 = plVar5;
  cVar3 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02764880;
  if (cVar3 == '\0') {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f0 = lVar2;
    local_e8 = '\x01';
    FUN_00cc78b0();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (local_44 != 9) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar2;
    local_d8 = '\x01';
    FUN_00cc78b0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (1 < in_ECX - 1U) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_00cc78b0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = *unaff_RSI;
  local_b8 = '\0';
  local_b0 = *param_4;
  local_a8 = '\0';
  FUN_00bba180(SUB84(local_68,0),local_44,uVar8,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  *(int *)(unaff_RDI + 0x90) = (int)(longlong)local_68;
  uVar6 = *(int *)(unaff_RDI + 0x34) - 0x40;
  if (uVar6 < 3) {
    *(short *)(unaff_RDI + 0xa0) = (short)uVar6 * 8 + 0x10;
  }
  FUN_00ae7f20();
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x60);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x60) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x68);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x68) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = operator_new(uVar6);
  FUN_00c67e70();
  *(longlong **)(unaff_RDI + 0x78) = plVar5;
  *(undefined4 *)((longlong)plVar5 + 0x205c) = 0x1000;
  (**(code **)(*plVar5 + 0x20))();
  local_60 = FUN_00c6a340();
  FUN_00c8e690();
  plVar5 = local_40;
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00c92170();
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  if (plVar1 == plVar5) {
    if (plVar5 != (longlong *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    *(longlong **)(unaff_RDI + 0x98) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b20();
    }
  }
  FUN_00c6a360(uVar8,&local_60);
  FUN_00c8e690();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar8 = ___bzero();
  local_a0 = plVar5;
  local_98 = '\0';
  uVar8 = FUN_00ccdbb0(uVar8,&local_a0);
  plVar5 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (plVar5 != (longlong *)0x0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar8 = FUN_00cc78b0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(uVar8,unaff_RDI + 0x40);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02765700;
  if (local_40 != (longlong *)0x0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_00cc78b0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b439c0 — 1786 bytes
// ============================================================

void FUN_00b439c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 local_10c [4];
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  int local_48;
  int local_44;
  longlong local_40;
  char local_38;
  int local_2c;
  
  local_108 = *unaff_RSI;
  local_100 = '\0';
  FUN_00b75710();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd6d0(&local_2c,local_10c);
  bVar9 = local_40 != 0;
  bVar10 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || bVar10) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar4;
    local_f0 = '\x01';
    FUN_00cc78b0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd6d0(&local_2c,&local_48);
  bVar9 = local_40 != 0;
  bVar10 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || bVar10) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar4;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00ccd6d0(&local_2c,&local_44);
  bVar9 = local_40 != 0;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (bVar9 || local_2c != 4) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar4;
    local_d0 = '\x01';
    uVar11 = FUN_00cc78b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  lVar4 = DAT_02764880;
  if ((local_48 != 0x66747970) || (local_44 != 0x4d344120)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar4;
    local_c0 = '\x01';
    uVar11 = FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  lVar4 = FUN_00b429e0(uVar11,0x6d6f6f76);
  if (0 < lVar4) {
    lVar4 = FUN_00b429e0(extraout_XMM0_Da,0x6d766864);
    if (0 < lVar4) goto LAB_00b43c79;
  }
  lVar4 = DAT_02764880;
  if (DAT_02764880 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar4;
  local_b0 = '\x01';
  FUN_00cc78b0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
LAB_00b43c79:
  FUN_00b430e0();
  lVar5 = FUN_00b43800(0x7472616b,0x6d6f6f76,0x6d646961,0x6d696e66);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_00cc78b0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00b41dc0();
  lVar5 = FUN_00b429e0(uVar11,0x6d646174);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar4;
    local_90 = '\x01';
    FUN_00cc78b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b416c0();
  pvVar8 = (void *)0x7472616b;
  lVar5 = FUN_00b43800(0x7472616b,0x6d6f6f76,0x6d646961,0x6d696e66);
  lVar4 = DAT_02764880;
  if (lVar5 < 1) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar4;
    local_80 = '\x01';
    FUN_00cc78b0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b41870();
  puVar6 = operator_new((ulong)pvVar8);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined8 **)(unaff_RDI + 0x38) = puVar6;
  pvVar7 = operator_new((ulong)pvVar8);
  uVar11 = FUN_00c66860();
  *(void **)(unaff_RDI + 0x30) = pvVar7;
  iVar3 = FUN_00c668e0(uVar11,*(undefined4 *)(*(longlong *)(unaff_RDI + 0xa8) + 0x18));
  if (iVar3 != 0) {
    if (*(longlong *)(unaff_RDI + 0x30) != 0) {
      FUN_00c66880();
      operator_delete(pvVar8);
    }
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
    lVar4 = DAT_02764880;
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar4;
    local_70 = '\x01';
    FUN_00cc78b0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa8) = 0;
    FUN_00d50b20();
  }
  lVar4 = DAT_02764880;
  if (0x10 < *(int *)(unaff_RDI + 0x50) - 0x10U) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar4;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_02764880;
  if (1 < (byte)(*(char *)(*(longlong *)(unaff_RDI + 0x30) + 9) - 1U)) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar4;
    local_50 = '\x01';
    FUN_00cc78b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar3 = *(int *)(unaff_RDI + 0x50);
  iVar1 = *(int *)(unaff_RDI + 0x68);
  iVar2 = *(int *)(unaff_RDI + 0x54);
  FUN_00c8e690();
  lVar4 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar5 == lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x88) = lVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar4 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_00c92170();
  lVar5 = *(longlong *)(unaff_RDI + 0x90);
  if (lVar5 == lVar4) {
    if (lVar4 != 0) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x90) = lVar4;
    if (lVar5 != 0) {
      uVar11 = FUN_00d50b20();
    }
  }
  FUN_00c66620(uVar11,iVar1 * iVar2 * (iVar3 + 4U >> 3) + 8);
  *(undefined8 *)(unaff_RDI + 0x78) = 0xffffffffffffffff;
  FUN_00b438b0();
  return;
}




// ============================================================
// @00b461a0 — 1641 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b462ec) */
/* WARNING: Removing unreachable block (ram,0x00b462f8) */

void FUN_00b461a0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  longlong local_58;
  int local_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if (unaff_ESI == 0) {
    return;
  }
  FUN_00c8e690();
  lVar3 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar3;
  FUN_00c92170();
  ___bzero();
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))();
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  do {
    FUN_00ccdbb0();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    unaff_ESI = unaff_ESI + -1;
  } while (unaff_ESI != 0);
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))();
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  for (uVar5 = *(ulonglong *)(unaff_RDI + 0x48); uVar5 != 0; uVar5 = uVar5 - uVar4) {
    uVar4 = 0x1000;
    if (uVar5 < 0x1001) {
      uVar4 = uVar5 & 0xffffffff;
    }
    local_58 = local_58 - uVar4;
    local_4c = (int)uVar4;
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x380))
              (&local_4c,*(undefined8 *)(local_38 + 0x10));
    bVar6 = local_48 != 0;
    bVar7 = local_4c != (int)uVar4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    if (bVar6 || bVar7) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))
              (local_4c,*(undefined8 *)(local_38 + 0x10));
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (lVar3 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
  lVar1 = local_38;
  lVar3 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027653a0;
  if (lVar3 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar3 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  if (lVar1 == lVar3) {
    FUN_00d50b20();
  }
  else {
    if (lVar1 == 0) {
      uVar5 = *(longlong *)(unaff_RDI + 0x48) - local_58;
      local_38 = lVar3;
      goto joined_r0x00b4670e;
    }
    FUN_00d50b20();
    local_38 = lVar3;
  }
  uVar5 = *(longlong *)(unaff_RDI + 0x48) - local_58;
joined_r0x00b4670e:
  if (uVar5 == 0) {
    *(longlong *)(unaff_RDI + 0x40) = local_58;
    if (local_38 == 0) {
      return;
    }
  }
  else {
    do {
      uVar4 = 0x1000;
      if (uVar5 < 0x1001) {
        uVar4 = uVar5 & 0xffffffff;
      }
      local_4c = (int)uVar4;
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x380))
                (&local_4c,*(undefined8 *)(local_38 + 0x10));
      bVar6 = local_48 != 0;
      bVar7 = local_4c != (int)uVar4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      if (bVar6 || bVar7) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    *(longlong *)(unaff_RDI + 0x40) = local_58;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @013965b0 — 1424 bytes
// str: ""GNDate""
// str: ""MUAudioFileSource""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_013965b0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  longlong **pplVar10;
  longlong *plVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    uVar9 = 0;
    goto LAB_013969db;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  uVar13 = FUN_01394a40();
  plVar8 = local_58;
  local_a0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  pplVar10 = &local_40;
  (**(code **)(*plVar8 + 0x400))(uVar13,&local_a0);
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
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    local_90 = plVar8;
    local_88 = '\0';
    uVar13 = FUN_00ca94c0();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar3 = DAT_027bf468;
    if (plVar8 == (longlong *)0x0) {
      bVar2 = false;
      local_48 = (longlong *)0x0;
    }
    else {
      local_60 = plVar8;
      if (DAT_027bf468 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      pplVar12 = &local_40;
      FUN_000175c0(uVar13,&local_80);
      plVar8 = local_40;
      if ((DAT_026d02f0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d0240 = FUN_00d4fe50();
        _DAT_026d0228 = "GNDate";
        _DAT_026d0230 = 0x18;
        _DAT_026d0238 = FUN_000378e0;
        _DAT_026d0248 = 0;
        uRam00000000026d0250 = 0;
        _DAT_026d0258 = 0;
        uRam00000000026d0260 = 0;
        _DAT_026d0268 = 0;
        uRam00000000026d0270 = 0;
        _DAT_026d0278 = 0;
        uRam00000000026d0280 = 0;
        _DAT_026d0288 = 0;
        uRam00000000026d0290 = 0;
        _DAT_026d0298 = 0;
        uRam00000000026d02a0 = 0;
        _DAT_026d02a8 = 0;
        uRam00000000026d02b0 = 0;
        _DAT_026d02b8 = 0;
        uRam00000000026d02c0 = 0;
        _DAT_026d02c8 = 0;
        uRam00000000026d02d0 = 0;
        _DAT_026d02d8 = 0;
        uRam00000000026d02e0 = 0;
        _DAT_026d02e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_01396725:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_01396725;
      }
      plVar8 = *pplVar12;
      if (plVar8 == (longlong *)0x0) {
        bVar2 = false;
        local_48 = (longlong *)0x0;
      }
      else {
        local_48 = plVar8;
        if (*(char *)(pplVar12 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        bVar2 = true;
      }
      param_1 = (pthread_key_t)plVar8;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x38);
  local_40 = plVar8;
  local_38 = '\0';
  if ((DAT_026fdd70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  if (plVar8 == (longlong *)0x0) {
LAB_0139686c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0139686c;
  }
  plVar11 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    bVar1 = false;
    plVar11 = (longlong *)0x0;
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_58 + 0x3c0))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = false;
      plVar11 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 == plVar11) {
    uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  }
  else {
    uVar9 = 0;
    if ((local_48 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
      local_68 = '\0';
      local_70 = plVar11;
      uVar5 = (**(code **)(*local_48 + 0x50))();
      uVar9 = (ulonglong)uVar5;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
  if ((bVar1) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar9 = uVar9 ^ 1;
  if ((bVar2) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_013969db:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @00b45910 — 1372 bytes
// ============================================================

void FUN_00b45910(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  bool bVar5;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar4 = FUN_00b45830();
  lVar1 = DAT_027653a0;
  if (*(ulonglong *)(unaff_RDI + 0x40) <= lVar4 + 0x400U) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))(param_1,lVar4);
  lVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027653a0;
  if (lVar1 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = '\x01';
    FUN_00cc78b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x40) - lVar4;
  iVar2 = (int)lVar4;
  if (*(longlong *)(unaff_RDI + 0x48) + 8U >> 0x20 == 0) {
    FUN_00ccdf50(param_1,iVar2 + -8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      FUN_00cc78b0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(param_1,&local_d8);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))
                (param_1,(ulonglong)(iVar2 - 0x10) + local_d8);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(unaff_RDI + 0x48) + 8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x6d646174);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar1;
      local_50 = '\x01';
      FUN_00cc78b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00ccdf50(param_1,iVar2 + -0x10);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      FUN_00cc78b0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))(param_1,&local_e0);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))
                (param_1,(lVar4 + 0xffffffe8U & 0xffffffff) + local_e0);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_00cc78b0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    FUN_00ccdf50(param_1,1);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf90(param_1,lVar1 + 0x10);
      bVar5 = true;
      if (local_48 == 0) {
        FUN_00ccdf50(param_1,0x6d646174);
        bVar5 = local_d8 != 0;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (bVar5) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_00cc78b0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00b49e50 — 1354 bytes
// ============================================================

longlong FUN_00b49e50(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar4;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18);
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747364);
    FUN_00b45190(param_1,0);
    FUN_00ccdf50(param_1,1);
    lVar2 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    if (lVar2 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18) + 0x30);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x616c6163);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar4 = true;
        if (local_48 == 0) {
          FUN_00ccdf50(param_1,1);
          bVar4 = local_68 != 0;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf10(param_1,(int)*(short *)(unaff_RDI + 0x30));
        bVar4 = true;
        if (local_48 == 0) {
          FUN_00ccdf10(param_1,(int)*(short *)(unaff_RDI + 0xa0));
          bVar4 = true;
          if (local_68 == 0) {
            FUN_00ccdf10(param_1,0);
            bVar4 = true;
            if (local_d8 == 0) {
              FUN_00ccdf50(param_1,0xac44);
              bVar4 = true;
              if (local_c8 == 0) {
                FUN_00ccdf10(param_1,0);
                bVar4 = local_e8 != 0;
                if ((local_e0 != '\0') && (local_e8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18) + 0xc);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x616c6163);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar4 = true;
        if (local_48 == 0) {
          local_70 = 0;
          lVar2 = *(longlong *)(unaff_RDI + 0x98);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_70 = '\x01';
          local_78 = lVar2;
          FUN_00ccdbb0(param_1,&local_78);
          bVar4 = local_68 != 0;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return (longlong)iVar1 + 0x40;
}




// ============================================================
// @00b430e0 — 1261 bytes
// ============================================================

void FUN_00b430e0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  bool bVar3;
  bool bVar4;
  undefined1 local_f0 [8];
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  int local_54;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_3c;
  longlong local_38;
  char local_30;
  int local_24;
  
  FUN_00ccd6d0(&local_24,&local_54);
  bVar3 = local_38 != 0;
  bVar4 = local_24 != 4;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02764880;
  if (bVar3 || bVar4) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar1;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_54 == 1) {
    FUN_00ccd750(&local_24,local_f0);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 8;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_00cc78b0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd750(&local_24,&local_50);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 8;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_00cc78b0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_3c);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      FUN_00cc78b0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd750(&local_24,&local_48);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (local_38 != 0 || local_24 != 8) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x48) = (double)local_3c;
    *(ulonglong *)(unaff_RDI + 0x40) = CONCAT44(uStack_44,local_48);
    uVar2 = CONCAT44(uStack_4c,local_50);
  }
  else {
    if (local_54 != 0) {
      return;
    }
    FUN_00ccd6d0(&local_24,local_f0);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      local_d0 = '\x01';
      FUN_00cc78b0();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_50);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      FUN_00cc78b0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_3c);
    bVar3 = local_38 != 0;
    bVar4 = local_24 != 4;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (bVar3 || bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      FUN_00cc78b0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_24,&local_48);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (local_38 != 0 || local_24 != 4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      FUN_00cc78b0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x48) = (double)local_3c;
    *(ulonglong *)(unaff_RDI + 0x40) = (ulonglong)local_48;
    uVar2 = (ulonglong)local_50;
  }
  *(ulonglong *)(unaff_RDI + 0x58) = uVar2;
  return;
}




// ============================================================
// @00b429e0 — 1237 bytes
// ============================================================

ulonglong FUN_00b429e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong local_f8;
  char local_f0;
  longlong local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  ulonglong local_58;
  uint local_50;
  int local_4c;
  longlong local_48;
  char local_40;
  int local_38;
  int local_34;
  
  local_4c = param_2;
  if (unaff_RSI < 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x398))(param_1,&local_e0);
    bVar4 = true;
    if (local_48 == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
      bVar4 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02764880;
    unaff_RSI = local_e0;
    if (bVar4) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      FUN_00cc78b0();
      unaff_RSI = local_e0;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
        unaff_RSI = local_e0;
      }
    }
  }
  do {
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x390))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (lVar3 != 0) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      FUN_00cc78b0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_34,&local_50);
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02764880;
    if (lVar3 != 0) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      FUN_00cc78b0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    local_58 = (ulonglong)local_50;
    if (local_34 != 4) {
      return 0;
    }
    if (local_50 == 1) {
      FUN_00ccd750(&local_34,&local_58);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 8;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_a8 = lVar3;
        local_a0 = '\x01';
        FUN_00cc78b0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_98 = lVar3;
        local_90 = '\x01';
        FUN_00cc78b0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return local_58 - 0x10;
      }
    }
    else {
      if (local_50 == 0) {
        FUN_00ccd6d0(&local_34,&local_38);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02764880;
        if (local_48 != 0 || local_34 != 4) {
          if (DAT_02764880 != 0) {
            FUN_00d50b00();
          }
          local_88 = lVar3;
          local_80 = '\x01';
          FUN_00cc78b0();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38 == local_4c) {
          return unaff_RSI - 8;
        }
        return 0;
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764880;
      if (bVar4 || bVar5) {
        if (DAT_02764880 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar3;
        local_70 = '\x01';
        FUN_00cc78b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return (ulonglong)(local_50 - 8);
      }
    }
    lVar3 = unaff_RSI - local_58;
    if (lVar3 == 0 || unaff_RSI < (longlong)local_58) {
      return 0;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
    lVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02764880;
    unaff_RSI = lVar3;
    if (lVar1 != 0) {
      if (DAT_02764880 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}




// ============================================================
// @01398e20 — 1136 bytes
// ============================================================

void FUN_01398e20(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  longlong unaff_RDI;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  char local_50 [32];
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      puVar8 = (undefined *)0x0;
      do {
        lVar4 = local_80;
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        local_50[8] = local_78[0];
        pcVar6 = local_50 + 8;
        pcVar5 = local_78;
        if (local_78[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_78[0] != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (local_80 != 0) {
          pvVar3 = _pthread_getspecific((pthread_key_t)pcVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd790();
          if (local_78[0] == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01398ff8;
            }
          }
          else if (local_80 != 0) {
LAB_01398ff8:
            local_78[0] = '\0';
            local_80 = 0;
            local_70 = lVar4;
            local_68 = 0xffffffff;
            local_60 = 0;
            local_68._4_4_ = 0;
            while( true ) {
              if (local_68._4_4_ != 0) {
                if (local_68._4_4_ < 1) {
                  iVar9 = -local_68._4_4_;
                }
                else {
                  iVar9 = (int)local_68 - local_68._4_4_;
                  local_68 = CONCAT44(local_68._4_4_,iVar9);
                  FUN_00d23690();
                  local_60 = local_60 + local_68._4_4_;
                  iVar9 = 0;
                }
                local_68 = CONCAT44(iVar9,(int)local_68);
              }
              lVar4 = (longlong)(int)local_68;
              iVar9 = (int)local_68 + 1;
              local_68 = CONCAT44(local_68._4_4_,iVar9);
              if (*(int *)(local_70 + 0xc) <= iVar9) break;
              local_80 = *(longlong *)(*(longlong *)(local_70 + 0x10) + 8 + lVar4 * 8);
              pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_70 + 0x10));
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_011ef8d0();
              lVar4 = local_58;
              local_50[0x10] = local_50[0];
              pcVar6 = local_50 + 0x10;
              pcVar5 = local_50;
              if (local_50[0] == '\0') {
                pcVar5 = pcVar6;
              }
              *pcVar5 = '\0';
              if ((local_50[0] != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if (lVar4 != 0) {
                pvVar3 = _pthread_getspecific((pthread_key_t)pcVar6);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266fe0();
                lVar4 = local_58;
                local_50[0x18] = local_50[0];
                pcVar6 = local_50;
                if (local_50[0] == '\0') {
                  pcVar6 = local_50 + 0x18;
                }
                *pcVar6 = '\0';
                if ((local_50[0] != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if (lVar4 != 0) {
                  local_50[0] = '\0';
                  local_58 = lVar4;
                  FUN_00d235a0();
                  if ((local_50[0] != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_50[0x18] != '\0') {
                    FUN_00d50b20();
                  }
                }
                if (local_50[0x10] != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            FUN_0015edf0();
            FUN_00d50b20();
          }
          if (local_50[8] != '\0') {
            FUN_00d50b20();
          }
        }
        uVar7 = (pthread_key_t)puVar8 + 1;
        puVar8 = (undefined *)(ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  for (iVar9 = 0; iVar9 < *(int *)((longlong)puVar2 + 0xc); iVar9 = iVar9 + 1) {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e57f0();
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01397620 — 1073 bytes
// ============================================================

undefined8 FUN_01397620(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cbea0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(char *)(unaff_RDI + 0xc0) != '\0') && (*(char *)(unaff_RDI + 0x1a8) == '\0')) {
    return 0;
  }
  FUN_01328810();
  local_38 = local_50;
  if (local_50 == 0) {
    bVar2 = true;
    local_38 = 0;
    if (*(char *)(unaff_RDI + 0x1a8) == '\0') goto LAB_0139774c;
LAB_01397726:
    uVar10 = 2;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    bVar2 = false;
    if (*(char *)(unaff_RDI + 0x1a8) != '\0') goto LAB_01397726;
LAB_0139774c:
    if (((*(longlong *)(unaff_RDI + 0x1f8) != 0) || (*(longlong *)(unaff_RDI + 0x200) != 0)) ||
       (*(longlong *)(unaff_RDI + 0x148) == 0)) {
LAB_01397764:
      cVar3 = FUN_01334f30();
      if (cVar3 != '\0') goto LAB_01397776;
LAB_013977a7:
      bVar1 = false;
      iVar4 = *(int *)(local_38 + 0xc);
      if (iVar4 < 1) {
        bVar1 = false;
        plVar8 = (longlong *)0x0;
      }
      else {
        lVar11 = 0;
        plVar8 = (longlong *)0x0;
        do {
          plVar9 = *(longlong **)(*(longlong *)(local_38 + 0x10) + lVar11 * 8);
          lVar6 = local_38;
          if (plVar8 == plVar9) {
            if ((bVar1) || (plVar8 == (longlong *)0x0)) {
              if (plVar8 == (longlong *)0x0) goto LAB_013977d0;
              goto LAB_01397822;
            }
            bVar1 = true;
            FUN_00d50b00();
            pVar7 = (pthread_key_t)lVar6;
LAB_01397848:
            pvVar5 = _pthread_getspecific(pVar7);
            plVar9 = plVar8;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar9 + 0x498))();
            if (cVar3 == '\0') {
              uVar10 = 1;
              goto LAB_013979d7;
            }
          }
          else {
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar8 = plVar9;
            bVar1 = true;
            if (plVar9 != (longlong *)0x0) {
LAB_01397822:
              pVar7 = (pthread_key_t)lVar6;
              goto LAB_01397848;
            }
LAB_013977d0:
            plVar8 = (longlong *)0x0;
          }
          lVar11 = lVar11 + 1;
          iVar4 = *(int *)(local_38 + 0xc);
        } while (lVar11 < iVar4);
        if (0 < iVar4) {
          lVar11 = 0;
          do {
            plVar9 = *(longlong **)(*(longlong *)(local_38 + 0x10) + lVar11 * 8);
            lVar6 = local_38;
            if (plVar8 == plVar9) {
              if ((bVar1) || (plVar8 == (longlong *)0x0)) {
                if (plVar8 == (longlong *)0x0) goto LAB_013978e0;
                goto LAB_01397932;
              }
              bVar1 = true;
              FUN_00d50b00();
              pVar7 = (pthread_key_t)lVar6;
LAB_01397958:
              pvVar5 = _pthread_getspecific(pVar7);
              plVar9 = plVar8;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar9 + 0x480))();
            }
            else {
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar1) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar8 = plVar9;
              bVar1 = true;
              if (plVar9 != (longlong *)0x0) {
LAB_01397932:
                pVar7 = (pthread_key_t)lVar6;
                goto LAB_01397958;
              }
LAB_013978e0:
              plVar8 = (longlong *)0x0;
            }
            lVar11 = lVar11 + 1;
            iVar4 = *(int *)(local_38 + 0xc);
          } while (lVar11 < iVar4);
        }
      }
      if (iVar4 != 0) {
        FUN_01396e30();
      }
      *(undefined1 *)(unaff_RDI + 0xc0) = 1;
      uVar10 = 0;
      goto LAB_013979d7;
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)local_50);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_0141bab0();
    if (iVar4 != 3) goto LAB_01397764;
LAB_01397776:
    if (*(longlong *)(unaff_RDI + 0x48) == 0) goto LAB_013977a7;
    cVar3 = FUN_01396430();
    uVar10 = 1;
    if ((cVar3 != '\0') && (cVar3 = FUN_013965b0(), cVar3 == '\0')) goto LAB_013977a7;
  }
  bVar1 = false;
  plVar8 = (longlong *)0x0;
LAB_013979d7:
  if (!bVar2 && local_38 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar10;
}




// ============================================================
// @00dc2ff0 — 984 bytes
// str: ""GNDate""
// str: ""GNValue""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00dc2ff0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  lVar1 = DAT_0277c878;
  plVar4 = (longlong *)*unaff_RDI;
  if (DAT_0277c878 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781680;
  uVar6 = (undefined7)((ulonglong)plVar4 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (cVar2 != '\0') goto LAB_00dc31b1;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    uVar5 = 0;
    goto LAB_00dc31b1;
  }
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar4 == (longlong *)0x0) {
LAB_00dc30d8:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc30d8;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar4 == (longlong *)0x0) {
LAB_00dc3117:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc3117;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_00dc3160:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_00dc3160;
  }
  if (*plVar4 != 0) goto LAB_00dc31b1;
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026d02f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d0240 = FUN_00d4fe50();
    _DAT_026d0228 = "GNDate";
    _DAT_026d0230 = 0x18;
    _DAT_026d0238 = FUN_000378e0;
    _DAT_026d0248 = 0;
    uRam00000000026d0250 = 0;
    _DAT_026d0258 = 0;
    uRam00000000026d0260 = 0;
    _DAT_026d0268 = 0;
    uRam00000000026d0270 = 0;
    _DAT_026d0278 = 0;
    uRam00000000026d0280 = 0;
    _DAT_026d0288 = 0;
    uRam00000000026d0290 = 0;
    _DAT_026d0298 = 0;
    uRam00000000026d02a0 = 0;
    _DAT_026d02a8 = 0;
    uRam00000000026d02b0 = 0;
    _DAT_026d02b8 = 0;
    uRam00000000026d02c0 = 0;
    _DAT_026d02c8 = 0;
    uRam00000000026d02d0 = 0;
    _DAT_026d02d8 = 0;
    uRam00000000026d02e0 = 0;
    _DAT_026d02e8 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_00dc31a2:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00dc31a2;
  }
  uVar5 = CONCAT71(uVar6,*unaff_RSI != 0);
LAB_00dc31b1:
  return uVar5 & 0xffffffff;
}




// ============================================================
// @01396e30 — 976 bytes
// ============================================================

void FUN_01396e30(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
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
  
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    return;
  }
  (**(code **)(*DAT_028acd10 + 0x368))();
  FUN_01394a40();
  plVar2 = local_50;
  local_a0 = DAT_027bf478;
  if (DAT_027bf478 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar2 + 0x400))(param_1,&local_a0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != '\0') {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x398))();
  if (cVar3 != '\0') {
    local_90 = plVar2;
    local_88 = '\0';
    FUN_00ca94c0();
    plVar4 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar1 = true;
      plVar4 = (longlong *)0x0;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
        if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01396f91;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = false;
    }
LAB_01396f91:
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00c94880();
      local_70 = local_50;
      local_68 = 0;
      plVar4 = DAT_027bf440;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar4 = DAT_027bf440;
        }
      }
      else {
        local_48 = '\0';
      }
      local_68 = '\x01';
      DAT_027bf440 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        local_68 = '\x01';
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar4;
      FUN_00ca0840(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x3f0))();
      (**(code **)(*local_b0 + 0x3b0))();
      FUN_00d468f0();
      local_60 = local_50;
      local_58 = 0;
      plVar4 = DAT_027bf448;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar4 = DAT_027bf448;
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      DAT_027bf448 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar4;
      FUN_00ca0840(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00ca5c10();
      local_80 = plVar2;
      local_78 = '\0';
      FUN_00c91c80();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*DAT_028acd10 + 0x378))();
      if (!bVar1) {
        FUN_00d50b20();
      }
      goto LAB_01396ff1;
    }
  }
  (**(code **)(*DAT_028acd10 + 0x378))();
LAB_01396ff1:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00b4ab30 — 931 bytes
// ============================================================

undefined8 FUN_00b4ab30(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
  iVar3 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar3 = (iVar3 >> 2) + (iVar1 / 0x18) * -6;
  uVar4 = 0x28;
  if (iVar3 == 0) {
    uVar4 = 0x1c;
  }
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747363);
    FUN_00b45190(param_1,0);
    if (iVar3 == 0) {
      FUN_00ccdf50(param_1,1);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = local_70 != 0;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00ccdf50(param_1,2);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = true;
            if (local_70 == 0) {
              FUN_00ccdf50(param_1,iVar1 / 0x18 + 1);
              bVar5 = true;
              if (local_b0 == 0) {
                FUN_00ccdf50(param_1,iVar3);
                bVar5 = true;
                if (local_a0 == 0) {
                  FUN_00ccdf50(param_1,1);
                  bVar5 = local_c0 != 0;
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}




// ============================================================
// @00b49010 — 896 bytes
// ============================================================

undefined8 FUN_00b49010(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if (((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) &&
     ((ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20 == 0))
  {
    uVar4 = 0x20;
    if (unaff_SIL != '\0') {
      FUN_00b45250(param_1,0x6d646864);
      FUN_00b45190(param_1,0);
      uVar1 = *(undefined4 *)(unaff_RDI + 0x70);
      uVar2 = *(undefined4 *)(unaff_RDI + 0x88);
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_68 == 0) {
        FUN_00ccdf50(param_1,uVar2);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
          bVar5 = true;
          if (local_48 == 0) {
            FUN_00ccdf50(param_1,uVar1);
            bVar5 = true;
            if (local_38 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = local_98 != 0;
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      uVar4 = 0x20;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    uVar4 = 0x2c;
    if (unaff_SIL != '\0') {
      FUN_00b45250(param_1,0x6d646864);
      FUN_00b45190(param_1,0);
      FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
      bVar5 = true;
      if (local_68 == 0) {
        FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
          bVar5 = true;
          if (local_48 == 0) {
            FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x70));
            bVar5 = true;
            if (local_38 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = local_98 != 0;
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      uVar4 = 0x2c;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}




// ============================================================
// @00de0040 — 848 bytes
// str: ""GNDate""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00de0178) */
/* WARNING: Removing unreachable block (ram,0x00de0181) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de0040(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  plVar5 = (longlong *)*param_2;
  if (plVar5 == (longlong *)0x0) {
    FUN_00d8ede0();
    return;
  }
  if ((DAT_026d02f0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d0240 = FUN_00d4fe50();
    _DAT_026d0228 = "GNDate";
    _DAT_026d0230 = 0x18;
    _DAT_026d0238 = FUN_000378e0;
    _DAT_026d0248 = 0;
    uRam00000000026d0250 = 0;
    _DAT_026d0258 = 0;
    uRam00000000026d0260 = 0;
    _DAT_026d0268 = 0;
    uRam00000000026d0270 = 0;
    _DAT_026d0278 = 0;
    uRam00000000026d0280 = 0;
    _DAT_026d0288 = 0;
    uRam00000000026d0290 = 0;
    _DAT_026d0298 = 0;
    uRam00000000026d02a0 = 0;
    _DAT_026d02a8 = 0;
    uRam00000000026d02b0 = 0;
    _DAT_026d02b8 = 0;
    uRam00000000026d02c0 = 0;
    _DAT_026d02c8 = 0;
    uRam00000000026d02d0 = 0;
    _DAT_026d02d8 = 0;
    uRam00000000026d02e0 = 0;
    _DAT_026d02e8 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar5 = param_2;
  if (cVar3 == '\0') {
    plVar5 = &DAT_02802688;
  }
  local_31 = (char)plVar5[1];
  if ((local_31 != '\0') && (*plVar5 != 0)) {
    FUN_00d50b00();
LAB_00de00cb:
    (**(code **)(*unaff_RSI + 0x3d0))();
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      lVar1 = unaff_RSI[2];
    }
    else {
      lVar1 = unaff_RSI[2];
    }
    local_40 = '\x01';
    local_48 = local_68;
    if (lVar1 != 0) {
      local_40 = '\x01';
      local_50 = 0;
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_00c94a50(&local_58,&local_48);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar5 != 0) goto LAB_00de00cb;
  plVar5 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00de01d7;
  }
  param_2 = &DAT_02802688;
LAB_00de01d7:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00b4b300 — 793 bytes
// ============================================================

longlong FUN_00b4b300(void)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_40;
  char local_38;
  
  bVar1 = true;
  if ((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) {
    bVar1 = (ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20
            != 0;
  }
  iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
  iVar8 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar8 = iVar6;
  }
  iVar6 = (uint)((iVar6 / 0x18) * 6 < iVar8 >> 2) + iVar6 / 0x18;
  if (bVar1) {
    uVar10 = (ulonglong)(iVar6 < -1);
    lVar9 = (longlong)(iVar6 * 8) + uVar10 * 8 + 0x10;
    if (unaff_SIL == '\0') {
      return lVar9;
    }
    uVar5 = 0x636f3634;
  }
  else {
    uVar10 = (ulonglong)(iVar6 < -2);
    lVar9 = (longlong)(iVar6 * 4) + uVar10 * 8 + 0x10;
    if (unaff_SIL == '\0') {
      return lVar9;
    }
    uVar5 = 0x7374636f;
  }
  FUN_00b45250(uVar10,uVar5);
  FUN_00b45190();
  FUN_00ccdf50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027653a0;
  if (local_40 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (bVar1) {
    if (3 < *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18)) {
      lVar7 = *(longlong *)(unaff_RDI + 0x40);
      iVar6 = 0;
      uVar10 = 0;
      do {
        if ((int)((uVar10 & 0xffffffff) / 6) * 6 + iVar6 == 0) {
          FUN_00ccdf90(0xaaaaaaab,lVar7);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = DAT_027653a0;
          if (local_40 != 0) {
            if (DAT_027653a0 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        lVar7 = lVar7 + (ulonglong)
                        *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + uVar10 * 4
                                 );
        uVar10 = uVar10 + 1;
        iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
        iVar3 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar3 = iVar8;
        }
        iVar6 = iVar6 + -1;
      } while ((longlong)uVar10 < (longlong)(iVar3 >> 2));
    }
  }
  else if (3 < *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18)) {
    iVar6 = *(int *)(unaff_RDI + 0x40);
    iVar8 = 0;
    uVar10 = 0;
    do {
      if ((int)((uVar10 & 0xffffffff) / 6) * 6 + iVar8 == 0) {
        FUN_00ccdf50(0xaaaaaaab,iVar6);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = DAT_027653a0;
        if (local_40 != 0) {
          if (DAT_027653a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      iVar6 = iVar6 + *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + uVar10 * 4);
      uVar10 = uVar10 + 1;
      iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
      iVar4 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar8 = iVar8 + -1;
    } while ((longlong)uVar10 < (longlong)(iVar4 >> 2));
  }
  return lVar9;
}




// ============================================================
// @00b46bd0 — 775 bytes
// ============================================================

undefined8 FUN_00b46bd0(undefined8 param_1)

{
  longlong lVar1;
  int unaff_ESI;
  undefined8 local_28;
  undefined1 local_20;
  
  if (unaff_ESI != 0) {
    FUN_00ccdf50(param_1,0x1c);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0x66747970);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0x4d344120);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0x4d344120);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0x6d703432);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0x69736f6d);
    if ((local_20 != '\0') && (local_28 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027653a0;
    if (local_28 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return 0x1c;
}




// ============================================================
// @00b4a710 — 687 bytes
// ============================================================

char FUN_00b4a710(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar5;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  iVar1 = *(int *)(unaff_RDI + 0x50);
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747473);
    FUN_00b45190(param_1,0);
    if (*(int *)(unaff_RDI + 0x50) == 0) {
      FUN_00ccdf50(param_1,1);
      bVar5 = true;
      if (local_40 == 0) {
        iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
        iVar4 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar4 = iVar2;
        }
        FUN_00ccdf50(param_1,iVar4 >> 2);
        bVar5 = true;
        if (local_30 == 0) {
          FUN_00ccdf50(param_1,0x1000);
          bVar5 = local_50 != 0;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00ccdf50(param_1,2);
      bVar5 = true;
      if (local_40 == 0) {
        iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
        iVar4 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar4 = iVar2;
        }
        FUN_00ccdf50(param_1,(iVar4 >> 2) + -1);
        bVar5 = true;
        if (local_30 == 0) {
          FUN_00ccdf50(param_1,0x1000);
          bVar5 = true;
          if (local_50 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = true;
            if (local_80 == 0) {
              FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x50));
              bVar5 = local_90 != 0;
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return (iVar1 != 0) * '\b' + '\x18';
}




// ============================================================
// @00b4be00 — 667 bytes
// ============================================================

void FUN_00b4be00(void)

{
  int iVar1;
  dword dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  while( true ) {
    FUN_00b4c260();
    iVar1 = *(int *)(local_48 + 0xc);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 == 0) break;
    FUN_00b4c260();
    FUN_00d23340();
    local_38[0] = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00b4c4b0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00b6f010();
  if (local_48 == 0) {
    bVar4 = true;
    lVar5 = 0;
    dVar2 = MACH_HEADER.filetype;
  }
  else {
    if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = false;
    dVar2 = *(dword *)(local_48 + 0xc);
    lVar5 = local_48;
  }
  if (0 < (int)dVar2) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00b4c6f0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  if (*(char *)(unaff_RDI + 0xb0) == '\0') {
    *(undefined1 *)(unaff_RDI + 0xb0) = 1;
    FUN_00d403d0();
    FUN_00d50b00();
    local_80 = DAT_027634f8;
    if (DAT_027634f8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = 0;
    local_68 = '\0';
    FUN_00d41430(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b4e200 — 545 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b4e3ea) */
/* WARNING: Removing unreachable block (ram,0x00b4e3f3) */

undefined4 FUN_00b4e200(undefined2 param_1,short param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  short local_52;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00da7190();
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    if (param_2 == 0) {
      FUN_00d8ede0();
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_68,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_52 = param_2;
      FUN_00d920f0();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_78,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      uVar2 = FUN_01d89290();
      if (bVar1) {
        FUN_00d50b20();
      }
      goto LAB_00b4e409;
    }
  }
  uVar2 = 0;
LAB_00b4e409:
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @00b4de00 — 545 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b4dfea) */
/* WARNING: Removing unreachable block (ram,0x00b4dff3) */

undefined4 FUN_00b4de00(undefined2 param_1,short param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  short local_52;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00da7190();
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    if (param_2 == 0) {
      FUN_00d8ede0();
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_68,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_52 = param_2;
      FUN_00d920f0();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_78,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      uVar2 = FUN_01d89290();
      if (bVar1) {
        FUN_00d50b20();
      }
      goto LAB_00b4e009;
    }
  }
  uVar2 = 0;
LAB_00b4e009:
  FUN_00da71b0();
  return uVar2;
}



