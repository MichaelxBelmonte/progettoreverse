// Function: FUN_01d5eb20
// Address: 01d5eb20
// Size: 784 bytes
// Class: GNMultipleValue


/* WARNING: Type propagation algorithm not settling */

longlong * FUN_01d5eb20(int param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_a0;
  undefined1 local_98;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  
  if (*param_2 != 0) {
    lVar6 = *(longlong *)(unaff_RSI + 0x18);
    uVar7 = *(uint *)(lVar6 + 0xc);
    uVar9 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      lVar8 = 0;
      bVar2 = false;
      do {
        uVar7 = uVar7 - 1;
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar7 * 8);
        if (lVar8 == lVar6) {
          lVar6 = lVar8;
          bVar3 = bVar2;
          if ((!bVar2) && (lVar8 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar5 = FUN_01d654a0();
        if (iVar5 == param_1) {
          plVar1 = (longlong *)*param_2;
          FUN_01d65460();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if ((!bVar3) && (lVar6 != 0)) {
              FUN_00d50b00();
            }
            goto LAB_01d5ee26;
          }
        }
        cVar4 = FUN_01d64c70();
        lVar8 = lVar6;
        bVar2 = bVar3;
        if (cVar4 != '\0') {
          FUN_01d64cb0();
          local_a0 = *param_2;
          local_98 = 0;
          FUN_01d5eb20(param_1,&local_a0);
          if (local_48 == lVar6) {
            if ((bVar3) || (local_48 == 0)) {
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if ((!bVar3) || (lVar6 == 0)) goto LAB_01d5ed5f;
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else if ((bVar3) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else {
LAB_01d5ed5f:
            lVar6 = local_48;
            bVar3 = true;
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (!bVar3) {
              FUN_00d50b00();
            }
LAB_01d5ee26:
            *unaff_RDI = lVar6;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return unaff_RDI;
          }
          lVar8 = 0;
          bVar2 = bVar3;
        }
        if ((longlong)uVar9 < 2) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          if (!bVar2) {
            return unaff_RDI;
          }
          if (lVar8 == 0) {
            return unaff_RDI;
          }
          FUN_00d50b20();
          return unaff_RDI;
        }
        uVar9 = uVar9 - 1;
        lVar6 = *(longlong *)(unaff_RSI + 0x18);
      } while( true );
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


