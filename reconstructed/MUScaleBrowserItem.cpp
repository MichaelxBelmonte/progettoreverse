// Reconstructed implementation of MUScaleBrowserItem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScaleBrowserItem.h"

// ============================================================
// @01aaa300 — 8559 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aac467) */
/* WARNING: Removing unreachable block (ram,0x01aac474) */
/* WARNING: Removing unreachable block (ram,0x01aaac4e) */
/* WARNING: Removing unreachable block (ram,0x01aaac57) */
/* WARNING: Removing unreachable block (ram,0x01aaa423) */
/* WARNING: Removing unreachable block (ram,0x01aaa42c) */
/* WARNING: Removing unreachable block (ram,0x01aaa9fa) */
/* WARNING: Removing unreachable block (ram,0x01aaaa03) */
/* WARNING: Removing unreachable block (ram,0x01aab2dc) */
/* WARNING: Removing unreachable block (ram,0x01aab2e5) */
/* WARNING: Removing unreachable block (ram,0x01aac2fa) */
/* WARNING: Removing unreachable block (ram,0x01aac303) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aaa300(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  float *pfVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  ulonglong local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  char local_98;
  float local_8c;
  uint *local_88;
  longlong local_80;
  undefined8 *local_78;
  ulonglong local_70;
  longlong *local_68;
  char local_60;
  longlong local_48;
  char local_40;
  double local_38;
  
  if (((((unaff_RDI[9] != 0) && (unaff_RDI[8] != 0)) &&
       ((longlong *)unaff_RDI[5] != (longlong *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x18))(), cVar4 != '\0')) &&
     ((unaff_RDI[3] == 0 || (FUN_01aa8280(), unaff_RDI[3] == 0)))) {
    FUN_01f27fe0();
    plVar1 = local_68;
    local_1a8 = DAT_027e3040;
    if (DAT_027e3040 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    local_d8 = 0;
    lVar13 = unaff_RDI[9];
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar13;
    (**(code **)(*plVar1 + 0x5f0))(&local_e0,&local_1a8);
    local_c0 = local_48;
    lVar13 = local_48;
    if (local_48 == 0) {
      local_a4 = 1;
      local_c0 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      local_a4 = 0;
    }
    else {
      local_40 = '\0';
      local_a4 = 0;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_198 = local_c0;
    local_190 = '\0';
    (**(code **)(*unaff_RDI + 0x368))();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[3] != 0) {
      cVar4 = FUN_01aa96d0();
      if (cVar4 == '\0') {
        FUN_01aa8280();
      }
      else {
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar19 = (float)FUN_0125a2c0();
        plVar1 = unaff_RDI + 8;
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_8c = (float)FUN_017708f0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          fVar19 = fVar19 + _DAT_0241c590;
          local_88 = (uint *)CONCAT44(local_88._4_4_,DAT_0239011c * local_8c);
          local_78 = (undefined8 *)CONCAT44(local_78._4_4_,fVar19 - DAT_0239011c * local_8c);
          do {
            plVar14 = (longlong *)*plVar1;
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar7 != (void *)0x0) {
              plVar14 = (longlong *)*plVar1;
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
            }
            fVar20 = (float)(**(code **)(*plVar14 + 0x3a0))();
          } while (fVar20 < local_78._0_4_);
          fVar19 = fVar19 + local_88._0_4_;
          do {
            plVar14 = (longlong *)*plVar1;
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
            if (pvVar7 != (void *)0x0) {
              plVar14 = (longlong *)*plVar1;
              lVar8 = FUN_00e8b990();
              if (lVar8 != 0) {
                plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
            }
            fVar20 = (float)(**(code **)(*plVar14 + 0x3a0))();
          } while (fVar19 <= fVar20);
        }
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_025683c0;
        pcVar3 = DAT_025683d8;
        (*DAT_025683d8)();
        FUN_00c92170();
        FUN_00c92160();
        local_78 = puVar9;
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_025683c0;
        (*pcVar3)();
        FUN_00c92170();
        FUN_00c92160();
        local_b8 = 0;
        local_80 = 0;
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          local_b8 = 0;
          local_80 = 0;
          FUN_00e8b990();
        }
        local_b8 = 0;
        local_80 = 0;
        cVar4 = FUN_0173ed60();
        if (cVar4 == '\0') {
          local_b8 = 0;
          local_80 = 0;
        }
        else {
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          uVar10 = FUN_00c92160();
          local_80 = local_48;
          local_b8 = CONCAT71((int7)((ulonglong)uVar10 >> 8),local_48 != 0);
          plVar14 = (longlong *)*plVar1;
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            plVar14 = (longlong *)*plVar1;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          uVar21 = (**(code **)(*plVar14 + 0x3a0))();
          **(undefined4 **)(local_80 + 0x10) = uVar21;
          plVar14 = (longlong *)*plVar1;
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            plVar14 = (longlong *)*plVar1;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          uVar21 = (**(code **)(*plVar14 + 0x3a0))();
          *(undefined4 *)(*(longlong *)(local_80 + 0x10) + 4) = uVar21;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        puVar15 = local_78;
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(local_48 + 0xc));
          if (local_40 != '\0') {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770ea0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (0 < (int)local_70) {
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01740240();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                  goto LAB_01aab2ea;
                }
              }
              else if (local_48 != 0) {
LAB_01aab2ea:
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = DAT_027cd560;
                  if (DAT_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_148 = lVar8;
                  local_140 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = DAT_027e3b58;
                    if (DAT_027e3b58 != 0) {
                      FUN_00d50b00();
                    }
                    local_138 = lVar8;
                    local_130 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_130 != '\0') && (local_138 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_140 != '\0') && (local_148 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                puVar15 = local_78;
                if (cVar4 != '\0') {
                  plVar14 = (longlong *)*plVar1;
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (longlong *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar15 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar15[2] + (longlong)iVar17) = local_88._0_4_;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = DAT_027cd560;
                  if (DAT_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_128 = lVar8;
                  local_120 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  puVar15 = local_78;
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = DAT_027e3b60;
                    if (DAT_027e3b60 != 0) {
                      FUN_00d50b00();
                    }
                    local_118 = lVar8;
                    local_110 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    puVar15 = local_78;
                    if ((local_110 != '\0') && (local_118 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_120 != '\0') && (local_128 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (longlong *)*plVar1;
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (longlong *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar9 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar9[2] + (longlong)iVar17) = local_88._0_4_;
                }
                FUN_00d50b20();
              }
              iVar17 = (int)local_70 + -1;
              local_70 = CONCAT44(local_70._4_4_,iVar17);
            } while (iVar17 != 0);
          }
          local_88 = (uint *)(puVar15 + 3);
          local_b0 = (ulonglong)*(uint *)(puVar9 + 3);
          uVar6 = 0;
        }
        else {
          if (-1 < (int)local_70) {
            local_70 = (ulonglong)((int)local_70 + 1);
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01740240();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                  goto LAB_01aaac5c;
                }
              }
              else if (local_48 != 0) {
LAB_01aaac5c:
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = DAT_027cd560;
                  if (DAT_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_188 = lVar8;
                  local_180 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = DAT_027e3b58;
                    if (DAT_027e3b58 != 0) {
                      FUN_00d50b00();
                    }
                    local_178 = lVar8;
                    local_170 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_170 != '\0') && (local_178 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (longlong *)*plVar1;
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (longlong *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(local_78 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(local_78[2] + (longlong)iVar17) = local_88._0_4_;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01739580();
                if (local_48 == 0) {
                  cVar4 = '\0';
                }
                else {
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01739580();
                  plVar14 = local_68;
                  lVar8 = DAT_027cd560;
                  if (DAT_027cd560 != 0) {
                    FUN_00d50b00();
                  }
                  local_168 = lVar8;
                  local_160 = '\x01';
                  cVar5 = (**(code **)(*plVar14 + 0x50))();
                  cVar4 = '\x01';
                  if (cVar5 == '\0') {
                    pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01739580();
                    plVar14 = local_a0;
                    lVar8 = DAT_027e3b60;
                    if (DAT_027e3b60 != 0) {
                      FUN_00d50b00();
                    }
                    local_158 = lVar8;
                    local_150 = '\x01';
                    cVar4 = (**(code **)(*plVar14 + 0x50))();
                    if ((local_150 != '\0') && (local_158 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_160 != '\0') && (local_168 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') {
                  plVar14 = (longlong *)*plVar1;
                  pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
                  if (pvVar7 != (void *)0x0) {
                    plVar14 = (longlong *)*plVar1;
                    lVar8 = FUN_00e8b990();
                    if (lVar8 != 0) {
                      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                    }
                  }
                  uVar10 = (**(code **)(*plVar14 + 0x3a0))();
                  local_88 = (uint *)CONCAT44(local_88._4_4_,(int)uVar10);
                  iVar17 = *(int *)(puVar9 + 3);
                  FUN_00c8e340(uVar10,1);
                  *(float *)(puVar9[2] + (longlong)iVar17) = local_88._0_4_;
                }
                FUN_00d50b20();
              }
              uVar6 = (int)local_70 - 1;
              local_70 = (ulonglong)uVar6;
            } while (uVar6 != 0);
          }
          puVar15 = local_78;
          local_88 = (uint *)(local_78 + 3);
          uVar18 = (ulonglong)*(uint *)(puVar9 + 3);
          uVar6 = *local_88;
          local_b0 = uVar18;
          if (7 < (int)uVar6) {
            pvVar7 = (void *)local_78[2];
            fVar19 = *(float *)((longlong)pvVar7 + (ulonglong)((uVar6 >> 2) - 2) * 4);
            FUN_00c8e340(pvVar7,1);
            fVar19 = fVar19 - local_8c;
            pfVar2 = (float *)puVar15[2];
            _memmove(pvVar7,(void *)(ulonglong)uVar6,param_3);
            *pfVar2 = fVar19;
            uVar18 = (ulonglong)*(uint *)(puVar9 + 3);
          }
          uVar6 = (uint)(7 < (int)uVar6);
          if (7 < (int)uVar18) {
            fVar19 = *(float *)(puVar9[2] + 4);
            FUN_00c8e340(fVar19,1);
            *(float *)(puVar9[2] + uVar18) = local_8c + fVar19;
          }
        }
        local_e8 = (ulonglong)((int)local_b0 + 3);
        if (-1 < (int)local_b0) {
          local_e8 = local_b0 & 0xffffffff;
        }
        iVar17 = *(int *)(puVar15 + 3);
        iVar11 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar11 = iVar17;
        }
        local_38 = 0.0;
        local_8c = (float)uVar6;
        if ((int)uVar6 < iVar11 >> 2) {
          uVar18 = (ulonglong)uVar6;
          if (local_80 == 0) {
            local_38 = 0.0;
            do {
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + _DAT_0241c598;
              if (uVar18 != 0) {
                lVar13 = unaff_RDI[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)
                                       (local_78[2] + (ulonglong)((int)uVar18 - 1) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + _DAT_0241c598;
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar18 = uVar18 + 1;
              uVar6 = *local_88;
              uVar12 = uVar6 + 3;
              if (-1 < (int)uVar6) {
                uVar12 = uVar6;
              }
              local_38 = local_38 + _DAT_0241c598;
            } while ((longlong)uVar18 < (longlong)((int)uVar12 >> 2));
          }
          else {
            local_38 = 0.0;
            iVar17 = 0;
            local_70 = local_70 & 0xffffffff00000000;
            uVar16 = 0;
            do {
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if (iVar17 + (int)(uVar16 / 6) * 6 == 0) {
                lVar13 = unaff_RDI[0xb];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)
                                       (*(longlong *)(local_80 + 0x10) +
                                       (longlong)((int)local_70 % 2) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
              }
              local_38 = local_38 + _DAT_0241c598;
              if (uVar18 != 0) {
                lVar13 = unaff_RDI[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)
                                       (local_78[2] + (ulonglong)((int)uVar18 - 1) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + _DAT_0241c598;
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(local_78[2] + uVar18 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar16 = (ulonglong)((int)uVar16 + 3);
              local_38 = local_38 + _DAT_0241c598;
              uVar18 = uVar18 + 1;
              uVar6 = *local_88;
              uVar12 = uVar6 + 3;
              if (-1 < (int)uVar6) {
                uVar12 = uVar6;
              }
              iVar17 = iVar17 + -3;
            } while ((longlong)uVar18 < (longlong)((int)uVar12 >> 2));
          }
        }
        iVar17 = 0;
        if ((int)local_b0 < 4) {
          local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
        }
        else {
          uVar6 = (int)local_e8 >> 2;
          local_e8 = (ulonglong)uVar6;
          uVar18 = (ulonglong)uVar6;
          if (local_80 == 0) {
            uVar16 = (ulonglong)(uVar6 - 1);
            while( true ) {
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + _DAT_0241c598;
              if ((int)uVar16 == 0) break;
              iVar17 = *(int *)(puVar9 + 3);
              iVar11 = iVar17 + 3;
              if (-1 < iVar17) {
                iVar11 = iVar17;
              }
              if ((longlong)uVar18 < (longlong)(iVar11 >> 2)) {
                lVar13 = unaff_RDI[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar18 * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + _DAT_0241c598;
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              local_38 = local_38 + _DAT_0241c598;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 - 1;
            }
            local_b0 = local_b0 & 0xffffffff00000000;
          }
          else {
            uVar16 = (ulonglong)(uVar6 - 1);
            local_70 = 0;
            local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
            uVar6 = 0;
            while( true ) {
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if ((int)local_70 + (uVar6 / 6) * 6 == 0) {
                lVar13 = unaff_RDI[0xb];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)
                                       (*(longlong *)(local_80 + 0x10) +
                                       (longlong)((int)local_b0 % 2) * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
                local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
              }
              local_38 = local_38 + _DAT_0241c598;
              if ((int)uVar18 == 1) break;
              iVar17 = *(int *)(puVar9 + 3);
              iVar11 = iVar17 + 3;
              if (-1 < iVar17) {
                iVar11 = iVar17;
              }
              if ((longlong)uVar18 < (longlong)(iVar11 >> 2)) {
                lVar13 = unaff_RDI[10];
                if (lVar13 != 0) {
                  FUN_00d50b00();
                }
                FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar18 * 4));
                if (lVar13 != 0) {
                  FUN_00d50b20();
                }
              }
              local_38 = local_38 + _DAT_0241c598;
              lVar13 = unaff_RDI[10];
              if (lVar13 != 0) {
                FUN_00d50b00();
              }
              FUN_01aa9200(local_38,*(undefined4 *)(puVar9[2] + uVar16 * 4));
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              uVar6 = uVar6 + 3;
              local_38 = local_38 + _DAT_0241c598;
              uVar18 = uVar18 - 1;
              uVar16 = uVar16 - 1;
              local_70 = (ulonglong)((int)local_70 - 3);
            }
          }
          iVar17 = (int)local_e8 * 3 + -2;
        }
        puVar15 = local_78;
        if ((local_8c != 0.0) && (0xb < (int)*local_88)) {
          lVar13 = unaff_RDI[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          FUN_01aa9200(local_38,*(undefined4 *)(puVar15[2] + 8));
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar13 = unaff_RDI[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_38 = local_38 + _DAT_0241c598;
          FUN_01aa9200(local_38,*(undefined4 *)puVar15[2]);
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar13 = unaff_RDI[10];
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_38 = local_38 + _DAT_0241c598;
          FUN_01aa9200(local_38,*(undefined4 *)(puVar15[2] + 4));
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != 0) && ((iVar17 + 2) % 6 == 0)) {
            lVar13 = unaff_RDI[0xb];
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            FUN_01aa9200(local_38,*(undefined4 *)
                                   (*(longlong *)(local_80 + 0x10) +
                                   (longlong)((int)local_b0 % 2) * 4));
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
        }
        unaff_RDI[0x11] = (longlong)(local_38 + _DAT_0241c5a0);
        unaff_RDI[0x10] = 0;
        if (unaff_RDI[0x12] != 0) {
          unaff_RDI[0x11] = 0x40c3880000000000;
        }
        FUN_012d25b0();
        local_d0 = local_68;
        local_c8 = 0;
        if (local_60 == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_c8 = '\x01';
        FUN_0141c4c0(0);
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0141cb70(unaff_RDI[0x11]);
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        local_108 = local_48;
        local_100 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[3] + 0x690))();
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_f8 = local_48;
        local_f0 = '\0';
        (**(code **)(*(longlong *)unaff_RDI[3] + 0x690))();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        dVar22 = (double)FUN_00e7d6f0();
        dVar22 = dVar22 + DAT_023b3bc0;
        while (cVar4 = FUN_01aa7eb0(), cVar4 == '\0') {
          dVar23 = (double)FUN_00e7d6f0();
          if (dVar22 < dVar23) {
            FUN_01aa8280();
            break;
          }
          FUN_00b33790();
          FUN_00da6b00();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        if (((char)local_b8 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (puVar15 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_a4 == '\0' && local_c0 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01b4ed20 — 5208 bytes
// str: ""%@.%@""
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b4ed20(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R12;
  ulonglong uVar10;
  longlong *unaff_R13;
  undefined7 uVar12;
  longlong *plVar11;
  bool bVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_1d8;
  longlong local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  int local_f4;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  local_f4 = param_2;
  if ((param_2 == 0) || (*(longlong *)(unaff_RDI + 0x70) == 0)) goto LAB_01b4ffc6;
  FUN_01e56750();
  if (local_78 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e56750();
    FUN_01e5ca90();
    bVar13 = local_48 != (longlong *)0x0;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    FUN_01e56750();
    FUN_01e5ca90();
    FUN_01d88f70();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e53c20();
    if (local_78 == (longlong *)0x0) {
      bVar13 = false;
    }
    else {
      FUN_01e53c20();
      FUN_01e42030();
      bVar13 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar13) {
      FUN_01e53c20();
      FUN_01e42030();
      FUN_01d88f70();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01b4ef48:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4ef48;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
    unaff_R12 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01aa3f90();
    unaff_R13 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar4 = FUN_01b4cd30();
    if (unaff_R13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_R12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
      lVar1 = DAT_027e47f0;
      if (DAT_027e47f0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = local_90;
      local_e0 = lVar1;
      FUN_00083ea0(2,&local_e0);
      uVar14 = FUN_000b4da0();
      unaff_R12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar1 = DAT_027e47e0;
      if (DAT_027e47e0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      lVar2 = DAT_027e47f8;
      if (DAT_027e47f8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      FUN_01f6ca30(uVar14,&local_198);
      local_188 = unaff_R12;
      local_180 = '\0';
      iVar5 = (**(code **)(*local_78 + 0x5d8))();
      if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (iVar5 == 1) {
        FUN_00d50b20();
        return 0;
      }
    }
    FUN_00d50b20();
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01b4f2a6:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4f2a6;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar9;
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (plVar9 == (longlong *)0x0) {
    FUN_017bf2e0();
    local_80 = local_78;
    if (local_78 == (longlong *)0x0) goto LAB_01b4f3c3;
    uVar10 = CONCAT71(uVar12,1);
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    local_80 = local_78;
    if (local_78 == (longlong *)0x0) {
LAB_01b4f3c3:
      uVar10 = 0;
      local_80 = (longlong *)0x0;
    }
    else {
      uVar10 = CONCAT71(uVar12,1);
      if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*local_80 + 0x368))();
  plVar9 = local_78;
  FUN_017bf050();
  (**(code **)(*local_90 + 0x368))();
  local_d0 = local_48;
  local_c8 = 0;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_c8 = '\x01';
  cVar4 = FUN_00d90870();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = uVar10;
    (**(code **)(*local_80 + 0x368))();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0')
        ) && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_90 + 0x368))();
    iVar5 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Da,iVar5 + 1);
    plVar9 = plVar11;
    if (plVar11 == local_78) {
LAB_01b4f5a9:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01b4f5a9;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_017bf2e0();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_178 = plVar9;
    (**(code **)(*plVar11 + 0x400))(uVar14,&local_178);
    plVar11 = local_78;
    uVar12 = (undefined7)((ulonglong)unaff_R12 >> 8);
    if (local_78 == local_80) {
      if (((char)local_38 == '\0') && (local_78 != (longlong *)0x0)) {
        if (local_70 != '\0') goto LAB_01b4f6b8;
        uVar10 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
      else {
        uVar10 = local_38 & 0xffffffff;
      }
LAB_01b4f6c5:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar12,1);
        if ((char)local_38 == '\0') {
          local_80 = plVar11;
        }
        else {
          local_80 = plVar11;
          FUN_00d50b20();
        }
        goto LAB_01b4f6c5;
      }
      if ((char)local_38 == '\0') {
        local_80 = local_78;
      }
      else {
        local_80 = local_78;
        FUN_00d50b20();
      }
LAB_01b4f6b8:
      local_70 = '\0';
      uVar10 = CONCAT71(uVar12,1);
    }
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar9 == (longlong *)0x0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  FUN_017a9f30();
  FUN_00df1af0();
  local_1d8 = local_f0;
  pVar7 = 2;
  uVar14 = FUN_00083ea0(2,&local_1d8);
  uVar14 = FUN_00d8cb40(uVar14,&local_78);
  local_c0 = local_90;
  local_b8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar11 = local_80;
  local_b8 = '\x01';
  (**(code **)(*local_80 + 0x400))(uVar14,&local_c0);
  plVar3 = local_48;
  cVar4 = (char)uVar10;
  uVar12 = (undefined7)((ulonglong)plVar9 >> 8);
  if (local_48 == plVar11) {
    if ((cVar4 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_01b4f87a;
      uVar10 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = uVar10 & 0xffffffff;
    }
joined_r0x01b4fd36:
    if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar12,1);
      local_80 = plVar3;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      goto joined_r0x01b4fd36;
    }
    if (cVar4 == '\0') {
      local_80 = local_48;
    }
    else {
      local_80 = local_48;
      FUN_00d50b20();
    }
LAB_01b4f87a:
    local_40 = '\0';
    uVar10 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (longlong *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    (**(code **)(*local_80 + 0x3f0))();
    (**(code **)(*local_78 + 0x428))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  param_1 = extraout_XMM0_Da_00;
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    param_1 = FUN_00d50b20();
  }
  plVar9 = local_b0;
  if (cVar4 != '\0') {
    param_1 = FUN_01d2ac30();
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4fa12;
      }
    }
    else if (local_78 != (longlong *)0x0) {
LAB_01b4fa12:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_168 = local_a8;
      local_160 = '\0';
      FUN_017aaae0();
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf2e0();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x3f0))();
      local_158 = plVar11;
      local_150 = '\0';
      cVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*local_80 + 0x3f0))();
        (**(code **)(*local_48 + 0x388))();
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_138 = plVar9;
        local_130 = '\0';
        FUN_01aaed70();
        local_a0 = local_78;
        if (plVar9 == local_78) {
          local_a0 = plVar9;
LAB_01b4fdb6:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01b4fdb6;
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_70 = '\0';
        }
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = local_a0;
        local_120 = '\0';
        FUN_01735120();
        plVar9 = local_b0;
        if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = plVar11;
        local_38 = uVar10;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = DAT_027e3c20;
        if (DAT_027e3c20 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar1;
        local_140 = '\x01';
        FUN_01735120();
        uVar10 = local_38;
        plVar11 = local_98;
        plVar9 = local_b0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = local_80;
      local_110 = '\0';
      FUN_017bea90();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
  }
  if ((char)uVar10 != '\0') {
    param_1 = FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    param_1 = FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    param_1 = FUN_00d50b20();
  }
LAB_01b4ffc6:
  local_108 = *unaff_RSI;
  local_100 = '\0';
  uVar14 = FUN_01ad0160(param_1,(undefined1)local_f4);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  return uVar14;
}




// ============================================================
// @01b391e0 — 4877 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b39b8d) */
/* WARNING: Removing unreachable block (ram,0x01b39b99) */
/* WARNING: Removing unreachable block (ram,0x01b39ad7) */
/* WARNING: Removing unreachable block (ram,0x01b39ae3) */
/* WARNING: Removing unreachable block (ram,0x01b39a21) */
/* WARNING: Removing unreachable block (ram,0x01b39a2d) */
/* WARNING: Removing unreachable block (ram,0x01b3a3f3) */
/* WARNING: Removing unreachable block (ram,0x01b3a3ff) */
/* WARNING: Removing unreachable block (ram,0x01b396e7) */
/* WARNING: Removing unreachable block (ram,0x01b396f3) */
/* WARNING: Removing unreachable block (ram,0x01b394de) */
/* WARNING: Removing unreachable block (ram,0x01b394ea) */
/* WARNING: Removing unreachable block (ram,0x01b3963a) */
/* WARNING: Removing unreachable block (ram,0x01b39646) */
/* WARNING: Removing unreachable block (ram,0x01b39c43) */
/* WARNING: Removing unreachable block (ram,0x01b39c4f) */
/* WARNING: Removing unreachable block (ram,0x01b39ce1) */
/* WARNING: Removing unreachable block (ram,0x01b39ced) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01b391e0(pthread_key_t param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong unaff_RDI;
  longlong lVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong *local_1e8;
  char local_1e0;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
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
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  char local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = FUN_01b3e280();
  local_68 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01b392ad;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b39245:
    local_b0 = 0;
    lVar14 = *(longlong *)(unaff_RDI + 0x120);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar14;
    cVar4 = (**(code **)(*local_68 + 0x50))();
    uVar8 = extraout_XMM0_Qa_00;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
      return 1;
    }
    local_54 = 0;
    plVar12 = *(longlong **)(unaff_RDI + 0x120);
    if (plVar12 != local_68) {
LAB_01b392d5:
      if ((char)local_54 == '\0') {
        uVar8 = FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x120) = local_68;
      if (plVar12 != (longlong *)0x0) {
        local_60 = 0;
        uVar8 = FUN_00d50b20();
      }
    }
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_01b39245;
LAB_01b392ad:
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    plVar12 = *(longlong **)(unaff_RDI + 0x120);
    uVar8 = extraout_XMM0_Qa;
    if (plVar12 != local_48) goto LAB_01b392d5;
  }
  if ((char)local_54 == '\0') {
    FUN_01b06a50();
    cVar4 = FUN_01aa7eb0();
    uVar8 = extraout_XMM0_Qa_01;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01f27fe0();
      local_a0 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = (longlong *)(unaff_RDI + 0x90);
      FUN_01f474f0();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01b06a50();
      FUN_01aa8280();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_01aa5ff0(0);
    }
  }
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
    local_60 = 0;
    uVar8 = FUN_00d50b20();
  }
  if ((char)local_54 != '\0') goto LAB_01b39902;
  FUN_017b2910(uVar8,0);
  plVar12 = *(longlong **)(unaff_RDI + 0xd8);
  plVar1 = plVar12;
  plVar11 = plVar12;
  if (plVar12 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xd8) = 0;
        plVar1 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar12 = *(longlong **)(unaff_RDI + 0xd8);
        *(longlong **)(unaff_RDI + 0xd8) = local_48;
        plVar1 = local_48;
      }
    }
    else {
      local_40 = '\0';
      *(longlong **)(unaff_RDI + 0xd8) = local_48;
      plVar1 = local_48;
    }
    plVar11 = plVar1;
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar1 = *(longlong **)(unaff_RDI + 0xd8);
      plVar11 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x370))();
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b3a2a1;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_01b3a2a1:
      FUN_017a9f30();
      local_98 = local_48;
      local_90 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      cVar4 = (**(code **)(*plVar12 + 0x50))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = 0x26034e8;
        *puVar10 = &DAT_026034e8;
        puVar10[0xc] = 0;
        *(undefined1 (*) [16])(puVar10 + 7) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar10 + 9) = (undefined1  [16])0x0;
        *(undefined8 *)((longlong)puVar10 + 0x55) = 0;
        (*DAT_02603500)();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017b31f0();
        FUN_00d50b20();
      }
      local_60 = 0;
      FUN_00d50b20();
      goto LAB_01b3990b;
    }
  }
  else {
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(longlong **)(unaff_RDI + 0xe0);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          goto LAB_01b395a9;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xe0);
        *(longlong **)(unaff_RDI + 0xe0) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b395a9:
        *(longlong **)(unaff_RDI + 0xe0) = plVar11;
      }
      param_1 = (pthread_key_t)plVar1;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(longlong **)(unaff_RDI + 0xe8);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          goto LAB_01b39683;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xe8);
        *(longlong **)(unaff_RDI + 0xe8) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b39683:
        *(longlong **)(unaff_RDI + 0xe8) = plVar11;
      }
      param_1 = (pthread_key_t)plVar1;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_017583b0();
    if (cVar4 != '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0173f680();
    if (cVar4 == '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01b39902:
  local_60 = 0;
LAB_01b3990b:
  lVar14 = 0;
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    *(undefined8 *)(unaff_RDI + 0xf0) = 0;
    *(undefined4 *)(unaff_RDI + 0xfc) = 0;
    *(undefined1 *)(unaff_RDI + 0x100) = 0;
    *(undefined4 *)(unaff_RDI + 0x104) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x108) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x10c) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x110) = 0xffffffff;
  }
  else {
    FUN_01b27070();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
      local_50 = 0;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0150();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf0) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf0) = *(undefined1 *)(unaff_RDI + 0x89);
      }
      if (*(char *)(unaff_RDI + 0xfc) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xfc) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017bff00();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf1) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf1) = *(undefined1 *)(unaff_RDI + 0x88);
      }
      if (*(char *)(unaff_RDI + 0xfd) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xfd) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0270();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf2) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf2) = *(undefined1 *)(unaff_RDI + 0x89);
      }
      if (*(char *)(unaff_RDI + 0xfe) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xfe) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0260();
      lVar14 = local_50;
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf3) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf3) = *(undefined1 *)(unaff_RDI + 0x88);
      }
      if (*(char *)(unaff_RDI + 0xff) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xff) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar6 = FUN_017c0280();
      *(uint *)(unaff_RDI + 0xf8) = (uint)bVar6;
      if (*(char *)(unaff_RDI + 0x100) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(unaff_RDI + 0x88);
      }
      *(char *)(unaff_RDI + 0x100) = cVar4;
    }
    if (*(char *)(unaff_RDI + 0xf3) == '\0') {
      if (*(char *)(unaff_RDI + 0x88) == '\0') {
        *(undefined4 *)(unaff_RDI + 0xf4) = 1;
        cVar4 = *(char *)(unaff_RDI + 0xfc);
      }
      else {
        *(undefined4 *)(unaff_RDI + 0xf4) = 0;
        cVar4 = *(char *)(unaff_RDI + 0xfc);
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0xf4) = 4;
      cVar4 = *(char *)(unaff_RDI + 0xfc);
    }
    if ((cVar4 != '\0') && (*(int *)(unaff_RDI + 0x104) != -1)) {
      if (*(int *)(unaff_RDI + 0x104) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xf0) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xfd) != '\0') && (*(int *)(unaff_RDI + 0x108) != -1)) {
      if (*(int *)(unaff_RDI + 0x108) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xf1) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xfe) != '\0') && (*(int *)(unaff_RDI + 0x10c) != -1)) {
      if (*(int *)(unaff_RDI + 0x10c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xf2) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xff) != '\0') && (*(int *)(unaff_RDI + 0x110) != -1)) {
      *(int *)(unaff_RDI + 0xf4) = *(int *)(unaff_RDI + 0x110);
    }
    FUN_01b381a0();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  lVar2 = DAT_027e4590;
  if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (lVar14 != 0)) {
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027e4598;
    if (DAT_027e4598 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e11330();
    local_108 = plVar12;
    local_100 = '\0';
    FUN_01e125e0();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pplVar13 = &local_48;
  FUN_01ceb020();
  plVar12 = local_48;
  if ((DAT_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    local_50 = lVar14;
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = (undefined1  [16])0x0;
    _DAT_027e2ea0 = (undefined1  [16])0x0;
    _DAT_027e2eb0 = (undefined1  [16])0x0;
    _DAT_027e2ec0 = (undefined1  [16])0x0;
    _DAT_027e2ed0 = (undefined1  [16])0x0;
    _DAT_027e2ee0 = (undefined1  [16])0x0;
    _DAT_027e2ef0 = (undefined1  [16])0x0;
    _DAT_027e2f00 = (undefined1  [16])0x0;
    _DAT_027e2f10 = (undefined1  [16])0x0;
    _DAT_027e2f20 = (undefined1  [16])0x0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
    lVar14 = local_50;
  }
  if (plVar12 == (longlong *)0x0) {
    pplVar13 = &DAT_02802688;
    plVar12 = DAT_02802688;
    cVar4 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar13 = &DAT_02802688;
    }
    plVar12 = *pplVar13;
    cVar4 = *(char *)(pplVar13 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar13 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (longlong *)0x0) {
    uVar8 = FUN_00d6f370();
    local_d8 = DAT_027e4588;
    local_e8 = 0;
    local_e0 = '\0';
    if (DAT_027e4588 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_00d6f570(uVar8,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar4 = (**(code **)(*local_48 + 0x3a0))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar8 = (**(code **)(*local_1e8 + 0x368))();
      local_78 = local_c8;
      local_70 = 0;
      local_f8 = DAT_027e4588;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          uVar8 = FUN_00d50b00();
          local_f8 = DAT_027e4588;
        }
      }
      else {
        local_c0 = '\0';
      }
      local_70 = '\x01';
      DAT_027e4588 = local_f8;
      if (local_f8 != 0) {
        local_70 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_f0 = '\x01';
      FUN_00d6f570(uVar8,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01ab04a0 — 3548 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01ab04a0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *in_RCX;
  longlong **pplVar9;
  int iVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 *local_1e8;
  undefined1 local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0;
  longlong *local_198;
  undefined1 local_190;
  undefined8 *local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170;
  longlong *local_168;
  undefined1 local_160;
  longlong *local_158;
  undefined1 local_150;
  undefined1 local_148 [8];
  undefined1 local_140;
  longlong *local_138;
  undefined1 local_130;
  undefined1 local_128 [8];
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  longlong *local_108;
  undefined1 local_100;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_81;
  code *local_80;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  lVar7 = *in_RCX;
  local_81 = (char)in_RCX[1];
  if ((local_81 == '\0') || (lVar7 == 0)) {
    if (lVar7 == 0) {
      lVar7 = unaff_RSI;
      if (unaff_RSI != 0) goto LAB_01ab04cf;
      lVar7 = 0;
    }
  }
  else {
LAB_01ab04cf:
    param_1 = FUN_00d50b00();
    local_81 = '\x01';
  }
  local_e8 = '\0';
  local_f0 = lVar7;
  local_c0 = lVar7;
  FUN_00c9fe40(param_1,&local_f0);
  plVar5 = local_78;
  pplVar9 = &local_50;
  if (local_70[0] != '\0') {
    pplVar9 = (longlong **)local_70;
  }
  local_50 = (longlong *)CONCAT71(local_50._1_7_,local_70[0]);
  *(char *)pplVar9 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) goto LAB_01ab119a;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  local_80 = DAT_02572370;
  (*DAT_02572370)();
  local_90 = puVar4;
  FUN_017aae40();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017a9f30();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017aa1e0();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_02572358;
  (*local_80)();
  plVar1 = (longlong *)*in_RCX;
  if (plVar1 == (longlong *)0x0) {
    if ((*(char *)(unaff_RSI + 0x91) != '\0') || (*(char *)(unaff_RSI + 0x92) != '\0')) {
      FUN_017bf2e0();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_140 = 1;
      local_1e8 = local_90;
      local_1e0 = 0;
      uVar12 = FUN_01ab1b30(&local_1e8,local_148);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(undefined4 *)((longlong)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_017bf050();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_130 = 1;
    local_138 = plVar1;
    local_1d8 = local_90;
    local_1d0 = 0;
    uVar8 = FUN_01ab1b30(&local_1d8);
    plVar11 = local_78;
    uVar12 = extraout_XMM0_Da_01;
    if (local_78 == (longlong *)0x0) {
      local_80 = (code *)0x0;
    }
    else {
      local_80 = (code *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if (local_70[0] == '\0') {
        uVar12 = FUN_00d50b00();
      }
    }
    if (plVar1 != (longlong *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      local_70[0] = '\0';
      local_78 = (longlong *)0x0;
      local_40 = plVar11;
      local_68 = plVar11;
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
        lVar7 = (longlong)(int)local_60;
        iVar10 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar10) break;
        local_1c8 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
        local_1c0 = 0;
        local_1b0 = 0;
        local_1b8 = plVar5;
        local_78 = local_1c8;
        cVar3 = FUN_01ab2150(local_68[2],&local_1b8);
        if (cVar3 == '\0') {
          local_50 = local_78;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar12 = FUN_01b53440();
      plVar11 = local_40;
    }
    if ((*(char *)(unaff_RSI + 0x90) != '\0') &&
       ((*(char *)(unaff_RSI + 0x91) != '\0' || (*(char *)(unaff_RSI + 0x92) != '\0')))) {
      uVar12 = FUN_017bed60();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ab0d1f;
        }
      }
      else if (local_78 != (longlong *)0x0) {
LAB_01ab0d1f:
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 != '\0') {
          plVar6 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar6 = (longlong)&DAT_02641258;
          *(undefined1 *)((longlong)plVar6 + 0xc) = 0;
          plVar6[2] = 0;
          plVar6[3] = 0;
          (*DAT_02641270)();
          local_e0 = plVar1;
          local_d8 = '\0';
          FUN_01aa3fc0();
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar1 + 0x390))();
          local_b8 = local_78;
          local_b0 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01aa3f40();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01aa3f00();
          local_70[0] = '\0';
          local_78 = plVar6;
          FUN_00d21140();
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar12 = FUN_00d50b20();
      }
    }
  }
  else {
    if ((DAT_02737920 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_027e2e88 = FUN_00d4fe50();
      _DAT_027e2e70 = "MUScaleBrowserItem";
      _DAT_027e2e78 = 0x20;
      _DAT_027e2e80 = FUN_00841ad0;
      _DAT_027e2e90 = 0;
      uRam00000000027e2e98 = 0;
      _DAT_027e2ea0 = 0;
      uRam00000000027e2ea8 = 0;
      _DAT_027e2eb0 = 0;
      uRam00000000027e2eb8 = 0;
      _DAT_027e2ec0 = 0;
      uRam00000000027e2ec8 = 0;
      _DAT_027e2ed0 = 0;
      uRam00000000027e2ed8 = 0;
      _DAT_027e2ee0 = 0;
      uRam00000000027e2ee8 = 0;
      _DAT_027e2ef0 = 0;
      uRam00000000027e2ef8 = 0;
      _DAT_027e2f00 = 0;
      uRam00000000027e2f08 = 0;
      _DAT_027e2f10 = 0;
      uRam00000000027e2f18 = 0;
      _DAT_027e2f20 = 0;
      uRam00000000027e2f28 = 0;
      _DAT_027e2f30 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      in_RCX = &DAT_02802688;
    }
    lVar7 = *in_RCX;
    lVar2 = in_RCX[1];
    if (((char)lVar2 == '\0') || (lVar7 == 0)) {
      if (lVar7 == 0) {
        local_80 = (code *)0x0;
        plVar11 = (longlong *)0x0;
        uVar12 = extraout_XMM0_Da;
        goto LAB_01ab108e;
      }
    }
    else {
      FUN_00d50b00();
    }
    local_a8 = lVar7;
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    uVar12 = extraout_XMM0_Da_00;
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
LAB_01ab0fa5:
      local_80 = (code *)0x0;
      local_40 = (longlong *)0x0;
    }
    else {
      FUN_01aa3f90();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_120 = 1;
      local_1a8 = local_90;
      local_1a0 = 0;
      uVar12 = FUN_01ab1b30(&local_1a8,local_128);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(undefined4 *)((longlong)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01aa3f90();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70[0] = '\0';
      }
      local_110 = 1;
      local_118 = plVar1;
      cVar3 = FUN_01ab2450();
      uVar12 = extraout_XMM0_Da_02;
      if (plVar1 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_01ab0fa5;
      uVar12 = FUN_01aa3f90();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_100 = 1;
      local_108 = plVar1;
      uVar12 = FUN_01aafac0(uVar12,&local_108);
      plVar11 = local_78;
      if ((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b00();
      }
      if (plVar1 != (longlong *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) goto LAB_01ab0fa5;
      local_198 = plVar11;
      local_190 = 0;
      local_188 = local_90;
      local_180 = 0;
      FUN_01ab1b30(&local_188);
      local_40 = local_78;
      if (local_78 == (longlong *)0x0) {
        local_80 = (code *)0x0;
      }
      else {
        if (local_70[0] == '\0') {
          FUN_00d50b00();
        }
        local_70[0] = '\0';
        local_78 = (longlong *)0x0;
        local_68 = local_40;
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
          lVar7 = (longlong)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)((longlong)local_68 + 0xc) <= iVar10) break;
          local_178 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
          local_170 = 0;
          local_160 = 0;
          local_168 = plVar5;
          local_78 = local_178;
          cVar3 = FUN_01ab2150(local_68[2],&local_168);
          if (cVar3 == '\0') {
            local_50 = local_78;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar8 = FUN_01b53440();
        local_80 = (code *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_40;
    if ((char)lVar2 != '\0') {
      uVar12 = FUN_00d50b20();
      plVar11 = local_40;
    }
  }
LAB_01ab108e:
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    FUN_01ab2600(0,FUN_01aaec30);
    if (local_78 == plVar5) {
LAB_01ab10de:
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01ab10de;
      }
      FUN_00d50b20();
    }
    local_150 = 0;
    local_158 = plVar5;
    uVar12 = FUN_01aaf2c0();
  }
  local_d0 = local_c0;
  local_c8 = '\0';
  local_70[0] = '\0';
  local_78 = plVar5;
  FUN_00ca0840(uVar12,&local_d0);
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ab119a:
  if (*(int *)((longlong)plVar5 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((local_81 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01b4d890 — 3080 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b4e114) */
/* WARNING: Removing unreachable block (ram,0x01b4d9e7) */
/* WARNING: Removing unreachable block (ram,0x01b4d9f3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01b4d890(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong unaff_RDI;
  longlong *plVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong **pplVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  char local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  byte local_41;
  longlong *local_40;
  longlong *local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  pplVar14 = &local_70;
  FUN_01ceb020();
  plVar10 = local_70;
  if ((DAT_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_01b4d8f5:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b4d8f5;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = plVar11;
  if ((plVar11 == (longlong *)0x0) ||
     (uVar3 = FUN_01aa3f90(), plVar11 = local_70, local_70 == (longlong *)0x0)) {
    uVar3 = FUN_017bf2e0();
    plVar11 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (((local_68[0] == '\0') && (uVar3 = FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      uVar3 = FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  cVar2 = FUN_01ab2450();
  if (cVar2 == '\0') {
    local_188 = '\0';
    local_190 = plVar11;
    uVar3 = FUN_01ab2a40(extraout_XMM0_Da,&local_190);
    plVar9 = local_70;
    uVar13 = (undefined7)((ulonglong)plVar10 >> 8);
    if (local_70 == plVar11) {
      plVar9 = plVar11;
      if (((char)local_80 == '\0') && (plVar11 != (longlong *)0x0)) {
        if (local_68[0] != '\0') goto LAB_01b4da61;
        uVar12 = CONCAT71(uVar13,1);
        FUN_00d50b00();
      }
      else {
        uVar12 = local_80 & 0xffffffff;
      }
LAB_01b4daba:
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = uVar12 & 0xffffffff;
      plVar11 = plVar9;
    }
    else {
      if (local_68[0] == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar12 = CONCAT71(uVar13,1);
        if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4daba;
      }
      if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
        uVar3 = FUN_00d50b20();
      }
LAB_01b4da61:
      local_68[0] = '\0';
      local_80 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      plVar11 = plVar9;
    }
    if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027e47e0;
  if (plVar11 == (longlong *)0x0) {
    local_78 = 0;
    local_40 = (longlong *)0x0;
    plVar10 = local_a8;
    goto LAB_01b4e39b;
  }
  if (DAT_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e47e8;
  local_180 = lVar6;
  local_178 = '\x01';
  if (DAT_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar1;
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  uVar15 = FUN_00d31230(&local_160,&local_170);
  local_f0 = local_90;
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  (**(code **)(*plVar11 + 0x400))(uVar15,&local_f0);
  local_a0 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x428))();
  uVar15 = FUN_01ce9490();
  local_b0 = (ulonglong)*(uint *)((longlong)local_70 + 0xc);
  if (local_68[0] != '\0') {
    uVar15 = FUN_00d50b20();
  }
  if ((int)local_b0 < 1) {
    uVar3 = 0;
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_01cecec0(uVar15,(int)local_b0 + -1);
    plVar10 = local_70;
    if (local_70 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_40 = plVar10;
    FUN_01dd4a30();
    FUN_00d23340();
    plVar10 = local_70;
    pcVar8 = &local_c0;
    if (local_68[0] != '\0') {
      pcVar8 = local_68;
    }
    local_c0 = local_68[0];
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d45870();
    if ((local_c0 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = local_40;
    FUN_01ce6530();
    FUN_01dd3d10();
    local_150 = plVar10;
    local_148 = '\0';
    uVar15 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x958))();
    if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  uVar4 = FUN_01cecec0(uVar15,local_b0);
  plVar10 = local_70;
  uVar13 = (undefined7)((ulonglong)uVar4 >> 8);
  cVar2 = (char)uVar3;
  if (local_70 == local_40) {
    local_78 = uVar3;
    plVar10 = local_40;
    if ((cVar2 == '\0') && (local_70 != (longlong *)0x0)) {
      local_78 = CONCAT71(uVar13,1);
      if (local_68[0] != '\0') goto LAB_01b4df17;
      local_78 = CONCAT71(uVar13,1);
      FUN_00d50b00();
      plVar10 = local_40;
    }
joined_r0x01b4df07:
    local_40 = plVar10;
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_78 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if ((cVar2 != '\0') && (local_40 != (longlong *)0x0)) {
        local_40 = plVar10;
        FUN_00d50b20();
        plVar10 = local_40;
      }
      goto joined_r0x01b4df07;
    }
    local_78 = CONCAT71(uVar13,1);
    if ((cVar2 == '\0') || (local_40 == (longlong *)0x0)) {
      local_40 = local_70;
    }
    else {
      local_40 = local_70;
      FUN_00d50b20();
    }
  }
LAB_01b4df17:
  FUN_01ce6530();
  if ((int)local_b0 < 1) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02641258;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    (*DAT_02641270)();
    local_98 = puVar5;
    (**(code **)(*local_a0 + 0x3f0))();
    local_e0 = local_70;
    local_d8 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_d8 = '\x01';
    FUN_01aa3fc0();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_41 = (int)local_b0 < 1;
  plVar10 = *(longlong **)(unaff_RDI + 0x80);
  local_f8 = 0;
  lVar6 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_140 = local_98;
  local_138 = '\0';
  local_100 = lVar6;
  (**(code **)(*plVar10 + 0x5c8))(&local_140);
  plVar9 = local_70;
  plVar10 = local_a8;
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar9;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_38 = plVar11;
    while( true ) {
      lVar6 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
      local_70 = *(longlong **)(local_60[2] + 8 + lVar6 * 8);
      FUN_01aa3f10();
      plVar10 = local_90;
      lVar6 = DAT_027e47e0;
      if (DAT_027e47e0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_027e47e8;
      local_130 = lVar6;
      local_128 = '\x01';
      if (DAT_027e47e8 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar1;
      local_118 = '\x01';
      local_110 = 0;
      local_108 = '\0';
      FUN_00d31230(&local_110,&local_120);
      local_c8 = 0;
      lVar6 = CONCAT71(uStack_bf,local_c0);
      if (local_b8 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = lVar6;
      cVar2 = (**(code **)(*plVar10 + 0x50))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        iVar7 = local_50 + (int)local_58;
        goto LAB_01b4e337;
      }
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
    }
    iVar7 = -1;
LAB_01b4e337:
    uVar15 = FUN_01b53440();
    plVar11 = local_38;
    plVar10 = local_a8;
    if (-1 < iVar7) {
      FUN_01b4d260(uVar15,iVar7);
    }
    FUN_00d50b20();
  }
  local_41 = local_41 | local_98 == (undefined8 *)0x0;
  if (local_41 == 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01b4e39b:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01b51da0 — 3054 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b52664) */
/* WARNING: Removing unreachable block (ram,0x01b51ef5) */
/* WARNING: Removing unreachable block (ram,0x01b51f01) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b51da0(undefined8 **param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  longlong unaff_RDI;
  undefined8 **ppuVar12;
  undefined8 unaff_R13;
  uint7 uVar14;
  undefined8 **ppuVar13;
  undefined8 unaff_R14;
  uint7 uVar16;
  undefined8 **ppuVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined8 **local_1b0;
  char local_1a8;
  undefined8 **local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  undefined8 **local_160;
  char local_158;
  undefined8 **local_150;
  char local_148;
  longlong local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  undefined8 **local_120;
  char local_118;
  longlong local_110;
  char local_108;
  undefined8 **local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  undefined8 **local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 **local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 **local_80;
  undefined8 **local_70;
  char local_68;
  undefined8 **local_60;
  undefined8 local_58;
  int local_50;
  char local_48;
  uint7 uStack_47;
  byte local_39;
  undefined8 **local_38;
  
  if (param_2 == 0) {
LAB_01b528db:
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    pppuVar10 = &local_70;
    FUN_01ceb020();
    ppuVar12 = local_70;
    if ((DAT_02737920 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
      _DAT_027e2e88 = FUN_00d4fe50();
      _DAT_027e2e70 = "MUScaleBrowserItem";
      _DAT_027e2e78 = 0x20;
      _DAT_027e2e80 = FUN_00841ad0;
      _DAT_027e2e90 = 0;
      uRam00000000027e2e98 = 0;
      _DAT_027e2ea0 = 0;
      uRam00000000027e2ea8 = 0;
      _DAT_027e2eb0 = 0;
      uRam00000000027e2eb8 = 0;
      _DAT_027e2ec0 = 0;
      uRam00000000027e2ec8 = 0;
      _DAT_027e2ed0 = 0;
      uRam00000000027e2ed8 = 0;
      _DAT_027e2ee0 = 0;
      uRam00000000027e2ee8 = 0;
      _DAT_027e2ef0 = 0;
      uRam00000000027e2ef8 = 0;
      _DAT_027e2f00 = 0;
      uRam00000000027e2f08 = 0;
      _DAT_027e2f10 = 0;
      uRam00000000027e2f18 = 0;
      _DAT_027e2f20 = 0;
      uRam00000000027e2f28 = 0;
      _DAT_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (ppuVar12 == (undefined8 **)0x0) {
LAB_01b51e06:
      pppuVar10 = (undefined8 ***)&DAT_02802688;
    }
    else {
      (*(code *)(*ppuVar12)[0x6c])();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01b51e06;
    }
    ppuVar12 = *pppuVar10;
    if (*(char *)(pppuVar10 + 1) == '\0') {
      if (ppuVar12 != (undefined8 **)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pppuVar10 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = (uint7)((ulonglong)unaff_R13 >> 8);
    local_88 = ppuVar12;
    if ((ppuVar12 == (undefined8 **)0x0) ||
       (FUN_01aa3f90(), ppuVar12 = local_70, local_70 == (undefined8 **)0x0)) {
      FUN_017bf2e0();
      ppuVar12 = local_70;
      if (local_70 == (undefined8 **)0x0) {
        ppuVar12 = (undefined8 **)0x0;
        cVar4 = '\0';
        uVar14 = 0;
      }
      else {
        cVar4 = '\x01';
        if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      cVar4 = '\x01';
    }
    cVar5 = FUN_01ab2450();
    if (cVar5 == '\0') {
      local_1a8 = '\0';
      local_1b0 = ppuVar12;
      FUN_01ab2a40(extraout_XMM0_Da,&local_1b0);
      ppuVar11 = local_70;
      uVar16 = (uint7)((ulonglong)unaff_R14 >> 8);
      if (local_70 == ppuVar12) {
        ppuVar11 = ppuVar12;
        if ((cVar4 == '\0') && (ppuVar12 != (undefined8 **)0x0)) {
          if (local_68 != '\0') goto LAB_01b51f75;
          FUN_00d50b00();
          cVar5 = '\x01';
        }
        else {
          uVar16 = uVar14 & 0xffffff;
          cVar5 = cVar4;
        }
LAB_01b51fca:
        ppuVar12 = ppuVar11;
        cVar4 = cVar5;
        if (local_68 == '\0') {
          uVar14 = uVar16 & 0xffffff;
        }
        else if (local_70 == (undefined8 **)0x0) {
          uVar14 = uVar16 & 0xffffff;
        }
        else {
          FUN_00d50b20();
          uVar14 = uVar16 & 0xffffff;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (undefined8 **)0x0) {
            FUN_00d50b00();
          }
          cVar5 = '\x01';
          if ((cVar4 != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01b51fca;
        }
        if ((cVar4 != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
LAB_01b51f75:
        local_68 = '\0';
        ppuVar12 = ppuVar11;
        cVar4 = '\x01';
      }
      if ((local_1a8 != '\0') && (local_1b0 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar17 = (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x970))();
    ppuVar11 = local_70;
    if ((((local_68 == '\0') && (local_70 != (undefined8 **)0x0)) &&
        (uVar17 = FUN_00d50b00(), local_68 != '\0')) && (local_70 != (undefined8 **)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    local_1a0 = ppuVar11;
    local_198 = '\0';
    local_b8 = ppuVar11;
    (*(code *)(*ppuVar12)[0x80])(uVar17,&local_1a0);
    local_80 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (undefined8 **)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_198 != '\0') && (local_1a0 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = DAT_027e47e0;
    if (DAT_027e47e0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027e47e8;
    local_190 = lVar7;
    local_188 = '\x01';
    if (DAT_027e47e8 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar2;
    local_178 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    uVar17 = FUN_00d31230(&local_170,&local_180);
    local_e8 = local_a0;
    local_e0 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        uVar17 = FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_e0 = '\x01';
    (*(code *)(*ppuVar12)[0x80])(uVar17,&local_e8);
    ppuVar11 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (undefined8 **)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
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
    local_90 = ppuVar11;
    cVar5 = (*(code *)(*ppuVar11)[0x74])();
    if (cVar5 != '\0') {
      local_160 = local_80;
      local_158 = '\0';
      cVar5 = (*(code *)(*local_90)[10])();
      if ((local_158 != '\0') && (local_160 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        local_150 = local_80;
        local_148 = '\0';
        local_48 = cVar4;
        uStack_47 = uVar14;
        (*(code *)(*local_90)[0x87])();
        if ((local_148 != '\0') && (local_150 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        local_138 = '\0';
        local_140 = 0;
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0xa20))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        uVar17 = (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x478))();
        if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
          *(undefined8 *)(unaff_RDI + 0xa8) = 0;
          uVar17 = FUN_00d50b20();
        }
        if (local_88 == (undefined8 **)0x0) {
          iVar9 = 0;
        }
        else {
          uVar17 = FUN_01ce9490();
          iVar9 = *(int *)((longlong)local_70 + 0xc);
          if (local_68 != '\0') {
            uVar17 = FUN_00d50b20();
          }
        }
        FUN_01cecec0(uVar17,iVar9);
        local_a8 = local_70;
        if ((((local_68 == '\0') && (local_70 != (undefined8 **)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        FUN_01ce6530();
        if (iVar9 < 1) {
          local_b0 = (undefined8 *)0x0;
        }
        else {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_02641258;
          *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          (*DAT_02641270)();
          local_b0 = puVar6;
          (*(code *)(*local_80)[0x7e])();
          local_d8 = local_70;
          local_d0 = 0;
          if (local_68 == '\0') {
            if (local_70 != (undefined8 **)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_d0 = '\x01';
          FUN_01aa3fc0();
          if ((local_d0 != '\0') && (local_d8 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
        }
        local_39 = iVar9 < 1;
        plVar1 = *(longlong **)(unaff_RDI + 0x80);
        local_f0 = 0;
        lVar7 = *(longlong *)(unaff_RDI + 0x78);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        ppuVar15 = local_80;
        ppuVar13 = local_88;
        local_f0 = '\x01';
        local_130 = local_b0;
        local_128 = '\0';
        param_1 = &local_130;
        local_f8 = lVar7;
        (**(code **)(*plVar1 + 0x5c8))(param_1);
        ppuVar3 = local_70;
        ppuVar11 = local_b8;
        if (local_68 == '\0') {
          if (((local_70 != (undefined8 **)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
             (local_70 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
        }
        if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if (ppuVar3 != (undefined8 **)0x0) {
          local_68 = '\0';
          local_70 = (undefined8 **)0x0;
          local_100 = ppuVar3;
          local_60 = ppuVar3;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_38 = ppuVar12;
          while( true ) {
            lVar7 = (longlong)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)((longlong)local_60 + 0xc) <= iVar9) break;
            param_1 = (undefined8 **)local_60[2];
            local_70 = (undefined8 **)param_1[lVar7 + 1];
            FUN_01aa3f10();
            plVar1 = local_a0;
            (*(code *)(*local_80)[0x71])();
            local_c8 = local_110;
            local_c0 = 0;
            if (local_108 == '\0') {
              if (local_110 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_108 = '\0';
            }
            local_c0 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 != '\0') {
              iVar9 = local_50 + (int)local_58;
              goto LAB_01b527dc;
            }
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
          }
          iVar9 = -1;
          param_1 = local_60;
LAB_01b527dc:
          FUN_01b53440();
          ppuVar12 = local_38;
          ppuVar15 = local_80;
          ppuVar13 = local_88;
          ppuVar11 = local_a8;
          if (-1 < iVar9) {
            FUN_01dd3d10();
            local_120 = ppuVar11;
            local_118 = '\0';
            (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x950))();
            if ((local_118 != '\0') && (local_120 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          ppuVar11 = local_b8;
        }
        local_39 = local_39 | local_b0 == (undefined8 *)0x0;
        if (local_39 == 0) {
          FUN_00d50b20();
        }
        if (local_a8 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if (local_90 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar15 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar11 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if (ppuVar13 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
          FUN_00d50b20();
          uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_01b528dd;
        }
        goto LAB_01b528db;
      }
    }
    FUN_00d50b20();
    ppuVar11 = local_88;
    ppuVar12 = local_b8;
    if (local_80 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar12 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    if (ppuVar11 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
    uVar8 = 0;
  }
LAB_01b528dd:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01aa6cb0 — 2436 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aa745a) */
/* WARNING: Removing unreachable block (ram,0x01aa7463) */
/* WARNING: Removing unreachable block (ram,0x01aa7072) */
/* WARNING: Removing unreachable block (ram,0x01aa707b) */
/* WARNING: Removing unreachable block (ram,0x01aa7410) */
/* WARNING: Removing unreachable block (ram,0x01aa741d) */
/* WARNING: Removing unreachable block (ram,0x01aa7485) */
/* WARNING: Removing unreachable block (ram,0x01aa7492) */
/* WARNING: Removing unreachable block (ram,0x01aa7618) */
/* WARNING: Removing unreachable block (ram,0x01aa7625) */

void FUN_01aa6cb0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  uint uVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar13;
  longlong lVar14;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar14 = *unaff_RSI;
  if (lVar14 == 0) {
    return;
  }
  if (unaff_RDI[5] == 0) {
    return;
  }
  if (unaff_RDI[3] != 0) {
    return;
  }
  lVar9 = unaff_RDI[4];
  if (lVar9 != lVar14) {
    FUN_00d50b00();
    unaff_RDI[4] = lVar14;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar14 = DAT_02703b10;
  if (DAT_02703b10 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e8 = 0;
  local_e0 = '\0';
  plVar10 = &local_e8;
  FUN_00d40470(plVar10,&stack0xffffffffffffff70,3,3);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)((longlong)unaff_RDI + 0x34);
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar6 + 0x18))();
  plVar8 = (longlong *)unaff_RDI[2];
  if (plVar8 == plVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[2] = (longlong)plVar6;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00cafd20();
  plVar8 = (longlong *)unaff_RDI[2];
  lVar14 = unaff_RDI[4];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x3a0))();
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (pthread_key_t)plVar10;
  if (iVar5 < 0) goto LAB_01aa71ae;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (pthread_key_t)plVar10;
  local_98 = local_40;
  if (local_40 == 0) {
LAB_01aa715c:
    bVar3 = false;
LAB_01aa7165:
    cVar13 = '\x01';
    uVar12 = 1;
    bVar4 = true;
    bVar1 = true;
    bVar2 = false;
joined_r0x01aa7181:
    if (local_98 != 0) goto LAB_01aa7183;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    pVar11 = (pthread_key_t)plVar10;
    if (local_40 == 0) goto LAB_01aa715c;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar11 = (pthread_key_t)plVar10;
    if (local_40 == 0) {
      bVar3 = true;
      goto LAB_01aa7165;
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240a80();
    if (local_40 == 0) {
      lVar14 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      lVar14 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
    pVar11 = (pthread_key_t)plVar10;
    uVar12 = 0;
    if (lVar14 != 0) {
      while( true ) {
        pVar11 = (pthread_key_t)plVar10;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124a860();
        if (iVar5 <= (int)uVar12) break;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = local_40;
        local_d0 = '\0';
        plVar10 = (longlong *)(ulonglong)uVar12;
        FUN_01240490(plVar10,&local_d8);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123fae0();
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      }
      bVar3 = true;
      uVar12 = 0;
      cVar13 = '\0';
      bVar4 = false;
      bVar1 = false;
      goto joined_r0x01aa7181;
    }
    bVar3 = true;
    bVar4 = true;
LAB_01aa7183:
    bVar1 = bVar4;
    cVar13 = (char)uVar12;
    FUN_00d50b20();
  }
  if ((bVar2) && (!bVar1)) {
    FUN_00d50b20();
  }
  if (bVar3 && cVar13 == '\0') {
    FUN_00d50b20();
  }
LAB_01aa71ae:
  local_c0 = '\0';
  local_c8 = (longlong *)0x0;
  FUN_00cb1fa0();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    (**(code **)(*local_c8 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x3c8))();
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar8 + 0x18))();
  plVar10 = (longlong *)unaff_RDI[3];
  if (plVar10 == plVar8) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[3] = (longlong)plVar8;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar8 = (longlong *)FUN_002dd0f0();
  (**(code **)(*plVar8 + 0x18))();
  lVar14 = (**(code **)(*unaff_RDI + 0x380))();
  pvVar7 = _pthread_getspecific(pVar11);
  plVar10 = plVar8;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar10 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  plVar10[10] = lVar14;
  local_b0 = '\0';
  local_b8 = plVar8;
  FUN_012dddb0();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012d1940();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)unaff_RDI[5];
  local_a0 = 0;
  lVar14 = unaff_RDI[3];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar14;
  (**(code **)(*plVar10 + 0x120))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01aa5120 — 2278 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aa51c7) */
/* WARNING: Removing unreachable block (ram,0x01aa51d3) */
/* WARNING: Removing unreachable block (ram,0x01aa5450) */
/* WARNING: Removing unreachable block (ram,0x01aa5455) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5120(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  float local_9c;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  bool local_50;
  char local_41;
  longlong *local_40;
  char local_38 [8];
  
  local_d8 = *param_2;
  local_d0 = '\0';
  local_c8 = *param_1;
  local_c0 = '\0';
  FUN_01cec030(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*unaff_RSI;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01aa520d:
    unaff_RSI = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01aa520d;
  }
  lVar1 = *unaff_RSI;
  local_41 = (char)unaff_RSI[1];
  if ((local_41 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  (**(code **)(*(longlong *)*param_2 + 0x9e8))();
  local_70 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_01aa3ef0();
  if (cVar4 == '\0') {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) != 0) {
      plVar9 = (longlong *)*param_2;
      FUN_01d44be0(extraout_XMM0_Qa_00,2);
      local_88 = local_40;
      local_80 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) == 0) {
      plVar9 = (longlong *)*param_2;
      FUN_01d44a40(extraout_XMM0_Qa,2);
      local_98 = local_40;
      local_90 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_90 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ce9490();
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) {
    local_78 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_01ce9490();
    FUN_00d23340();
    plVar9 = local_40;
    bVar10 = local_38[0] == '\0';
    local_58 = local_40;
    if (bVar10) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_38[0] = '\0';
    }
    local_50 = !bVar10;
    if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e2e88 = FUN_00d4fe50();
      _DAT_027e2e70 = "MUScaleBrowserItem";
      _DAT_027e2e78 = 0x20;
      _DAT_027e2e80 = FUN_00841ad0;
      _DAT_027e2e90 = 0;
      uRam00000000027e2e98 = 0;
      _DAT_027e2ea0 = 0;
      uRam00000000027e2ea8 = 0;
      _DAT_027e2eb0 = 0;
      uRam00000000027e2eb8 = 0;
      _DAT_027e2ec0 = 0;
      uRam00000000027e2ec8 = 0;
      _DAT_027e2ed0 = 0;
      uRam00000000027e2ed8 = 0;
      _DAT_027e2ee0 = 0;
      uRam00000000027e2ee8 = 0;
      _DAT_027e2ef0 = 0;
      uRam00000000027e2ef8 = 0;
      _DAT_027e2f00 = 0;
      uRam00000000027e2f08 = 0;
      _DAT_027e2f10 = 0;
      uRam00000000027e2f18 = 0;
      _DAT_027e2f20 = 0;
      uRam00000000027e2f28 = 0;
      _DAT_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 == (longlong *)0x0) {
LAB_01aa548f:
      pplVar7 = &DAT_02802688;
      plVar9 = DAT_02802688;
      if (DAT_02802688 != (longlong *)0x0) goto LAB_01aa549e;
LAB_01aa54b6:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01aa548f;
      pplVar7 = &local_58;
      plVar9 = local_58;
      if (local_58 == (longlong *)0x0) goto LAB_01aa54b6;
LAB_01aa549e:
      if (*(char *)(pplVar7 + 1) == '\0') {
        pplVar7 = (longlong **)FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
      }
      local_78 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
    }
    if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  fVar14 = 0.0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (((*(float *)(unaff_RDI + 0x198) == 0.0) && (!NAN(*(float *)(unaff_RDI + 0x198)))) ||
     ((longlong *)*param_2 == (longlong *)0x0)) goto LAB_01aa586a;
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01aa586a;
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = (**(code **)(*plVar3 + 0x4d8))();
  local_f8 = fVar14;
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0xac8))();
  if (cVar4 == '\0') {
    FUN_01e3f820();
    local_9c = DAT_023942a8;
  }
  else {
    if (plVar9 == (longlong *)0x0) {
LAB_01aa5737:
      (**(code **)(*(longlong *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_b8 = local_a8;
      local_b0 = '\0';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01aa5737;
      (**(code **)(*(longlong *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e3f820();
    local_9c = DAT_023941fc;
  }
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  local_68 = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._4_4_ = uStack_f4;
  auVar2._0_4_ = local_f8;
  auVar2._8_4_ = uStack_f0;
  auVar2._12_4_ = uStack_ec;
  auVar12._4_12_ = auVar2._4_12_;
  auVar12._0_4_ = local_f8 + local_9c;
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = blendps(auVar12,auVar13,0xe);
  (**(code **)(*local_40 + 0x4d0))(auVar13._0_8_,fVar14);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01aa586a:
  if (((char)local_78 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_41 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01aa96d0 — 2276 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aa9f80) */
/* WARNING: Removing unreachable block (ram,0x01aa9f89) */
/* WARNING: Removing unreachable block (ram,0x01aa9f08) */
/* WARNING: Removing unreachable block (ram,0x01aa9ef5) */
/* WARNING: Removing unreachable block (ram,0x01aa9f29) */
/* WARNING: Removing unreachable block (ram,0x01aa9f44) */
/* WARNING: Removing unreachable block (ram,0x01aa9f58) */
/* WARNING: Removing unreachable block (ram,0x01aa9f66) */
/* WARNING: Removing unreachable block (ram,0x01aa9e4d) */
/* WARNING: Removing unreachable block (ram,0x01aa9e5a) */

ulonglong FUN_01aa96d0(char *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (((*(longlong *)(unaff_RDI + 0x20) == 0) || (*(longlong *)(unaff_RDI + 0x40) == 0)) ||
     (*(longlong *)(unaff_RDI + 0x10) == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_01aa8f10();
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    iVar1 = *(int *)(local_48 + 0xc);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      iVar2 = *(int *)(local_48 + 0xc);
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar2 == 1) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_38;
        pcVar4 = local_40;
        if (local_40[0] == '\0') {
          pcVar4 = pcVar5;
        }
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)pcVar5;
        lVar9 = *(longlong *)(unaff_RDI + 0x50);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RDI + 0x50);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RDI + 0x50) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = *(longlong *)(unaff_RDI + 0x58);
        if (lVar9 == local_48) {
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              lVar9 = *(longlong *)(unaff_RDI + 0x58);
            }
          }
          else {
            local_38[0] = '\0';
          }
          *(longlong *)(unaff_RDI + 0x58) = local_48;
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_0125a2c0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (fVar10 <= fVar11) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x50);
            }
            *(longlong *)(unaff_RDI + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(longlong **)(local_48 + 0x10);
          lVar8 = *(longlong *)(unaff_RDI + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x58);
            }
            *(longlong *)(unaff_RDI + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = **(longlong **)(local_48 + 0x10);
          lVar8 = *(longlong *)(unaff_RDI + 0x50);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x50);
            }
            *(longlong *)(unaff_RDI + 0x50) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar9 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8);
          lVar8 = *(longlong *)(unaff_RDI + 0x58);
          if (lVar8 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
              lVar8 = *(longlong *)(unaff_RDI + 0x58);
            }
            *(longlong *)(unaff_RDI + 0x58) = lVar9;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00cafd20();
      while( true ) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        param_1 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = param_1;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) break;
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x90) != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      unaff_RBX = 0;
      (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x3c8))();
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01b381a0 — 2227 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b389de) */
/* WARNING: Removing unreachable block (ram,0x01b389e7) */
/* WARNING: Removing unreachable block (ram,0x01b38310) */
/* WARNING: Removing unreachable block (ram,0x01b3831c) */
/* WARNING: Removing unreachable block (ram,0x01b389b6) */
/* WARNING: Removing unreachable block (ram,0x01b389c2) */
/* WARNING: Removing unreachable block (ram,0x01b38a18) */
/* WARNING: Removing unreachable block (ram,0x01b38a21) */
/* WARNING: Removing unreachable block (ram,0x01b386ca) */
/* WARNING: Removing unreachable block (ram,0x01b386d7) */
/* WARNING: Removing unreachable block (ram,0x01b38362) */
/* WARNING: Removing unreachable block (ram,0x01b3836b) */

void FUN_01b381a0(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar10;
  float fVar11;
  longlong *local_b8;
  char local_b0;
  float local_50;
  float local_4c;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x928))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar5 = (longlong *)FUN_00e8b990();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x3c0))();
      if (cVar1 != '\0') {
        (**(code **)(*plVar5 + 0x3b8))();
        FUN_01a1d6e0();
        FUN_019f76e0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a1d6e0();
        (**(code **)(*local_b8 + 0xa28))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x930))();
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    FUN_01b27070();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01b270b0();
    plVar5 = *(longlong **)(unaff_RDI + 0xe0);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      plVar5 = *(longlong **)(unaff_RDI + 0xe0);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    plVar5 = (longlong *)*plVar5;
    uVar2 = (*(code *)plVar5[0x6e])();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
    plVar10 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar5 = local_40;
      plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar10 + 0x370))();
    pVar8 = (pthread_key_t)plVar5;
    if (*(char *)(unaff_RDI + 0xf2) == '\0') {
      pvVar4 = _pthread_getspecific(pVar8);
      plVar10 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar5 = local_40;
        plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      pVar8 = (pthread_key_t)plVar5;
      local_50 = (float)(**(code **)(*plVar10 + 0x3a0))();
    }
    else {
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      local_50 = (float)FUN_0173fbe0();
      uVar3 = uVar2;
    }
    FUN_01b3b230(local_50,uVar3);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pVar9 = 0x1b38d74;
    switch(*(undefined4 *)(unaff_RDI + 0xf4)) {
    case 0:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      break;
    case 1:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_40;
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = local_4c * DAT_02394208;
      local_50 = (float)_logf(fVar11 * DAT_02394204);
      local_50 = local_50 * DAT_02394208;
      break;
    case 2:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      local_4c = local_4c * DAT_02394208;
      local_50 = DAT_0241b650;
      break;
    case 3:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar11 = (float)FUN_0173e440();
      local_50 = (float)FUN_01773e50();
      local_4c = (float)_logf(fVar11 * DAT_02394204);
      local_4c = local_4c * DAT_02394208;
      local_50 = local_50 + DAT_0241b650;
      break;
    case 4:
      pVar8 = pVar9;
      pvVar4 = _pthread_getspecific(0x1b38d74);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_0173fbe0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (float)FUN_0173fbe0();
      break;
    default:
      local_4c = 0.0;
      local_50 = 0.0;
    }
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173ecc0(local_50 - local_4c);
    if (unaff_SIL != '\0') {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x26034e8;
      *puVar7 = &DAT_026034e8;
      puVar7[0xc] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x55) = 0;
      (*DAT_02603500)();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b120();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017aa610();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf8a0();
      FUN_00d50b20();
    }
    FUN_01ad60d0(unaff_SIL,2);
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @008c14e6 — 2191 bytes
// ============================================================

int FUN_008c14e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_4c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar21 = unaff_RDI + 0xf8;
  lVar7 = unaff_RDI + 0xf3;
  lVar8 = unaff_RDI + 0xf2;
  lVar9 = unaff_RDI + 0xf1;
  lVar10 = unaff_RDI + 0xf0;
  lVar11 = unaff_RDI + 0xa8;
  lVar12 = unaff_RDI + 0x90;
  lVar13 = unaff_RDI + 0x78;
  lVar14 = unaff_RDI + 0x40;
  lVar15 = unaff_RDI + 0x38;
  lVar16 = unaff_RDI + 0x30;
  lVar17 = unaff_RDI + 0x28;
  lVar18 = unaff_RDI + 0x20;
  lVar19 = unaff_RDI + 0x18;
  lVar20 = unaff_RDI + 0x10;
  lVar22 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,
                       uVar24,uVar25);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -10) {
    case 0:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xfd) = 1;
      break;
    case 1:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xfe) = 1;
      break;
    case 2:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xff) = 1;
      break;
    case 3:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x100) = 1;
      break;
    case 4:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x101) = 1;
      break;
    case 5:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x102) = 1;
      break;
    case 6:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x103) = 1;
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008c1679_caseD_7:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008c1d21:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x104) = 1;
      break;
    case 0xb:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x105) = 1;
      break;
    case 0x14:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x106) = 1;
      break;
    case 0x15:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x107) = 1;
      break;
    case 0x16:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = FUN_008fea92();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x108) = 1;
      break;
    case 0x1e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      *(undefined8 *)(unaff_RDI + 0xe0) = *(undefined8 *)(unaff_RDI + 0xd8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1 + -10,&local_34);
      FUN_008897f0();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x138))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x109) = 1;
      break;
    case 0x28:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10a) = 1;
      break;
    case 0x29:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10b) = 1;
      break;
    case 0x2a:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10c) = 1;
      break;
    case 0x2b:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10d) = 1;
      break;
    case 0x2c:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10e) = 1;
      break;
    case 0x2d:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10f) = 1;
      break;
    case 0x2e:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x110) = 1;
      break;
    default:
      if (iVar1 == 10000) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x111) = 1;
      }
      else {
        if (iVar1 != 1) goto switchD_008c1679_caseD_7;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xfc) = 1;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ============================================================
// @01b51100 — 1967 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b51306) */
/* WARNING: Removing unreachable block (ram,0x01b51312) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01b51100(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong *local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_01b51746;
  if (*(char *)(unaff_RDI + 200) != '\0') {
    uVar7 = 0;
    goto LAB_01b51746;
  }
  *(undefined1 *)(unaff_RDI + 200) = 1;
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b51181:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b51181;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x398))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x98);
      FUN_01aa3f10();
      local_70 = local_40;
      local_68 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((-1 < *(int *)(unaff_RDI + 0xc0)) && (-1 < *(int *)(unaff_RDI + 0xc4))) {
        FUN_01cecec0();
        if ((local_38[0] == '\0') &&
           (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38[0] != '\0')) &&
            (local_40 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        FUN_01dd3d10();
        (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x958))();
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b4c2c0();
  *(undefined8 *)(unaff_RDI + 0xc0) = 0xffffffffffffffff;
  FUN_01ce9490();
  if (local_40 == (longlong *)0x0) {
    bVar8 = false;
  }
  else {
    FUN_01ce9490();
    bVar8 = *(int *)(CONCAT71(uStack_4f,local_50) + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_01ce9490();
    iVar4 = *(int *)((longlong)local_40 + 0xc) + -1;
    *(int *)(unaff_RDI + 0xc0) = iVar4;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
      iVar4 = *(int *)(unaff_RDI + 0xc0);
    }
    FUN_01cecec0(iVar4,iVar4);
    lVar2 = local_40[5];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01dd4a30();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b51444;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01b51444:
      if (*(int *)((longlong)plVar1 + 0xc) == 1) {
        FUN_00d23340();
        plVar1 = local_40;
        pcVar5 = &local_50;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_50 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = FUN_00d45870();
        *(undefined4 *)(unaff_RDI + 0xc4) = uVar9;
        if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01b4c850();
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5150b:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b5150b;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar9 = FUN_00d6f370();
    local_80 = DAT_027e47d8;
    local_90 = 0;
    local_88 = '\0';
    if (DAT_027e47d8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d6f570(uVar9,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_40 + 0x3a0))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar9 = (**(code **)(*local_c0 + 0x368))();
      local_58 = 0;
      local_60 = CONCAT71(uStack_4f,local_50);
      local_a0 = DAT_027e47d8;
      if (local_48 == '\0') {
        if (local_60 != 0) {
          uVar9 = FUN_00d50b00();
          local_a0 = DAT_027e47d8;
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      DAT_027e47d8 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        uVar9 = FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_00d6f570(uVar9,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 200) = 0;
LAB_01b51746:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01061d10 — 1490 bytes
// ============================================================

bool FUN_01061d10(uchar *param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  EVP_CIPHER_CTX *unaff_RSI;
  uint uVar7;
  longlong unaff_RDI;
  uint uVar8;
  uint uVar9;
  uchar *in;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *outl;
  uint uVar14;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if ((param_1 == (uchar *)0x0) || (param_3 == 0)) {
    param_3 = 0;
  }
  else {
    uVar2 = *(byte *)(unaff_RDI + 0x107) + 1;
    *(char *)(unaff_RDI + 0x107) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x106) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x106) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x105) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x105) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x104) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x104) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x103) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x103) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x102) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x101) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x100) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xff) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfe) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfe) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfd) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfd) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfc) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfc) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfb) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfb) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfa) = (char)uVar2;
    iVar3 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
    *(char *)(unaff_RDI + 0xf8) = *(char *)(unaff_RDI + 0xf8) + (char)((uint)iVar3 >> 8);
    iVar3 = FUN_01062340(0,param_3,0,0);
    if (iVar3 == 0) {
      return false;
    }
    if ((*(byte *)(unaff_RDI + 0x1c) & 1) == 0) {
      param_3 = 1;
      param_1 = (uchar *)0x0;
    }
  }
  uVar12 = *(byte *)(unaff_RDI + 0x107) + 1;
  *(char *)(unaff_RDI + 0x107) = (char)uVar12;
  uVar11 = (uint)*(byte *)(unaff_RDI + 0x106) + (uVar12 >> 8);
  *(char *)(unaff_RDI + 0x106) = (char)uVar11;
  uVar10 = (uint)*(byte *)(unaff_RDI + 0x105) + (uVar11 >> 8);
  *(char *)(unaff_RDI + 0x105) = (char)uVar10;
  uVar9 = (uint)*(byte *)(unaff_RDI + 0x104) + (uVar10 >> 8);
  *(char *)(unaff_RDI + 0x104) = (char)uVar9;
  uVar8 = (uint)*(byte *)(unaff_RDI + 0x103) + (uVar9 >> 8);
  *(char *)(unaff_RDI + 0x103) = (char)uVar8;
  uVar4 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar8 >> 8);
  *(char *)(unaff_RDI + 0x102) = (char)uVar4;
  uVar2 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar4 >> 8);
  *(char *)(unaff_RDI + 0x101) = (char)uVar2;
  uVar14 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar2 >> 8);
  *(char *)(unaff_RDI + 0x100) = (char)uVar14;
  local_4c = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar14 >> 8);
  *(char *)(unaff_RDI + 0xff) = (char)local_4c;
  local_50 = (uint)*(byte *)(unaff_RDI + 0xfe) + (local_4c >> 8);
  *(char *)(unaff_RDI + 0xfe) = (char)local_50;
  local_54 = (uint)*(byte *)(unaff_RDI + 0xfd) + (local_50 >> 8);
  *(char *)(unaff_RDI + 0xfd) = (char)local_54;
  local_58 = (uint)*(byte *)(unaff_RDI + 0xfc) + (local_54 >> 8);
  *(char *)(unaff_RDI + 0xfc) = (char)local_58;
  uVar5 = (uint)*(byte *)(unaff_RDI + 0xfb) + (local_58 >> 8);
  *(char *)(unaff_RDI + 0xfb) = (char)uVar5;
  uVar7 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar5 >> 8);
  *(char *)(unaff_RDI + 0xfa) = (char)uVar7;
  uVar6 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar7 >> 8);
  *(char *)(unaff_RDI + 0xf9) = (char)uVar6;
  cVar1 = (char)(uVar6 >> 8) + *(char *)(unaff_RDI + 0xf8);
  *(char *)(unaff_RDI + 0xf8) = cVar1;
  if (param_2 == 0) {
    uVar12 = (uVar12 & 0xff) + 1;
    *(char *)(unaff_RDI + 0x107) = (char)uVar12;
    uVar11 = (uVar11 & 0xff) + (uVar12 >> 8);
    *(char *)(unaff_RDI + 0x106) = (char)uVar11;
    uVar10 = (uVar10 & 0xff) + (uVar11 >> 8);
    *(char *)(unaff_RDI + 0x105) = (char)uVar10;
    uVar9 = (uVar9 & 0xff) + (uVar10 >> 8);
    *(char *)(unaff_RDI + 0x104) = (char)uVar9;
    uVar8 = (uVar8 & 0xff) + (uVar9 >> 8);
    *(char *)(unaff_RDI + 0x103) = (char)uVar8;
    uVar4 = (uVar4 & 0xff) + (uVar8 >> 8);
    *(char *)(unaff_RDI + 0x102) = (char)uVar4;
    uVar2 = (uVar2 & 0xff) + (uVar4 >> 8);
    *(char *)(unaff_RDI + 0x101) = (char)uVar2;
    uVar2 = (uVar14 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x100) = (char)uVar2;
    uVar2 = (local_4c & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xff) = (char)uVar2;
    uVar2 = (local_50 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfe) = (char)uVar2;
    uVar2 = (local_54 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfd) = (char)uVar2;
    uVar2 = (local_58 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfc) = (char)uVar2;
    uVar2 = (uVar5 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfb) = (char)uVar2;
    uVar2 = (uVar7 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfa) = (char)uVar2;
    iVar3 = (uVar6 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
    *(char *)(unaff_RDI + 0xf8) = cVar1 + (char)((uint)iVar3 >> 8);
  }
  else {
    ___bzero();
    do {
      in = (uchar *)0xffffffff;
      iVar3 = _EVP_CipherInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,
                                 (ENGINE *)(unaff_RDI + 0xf8),(uchar *)0xffffffff,param_1,
                                 (int)param_3);
      if (iVar3 == 0) {
        return false;
      }
      outl = (int *)0x40000000;
      if (param_2 < 0x40000000) {
        outl = (int *)(param_2 & 0xffffffff);
      }
      uVar4 = (uint)outl + 0xf >> 4;
      uVar2 = *(uint *)(unaff_RDI + 0x104);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar5 = uVar4 + uVar2;
      if (CARRY4(uVar4,uVar2)) {
        uVar2 = uVar2 * -0x10;
        if (uVar5 == 0) {
          uVar2 = (uint)outl;
        }
        uVar4 = *(byte *)(unaff_RDI + 0x103) + 1;
        *(char *)(unaff_RDI + 0x103) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x102) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x101) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x100) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xff) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfe) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfe) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfd) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfd) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfc) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfc) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfb) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfb) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfa) = (char)uVar4;
        iVar3 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
        *(char *)(unaff_RDI + 0xf8) = *(char *)(unaff_RDI + 0xf8) + (char)((uint)iVar3 >> 8);
        uVar5 = 0;
        outl = (int *)(ulonglong)uVar2;
      }
      *(uint *)(unaff_RDI + 0x104) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      iVar13 = (int)outl;
      iVar3 = _EVP_CipherUpdate(unaff_RSI,(uchar *)&local_5c,outl,in,(int)param_1);
      if (iVar3 == 0) {
        return false;
      }
      if (local_5c != iVar13) {
        return false;
      }
      unaff_RSI = (EVP_CIPHER_CTX *)(unaff_RSI->oiv + (longlong)iVar13 + -0x18);
      param_2 = param_2 - (longlong)iVar13;
    } while (param_2 != 0);
  }
  iVar3 = FUN_01062340(0,param_3,0,0);
  return iVar3 != 0;
}




// ============================================================
// @01b4d260 — 1030 bytes
// ============================================================

void FUN_01b4d260(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  float fVar9;
  float fVar11;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_38;
  char local_30;
  
  FUN_01cecec0(param_1,unaff_ESI);
  plVar1 = *(longlong **)(local_38 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  fVar9 = (float)FUN_01dcf710();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar8 + 0x27) = 0;
  puVar8[0x2e] = 0;
  *(undefined4 *)(puVar8 + 0x2f) = 0;
  puVar8[0x30] = 0;
  *(undefined1 *)(puVar8 + 0x31) = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  *(undefined4 *)(puVar8 + 0x2a) = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x199) = 0;
  puVar8[0x35] = 0;
  puVar8[0x36] = 0;
  puVar8[0x37] = 0;
  puVar8[0x38] = 0;
  *puVar8 = &DAT_0269c118;
  puVar8[2] = &DAT_0269cc70;
  puVar8[0x39] = &DAT_0269ccb0;
  puVar8[0x45] = 0;
  *(undefined2 *)(puVar8 + 0x46) = 0;
  puVar8[0x47] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  *(undefined4 *)(puVar8 + 0x3c) = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x205) = 0;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0xa8);
  if (puVar2 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa8) = puVar8;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  auVar6._8_8_ = in_XMM1_Qb;
  auVar6._0_8_ = param_2;
  uVar5 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  auVar10._4_4_ = fVar11;
  auVar10._0_4_ = fVar11 + DAT_02390124;
  auVar10._8_4_ = uVar5;
  auVar10._12_4_ = uVar5;
  auVar10 = insertps(auVar6,auVar10,0x10);
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4d0))(DAT_02390d00 + fVar9,auVar10._0_8_);
  lVar4 = DAT_027ebf00;
  plVar3 = *(longlong **)(unaff_RDI + 0xa8);
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0xa10))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar3 = *(longlong **)(unaff_RDI + 0xa8);
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x3a0))();
  lVar4 = DAT_027e47e0;
  plVar3 = *(longlong **)(unaff_RDI + 0xa8);
  if (DAT_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_027e47e8;
  if (DAT_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar7;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar3 + 0x968))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  local_60 = 0;
  lVar4 = *(longlong *)(unaff_RDI + 0xa8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar4;
  (**(code **)(*plVar1 + 0x450))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0xab8))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ab1b30 — 1009 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ab1e6c) */
/* WARNING: Removing unreachable block (ram,0x01ab1e79) */
/* WARNING: Removing unreachable block (ram,0x01ab1eab) */
/* WARNING: Removing unreachable block (ram,0x01ab1eb4) */
/* WARNING: Removing unreachable block (ram,0x01ab1ce2) */
/* WARNING: Removing unreachable block (ram,0x01ab1cee) */
/* WARNING: Removing unreachable block (ram,0x01ab1bc0) */
/* WARNING: Removing unreachable block (ram,0x01ab1bc9) */
/* WARNING: Removing unreachable block (ram,0x01ab1c2f) */
/* WARNING: Removing unreachable block (ram,0x01ab1c50) */
/* WARNING: Removing unreachable block (ram,0x01ab1c31) */
/* WARNING: Removing unreachable block (ram,0x01ab1c52) */

undefined8 * FUN_01ab1b30(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong *local_d8;
  undefined1 local_d0;
  code *local_c8;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  int local_68;
  undefined8 *local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*(longlong *)*param_2 + 1000))();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
      goto LAB_01ab1bce;
    }
  }
  else if (local_80 != 0) {
LAB_01ab1bce:
    local_68 = -1;
    local_c8 = DAT_02641270;
LAB_01ab1c2b:
    lVar6 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)(local_80 + 0xc) <= local_68) {
      FUN_00115910();
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      return unaff_RDI;
    }
    plVar1 = *(longlong **)(*(longlong *)(local_80 + 0x10) + 8 + lVar6 * 8);
    cVar2 = (**(code **)(*plVar1 + 0x3a0))();
    if (cVar2 == '\0') goto LAB_01ab1d20;
    goto LAB_01ab1c8e;
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
LAB_01ab1d20:
  cVar2 = (**(code **)(*plVar1 + 0x398))();
  if (cVar2 != '\0') {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (**(code **)(*plVar1 + 0x370))();
      if (local_88 == '\0') {
        if (local_90 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_40 = local_90;
      local_38 = '\0';
      cVar2 = FUN_00d23d70();
      if (local_90 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') goto LAB_01ab1c2b;
    }
LAB_01ab1c8e:
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02641258;
    *(undefined1 *)((longlong)puVar7 + 0xc) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    (*local_c8)();
    FUN_01aa3fc0();
    (**(code **)(*plVar1 + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01aa3f40();
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01ab2450();
    bVar4 = (**(code **)(*plVar1 + 0x3a0))();
    if ((bVar4 & bVar3) == 1) {
      local_d0 = 0;
      local_d8 = plVar1;
      FUN_01aafac0(extraout_XMM0_Da,&local_d8);
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01aa3f00();
    local_38 = '\0';
    FUN_00d21140();
    FUN_00d50b20();
    local_40 = puVar7;
  }
  goto LAB_01ab1c2b;
}




// ============================================================
// @0096761c — 922 bytes
// ============================================================

void FUN_0096761c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_50;
  uint local_48 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_68 = *(uint *)(unaff_RDI + 0xfc) ^ *unaff_RSI;
  uVar12 = *(uint *)(unaff_RDI + 0x100) ^ unaff_RSI[1];
  uVar13 = *(uint *)(unaff_RDI + 0x104) ^ unaff_RSI[2];
  uVar14 = *(uint *)(unaff_RDI + 0x108) ^ unaff_RSI[3];
  uVar7 = *(uint *)(unaff_RDI + 0x10c);
  local_50 = (ulonglong)local_68;
  uVar10 = (ulonglong)(byte)local_68;
  uStack_64 = uVar12;
  uStack_60 = uVar13;
  uStack_5c = uVar14;
  if (*(int *)(unaff_RDI + 4) < 2) {
    puVar8 = &local_68;
    puVar5 = local_48;
    uVar2 = 4;
  }
  else {
    iVar4 = 1;
    lVar11 = 0x47;
    puVar1 = local_48;
    puVar8 = &local_68;
    uVar9 = local_50;
    uVar2 = uVar12;
    uVar3 = uVar13;
    do {
      puVar5 = puVar8;
      puVar8 = puVar1;
      uVar6 = uVar7 ^ *(uint *)(&DAT_023c7a30 + uVar10 * 4) ^
              *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_023c8230 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_023c8630 + (ulonglong)(uVar2 >> 0x18) * 4);
      local_50 = (ulonglong)uVar6;
      *puVar8 = uVar6;
      uVar12 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar2 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -0xc + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)((uint)(uVar9 >> 8) & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (ulonglong)(uVar3 >> 0x18) * 4);
      puVar8[1] = uVar12;
      uVar13 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar3 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -8 + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)((uint)(uVar9 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (ulonglong)(uVar14 >> 0x18) * 4);
      puVar8[2] = uVar13;
      uVar14 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar14 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -4 + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (uVar9 >> 0x18) * 4);
      puVar8[3] = uVar14;
      iVar4 = iVar4 + 1;
      uVar7 = *(uint *)(unaff_RDI + lVar11 * 4);
      uVar10 = (ulonglong)(uVar6 & 0xff);
      lVar11 = lVar11 + 4;
      puVar1 = puVar5;
      uVar9 = local_50;
      uVar2 = uVar12;
      uVar3 = uVar13;
    } while (iVar4 < *(int *)(unaff_RDI + 4));
    uVar10 = (ulonglong)(uVar6 & 0xff);
    uVar2 = (int)lVar11 - 0x43;
  }
  *puVar5 = (uint)(byte)(&DAT_023c8a30)[uVar12 >> 0x18] << 0x18 ^
            (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar13 >> 0x10) & 0xff] << 0x10 ^
            (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar14 >> 8) & 0xff] << 8 ^
            (byte)(&DAT_023c8a30)[uVar10] ^ uVar7;
  puVar5[1] = (uint)(byte)(&DAT_023c8a30)[uVar13 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar14 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[local_50 >> 8 & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar12 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 1) * 4);
  puVar5[2] = (uint)(byte)(&DAT_023c8a30)[uVar14 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[local_50 >> 0x10 & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar13 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 2) * 4);
  puVar5[3] = (uint)(byte)(&DAT_023c8a30)[local_50 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar12 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar13 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar14 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 3) * 4);
  lVar11 = 0;
  do {
    unaff_RSI[lVar11] = puVar5[lVar11];
    puVar5[lVar11] = 0;
    puVar8[lVar11] = 0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @01aa8960 — 908 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aa8c3a) */
/* WARNING: Removing unreachable block (ram,0x01aa8c43) */
/* WARNING: Removing unreachable block (ram,0x01aa8bca) */
/* WARNING: Removing unreachable block (ram,0x01aa8bd6) */
/* WARNING: Removing unreachable block (ram,0x01aa8a41) */
/* WARNING: Removing unreachable block (ram,0x01aa8a4a) */
/* WARNING: Removing unreachable block (ram,0x01aa89d5) */
/* WARNING: Removing unreachable block (ram,0x01aa89de) */
/* WARNING: Removing unreachable block (ram,0x01aa8ab7) */
/* WARNING: Removing unreachable block (ram,0x01aa8ac0) */
/* WARNING: Removing unreachable block (ram,0x01aa8c91) */
/* WARNING: Removing unreachable block (ram,0x01aa8c9a) */

longlong * FUN_01aa8960(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01aa8ac5;
    }
  }
  else if (local_68 != 0) {
LAB_01aa8ac5:
    if (0 < *(int *)(local_68 + 0xc)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar3 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            goto LAB_01aa8be0;
          }
        }
        else if (local_98 != 0) {
LAB_01aa8be0:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd9a0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef3f0();
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    *unaff_RDI = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x01aa8cfb;
  }
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x01aa8cfb:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01aa9200 — 904 bytes
// ============================================================

void FUN_01aa9200(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
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
  undefined4 local_34;
  
  if ((((*unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 0x20) != 0)) &&
      (*(longlong *)(unaff_RDI + 0x40) != 0)) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
    local_90 = param_1;
    local_34 = param_2;
    uVar4 = FUN_00cafd20();
    local_b0 = *unaff_RSI;
    local_a8 = 0;
    FUN_01aa8960(uVar4,&local_b0);
    lVar1 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01aa8f10();
    lVar2 = local_48;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = lVar1;
    local_80 = '\0';
    FUN_012e6a70();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a580(local_34);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012642b0(local_90);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = '\0';
    local_78 = 0;
    uVar4 = FUN_01270710();
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x90) != 0) {
      local_a0 = *unaff_RSI;
      local_98 = 0;
      FUN_01aa8960(uVar4,&local_a0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = local_48;
      local_60 = '\0';
      FUN_012e6a70();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a580(local_34);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012642b0(local_90);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = '\0';
      local_58 = 0;
      FUN_01270710();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01b4c2c0 — 886 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b4c2c0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar6 = &local_40;
  FUN_01ceb020();
  plVar1 = local_40;
  if ((DAT_02737920 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b4c31a:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b4c31a;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
  plVar7 = local_40;
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01b4c46b;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01b4c46b;
  uVar5 = FUN_00d95590();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  FUN_00d97f20(uVar5,&local_60);
  plVar8 = local_40;
  plVar9 = plVar7;
  if (plVar7 == local_40) {
joined_r0x01b4c410:
    plVar8 = plVar9;
    if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar9 = plVar8;
      plVar7 = local_40;
      goto joined_r0x01b4c410;
    }
    FUN_00d50b20();
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01b4c46b:
  plVar7 = *(longlong **)(unaff_RDI + 0xb8);
  if ((plVar8 == (longlong *)0x0) || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) {
    bVar2 = false;
    uVar5 = 0;
  }
  else if (plVar1 == (longlong *)0x0) {
    uVar5 = 1;
    bVar2 = false;
  }
  else {
    FUN_01aa3f90();
    uVar5 = (**(code **)(*local_40 + 0x3a0))();
    bVar2 = true;
  }
  (**(code **)(*plVar7 + 0x998))(uVar5);
  if (((bVar2) && (local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0xb0);
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_01aa3f90();
    plVar9 = local_50;
    if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = *(longlong **)(unaff_RDI + 0xb0);
    (**(code **)(*plVar9 + 0x3a0))();
  }
  (**(code **)(*plVar7 + 0x998))();
  if ((plVar1 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b4cd30 — 799 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b4ce4d) */
/* WARNING: Removing unreachable block (ram,0x01b4ce56) */

ulonglong FUN_01b4cd30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (cVar3 != '\0') {
    plVar1 = (longlong *)*unaff_RDI;
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    uVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar6 = (ulonglong)uVar4;
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != '\0') {
      if (local_88 != 0) {
        FUN_00d50b20();
        return uVar6;
      }
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 1000))();
    if (local_80 == '\0') {
      if (local_88 == 0) {
        return 0;
      }
      FUN_00d50b00();
    }
    else if (local_88 == 0) {
      return 0;
    }
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar7 * 8);
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 == '\0') {
          (**(code **)(*plVar1 + 0x370))();
          FUN_017a9f30();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          cVar3 = (**(code **)(*local_40 + 0x50))();
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_01b4cf91;
        }
        else {
LAB_01b4cf91:
          plVar2 = (longlong *)*unaff_RDI;
          (**(code **)(*plVar1 + 0x390))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          uVar5 = (**(code **)(*plVar2 + 0x50))();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar5 != '\0') {
            FUN_00115910();
            FUN_00d50b20();
            return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  return 0;
}




// ============================================================
// @01ce9490 — 728 bytes
// ============================================================

undefined8 * FUN_01ce9490(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_78;
  char local_70;
  longlong local_48;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(unaff_RSI + 0x150);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    lVar7 = 0;
    bVar1 = false;
    local_48 = 0;
  }
  else {
    lVar8 = 0;
    local_48 = 0;
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
      if (local_48 == lVar6) {
        if ((!bVar1) && (local_48 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          local_48 = lVar6;
        }
        else {
          bVar1 = true;
          local_48 = lVar6;
        }
      }
      iVar4 = FUN_01dd4c80();
      if (iVar4 != -1) {
        lVar6 = *(longlong *)(local_48 + 0x20);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_01ce41d0();
        if (local_78 == lVar7) {
          lVar9 = lVar7;
          bVar3 = bVar2;
          if ((!bVar2) && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_01ce9654;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_01ce96a5:
          lVar7 = lVar9;
          bVar2 = bVar3;
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_78;
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01ce96a5;
          }
          lVar9 = local_78;
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01ce9654:
          local_70 = '\0';
          lVar7 = lVar9;
          bVar2 = true;
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 < *(int *)(lVar7 + 0xc)) {
          lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar4 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(longlong *)(unaff_RSI + 0x150);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01aa85c0 — 722 bytes
// ============================================================

void FUN_01aa85c0(undefined8 param_1)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t in_ECX;
  longlong *plVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  if ((((*(longlong *)(unaff_RSI + 0x50) == 0) || (*(longlong *)(unaff_RSI + 0x20) == 0)) ||
      (*(longlong *)(unaff_RSI + 0x40) == 0)) || (*(longlong *)(unaff_RSI + 0x10) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_70 = param_1;
    uVar4 = FUN_00cafd20();
    lVar2 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_78 = 1;
    local_80 = lVar2;
    FUN_01aa8960(uVar4,&local_80);
    local_38 = local_68;
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01aa8f10();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = local_38;
    local_50 = '\0';
    FUN_012e6a70();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (pthread_key_t)local_38;
    }
    plVar3 = *(longlong **)(unaff_RSI + 0x40);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      plVar3 = *(longlong **)(unaff_RSI + 0x40);
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar3 + 0x3a0))();
    FUN_0125a580();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (pthread_key_t)local_38;
    }
    FUN_0126dbb0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      in_ECX = (pthread_key_t)local_38;
    }
    FUN_012642b0(local_70);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = '\0';
    local_48 = 0;
    FUN_01270710();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x3c8))();
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}




// ============================================================
// @01b4c850 — 632 bytes
// ============================================================

void FUN_01b4c850(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  plVar1 = *(longlong **)(unaff_RDI + 0xd0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xd8);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xe0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xe8);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xf0);
  FUN_00d8ede0();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01aa6890 — 602 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aa68ea) */
/* WARNING: Removing unreachable block (ram,0x01aa68f6) */
/* WARNING: Removing unreachable block (ram,0x01aa6a80) */
/* WARNING: Removing unreachable block (ram,0x01aa6a89) */

void FUN_01aa6890(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *unaff_RDI;
  undefined4 uVar2;
  undefined8 unaff_R13;
  longlong lVar3;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[5] == 0) {
    return;
  }
  FUN_017a57b0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_017a7c70();
  lVar3 = local_40;
  if (local_40 == 0) {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    lVar3 = 0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar2 = 0;
      if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01aa6977;
      FUN_00d50b20();
    }
    uVar2 = 0;
  }
LAB_01aa6977:
  FUN_00d50b20();
  if (lVar3 != 0) {
    local_48 = uVar2;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    uVar2 = local_48;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (longlong *)0x0;
    local_70 = '\0';
    local_68 = (longlong *)0x0;
    local_60 = '\0';
    FUN_012cc0c0(&local_68,&local_78,1,0);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = '\0';
    local_58 = lVar3;
    (**(code **)(*unaff_RDI + 0x370))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01aa8f10 — 550 bytes
// ============================================================

void FUN_01aa8f10(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_30[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01aa4330 — 541 bytes
// str: ""MUScaleBrowserItem""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01aa4330(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  plVar7 = (longlong *)*unaff_RSI;
  uVar9 = (undefined7)((ulonglong)plVar7 >> 8);
  if (plVar7 == unaff_RDI) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_01aa4492;
  }
  if ((DAT_02737920 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_01aa4388:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01aa4388;
  }
  if (*plVar7 == 0) {
    uVar8 = 0;
  }
  else {
    lVar1 = unaff_RDI[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(*unaff_RSI + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar2) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else if (unaff_RDI[3] == 0) {
      uVar8 = 0;
    }
    else {
      FUN_00d50b00();
      if (*(longlong *)(*unaff_RSI + 0x18) == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b00();
        plVar7 = (longlong *)unaff_RDI[3];
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*unaff_RSI + 0x18);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar5 = (**(code **)(*plVar7 + 0x50))();
        uVar8 = (ulonglong)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01aa4492:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @01ab2150 — 513 bytes
// ============================================================

undefined8 FUN_01ab2150(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_88;
  undefined1 local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    return 0;
  }
  FUN_01aa3f90();
  plVar6 = local_58;
  if ((local_50 == '\0') &&
     (((local_58 != (longlong *)0x0 && (FUN_00d50b00(), local_50 != '\0')) &&
      (local_58 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar6 + 0x3a0))();
  if (cVar3 != '\0') {
    local_88 = plVar6;
    local_80 = 0;
    FUN_01ab2a40(param_1,&local_88);
    plVar2 = local_58;
    if (plVar6 == local_58) {
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
      plVar6 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
    }
    cVar3 = FUN_00ce6e30();
    if (cVar3 == '\0') {
      FUN_00d50b20();
      return 0;
    }
  }
  cVar3 = (**(code **)(*plVar6 + 0x398))();
  if (((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar6 + 0x3a0))(), cVar3 == '\0')) ||
     ((cVar3 = FUN_00ce6e30(), cVar3 == '\0' || (lVar1 = *param_2, lVar1 == 0)))) {
LAB_01ab2338:
    uVar5 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar7 = 0;
    local_48 = lVar1;
    do {
      local_40 = (int)lVar7;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01b53440();
        goto LAB_01ab2338;
      }
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
      FUN_01aa3f90();
      local_60 = '\0';
      local_68 = plVar6;
      uVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while ((char)uVar4 == '\0');
    FUN_01b53440();
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  }
  FUN_00d50b20();
  return uVar5;
}




// ============================================================
// @01aa7bc0 — 507 bytes
// ============================================================

void FUN_01aa7bc0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  
  if (*(longlong **)(unaff_RDI + 0x18) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x390))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x5e8))();
      if (cVar3 != '\0') {
        plVar1 = *(longlong **)(unaff_RDI + 0x18);
        FUN_0141cb10();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        (**(code **)(*plVar1 + 0x690))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x698))();
      }
      plVar1 = *(longlong **)(unaff_RDI + 0x28);
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x128))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0x10);
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      *(undefined8 *)(unaff_RDI + 0x20) = 0;
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x468))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x470))();
    FUN_00d50130();
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      *(undefined8 *)(unaff_RDI + 0x10) = 0;
      FUN_00d50b20();
    }
  }
  return;
}



