// Function: FUN_00ce7c30
// Address: 00ce7c30
// Size: 727 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce7e95) */
/* WARNING: Removing unreachable block (ram,0x00ce7e9e) */
/* WARNING: Removing unreachable block (ram,0x00ce7dff) */
/* WARNING: Removing unreachable block (ram,0x00ce7e0c) */
/* WARNING: Removing unreachable block (ram,0x00ce7cd9) */
/* WARNING: Removing unreachable block (ram,0x00ce7ce5) */
/* WARNING: Removing unreachable block (ram,0x00ce7ece) */
/* WARNING: Removing unreachable block (ram,0x00ce7edb) */

undefined8 * FUN_00ce7c30(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong local_a0;
  char local_98;
  longlong *local_68;
  char local_60;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  cVar3 = (**(code **)(*unaff_RSI + 0x3a0))();
  if (cVar3 != '\0') {
    (**(code **)(*unaff_RSI + 1000))();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_00ce7f00;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_00ce7f00;
    if (0 < *(int *)(local_a0 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_a0 + 0x10) + lVar5 * 8);
        plVar2 = (longlong *)*param_2;
        (**(code **)(*plVar1 + 0x370))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x3a0))();
          if (cVar3 != '\0') {
            (**(code **)(*plVar1 + 0x458))();
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = local_68;
            local_38 = '\0';
            FUN_00d214d0();
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_38 = '\0';
          FUN_00d21140();
          local_40 = plVar1;
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(local_a0 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
LAB_00ce7f00:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


