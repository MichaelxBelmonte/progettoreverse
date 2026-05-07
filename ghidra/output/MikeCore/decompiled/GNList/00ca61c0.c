// Function: FUN_00ca61c0
// Address: 00ca61c0
// Size: 666 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00ca6234) */
/* WARNING: Removing unreachable block (ram,0x00ca623d) */
/* WARNING: Removing unreachable block (ram,0x00ca6447) */
/* WARNING: Removing unreachable block (ram,0x00ca6450) */

longlong * FUN_00ca61c0(undefined8 param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  short *psVar13;
  short *local_58;
  longlong local_48;
  char local_40;
  undefined4 *local_38;
  
  lVar7 = FUN_00d8d520();
  iVar4 = FUN_00d8c7a0();
  if ((*unaff_RSI == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    FUN_00d8ede0();
  }
  else {
    FUN_00c8e690();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    psVar13 = *(short **)(local_48 + 0x10);
    local_58 = psVar13;
    if (0 < iVar4) {
      lVar12 = 0;
      puVar10 = (undefined4 *)0x0;
      local_38 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      iVar5 = iVar4;
      do {
        lVar3 = DAT_02773338;
        lVar2 = DAT_02773330;
        lVar11 = DAT_02773328;
        sVar1 = *(short *)(lVar7 + lVar12 * 2);
        if (sVar1 == 10) {
          puVar8 = local_38;
          if (local_38 == (undefined4 *)0x0) {
            if (DAT_02773338 != 0) {
              FUN_00d50b00();
            }
            local_38 = (undefined4 *)FUN_00d8d520();
            puVar8 = local_38;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
LAB_00ca6367:
          uVar6 = *puVar8;
LAB_00ca63ac:
          *(undefined4 *)psVar13 = uVar6;
          psVar13 = psVar13 + 2;
        }
        else {
          if (sVar1 == 0x22) {
            if (puVar9 == (undefined4 *)0x0) {
              if (DAT_02773330 != 0) {
                FUN_00d50b00();
              }
              puVar9 = (undefined4 *)FUN_00d8d520();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
            uVar6 = *puVar9;
            goto LAB_00ca63ac;
          }
          if (sVar1 == 0x5c) {
            puVar8 = puVar10;
            if (puVar10 == (undefined4 *)0x0) {
              if (DAT_02773328 != 0) {
                FUN_00d50b00();
              }
              puVar8 = (undefined4 *)FUN_00d8d520();
              puVar10 = puVar8;
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_00ca6367;
          }
          *psVar13 = sVar1;
          psVar13 = psVar13 + 1;
        }
        lVar11 = (longlong)psVar13 - (longlong)local_58 >> 1;
        if (iVar5 <= lVar11) {
          FUN_00c8e340(param_1,0);
          iVar5 = iVar5 * 2;
          local_58 = *(short **)(local_48 + 0x10);
          psVar13 = local_58 + lVar11;
        }
        lVar12 = lVar12 + 1;
      } while (iVar4 != (int)lVar12);
    }
    FUN_00d920f0(param_1,(ulonglong)((longlong)psVar13 - (longlong)local_58) >> 1 & 0xffffffff);
    if (local_48 != 0) {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


