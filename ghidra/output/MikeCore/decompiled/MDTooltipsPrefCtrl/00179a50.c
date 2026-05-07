// Function: FUN_00179a50
// Address: 00179a50
// Size: 515 bytes
// Class: MDTooltipsPrefCtrl


/* WARNING: Removing unreachable block (ram,0x00179b16) */
/* WARNING: Removing unreachable block (ram,0x00179b20) */
/* WARNING: Removing unreachable block (ram,0x00179b40) */
/* WARNING: Removing unreachable block (ram,0x00179b22) */
/* WARNING: Removing unreachable block (ram,0x00179b42) */

undefined8 FUN_00179a50(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_68;
  longlong local_50;
  char local_48;
  
  if ((*(longlong *)(unaff_RDI + 0xa8) == 0) || (lVar1 = *unaff_RSI, *(int *)(lVar1 + 0xc) == 0)) {
LAB_00179c4e:
    uVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar9 * 8);
        lVar3 = *(longlong *)(unaff_RDI + 0xa8);
        if (lVar3 == 0) {
LAB_00179c42:
          FUN_00115910();
          goto LAB_00179c4e;
        }
        local_68 = -1;
        do {
          lVar6 = (longlong)local_68;
          local_68 = local_68 + 1;
          if (*(int *)(lVar3 + 0xc) <= local_68) {
            FUN_00136a40();
            goto LAB_00179c42;
          }
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8 + lVar6 * 8);
          (**(code **)(*plVar2 + 0x370))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar5 = (**(code **)(*plVar4 + 0x50))();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar5 == '\0');
        FUN_00136a40();
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115910();
    uVar7 = 1;
  }
  return uVar7;
}


