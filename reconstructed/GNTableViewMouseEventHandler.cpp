// Reconstructed implementation of GNTableViewMouseEventHandler
// From MikeCore binary — reverse-engineered pseudocode

#include "GNTableViewMouseEventHandler.h"

// ============================================================
// @01dcb680 — 1555 bytes
// ============================================================

void FUN_01dcb680(void)

{
  float fVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  longlong local_80;
  char local_78;
  float local_68;
  float local_64;
  undefined8 extraout_XMM0_Qb;
  
  if (*(int *)(unaff_RDI[0x2c] + 0xc) != 0) {
    (**(code **)(*unaff_RDI + 0x7b0))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      *(int *)(unaff_RDI + 0x50) = (int)unaff_RDI[0x50] + 1;
      (**(code **)(*unaff_RDI + 0x7b0))();
      FUN_01e3f820();
      auVar13 = in_XMM1;
      FUN_01e3f820();
      auVar12 = blendps(in_XMM1,auVar13,2);
      (**(code **)(*unaff_RDI + 0x4e8))(auVar12._0_8_);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_025683c0;
      pcVar2 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*pcVar2)();
      FUN_00c92170();
      lVar5 = unaff_RDI[0x2c];
      fVar1 = auVar13._0_4_;
      if (0 < *(int *)(lVar5 + 0xc)) {
        local_64 = 0.0;
        lVar8 = 0;
        local_68 = 0.0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          fVar9 = (float)(**(code **)(*unaff_RDI + 0x960))();
          fVar10 = (float)(**(code **)(*unaff_RDI + 0x968))();
          fVar11 = (float)FUN_01db9a50();
          if (fVar11 < fVar9) {
            FUN_01db96b0();
          }
          fVar11 = (float)FUN_01db9a50();
          if (fVar10 < fVar11) {
            FUN_01db96b0();
          }
          auVar13._0_8_ = FUN_01db9a50();
          iVar7 = *(int *)(puVar3 + 3);
          FUN_00c8e340(auVar13._0_8_,1);
          *(int *)(puVar3[2] + (longlong)iVar7) = (int)auVar13._0_8_;
          iVar7 = *(int *)(puVar4 + 3);
          FUN_00c8e340();
          *(bool *)(puVar4[2] + (longlong)iVar7) = fVar9 != fVar10;
          if ((fVar9 != fVar10) || (NAN(fVar9) || NAN(fVar10))) {
            fVar9 = (float)FUN_01db9a50();
            local_68 = local_68 + fVar9;
          }
          else {
            fVar9 = (float)FUN_01db9a50();
            local_64 = local_64 + fVar9;
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          lVar5 = unaff_RDI[0x2c];
        } while (lVar8 < *(int *)(lVar5 + 0xc));
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar8 = 0;
          do {
            if (*(char *)(puVar4[2] + lVar8) != '\0') {
              lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
              if (lVar5 != 0) {
                FUN_00d50b00();
              }
              fVar9 = *(float *)(puVar3[2] + lVar8 * 4);
              fVar10 = (float)(**(code **)(*unaff_RDI + 0x960))();
              auVar13._0_8_ = (**(code **)(*unaff_RDI + 0x968))();
              auVar13._8_8_ = extraout_XMM0_Qb;
              auVar12 = ZEXT416((uint)(fVar9 * ((fVar1 - local_64) / local_68)));
              auVar12 = roundss(auVar12,auVar12,9);
              if (fVar10 <= auVar12._0_4_) {
                fVar10 = auVar12._0_4_;
              }
              if (fVar10 <= (float)auVar13._0_8_) {
                auVar12._4_12_ = auVar13._4_12_;
                auVar12._0_4_ = fVar10;
                auVar13._0_8_ = auVar12._0_8_;
              }
              FUN_01db96b0(auVar13._0_8_);
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
            }
            lVar8 = lVar8 + 1;
            lVar5 = unaff_RDI[0x2c];
          } while (lVar8 < *(int *)(lVar5 + 0xc));
        }
      }
      iVar7 = 0;
      do {
        fVar9 = (float)FUN_01dd38e0();
        if (fVar1 <= fVar9) break;
        lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        fVar9 = (float)FUN_01db9a50();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        fVar10 = (float)(**(code **)(*unaff_RDI + 0x968))();
        if (fVar9 < fVar10) {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01db96b0(fVar9 + DAT_02390124);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(unaff_RDI[0x2c] + 0xc) <= iVar7) {
          iVar7 = 0;
        }
        fVar9 = (float)FUN_01dd38e0();
        if (*(int *)(unaff_RDI[0x2c] + 0xc) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          iVar6 = 0;
          do {
            fVar11 = (float)(**(code **)(*unaff_RDI + 0x968))();
            fVar10 = fVar10 + fVar11;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(unaff_RDI[0x2c] + 0xc));
        }
      } while (fVar9 < fVar10);
      do {
        fVar9 = (float)FUN_01dd38e0();
        if (fVar9 <= fVar1) break;
        lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        fVar9 = (float)FUN_01db9a50();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        fVar10 = (float)(**(code **)(*unaff_RDI + 0x960))();
        if (fVar10 < fVar9) {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar7 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01db96b0(fVar9 + DAT_02390d00);
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        iVar7 = iVar7 + 1;
        if (*(int *)(unaff_RDI[0x2c] + 0xc) <= iVar7) {
          iVar7 = 0;
        }
        fVar9 = (float)FUN_01dd38e0();
        if (*(int *)(unaff_RDI[0x2c] + 0xc) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          iVar6 = 0;
          do {
            fVar11 = (float)(**(code **)(*unaff_RDI + 0x960))();
            fVar10 = fVar10 + fVar11;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(unaff_RDI[0x2c] + 0xc));
        }
      } while (fVar10 < fVar9);
      *(int *)(unaff_RDI + 0x50) = (int)unaff_RDI[0x50] + -1;
      (**(code **)(*unaff_RDI + 0xa20))();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01dca810 — 1258 bytes
// str: ""GNTableViewMouseEventHandler""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dca850) */
/* WARNING: Removing unreachable block (ram,0x01dca85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dca810(void)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar5;
  longlong lVar6;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d50f50();
  FUN_01dcafc0();
  if ((char)unaff_RDI[0x46] != '\0') {
    FUN_01ca6a90();
    lVar6 = DAT_027f29d0;
    if (DAT_027f29d0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cadf40();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = DAT_027f29d8;
  plVar3 = (longlong *)*unaff_RSI;
  if (DAT_027f29d8 != 0) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(*plVar3 + 0x598))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (iVar2 < 1) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    uVar5 = *(uint *)((longlong)local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (0 < (int)uVar5) {
      lVar6 = (ulonglong)uVar5 + 1;
      do {
        uVar5 = uVar5 - 1;
        (**(code **)(*unaff_RDI + 0x4a0))();
        plVar3 = *(longlong **)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar5 * 8);
        local_68 = plVar3;
        local_60 = '\0';
        if ((DAT_027f2b30 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_027f2a80 = FUN_0006d940();
          _DAT_027f2a68 = "GNTableViewMouseEventHandler";
          _DAT_027f2a70 = 0x138;
          _DAT_027f2a78 = FUN_01de67d0;
          _DAT_027f2a88 = 0;
          uRam00000000027f2a90 = 0;
          _DAT_027f2a98 = 0;
          uRam00000000027f2aa0 = 0;
          _DAT_027f2aa8 = 0;
          uRam00000000027f2ab0 = 0;
          _DAT_027f2ab8 = 0;
          uRam00000000027f2ac0 = 0;
          _DAT_027f2ac8 = 0;
          uRam00000000027f2ad0 = 0;
          _DAT_027f2ad8 = 0;
          uRam00000000027f2ae0 = 0;
          _DAT_027f2ae8 = 0;
          uRam00000000027f2af0 = 0;
          _DAT_027f2af8 = 0;
          uRam00000000027f2b00 = 0;
          _DAT_027f2b08 = 0;
          uRam00000000027f2b10 = 0;
          _DAT_027f2b18 = 0;
          uRam00000000027f2b20 = 0;
          _DAT_027f2b28 = 0;
          ___cxa_guard_release();
        }
        pplVar4 = (longlong **)&DAT_02802688;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar4 = &local_68;
          if (cVar1 == '\0') {
            pplVar4 = (longlong **)&DAT_02802688;
          }
        }
        plVar3 = *pplVar4;
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar4 + 1) = 0;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x478))();
          FUN_00d50b20();
        }
        lVar6 = lVar6 + -1;
      } while (1 < lVar6);
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar3 = (longlong)&DAT_026990a0;
    plVar3[2] = (longlong)&DAT_026999c8;
    FUN_00d500e0();
    lVar6 = unaff_RDI[0x53];
    unaff_RDI[0x53] = (longlong)plVar3;
    if (lVar6 != 0) {
      FUN_00d50b20();
      plVar3 = (longlong *)unaff_RDI[0x53];
    }
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4d0))();
    lVar6 = unaff_RDI[0x53];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x450))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (0 < *(int *)(unaff_RDI[7] + 0xc)) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01dcb110();
    plVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_60 = 0;
      local_68 = (longlong *)0x0;
      local_58 = plVar3;
      local_48 = 0;
      local_50 = 0;
      if (0 < *(int *)((longlong)plVar3 + 0xc)) {
        lVar6 = 0;
        do {
          local_68 = *(longlong **)(plVar3[2] + lVar6 * 8);
          if (local_68 != (longlong *)unaff_RDI[0x53]) {
            (**(code **)(*local_68 + 0x478))();
          }
          lVar6 = lVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)((longlong)plVar3 + 0xc));
      }
      FUN_000a9680();
      FUN_00d50b20();
    }
  }
  return;
}



