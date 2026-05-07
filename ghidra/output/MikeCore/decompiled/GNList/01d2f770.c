// Function: FUN_01d2f770
// Address: 01d2f770
// Size: 848 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2f9f6) */
/* WARNING: Removing unreachable block (ram,0x01d2fa03) */
/* WARNING: Removing unreachable block (ram,0x01d2f9a9) */
/* WARNING: Removing unreachable block (ram,0x01d2f9b2) */

void FUN_01d2f770(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong *local_90;
  char local_88;
  longlong local_50;
  char local_48;
  
  if (*(char *)(unaff_RDI + 0x9b) != '\0') {
    FUN_01d28610();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar6 = *(longlong *)(unaff_RDI + 0xa0);
      if (*(int *)(lVar6 + 0xc) < 1) {
        bVar2 = false;
        lVar5 = 0;
        bVar1 = false;
        lVar10 = 0;
      }
      else {
        lVar7 = 0;
        bVar1 = false;
        bVar2 = false;
        lVar8 = 0;
        lVar9 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar7 * 8);
          if (lVar9 == lVar6) {
            lVar10 = lVar9;
            bVar3 = bVar1;
            if ((!bVar1) && (lVar6 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar10 = lVar6;
            if ((bVar1) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar1 = bVar3;
          FUN_01d28610();
          (**(code **)(*local_90 + 0x420))();
          if (local_50 == lVar8) {
            lVar5 = lVar8;
            if ((!bVar2) && (local_50 != 0)) {
              if (local_48 == '\0') {
                FUN_00d50b00();
LAB_01d2f980:
                bVar11 = local_48 != '\0';
                goto joined_r0x01d2f984;
              }
              goto LAB_01d2f914;
            }
            bVar3 = bVar2;
            if (local_48 != '\0') {
LAB_01d2f98a:
              lVar5 = lVar8;
              bVar3 = bVar2;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar5 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar2) {
                if (lVar8 != 0) {
                  FUN_00d50b20();
                  lVar8 = local_50;
                  goto LAB_01d2f980;
                }
                bVar11 = false;
                lVar8 = local_50;
joined_r0x01d2f984:
                bVar2 = true;
                lVar5 = lVar8;
                bVar3 = bVar2;
                if (bVar11) goto LAB_01d2f98a;
              }
            }
            else {
              if ((bVar2) && (lVar8 != 0)) {
                FUN_00d50b20();
              }
LAB_01d2f914:
              local_48 = '\0';
              bVar3 = true;
            }
          }
          bVar2 = bVar3;
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d21140();
          }
          lVar7 = lVar7 + 1;
          lVar6 = *(longlong *)(unaff_RDI + 0xa0);
          lVar8 = lVar5;
          lVar9 = lVar10;
        } while (lVar7 < *(int *)(lVar6 + 0xc));
      }
      FUN_00d216c0();
      FUN_01d2a8f0();
      if ((bVar2) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (*(char *)(unaff_RDI + 0x9c) == '\0') {
    FUN_01d2b270();
  }
  else {
    FUN_01d2bdc0();
  }
  return;
}


