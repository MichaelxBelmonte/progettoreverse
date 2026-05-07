// Function: FUN_00df1bf0
// Address: 00df1bf0
// Size: 899 bytes
// Class: GNFileType
// String references:
//   "GNFileType"


/* WARNING: Removing unreachable block (ram,0x00df1d95) */
/* WARNING: Removing unreachable block (ram,0x00df1d9e) */
/* WARNING: Removing unreachable block (ram,0x00df1d12) */
/* WARNING: Removing unreachable block (ram,0x00df1d1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00df1bf0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong *local_58;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar7 = *unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = lVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      return unaff_RDI;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar10 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar10 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar1;
        if ((DAT_027782e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          _DAT_026d19f8 = FUN_00d4fe50();
          DAT_026d19e0 = "GNFileType";
          _DAT_026d19e8 = 0x48;
          _DAT_026d19f0 = FUN_00042280;
          _DAT_026d1a00 = 0;
          uRam00000000026d1a08 = 0;
          _DAT_026d1a10 = 0;
          uRam00000000026d1a18 = 0;
          _DAT_026d1a20 = 0;
          uRam00000000026d1a28 = 0;
          _DAT_026d1a30 = 0;
          uRam00000000026d1a38 = 0;
          _DAT_026d1a40 = 0;
          uRam00000000026d1a48 = 0;
          _DAT_026d1a50 = 0;
          uRam00000000026d1a58 = 0;
          _DAT_026d1a60 = 0;
          uRam00000000026d1a68 = 0;
          _DAT_026d1a70 = 0;
          uRam00000000026d1a78 = 0;
          _DAT_026d1a80 = 0;
          uRam00000000026d1a88 = 0;
          _DAT_026d1a90 = 0;
          uRam00000000026d1a98 = 0;
          _DAT_026d1aa0 = 0;
          ___cxa_guard_release();
        }
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_58;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar1 = local_58;
        if (*pplVar8 == (longlong *)0x0) {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          cVar5 = FUN_00d8f250();
          if (cVar5 != '\0') {
            FUN_00d8f1a0();
            if (plVar1 == (longlong *)0x0) {
              return unaff_RDI;
            }
            FUN_00d50b20();
            bVar4 = false;
            goto LAB_00df1e30;
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
            goto LAB_00df1e25;
          }
          bVar3 = true;
        }
        else {
          lVar7 = local_58[5];
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if (0 < *(int *)(lVar7 + 0xc)) {
            lVar9 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              cVar5 = FUN_00d8f250();
              if (cVar5 != '\0') {
                FUN_00d8f1a0();
                if (lVar2 != 0) {
                  FUN_00d50b20();
                }
                bVar4 = false;
                break;
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(lVar7 + 0xc));
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (bVar4) {
LAB_00df1e25:
            bVar4 = true;
            bVar3 = true;
          }
          else {
            bVar4 = false;
            bVar3 = false;
          }
          if (plVar1 != (longlong *)0x0) {
LAB_00df1e30:
            bVar3 = bVar4;
            FUN_00d50b20();
          }
        }
        if (!bVar3) {
          return unaff_RDI;
        }
        lVar10 = lVar10 + 1;
        lVar7 = *param_2;
      } while (lVar10 < *(int *)(lVar7 + 0xc));
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar7 = *unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = lVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      return unaff_RDI;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


