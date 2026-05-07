// Function: FUN_0196b9b0
// Address: 0196b9b0
// Size: 1359 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0196bc82) */
/* WARNING: Removing unreachable block (ram,0x0196bc8e) */
/* WARNING: Removing unreachable block (ram,0x0196bcc5) */
/* WARNING: Removing unreachable block (ram,0x0196bcd1) */
/* WARNING: Removing unreachable block (ram,0x0196be9f) */
/* WARNING: Removing unreachable block (ram,0x0196bea8) */
/* WARNING: Removing unreachable block (ram,0x0196bed7) */
/* WARNING: Removing unreachable block (ram,0x0196bee4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196b9b0(void)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong *local_58;
  char local_50;
  longlong local_40;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x1a0) + 0xc);
  if (0 < (int)uVar1) {
    iVar8 = FUN_01d48b30();
    if (iVar8 != 1) {
      FUN_01d48b10();
    }
    uVar10 = 0;
    local_40 = 0;
    bVar3 = false;
    plVar9 = (longlong *)0x0;
    bVar4 = false;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + 0x10) + uVar10 * 8);
      if (local_40 == lVar2) {
        lVar5 = local_40;
        bVar6 = bVar3;
        if ((!bVar3) && (lVar2 != 0)) {
          FUN_00d50b00();
          bVar6 = true;
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        lVar5 = lVar2;
        if ((bVar3) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar6;
      local_40 = lVar5;
      cVar7 = FUN_01968c50();
      if (cVar7 == '\0') {
        FUN_01d48b40();
        FUN_0196a1c0();
        if (local_58 == plVar9) {
          if ((bVar4) || (local_58 == (longlong *)0x0)) {
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((!bVar4) || (plVar9 == (longlong *)0x0)) goto LAB_0196bb7f;
          FUN_00d50b20();
          plVar9 = local_58;
          bVar4 = true;
        }
        else if ((bVar4) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = local_58;
          bVar4 = true;
        }
        else {
LAB_0196bb7f:
          plVar9 = local_58;
          bVar4 = true;
        }
        FUN_01989f80();
        fVar11 = (float)(**(code **)(&UNK_00001418 + *local_58))();
        fVar11 = DAT_02390124 - fVar11;
        if ((*(float *)((longlong)plVar9 + 0x1c) != fVar11) ||
           (NAN(*(float *)((longlong)plVar9 + 0x1c)) || NAN(fVar11))) {
          if (0.0 <= fVar11) {
            if (fVar11 <= DAT_02390124) {
              *(float *)((longlong)plVar9 + 0x1c) = fVar11;
              fVar11 = fVar11 * DAT_02394220;
            }
            else {
              *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x3f800000;
              fVar11 = DAT_02394220;
            }
          }
          else {
            *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
            fVar11 = 0.0;
          }
          auVar12 = ZEXT416((uint)fVar11 & _DAT_023945e0) | _DAT_023945f0;
          auVar12._0_4_ = auVar12._0_4_ + fVar11;
          auVar12 = roundss(auVar12,auVar12,0xb);
          *(char *)((longlong)plVar9 + 0xf) = (char)(longlong)auVar12._0_4_;
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d488d0();
        (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      }
      FUN_01d48b40();
      FUN_01969e40();
      if (local_58 == plVar9) {
        if ((bVar4) || (local_58 == (longlong *)0x0)) {
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar4 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar4) || (plVar9 == (longlong *)0x0)) goto LAB_0196bda0;
        FUN_00d50b20();
        plVar9 = local_58;
        bVar4 = true;
      }
      else if ((bVar4) && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar9 = local_58;
        bVar4 = true;
      }
      else {
LAB_0196bda0:
        plVar9 = local_58;
        bVar4 = true;
      }
      FUN_01989f80();
      fVar11 = (float)(**(code **)(&UNK_00001418 + *local_58))();
      fVar11 = DAT_02390124 - fVar11;
      if ((*(float *)((longlong)plVar9 + 0x1c) != fVar11) ||
         (NAN(*(float *)((longlong)plVar9 + 0x1c)) || NAN(fVar11))) {
        if (0.0 <= fVar11) {
          if (fVar11 <= DAT_02390124) {
            *(float *)((longlong)plVar9 + 0x1c) = fVar11;
            fVar11 = fVar11 * DAT_02394220;
          }
          else {
            *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x3f800000;
            fVar11 = DAT_02394220;
          }
        }
        else {
          *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
          fVar11 = 0.0;
        }
        auVar12 = ZEXT416((uint)fVar11 & _DAT_023945e0) | _DAT_023945f0;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._0_4_ + fVar11;
        auVar12 = roundss(auVar13,auVar13,0xb);
        *(char *)((longlong)plVar9 + 0xf) = (char)(longlong)auVar12._0_4_;
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
    if (iVar8 != 1) {
      FUN_01d48b10();
    }
    if (bVar4) {
      FUN_00d50b20();
    }
    if ((bVar3) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


