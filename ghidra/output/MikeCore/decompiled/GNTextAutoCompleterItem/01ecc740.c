// Function: FUN_01ecc740
// Address: 01ecc740
// Size: 790 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ecc946) */
/* WARNING: Removing unreachable block (ram,0x01ecc94f) */
/* WARNING: Removing unreachable block (ram,0x01ecc97b) */
/* WARNING: Removing unreachable block (ram,0x01ecc988) */
/* WARNING: Removing unreachable block (ram,0x01ecc868) */
/* WARNING: Removing unreachable block (ram,0x01ecc874) */
/* WARNING: Removing unreachable block (ram,0x01ecca21) */
/* WARNING: Removing unreachable block (ram,0x01ecca2e) */
/* WARNING: Removing unreachable block (ram,0x01ecc8fb) */
/* WARNING: Removing unreachable block (ram,0x01ecc908) */

undefined8 * FUN_01ecc740(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        (**(code **)(*plVar2 + 0x88))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_40 != (longlong *)0x0) {
          if (param_3 == '\0') {
            cVar3 = FUN_00d90870();
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          else {
            FUN_00d99300();
            FUN_00d99300();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            cVar3 = FUN_00d90870();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 != '\0') {
              local_38 = '\0';
              FUN_00d21140();
              local_40 = plVar2;
            }
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01ed1330();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


