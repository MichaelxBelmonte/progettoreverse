// Function: FUN_0196b4b0
// Address: 0196b4b0
// Size: 882 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0196b769) */
/* WARNING: Removing unreachable block (ram,0x0196b772) */
/* WARNING: Removing unreachable block (ram,0x0196b79d) */
/* WARNING: Removing unreachable block (ram,0x0196b7aa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0196b4b0(void)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  longlong *local_60;
  char local_58;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x1a0) + 0xc);
  if ((int)uVar1 < 1) {
    bVar4 = false;
    plVar8 = (longlong *)0x0;
    bVar3 = false;
    lVar10 = 0;
  }
  else {
    iVar7 = FUN_01d48b30();
    if (iVar7 != 1) {
      FUN_01d48b10();
    }
    uVar11 = 0;
    bVar3 = false;
    plVar8 = (longlong *)0x0;
    bVar4 = false;
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + 0x10) + uVar11 * 8);
      if (lVar9 == lVar2) {
        lVar10 = lVar9;
        bVar5 = bVar3;
        if ((!bVar3) && (lVar2 != 0)) {
          FUN_00d50b00();
          bVar5 = true;
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        lVar10 = lVar2;
        if ((bVar3) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar5;
      cVar6 = FUN_01968c50();
      if (cVar6 != '\0') {
        FUN_01d48b40();
        FUN_0196a1c0();
        if (local_60 == plVar8) {
          if ((bVar4) || (local_60 == (longlong *)0x0)) {
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_58 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((!bVar4) || (plVar8 == (longlong *)0x0)) goto LAB_0196b66b;
          FUN_00d50b20();
          plVar8 = local_60;
          bVar4 = true;
        }
        else if ((bVar4) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar8 = local_60;
          bVar4 = true;
        }
        else {
LAB_0196b66b:
          plVar8 = local_60;
          bVar4 = true;
        }
        FUN_01989f80();
        fVar12 = (float)(**(code **)(&UNK_00001418 + *local_60))();
        fVar12 = DAT_02390124 - fVar12;
        if ((*(float *)((longlong)plVar8 + 0x1c) != fVar12) ||
           (NAN(*(float *)((longlong)plVar8 + 0x1c)) || NAN(fVar12))) {
          if (0.0 <= fVar12) {
            if (fVar12 <= DAT_02390124) {
              *(float *)((longlong)plVar8 + 0x1c) = fVar12;
              fVar12 = fVar12 * DAT_02394220;
            }
            else {
              *(undefined4 *)((longlong)plVar8 + 0x1c) = 0x3f800000;
              fVar12 = DAT_02394220;
            }
          }
          else {
            *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
            fVar12 = 0.0;
          }
          auVar13 = ZEXT416((uint)fVar12 & _DAT_023945e0) | _DAT_023945f0;
          auVar13._0_4_ = auVar13._0_4_ + fVar12;
          auVar13 = roundss(auVar13,auVar13,0xb);
          *(char *)((longlong)plVar8 + 0xf) = (char)(longlong)auVar13._0_4_;
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d488d0();
        (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar10;
    } while (uVar1 != uVar11);
    if (iVar7 != 1) {
      FUN_01d48b10();
    }
  }
  FUN_01d48b40();
  if ((bVar4) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}


