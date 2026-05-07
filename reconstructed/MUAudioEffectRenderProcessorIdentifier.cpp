// Reconstructed implementation of MUAudioEffectRenderProcessorIdentifier
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAudioEffectRenderProcessorIdentifier.h"

// ============================================================
// @0123b3d0 — 1658 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0123b8ad) */
/* WARNING: Removing unreachable block (ram,0x0123b8bd) */
/* WARNING: Removing unreachable block (ram,0x0123b813) */
/* WARNING: Removing unreachable block (ram,0x0123b81f) */

void FUN_0123b3d0(longlong *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  float local_70;
  float local_6c;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  local_94 = param_4;
  cVar3 = FUN_0124d450();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*unaff_RDI + 0x498))();
    if (cVar3 == '\0') {
      if ((*unaff_RSI != 0) && (FUN_0123b2a0(), lVar5 = local_68, local_68 != 0)) {
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
        if (unaff_RDI[0xd] != lVar5) {
          FUN_00d64850();
          lVar9 = unaff_RDI[0xd];
          if (lVar9 != lVar5) {
            FUN_00d50b00();
            unaff_RDI[0xd] = lVar5;
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        (**(code **)(*unaff_RDI + 0x478))();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        FUN_00b810f0();
        lVar5 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_0123b010();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      FUN_00b810f0();
      lVar5 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_0123b010();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_0124d450();
  if (((cVar3 != '\0') && (param_3 != '\0')) && (local_58 = unaff_RDI[7], local_58 != 0)) {
    local_60 = 0;
    local_68 = 0;
    local_50._0_4_ = -1;
    local_50._4_4_ = 0;
    local_48 = 0;
    iVar11 = 0;
    while( true ) {
      lVar5 = (longlong)(int)local_50;
      local_50._0_4_ = (int)local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= (int)local_50) break;
      local_68 = *(undefined8 *)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar4 = FUN_01397570();
      iVar11 = iVar11 + (uint)bVar4;
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 0) {
          local_50._4_4_ = -local_50._4_4_;
        }
        else {
          local_50._0_4_ = (int)local_50 - local_50._4_4_;
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          local_50._4_4_ = 0;
        }
      }
    }
    FUN_00115190();
    if (iVar11 == 0) {
      local_6c = 0.0;
      lVar5 = unaff_RDI[7];
    }
    else {
      local_6c = DAT_02390124 / (float)iVar11;
      lVar5 = unaff_RDI[7];
    }
    if (lVar5 != 0) {
      local_60 = 0;
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      uVar2 = lVar5;
      if (0 < *(int *)(lVar5 + 0xc)) {
        local_70 = 0.0;
        lVar9 = 0;
        uVar8 = local_58;
        local_58 = lVar5;
        do {
          local_68 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
          pVar7 = (pthread_key_t)uVar8;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if ((cVar3 == '\0') || (*param_1 == 0)) {
            plVar10 = (longlong *)0x0;
            bVar1 = false;
          }
          else {
            FUN_00df4f00(local_70,local_6c + local_70);
            plVar10 = (longlong *)(local_40 + 0x10);
            if (local_40 == 0) {
              bVar1 = false;
              plVar10 = (longlong *)0x0;
            }
            else if (local_38 == '\0') {
              (**(code **)(*plVar10 + 0x10))();
              FUN_00d50b00();
              bVar1 = true;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
              bVar1 = true;
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a0 = '\0';
          uVar8 = (ulonglong)(byte)local_94;
          local_a8 = plVar10;
          FUN_01397bb0(uVar8,&local_a8);
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            (**(code **)(*local_a8 + 0x10))();
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_70 = local_70 + local_6c;
          }
          if ((bVar1) && (plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x10))();
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
          uVar2 = local_58;
        } while ((int)lVar9 < *(int *)(lVar5 + 0xc));
      }
      local_58 = uVar2;
      FUN_00115190();
    }
  }
  return;
}




// ============================================================
// @012380b0 — 1377 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01238389) */
/* WARNING: Removing unreachable block (ram,0x01238395) */
/* WARNING: Removing unreachable block (ram,0x01238336) */
/* WARNING: Removing unreachable block (ram,0x01238342) */
/* WARNING: Removing unreachable block (ram,0x01238221) */
/* WARNING: Removing unreachable block (ram,0x0123822d) */
/* WARNING: Removing unreachable block (ram,0x0123825d) */
/* WARNING: Removing unreachable block (ram,0x0123826e) */
/* WARNING: Removing unreachable block (ram,0x01238350) */
/* WARNING: Removing unreachable block (ram,0x0123835c) */
/* WARNING: Removing unreachable block (ram,0x012384af) */
/* WARNING: Removing unreachable block (ram,0x012384b8) */

void FUN_012380b0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong *local_58;
  longlong *local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) goto LAB_0123860e;
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x5c0))();
  plVar1 = local_40;
  local_50 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0123811e;
    }
LAB_01238180:
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x370))();
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01238180;
LAB_0123811e:
    FUN_00d50b00();
    FUN_012364a0();
    plVar2 = local_40;
    if (plVar1 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar2;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_50 = plVar2;
    }
    FUN_00d50b20();
    (**(code **)(*DAT_028ac258 + 0x368))();
    FUN_01237080();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (plVar1 == (longlong *)0x0) {
      FUN_01238a00();
      local_58 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_58 = plVar1;
      }
      else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
              (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01238aa0();
      FUN_00d21140();
    }
    else {
      FUN_00d24140();
      local_58 = plVar1;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x388))();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    FUN_00e323f0();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (0x1e0 < *(int *)(DAT_028ac248 + 0xc)) {
LAB_01238434:
      FUN_00d23310();
      plVar1 = local_40;
      local_48[0] = local_38[0];
      pcVar4 = local_38;
      if (local_38[0] == '\0') {
        pcVar4 = local_48;
      }
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] == '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01237080();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      do {
        FUN_01237130();
        plVar3 = local_40;
        if (local_38[0] == '\0') {
          if (local_40 == (longlong *)0x0) goto LAB_01238530;
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_40 == (longlong *)0x0) goto LAB_01238530;
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      } while( true );
    }
LAB_012385c2:
    (**(code **)(*DAT_028ac258 + 0x378))();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xf8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xf8) = 0;
    FUN_00d50b20();
  }
LAB_0123860e:
  FUN_00b342a0();
  return;
LAB_01238530:
  local_38[0] = '\0';
  local_40 = plVar1;
  FUN_00e383c0();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23620();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(int *)(DAT_028ac248 + 0xc) < 0x1e1) goto LAB_012385c2;
  goto LAB_01238434;
}




// ============================================================
// @0123e220 — 1258 bytes
// ============================================================

void FUN_0123e220(void)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong unaff_RSI;
  longlong *plVar8;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0xb0) != 0) goto LAB_0123e6cd;
  plVar8 = *(longlong **)(unaff_RSI + 0xa0);
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar8;
  FUN_00d23310();
  plVar8 = local_48;
  local_38[0] = local_40[0];
  pcVar7 = local_38;
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = pcVar7;
  }
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar6 = (pthread_key_t)pcVar7;
  if (local_38[0] == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0123e2c2;
    }
  }
  else if (plVar8 != (longlong *)0x0) {
LAB_0123e2c2:
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x378))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        local_58 = local_48;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0123e341;
      }
    }
    else {
      local_58 = local_48;
      if (local_48 != (longlong *)0x0) {
LAB_0123e341:
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013941c0();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            local_68 = local_48;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0123e3bb;
          }
        }
        else {
          local_68 = local_48;
          if (local_48 != (longlong *)0x0) {
LAB_0123e3bb:
            lVar4 = DAT_02704060;
            if (DAT_02704060 != 0) {
              FUN_00d50b00();
            }
            local_a8 = lVar4;
            local_a0 = '\x01';
            FUN_00d91000(1,&local_a8);
            local_60 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != (longlong *)0x0) {
              if (1 < *(int *)((longlong)local_60 + 0xc)) {
                FUN_00d23310();
                plVar8 = local_48;
                pcVar7 = local_40;
                if (local_40[0] == '\0') {
                  pcVar7 = local_38;
                }
                local_38[0] = local_40[0];
                *pcVar7 = '\0';
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_98 = local_68;
                local_90 = '\0';
                cVar1 = (**(code **)(*plVar8 + 0x50))();
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_38[0] != '\0') {
                  FUN_00d50b20();
                }
                plVar8 = local_60;
                if (cVar1 == '\0') {
                  FUN_00d23620();
                  local_48 = local_68;
                  local_40[0] = '\0';
                  FUN_00d23370();
                  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar4 = DAT_02704060;
                  local_88 = plVar8;
                  local_80 = '\0';
                  if (DAT_02704060 != 0) {
                    FUN_00d50b00();
                  }
                  local_78 = lVar4;
                  local_70 = '\x01';
                  FUN_00d95130();
                  plVar8 = local_48;
                  if (local_50 == local_48) {
LAB_0123e5c1:
                    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_40[0] == '\0') {
                      if (local_48 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      if (local_50 == (longlong *)0x0) {
                        local_50 = plVar8;
                      }
                      else {
                        local_50 = plVar8;
                        FUN_00d50b20();
                      }
                      goto LAB_0123e5c1;
                    }
                    if (local_50 != (longlong *)0x0) {
                      local_50 = local_48;
                      FUN_00d50b20();
                    }
                    local_40[0] = '\0';
                    local_50 = plVar8;
                  }
                  if ((local_70 != '\0') && (local_78 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_0123c8b0();
  plVar8 = *(longlong **)(unaff_RSI + 0xb0);
  plVar5 = plVar8;
  if (plVar8 != local_48) {
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0123e664;
      }
      FUN_00d50b00();
      plVar8 = *(longlong **)(unaff_RSI + 0xb0);
      *(longlong **)(unaff_RSI + 0xb0) = local_48;
      plVar5 = local_48;
    }
    else {
      local_40[0] = '\0';
      plVar5 = local_48;
LAB_0123e664:
      *(longlong **)(unaff_RSI + 0xb0) = plVar5;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_48;
    }
  }
  if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0123e6cd:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = *(longlong *)(unaff_RSI + 0xb0);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0123cbf0 — 1200 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0123cd72) */
/* WARNING: Removing unreachable block (ram,0x0123cd7e) */
/* WARNING: Removing unreachable block (ram,0x0123cf47) */
/* WARNING: Removing unreachable block (ram,0x0123d047) */
/* WARNING: Removing unreachable block (ram,0x0123d054) */
/* WARNING: Removing unreachable block (ram,0x0123ce65) */
/* WARNING: Removing unreachable block (ram,0x0123ce72) */
/* WARNING: Removing unreachable block (ram,0x0123ccce) */
/* WARNING: Removing unreachable block (ram,0x0123ccd7) */
/* WARNING: Removing unreachable block (ram,0x0123cd58) */
/* WARNING: Removing unreachable block (ram,0x0123cd64) */
/* WARNING: Removing unreachable block (ram,0x0123ce8c) */
/* WARNING: Removing unreachable block (ram,0x0123ce95) */
/* WARNING: Removing unreachable block (ram,0x0123cf3b) */
/* WARNING: Removing unreachable block (ram,0x0123cf58) */
/* WARNING: Removing unreachable block (ram,0x0123cf64) */

undefined8 * FUN_0123cbf0(pthread_key_t param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar6;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar5 + 0x380))();
  plVar5 = (longlong *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar5 + 0x370))();
  (**(code **)(*unaff_RSI + 0x478))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (param_3 != '\0') {
    FUN_00b82410(uVar6,10,0x44,0);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_40 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    unaff_RSI[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    unaff_RSI[0xf] = lVar4;
    FUN_00d64910();
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_40 == (longlong *)0x0) {
      return unaff_RDI;
    }
    goto LAB_0123d082;
  }
  (**(code **)(*local_40 + 0x3f0))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0123cec7;
    FUN_00d50b00();
LAB_0123cea1:
    cVar2 = (**(code **)(*local_40 + 0x3a0))();
    if (cVar2 == '\0') {
      (**(code **)(*local_40 + 0x420))();
    }
    bVar1 = false;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_0123cea1;
LAB_0123cec7:
    bVar1 = true;
  }
  FUN_00b82410(uVar6,5,0x44,0);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00b7c570();
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    unaff_RSI[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    unaff_RSI[0xf] = lVar4;
    FUN_00d64910();
    FUN_00b79950();
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_0123d082:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @0123dab0 — 1069 bytes
// ============================================================

void FUN_0123dab0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *unaff_RDI;
  undefined8 uVar3;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar1 = FUN_0124d450();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*unaff_RDI + 0x498))(), cVar1 != '\0')) {
    (**(code **)(*unaff_RDI + 0x478))();
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      (**(code **)(*local_c8 + 0x370))();
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        (**(code **)(*unaff_RDI + 0x478))();
        (**(code **)(*local_a8 + 0x370))();
        FUN_00b7e000();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        cVar1 = (**(code **)(*local_b8 + 0x50))();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      (**(code **)(*unaff_RDI + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00b810f0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      uVar2 = (**(code **)(*unaff_RDI + 0x380))();
      uVar3 = (**(code **)(*unaff_RDI + 0x370))();
      (**(code **)(*unaff_RDI + 0x378))();
      FUN_00b80910(uVar3,uVar2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*param_1 + 0x18))(DAT_02390124);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01239760 — 942 bytes
// str: ""MUAudioEffectRenderProcessorIdentifier""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01239760(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025ccb30;
  FUN_01239b60();
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_027be160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027be0b0 = FUN_00d4fe50();
      _DAT_027be098 = "MUAudioEffectRenderProcessorIdentifier";
      _DAT_027be0a0 = 0x30;
      _DAT_027be0a8 = FUN_01239210;
      _DAT_027be0b8 = 0;
      uRam00000000027be0c0 = 0;
      _DAT_027be0c8 = 0;
      uRam00000000027be0d0 = 0;
      _DAT_027be0d8 = 0;
      uRam00000000027be0e0 = 0;
      _DAT_027be0e8 = 0;
      uRam00000000027be0f0 = 0;
      _DAT_027be0f8 = 0;
      uRam00000000027be100 = 0;
      _DAT_027be108 = 0;
      uRam00000000027be110 = 0;
      _DAT_027be118 = 0;
      uRam00000000027be120 = 0;
      _DAT_027be128 = 0;
      uRam00000000027be130 = 0;
      _DAT_027be138 = 0;
      uRam00000000027be140 = 0;
      _DAT_027be148 = 0;
      _uRam00000000027be150 = 0;
      _DAT_027be158 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027be153 == '\0') {
    FUN_01239de0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_027be160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027be0b0 = FUN_00d4fe50();
      _DAT_027be098 = "MUAudioEffectRenderProcessorIdentifier";
      _DAT_027be0a0 = 0x30;
      _DAT_027be0a8 = FUN_01239210;
      _DAT_027be0b8 = 0;
      uRam00000000027be0c0 = 0;
      _DAT_027be0c8 = 0;
      uRam00000000027be0d0 = 0;
      _DAT_027be0d8 = 0;
      uRam00000000027be0e0 = 0;
      _DAT_027be0e8 = 0;
      uRam00000000027be0f0 = 0;
      _DAT_027be0f8 = 0;
      uRam00000000027be100 = 0;
      _DAT_027be108 = 0;
      uRam00000000027be110 = 0;
      _DAT_027be118 = 0;
      uRam00000000027be120 = 0;
      _DAT_027be128 = 0;
      uRam00000000027be130 = 0;
      _DAT_027be138 = 0;
      uRam00000000027be140 = 0;
      _DAT_027be148 = 0;
      _uRam00000000027be150 = 0;
      _DAT_027be158 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027be153 == '\0') {
    FUN_01239f50();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_027be160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027be0b0 = FUN_00d4fe50();
      _DAT_027be098 = "MUAudioEffectRenderProcessorIdentifier";
      _DAT_027be0a0 = 0x30;
      _DAT_027be0a8 = FUN_01239210;
      _DAT_027be0b8 = 0;
      uRam00000000027be0c0 = 0;
      _DAT_027be0c8 = 0;
      uRam00000000027be0d0 = 0;
      _DAT_027be0d8 = 0;
      uRam00000000027be0e0 = 0;
      _DAT_027be0e8 = 0;
      uRam00000000027be0f0 = 0;
      _DAT_027be0f8 = 0;
      uRam00000000027be100 = 0;
      _DAT_027be108 = 0;
      uRam00000000027be110 = 0;
      _DAT_027be118 = 0;
      uRam00000000027be120 = 0;
      _DAT_027be128 = 0;
      uRam00000000027be130 = 0;
      _DAT_027be138 = 0;
      uRam00000000027be140 = 0;
      _DAT_027be148 = 0;
      _uRam00000000027be150 = 0;
      _DAT_027be158 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027be153 == '\0') {
    FUN_0123a0c0();
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  if (DAT_027be160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027be0b0 = FUN_00d4fe50();
      _DAT_027be098 = "MUAudioEffectRenderProcessorIdentifier";
      _DAT_027be0a0 = 0x30;
      _DAT_027be0a8 = FUN_01239210;
      _DAT_027be0b8 = 0;
      uRam00000000027be0c0 = 0;
      _DAT_027be0c8 = 0;
      uRam00000000027be0d0 = 0;
      _DAT_027be0d8 = 0;
      uRam00000000027be0e0 = 0;
      _DAT_027be0e8 = 0;
      uRam00000000027be0f0 = 0;
      _DAT_027be0f8 = 0;
      uRam00000000027be100 = 0;
      _DAT_027be108 = 0;
      uRam00000000027be110 = 0;
      _DAT_027be118 = 0;
      uRam00000000027be120 = 0;
      _DAT_027be128 = 0;
      uRam00000000027be130 = 0;
      _DAT_027be138 = 0;
      uRam00000000027be140 = 0;
      _DAT_027be148 = 0;
      _uRam00000000027be150 = 0;
      _DAT_027be158 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027be153 == '\0') {
    FUN_0123a230();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0123a4e0 — 932 bytes
// str: ""%@.m4a""
// ============================================================

void FUN_0123a4e0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if ((char)uVar2 == '\0') {
    uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
    plVar4 = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)*unaff_RSI;
    if (plVar4 == (longlong *)0x0) {
      local_58 = 0;
      plVar4 = (longlong *)0x0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(char *)(unaff_RSI + 1));
      if (*(char *)(unaff_RSI + 1) != '\0') {
        FUN_00d50b00();
      }
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x388))();
  plVar3 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = plVar3;
  local_c0 = plVar3;
  local_b8 = '\0';
  (**(code **)(*plVar4 + 0x400))(param_1,&local_c0);
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*plVar3 + 0x398))();
  if (cVar1 == '\0') {
LAB_0123a660:
    (**(code **)(*(longlong *)*param_2 + 0x390))();
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_d0;
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    local_68 = local_80;
    local_60 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
    plVar4 = local_90;
    if (plVar3 == local_90) {
LAB_0123a772:
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar3 = plVar4;
        goto LAB_0123a772;
      }
      FUN_00d50b20();
      local_88 = '\0';
      plVar3 = local_90;
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 != '\0') {
      local_98 = '\0';
      local_a0 = plVar3;
      cVar1 = FUN_00b80190();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') goto LAB_0123a82d;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    local_b0 = plVar3;
    local_a8 = '\0';
    cVar1 = FUN_00b80190();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_0123a660;
LAB_0123a82d:
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01237b00 — 873 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01237be1) */
/* WARNING: Removing unreachable block (ram,0x01237c05) */
/* WARNING: Removing unreachable block (ram,0x01237c0a) */
/* WARNING: Removing unreachable block (ram,0x01237c12) */
/* WARNING: Removing unreachable block (ram,0x01237be5) */
/* WARNING: Removing unreachable block (ram,0x01237c6a) */
/* WARNING: Removing unreachable block (ram,0x01237c73) */
/* WARNING: Removing unreachable block (ram,0x01237b99) */
/* WARNING: Removing unreachable block (ram,0x01237ba2) */
/* WARNING: Removing unreachable block (ram,0x01237b50) */
/* WARNING: Removing unreachable block (ram,0x01237b59) */
/* WARNING: Removing unreachable block (ram,0x01237cd0) */
/* WARNING: Removing unreachable block (ram,0x01237cd9) */

void FUN_01237b00(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00b341c0();
  FUN_01237550();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*local_40 + 0x5c0))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01237d53;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01237d53;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_012364a0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028ac258 + 0x368))();
  FUN_01237080();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01237130();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    plVar3 = plVar1;
    if (plVar1 != local_40) {
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
          goto LAB_01237ca8;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xf8);
        *(longlong **)(unaff_RDI + 0xf8) = local_40;
      }
      else {
        local_38 = '\0';
LAB_01237ca8:
        *(longlong **)(unaff_RDI + 0xf8) = plVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar3 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*DAT_028ac258 + 0x378))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01237d53:
  if (*(longlong *)(unaff_RDI + 0xf8) == 0) {
    FUN_00d51d20();
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          *(undefined8 *)(unaff_RDI + 0xf8) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(longlong **)(unaff_RDI + 0xf8);
          *(longlong **)(unaff_RDI + 0xf8) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(longlong **)(unaff_RDI + 0xf8) = local_40;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(unaff_RDI + 0xf8);
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    uVar2 = FUN_00b32020();
    *(undefined4 *)(unaff_RDI + 0xf0) = uVar2;
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x368))();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @0123ac80 — 636 bytes
// ============================================================

void FUN_0123ac80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  
  pVar4 = (pthread_key_t)param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00115cd0();
  *puVar1 = &DAT_025ccea8;
  puVar1[0x13] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*unaff_RSI + 0x478))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar5[0xd] != local_48) {
    FUN_00d64850();
    lVar3 = puVar5[0xd];
    if (lVar3 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar5[0xd] = local_48;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  lVar3 = unaff_RSI[0xe];
  FUN_00d64850();
  puVar5[0xe] = lVar3 + param_2;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar5[0xf] = param_1;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = unaff_RSI[0x11];
  }
  else {
    lVar3 = unaff_RSI[0x11];
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_0123b010();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0123d700 — 520 bytes
// ============================================================

void FUN_0123d700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong local_50;
  char local_48;
  
  lVar3 = param_1;
  local_68 = param_3;
  plVar1 = (longlong *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)lVar3;
  FUN_0123f100();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123c760();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (plVar6[0x14] != local_50) {
    FUN_00d64850();
    lVar3 = plVar6[0x14];
    if (lVar3 != local_50) {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      plVar6[0x14] = local_50;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar6[0x16] != 0) {
      plVar6[0x16] = 0;
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *unaff_RSI;
  local_70 = 0;
  uVar5 = local_68;
  FUN_0123cbf0(local_68,&local_78,param_4);
  pVar4 = (pthread_key_t)uVar5;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  plVar6[0x13] = param_1;
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



