// Function: FUN_00364bb0
// Address: 00364bb0
// Size: 570 bytes
// Class: MDQuantizeController


/* WARNING: Removing unreachable block (ram,0x00364d93) */
/* WARNING: Removing unreachable block (ram,0x00364d9c) */
/* WARNING: Removing unreachable block (ram,0x00364cad) */
/* WARNING: Removing unreachable block (ram,0x00364cb6) */

longlong * FUN_00364bb0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_40;
  char local_38;
  
  lVar6 = unaff_RSI[0xe];
  if (*(int *)(lVar6 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00364c71:
    FUN_00d50b00();
  }
  else {
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar5 = 0;
LAB_00364bf0:
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*unaff_RSI + 0x5c0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto code_r0x00364c3a;
      FUN_0025e9a0();
      if (local_40 == 0) {
        bVar2 = true;
        lVar5 = unaff_RSI[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        bVar2 = false;
        lVar5 = unaff_RSI[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = local_40;
      }
      if (0 < iVar1) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*unaff_RSI + 0x5c0))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            lVar5 = *(longlong *)(*(longlong *)(unaff_RSI[0xe] + 0x10) + lVar4 * 8);
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
          lVar5 = unaff_RSI[0xe];
        } while (lVar4 < *(int *)(lVar5 + 0xc));
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar2) goto LAB_00364dd7;
      if (lVar6 != 0) goto LAB_00364c71;
      goto LAB_00364cd7;
    }
LAB_00364c4f:
    if (lVar6 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00364cd7:
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
  }
LAB_00364dd7:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
code_r0x00364c3a:
  lVar5 = lVar5 + 1;
  lVar6 = unaff_RSI[0xe];
  if (*(int *)(lVar6 + 0xc) <= lVar5) goto LAB_00364c4f;
  goto LAB_00364bf0;
}


